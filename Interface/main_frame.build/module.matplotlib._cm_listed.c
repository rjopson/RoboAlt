/* Generated code for Python module 'matplotlib._cm_listed'
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

/* The "_module_matplotlib$_cm_listed" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_matplotlib$_cm_listed;
PyDictObject *moduledict_matplotlib$_cm_listed;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_inferno;
extern PyObject *const_str_plain_data;
static PyObject *const_tuple_str_plain_ListedColormap_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_list_896995a460281629bb2d527484ee1e9d_list;
static PyObject *const_str_digest_4b51618aea4303b1695a442cc6d99bae;
extern PyObject *const_str_plain_magma;
extern PyObject *const_str_plain_colors;
static PyObject *const_str_plain__plasma_data;
static PyObject *const_str_plain__twilight_data;
static PyObject *const_str_plain__inferno_data;
static PyObject *const_str_plain_cividis;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_570a448834914a6754450b29fe04d39d;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__magma_data;
extern PyObject *const_str_digest_ac89a3a528cc0403d24cd72310660f1e;
static PyObject *const_str_plain__viridis_data;
static PyObject *const_str_plain__twilight_shifted_data;
extern PyObject *const_str_plain_plasma;
static PyObject *const_list_fb868e0316c23ea1784292a6b129ccb2_list;
static PyObject *const_list_c5b08d5281b975ce752bf16f09ba33bc_list;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain__r;
extern PyObject *const_str_plain_cmaps;
static PyObject *const_str_plain__cividis_data;
extern PyObject *const_str_plain_ListedColormap;
extern PyObject *const_tuple_empty;
static PyObject *const_list_f600b24b908b0f2b34d3f643f6759a57_list;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_viridis;
static PyObject *const_str_plain_twilight_shifted;
extern PyObject *const_str_plain_reversed;
static PyObject *const_list_a5487534486a65a208b932edeadefb44_list;
extern PyObject *const_str_plain_name;
static PyObject *const_list_7c859dff64fdd9412c1ac9267a5909ee_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_reverse;
static PyObject *const_str_plain_twilight;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_ListedColormap_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ListedColormap_tuple, 0, const_str_plain_ListedColormap ); Py_INCREF( const_str_plain_ListedColormap );
    const_list_896995a460281629bb2d527484ee1e9d_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 789721 ], 8197 );
    const_str_digest_4b51618aea4303b1695a442cc6d99bae = UNSTREAM_STRING_ASCII( &constant_bin[ 797918 ], 24, 0 );
    const_str_plain__plasma_data = UNSTREAM_STRING_ASCII( &constant_bin[ 797942 ], 12, 1 );
    const_str_plain__twilight_data = UNSTREAM_STRING_ASCII( &constant_bin[ 797954 ], 14, 1 );
    const_str_plain__inferno_data = UNSTREAM_STRING_ASCII( &constant_bin[ 797968 ], 13, 1 );
    const_str_plain_cividis = UNSTREAM_STRING_ASCII( &constant_bin[ 797981 ], 7, 1 );
    const_str_digest_570a448834914a6754450b29fe04d39d = UNSTREAM_STRING_ASCII( &constant_bin[ 797988 ], 30, 0 );
    const_str_plain__magma_data = UNSTREAM_STRING_ASCII( &constant_bin[ 798018 ], 11, 1 );
    const_str_plain__viridis_data = UNSTREAM_STRING_ASCII( &constant_bin[ 798029 ], 13, 1 );
    const_str_plain__twilight_shifted_data = UNSTREAM_STRING_ASCII( &constant_bin[ 798042 ], 22, 1 );
    const_list_fb868e0316c23ea1784292a6b129ccb2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 798064 ], 16325 );
    const_list_c5b08d5281b975ce752bf16f09ba33bc_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 814389 ], 8197 );
    const_str_plain__cividis_data = UNSTREAM_STRING_ASCII( &constant_bin[ 822586 ], 13, 1 );
    const_list_f600b24b908b0f2b34d3f643f6759a57_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 822599 ], 8197 );
    const_str_plain_twilight_shifted = UNSTREAM_STRING_ASCII( &constant_bin[ 798043 ], 16, 1 );
    const_list_a5487534486a65a208b932edeadefb44_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 830796 ], 8197 );
    const_list_7c859dff64fdd9412c1ac9267a5909ee_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 838993 ], 8197 );
    const_str_plain_twilight = UNSTREAM_STRING_ASCII( &constant_bin[ 797955 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_matplotlib$_cm_listed( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_dc50754676a2d567e01bb0378a12c83e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_4b51618aea4303b1695a442cc6d99bae );
    codeobj_dc50754676a2d567e01bb0378a12c83e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_570a448834914a6754450b29fe04d39d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_matplotlib$_cm_listed =
{
    PyModuleDef_HEAD_INIT,
    "matplotlib._cm_listed",
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

MOD_INIT_DECL( matplotlib$_cm_listed )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_matplotlib$_cm_listed );
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
    puts("matplotlib._cm_listed: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib._cm_listed: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib._cm_listed: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmatplotlib$_cm_listed" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_matplotlib$_cm_listed = Py_InitModule4(
        "matplotlib._cm_listed",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_matplotlib$_cm_listed = PyModule_Create( &mdef_matplotlib$_cm_listed );
#endif

    moduledict_matplotlib$_cm_listed = MODULE_DICT( module_matplotlib$_cm_listed );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_matplotlib$_cm_listed,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_matplotlib$_cm_listed,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_cm_listed,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_cm_listed,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_matplotlib$_cm_listed );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ac89a3a528cc0403d24cd72310660f1e, module_matplotlib$_cm_listed );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_dc50754676a2d567e01bb0378a12c83e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_dc50754676a2d567e01bb0378a12c83e = MAKE_MODULE_FRAME( codeobj_dc50754676a2d567e01bb0378a12c83e, module_matplotlib$_cm_listed );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_dc50754676a2d567e01bb0378a12c83e );
    assert( Py_REFCNT( frame_dc50754676a2d567e01bb0378a12c83e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_colors;
        tmp_globals_name_1 = (PyObject *)moduledict_matplotlib$_cm_listed;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_ListedColormap_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_dc50754676a2d567e01bb0378a12c83e->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_matplotlib$_cm_listed,
                const_str_plain_ListedColormap,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ListedColormap );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_ListedColormap, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = DEEP_COPY( const_list_896995a460281629bb2d527484ee1e9d_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__magma_data, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DEEP_COPY( const_list_7c859dff64fdd9412c1ac9267a5909ee_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__inferno_data, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = DEEP_COPY( const_list_c5b08d5281b975ce752bf16f09ba33bc_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__plasma_data, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = DEEP_COPY( const_list_f600b24b908b0f2b34d3f643f6759a57_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__viridis_data, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = DEEP_COPY( const_list_a5487534486a65a208b932edeadefb44_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__cividis_data, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = DEEP_COPY( const_list_fb868e0316c23ea1784292a6b129ccb2_list );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_right_name_3;
        PyObject *tmp_step_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_data );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_subscribed_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_data );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_len_arg_1 = tmp_mvar_value_4;
        tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
        assert( !(tmp_left_name_2 == NULL) );
        tmp_right_name_1 = const_int_pos_2;
        tmp_start_name_1 = BINARY_OPERATION_FLOORDIV_LONG_LONG( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_start_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1800;

            goto frame_exception_exit_1;
        }
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_start_name_1 );
        assert( !(tmp_subscript_name_1 == NULL) );
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1800;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_data );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_twilight_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_5;
        tmp_start_name_2 = Py_None;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_data );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_twilight_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = tmp_mvar_value_6;
        tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_2;
        tmp_stop_name_2 = BINARY_OPERATION_FLOORDIV_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 1801;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1800;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_shifted_data, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_shifted_data );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_shifted_data );
        }

        CHECK_OBJECT( tmp_mvar_value_7 );
        tmp_called_instance_1 = tmp_mvar_value_7;
        frame_dc50754676a2d567e01bb0378a12c83e->m_frame.f_lineno = 1802;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1802;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_cmaps, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_14;
        tmp_tuple_element_2 = const_str_plain_magma;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__magma_data );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__magma_data );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_magma_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1805;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_iter_arg_1 = PyTuple_New( 7 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_3 = const_str_plain_inferno;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_3 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__inferno_data );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__inferno_data );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_inferno_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1806;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_9;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_4 = const_str_plain_plasma;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_4 );
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__plasma_data );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__plasma_data );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_plasma_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1807;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_10;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_5 = const_str_plain_viridis;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_5 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__viridis_data );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__viridis_data );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_viridis_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1808;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = tmp_mvar_value_11;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_6 = const_str_plain_cividis;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_6 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__cividis_data );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cividis_data );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_cividis_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1809;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = tmp_mvar_value_12;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_7 = const_str_plain_twilight;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_7 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_data );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_data );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_twilight_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1810;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_7 = tmp_mvar_value_13;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 5, tmp_tuple_element_1 );
        tmp_tuple_element_8 = const_str_plain_twilight_shifted;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_8 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain__twilight_shifted_data );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__twilight_shifted_data );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_iter_arg_1 );
            Py_DECREF( tmp_tuple_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_twilight_shifted_data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1811;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_8 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 6, tmp_tuple_element_1 );
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1805;

            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 1805;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1805;

            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }



            exception_lineno = 1805;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }



            exception_lineno = 1805;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1805;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1805;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_18 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_data, tmp_assign_source_19 );
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_ListedColormap );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ListedColormap );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ListedColormap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1813;

            goto try_except_handler_1;
        }

        tmp_called_name_1 = tmp_mvar_value_15;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_data );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_data );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1813;

            goto try_except_handler_1;
        }

        tmp_tuple_element_9 = tmp_mvar_value_16;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_9 );
        tmp_dict_key_1 = const_str_plain_name;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1813;

            goto try_except_handler_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_17;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_dc50754676a2d567e01bb0378a12c83e->m_frame.f_lineno = 1813;
        tmp_ass_subvalue_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1813;

            goto try_except_handler_1;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_cmaps );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmaps );
        }

        if ( tmp_mvar_value_18 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmaps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1813;

            goto try_except_handler_1;
        }

        tmp_ass_subscribed_1 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1813;

            goto try_except_handler_1;
        }

        tmp_ass_subscript_1 = tmp_mvar_value_19;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1813;

            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_4;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1815;

            goto try_except_handler_1;
        }

        tmp_left_name_4 = tmp_mvar_value_20;
        tmp_right_name_4 = const_str_plain__r;
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1815;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_ListedColormap );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ListedColormap );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ListedColormap" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1816;

            goto try_except_handler_1;
        }

        tmp_called_name_2 = tmp_mvar_value_21;
        tmp_called_name_3 = (PyObject *)&PyReversed_Type;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_data );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_data );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "data" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1816;

            goto try_except_handler_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_22;
        frame_dc50754676a2d567e01bb0378a12c83e->m_frame.f_lineno = 1816;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1816;

            goto try_except_handler_1;
        }
        tmp_tuple_element_10 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_tuple_element_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1816;

            goto try_except_handler_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_10 );
        tmp_dict_key_2 = const_str_plain_name;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        CHECK_OBJECT( tmp_mvar_value_23 );
        tmp_dict_value_2 = tmp_mvar_value_23;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_dc50754676a2d567e01bb0378a12c83e->m_frame.f_lineno = 1816;
        tmp_ass_subvalue_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1816;

            goto try_except_handler_1;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_cmaps );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cmaps );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cmaps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1816;

            goto try_except_handler_1;
        }

        tmp_ass_subscribed_2 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1816;

            goto try_except_handler_1;
        }

        tmp_ass_subscript_2 = tmp_mvar_value_25;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1816;

            goto try_except_handler_1;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1805;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc50754676a2d567e01bb0378a12c83e );
#endif
    popFrameStack();

    assertFrameObject( frame_dc50754676a2d567e01bb0378a12c83e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dc50754676a2d567e01bb0378a12c83e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dc50754676a2d567e01bb0378a12c83e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dc50754676a2d567e01bb0378a12c83e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dc50754676a2d567e01bb0378a12c83e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_matplotlib$_cm_listed, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_matplotlib$_cm_listed );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
