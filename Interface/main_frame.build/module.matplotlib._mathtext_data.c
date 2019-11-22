/* Generated code for Python module 'matplotlib._mathtext_data'
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

/* The "_module_matplotlib$_mathtext_data" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_matplotlib$_mathtext_data;
PyDictObject *moduledict_matplotlib$_mathtext_data;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_angle_dictcontraction;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_e337a7ce535d78e885a81d451146e36c;
static PyObject *const_dict_29e47c52944897b8f41f93d70cbb543c;
extern PyObject *const_str_plain_k;
static PyObject *const_str_digest_037529e49e7a8948c1e349cb92c5c48f;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_f2a1bc12590288b7380a639f3508ea40;
extern PyObject *const_str_plain_latex_to_cmex;
extern PyObject *const_str_plain_uni2type1;
extern PyObject *const_str_digest_70180f1a5cba6f0cc818868b056967dd;
extern PyObject *const_str_plain_stix_virtual_fonts;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_k_str_plain_v_tuple;
static PyObject *const_dict_9c8ba5855ebd63f930a91fbeaca4f683;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_latex_to_bakoma;
extern PyObject *const_str_plain_has_location;
static PyObject *const_dict_f026a87ae3a85a06e26119b5d1ab0033;
static PyObject *const_dict_80c23418c52893690d179b9ebce861b3;
static PyObject *const_str_digest_1f5aa14dd69942b2d8b6427600671d5d;
static PyObject *const_dict_3db537246086620d4696586d07b25b46;
static PyObject *const_str_plain_type12uni;
extern PyObject *const_str_plain_tex2uni;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_latex_to_standard;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e337a7ce535d78e885a81d451146e36c = UNSTREAM_STRING_ASCII( &constant_bin[ 879316 ], 28, 0 );
    const_dict_29e47c52944897b8f41f93d70cbb543c = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 879344 ], 3446 );
    const_str_digest_037529e49e7a8948c1e349cb92c5c48f = UNSTREAM_STRING_ASCII( &constant_bin[ 882790 ], 61, 0 );
    const_dict_f2a1bc12590288b7380a639f3508ea40 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 882851 ], 302 );
    const_dict_9c8ba5855ebd63f930a91fbeaca4f683 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 883153 ], 8262 );
    const_dict_f026a87ae3a85a06e26119b5d1ab0033 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 891415 ], 5268 );
    const_dict_80c23418c52893690d179b9ebce861b3 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 896683 ], 3156 );
    const_str_digest_1f5aa14dd69942b2d8b6427600671d5d = UNSTREAM_STRING_ASCII( &constant_bin[ 899839 ], 34, 0 );
    const_dict_3db537246086620d4696586d07b25b46 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 899873 ], 18516 );
    const_str_plain_type12uni = UNSTREAM_STRING_ASCII( &constant_bin[ 918389 ], 9, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_matplotlib$_mathtext_data( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bcafd3c275cf8686d010c2d960ce98cc;
static PyCodeObject *codeobj_1d8b748d596102bd146dec34df0fd299;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e337a7ce535d78e885a81d451146e36c );
    codeobj_bcafd3c275cf8686d010c2d960ce98cc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_dictcontraction, 1751, const_tuple_str_plain_k_str_plain_v_tuple, 1, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_1d8b748d596102bd146dec34df0fd299 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1f5aa14dd69942b2d8b6427600671d5d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_matplotlib$_mathtext_data =
{
    PyModuleDef_HEAD_INIT,
    "matplotlib._mathtext_data",
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

MOD_INIT_DECL( matplotlib$_mathtext_data )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_matplotlib$_mathtext_data );
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
    puts("matplotlib._mathtext_data: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib._mathtext_data: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("matplotlib._mathtext_data: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmatplotlib$_mathtext_data" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_matplotlib$_mathtext_data = Py_InitModule4(
        "matplotlib._mathtext_data",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_matplotlib$_mathtext_data = PyModule_Create( &mdef_matplotlib$_mathtext_data );
#endif

    moduledict_matplotlib$_mathtext_data = MODULE_DICT( module_matplotlib$_mathtext_data );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_matplotlib$_mathtext_data,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_matplotlib$_mathtext_data,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_mathtext_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_mathtext_data,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_matplotlib$_mathtext_data );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_70180f1a5cba6f0cc818868b056967dd, module_matplotlib$_mathtext_data );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_1d8b748d596102bd146dec34df0fd299;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_bcafd3c275cf8686d010c2d960ce98cc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_bcafd3c275cf8686d010c2d960ce98cc_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_037529e49e7a8948c1e349cb92c5c48f;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_1d8b748d596102bd146dec34df0fd299 = MAKE_MODULE_FRAME( codeobj_1d8b748d596102bd146dec34df0fd299, module_matplotlib$_mathtext_data );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1d8b748d596102bd146dec34df0fd299 );
    assert( Py_REFCNT( frame_1d8b748d596102bd146dec34df0fd299 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_Copy( const_dict_f026a87ae3a85a06e26119b5d1ab0033 );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_latex_to_bakoma, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_Copy( const_dict_f2a1bc12590288b7380a639f3508ea40 );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_latex_to_cmex, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyDict_Copy( const_dict_80c23418c52893690d179b9ebce861b3 );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_latex_to_standard, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_Copy( const_dict_3db537246086620d4696586d07b25b46 );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_type12uni, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_type12uni );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type12uni );
            }

            CHECK_OBJECT( tmp_mvar_value_3 );
            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_1d8b748d596102bd146dec34df0fd299->m_frame.f_lineno = 1751;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1751;

                goto try_except_handler_1;
            }
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1751;

                goto try_except_handler_1;
            }
            assert( tmp_dictcontraction_1__$0 == NULL );
            tmp_dictcontraction_1__$0 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = PyDict_New();
            assert( tmp_dictcontraction_1__contraction == NULL );
            tmp_dictcontraction_1__contraction = tmp_assign_source_10;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_bcafd3c275cf8686d010c2d960ce98cc_2, codeobj_bcafd3c275cf8686d010c2d960ce98cc, module_matplotlib$_mathtext_data, sizeof(void *)+sizeof(void *) );
        frame_bcafd3c275cf8686d010c2d960ce98cc_2 = cache_frame_bcafd3c275cf8686d010c2d960ce98cc_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bcafd3c275cf8686d010c2d960ce98cc_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_dictcontraction_1__$0 );
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 1751;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( tmp_dictcontraction_1__iter_value_0 );
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1751;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_13 == NULL )
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


                type_description_2 = "oo";
                exception_lineno = 1751;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_14 == NULL )
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


                type_description_2 = "oo";
                exception_lineno = 1751;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 1751;
                        goto try_except_handler_4;
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

                type_description_2 = "oo";
                exception_lineno = 1751;
                goto try_except_handler_4;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
        Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__element_1 );
            tmp_assign_source_15 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_15;
                Py_INCREF( outline_0_var_k );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__element_2 );
            tmp_assign_source_16 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_16;
                Py_INCREF( outline_0_var_v );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        CHECK_OBJECT( outline_0_var_k );
        tmp_dictset_value = outline_0_var_k;
        CHECK_OBJECT( tmp_dictcontraction_1__contraction );
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT( outline_0_var_v );
        tmp_dictset_key = outline_0_var_v;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1751;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1751;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_dictcontraction_1__contraction );
        tmp_assign_source_8 = tmp_dictcontraction_1__contraction;
        Py_INCREF( tmp_assign_source_8 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( matplotlib$_mathtext_data );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
        Py_DECREF( tmp_dictcontraction_1__$0 );
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
        Py_DECREF( tmp_dictcontraction_1__contraction );
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
        tmp_dictcontraction_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
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

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
        Py_DECREF( tmp_dictcontraction_1__$0 );
        tmp_dictcontraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
        Py_DECREF( tmp_dictcontraction_1__contraction );
        tmp_dictcontraction_1__contraction = NULL;

        Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
        tmp_dictcontraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bcafd3c275cf8686d010c2d960ce98cc_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bcafd3c275cf8686d010c2d960ce98cc_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bcafd3c275cf8686d010c2d960ce98cc_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bcafd3c275cf8686d010c2d960ce98cc_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame.
        if ( frame_bcafd3c275cf8686d010c2d960ce98cc_2 == cache_frame_bcafd3c275cf8686d010c2d960ce98cc_2 )
        {
            Py_DECREF( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );
        }
        cache_frame_bcafd3c275cf8686d010c2d960ce98cc_2 = NULL;

        assertFrameObject( frame_bcafd3c275cf8686d010c2d960ce98cc_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( matplotlib$_mathtext_data );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

        Py_XDECREF( outline_0_var_v );
        outline_0_var_v = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_k );
        outline_0_var_k = NULL;

        Py_XDECREF( outline_0_var_v );
        outline_0_var_v = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( matplotlib$_mathtext_data );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 1751;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_uni2type1, tmp_assign_source_8 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d8b748d596102bd146dec34df0fd299 );
#endif
    popFrameStack();

    assertFrameObject( frame_1d8b748d596102bd146dec34df0fd299 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d8b748d596102bd146dec34df0fd299 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d8b748d596102bd146dec34df0fd299, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d8b748d596102bd146dec34df0fd299->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d8b748d596102bd146dec34df0fd299, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_Copy( const_dict_9c8ba5855ebd63f930a91fbeaca4f683 );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_tex2uni, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = DEEP_COPY( const_dict_29e47c52944897b8f41f93d70cbb543c );
        UPDATE_STRING_DICT1( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain_stix_virtual_fonts, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_matplotlib$_mathtext_data, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_matplotlib$_mathtext_data );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
