/* Generated code for Python module 'scipy.linalg'
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

/* The "_module_scipy$linalg" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg;
PyDictObject *moduledict_scipy$linalg;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_eval;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_anon_code_type_memoryview_tuple;
extern PyObject *const_tuple_str_plain_PytestTester_tuple;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_ValueError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_bytes_digest_02908b9762f6c8d62a9c6d964a8ffecc;
extern PyObject *const_str_plain_eigvalsh;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_decomp_cholesky;
extern PyObject *const_tuple_str_plain___tuple;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain__decomp_ldl;
extern PyObject *const_str_plain_inv;
static PyObject *const_tuple_str_digest_98f0862546911eb9d3076c5e6fd6b825_tuple;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_decomp_schur;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_85a2119870806da2121981bdd7303318_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy;
static PyObject *const_str_plain_NUITKA_PACKAGE_scipy_linalg;
extern PyObject *const_str_plain_blas;
extern PyObject *const_str_digest_8015da37ef70c6fcb334280663239467;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_decomp_qr;
static PyObject *const_str_plain__decomp_update;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain__procrustes;
extern PyObject *const_str_plain_special_matrices;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_tuple_a0f903686605ac910f391f0708b892cf_tuple;
extern PyObject *const_str_plain_decomp;
static PyObject *const_str_plain__solvers;
extern PyObject *const_str_plain_eigh;
static PyObject *const_tuple_str_plain_linalg_version_tuple;
extern PyObject *const_str_plain_pinv2;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_register_func;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain_memoryview;
extern PyObject *const_str_plain_linalg_version;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain__decomp_qz;
extern PyObject *const_str_plain_decomp_lu;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_b29bf0f853f93b702848cacece25f504_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__;
extern PyObject *const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple;
static PyObject *const_str_digest_04d3dad9f88c38511b62e6e882872d22;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain__decomp_polar;
extern PyObject *const_tuple_bytes_digest_02908b9762f6c8d62a9c6d964a8ffecc_tuple;
static PyObject *const_str_digest_0abd841656b96ceeddbebd61336cd498;
extern PyObject *const_str_plain_PytestTester;
extern PyObject *const_str_plain_pinv;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_basic;
extern PyObject *const_str_plain_decomp_svd;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_19cdddbcbfb589136437a3629dee47a7;
extern PyObject *const_str_plain_matfuncs;
extern PyObject *const_str_digest_ac02ab0238280e341b2aff0eed15b128;
static PyObject *const_str_plain__sketches;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_tuple_str_plain_register_func_tuple;
extern PyObject *const_str_angle_string;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_decomp_cholesky = UNSTREAM_STRING_ASCII( &constant_bin[ 4461163 ], 15, 1 );
    const_str_plain__decomp_ldl = UNSTREAM_STRING_ASCII( &constant_bin[ 4461178 ], 11, 1 );
    const_tuple_str_digest_98f0862546911eb9d3076c5e6fd6b825_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_98f0862546911eb9d3076c5e6fd6b825_tuple, 0, const_str_digest_98f0862546911eb9d3076c5e6fd6b825 ); Py_INCREF( const_str_digest_98f0862546911eb9d3076c5e6fd6b825 );
    const_tuple_85a2119870806da2121981bdd7303318_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 1, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 2, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 3, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 4, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 5, const_str_plain_eig ); Py_INCREF( const_str_plain_eig );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 6, const_str_plain_eigh ); Py_INCREF( const_str_plain_eigh );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 7, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 8, const_str_plain_eigvalsh ); Py_INCREF( const_str_plain_eigvalsh );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 9, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 10, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    const_str_plain_NUITKA_PACKAGE_scipy_linalg = UNSTREAM_STRING_ASCII( &constant_bin[ 4461189 ], 27, 1 );
    const_str_plain__decomp_update = UNSTREAM_STRING_ASCII( &constant_bin[ 4461216 ], 14, 1 );
    const_str_plain__solvers = UNSTREAM_STRING_ASCII( &constant_bin[ 4461230 ], 8, 1 );
    const_tuple_str_plain_linalg_version_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_linalg_version_tuple, 0, const_str_plain_linalg_version ); Py_INCREF( const_str_plain_linalg_version );
    const_tuple_b29bf0f853f93b702848cacece25f504_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_b29bf0f853f93b702848cacece25f504_tuple, 0, const_str_plain_NUITKA_PACKAGE_scipy_linalg ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_scipy_linalg );
    PyTuple_SET_ITEM( const_tuple_b29bf0f853f93b702848cacece25f504_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_04d3dad9f88c38511b62e6e882872d22 = UNSTREAM_STRING_ASCII( &constant_bin[ 4461238 ], 21, 0 );
    const_str_plain__decomp_polar = UNSTREAM_STRING_ASCII( &constant_bin[ 4461259 ], 13, 1 );
    const_str_digest_0abd841656b96ceeddbebd61336cd498 = UNSTREAM_STRING_ASCII( &constant_bin[ 4461272 ], 6300, 0 );
    const_str_digest_19cdddbcbfb589136437a3629dee47a7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4467572 ], 24, 0 );
    const_str_plain__sketches = UNSTREAM_STRING_ASCII( &constant_bin[ 4467596 ], 9, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4b81a7e276f28626398084f1d6f2eca8;
static PyCodeObject *codeobj_dd76a5dfd605fe352392570e103175a8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_19cdddbcbfb589136437a3629dee47a7 );
    codeobj_4b81a7e276f28626398084f1d6f2eca8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 215, const_tuple_str_plain_s_tuple, 1, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_dd76a5dfd605fe352392570e103175a8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_04d3dad9f88c38511b62e6e882872d22, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg",
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

MOD_INIT_DECL( scipy$linalg )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg );
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
    puts("scipy.linalg: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg = Py_InitModule4(
        "scipy.linalg",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg = PyModule_Create( &mdef_scipy$linalg );
#endif

    moduledict_scipy$linalg = MODULE_DICT( module_scipy$linalg );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_98f0862546911eb9d3076c5e6fd6b825, module_scipy$linalg );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_dd76a5dfd605fe352392570e103175a8;
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
    struct Nuitka_FrameObject *frame_4b81a7e276f28626398084f1d6f2eca8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4b81a7e276f28626398084f1d6f2eca8_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0abd841656b96ceeddbebd61336cd498;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_dd76a5dfd605fe352392570e103175a8 = MAKE_MODULE_FRAME( codeobj_dd76a5dfd605fe352392570e103175a8, module_scipy$linalg );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_dd76a5dfd605fe352392570e103175a8 );
    assert( Py_REFCNT( frame_dd76a5dfd605fe352392570e103175a8 ) == 2 );

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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        tmp_args_element_name_3 = const_str_plain_linalg;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
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
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_b29bf0f853f93b702848cacece25f504_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 191;
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


            exception_lineno = 191;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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


            exception_lineno = 191;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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


            exception_lineno = 191;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_linalg_version;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_linalg_version_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 193;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$linalg,
                const_str_plain_linalg_version,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg_version );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_misc;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_2 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 195;
        tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_basic;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_3 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 196;
        tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_star_imported_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_2 );
        Py_DECREF( tmp_star_imported_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_decomp;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_4 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 197;
        tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_star_imported_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_3 );
        Py_DECREF( tmp_star_imported_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_decomp_lu;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_5 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 198;
        tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_star_imported_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_4 );
        Py_DECREF( tmp_star_imported_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__decomp_ldl;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_6 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 199;
        tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_star_imported_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_5 );
        Py_DECREF( tmp_star_imported_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_6;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_decomp_cholesky;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_7 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 200;
        tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_star_imported_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_6 );
        Py_DECREF( tmp_star_imported_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_7;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_decomp_qr;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_8 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 201;
        tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_star_imported_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_7 );
        Py_DECREF( tmp_star_imported_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_8;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__decomp_qz;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_9 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_9 = const_tuple_str_chr_42_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 202;
        tmp_star_imported_8 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_star_imported_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_8 );
        Py_DECREF( tmp_star_imported_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_9;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_decomp_svd;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_10 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_10 = const_tuple_str_chr_42_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 203;
        tmp_star_imported_9 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_star_imported_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_9 );
        Py_DECREF( tmp_star_imported_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_10;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_decomp_schur;
        tmp_globals_name_11 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_11 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_11 = const_tuple_str_chr_42_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 204;
        tmp_star_imported_10 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_star_imported_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_10 );
        Py_DECREF( tmp_star_imported_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_11;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain__decomp_polar;
        tmp_globals_name_12 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_12 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_12 = const_tuple_str_chr_42_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 205;
        tmp_star_imported_11 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_star_imported_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_11 );
        Py_DECREF( tmp_star_imported_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_12;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_matfuncs;
        tmp_globals_name_13 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_13 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_13 = const_tuple_str_chr_42_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 206;
        tmp_star_imported_12 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_star_imported_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_12 );
        Py_DECREF( tmp_star_imported_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_13;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain_blas;
        tmp_globals_name_14 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_14 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_14 = const_tuple_str_chr_42_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 207;
        tmp_star_imported_13 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_star_imported_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_13 );
        Py_DECREF( tmp_star_imported_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_14;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_plain_lapack;
        tmp_globals_name_15 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_15 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_15 = const_tuple_str_chr_42_tuple;
        tmp_level_name_15 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 208;
        tmp_star_imported_14 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
        if ( tmp_star_imported_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_14 );
        Py_DECREF( tmp_star_imported_14 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_15;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_plain_special_matrices;
        tmp_globals_name_16 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_16 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_16 = const_tuple_str_chr_42_tuple;
        tmp_level_name_16 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 209;
        tmp_star_imported_15 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
        if ( tmp_star_imported_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_15 );
        Py_DECREF( tmp_star_imported_15 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_16;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = const_str_plain__solvers;
        tmp_globals_name_17 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_17 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_17 = const_tuple_str_chr_42_tuple;
        tmp_level_name_17 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 210;
        tmp_star_imported_16 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
        if ( tmp_star_imported_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_16 );
        Py_DECREF( tmp_star_imported_16 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_17;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_name_18;
        PyObject *tmp_locals_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = const_str_plain__procrustes;
        tmp_globals_name_18 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_18 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_18 = const_tuple_str_chr_42_tuple;
        tmp_level_name_18 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 211;
        tmp_star_imported_17 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
        if ( tmp_star_imported_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_17 );
        Py_DECREF( tmp_star_imported_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_18;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_name_19;
        PyObject *tmp_locals_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = const_str_plain__decomp_update;
        tmp_globals_name_19 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_19 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_19 = const_tuple_str_chr_42_tuple;
        tmp_level_name_19 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 212;
        tmp_star_imported_18 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
        if ( tmp_star_imported_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_18 );
        Py_DECREF( tmp_star_imported_18 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_star_imported_19;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_name_20;
        PyObject *tmp_locals_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = const_str_plain__sketches;
        tmp_globals_name_20 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_20 = (PyObject *)moduledict_scipy$linalg;
        tmp_fromlist_name_20 = const_tuple_str_chr_42_tuple;
        tmp_level_name_20 = const_int_pos_1;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 213;
        tmp_star_imported_19 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
        if ( tmp_star_imported_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_19 );
        Py_DECREF( tmp_star_imported_19 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_called_instance_3;
            tmp_called_instance_3 = (PyObject *)moduledict_scipy$linalg;
            frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 215;
            tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_keys );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;

                goto try_except_handler_2;
            }
            tmp_iter_arg_1 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;

                goto try_except_handler_2;
            }
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;

                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4b81a7e276f28626398084f1d6f2eca8_2, codeobj_4b81a7e276f28626398084f1d6f2eca8, module_scipy$linalg, sizeof(void *) );
        frame_4b81a7e276f28626398084f1d6f2eca8_2 = cache_frame_4b81a7e276f28626398084f1d6f2eca8_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4b81a7e276f28626398084f1d6f2eca8_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4b81a7e276f28626398084f1d6f2eca8_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
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
                    type_description_2 = "o";
                    exception_lineno = 215;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_s;
                outline_0_var_s = tmp_assign_source_14;
                Py_INCREF( outline_0_var_s );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( outline_0_var_s );
            tmp_called_instance_4 = outline_0_var_s;
            frame_4b81a7e276f28626398084f1d6f2eca8_2->m_frame.f_lineno = 215;
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain___tuple, 0 ) );

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_2 = "o";
                goto try_except_handler_3;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( outline_0_var_s );
                tmp_append_value_1 = outline_0_var_s;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 215;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            branch_no_1:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        goto frame_return_exit_1;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
        Py_DECREF( tmp_listcomp_1__$0 );
        tmp_listcomp_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
        Py_DECREF( tmp_listcomp_1__contraction );
        tmp_listcomp_1__contraction = NULL;

        Py_XDECREF( tmp_listcomp_1__iter_value_0 );
        tmp_listcomp_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4b81a7e276f28626398084f1d6f2eca8_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_4b81a7e276f28626398084f1d6f2eca8_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4b81a7e276f28626398084f1d6f2eca8_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4b81a7e276f28626398084f1d6f2eca8_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4b81a7e276f28626398084f1d6f2eca8_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4b81a7e276f28626398084f1d6f2eca8_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4b81a7e276f28626398084f1d6f2eca8_2,
            type_description_2,
            outline_0_var_s
        );


        // Release cached frame.
        if ( frame_4b81a7e276f28626398084f1d6f2eca8_2 == cache_frame_4b81a7e276f28626398084f1d6f2eca8_2 )
        {
            Py_DECREF( frame_4b81a7e276f28626398084f1d6f2eca8_2 );
        }
        cache_frame_4b81a7e276f28626398084f1d6f2eca8_2 = NULL;

        assertFrameObject( frame_4b81a7e276f28626398084f1d6f2eca8_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_s );
        outline_0_var_s = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_s );
        outline_0_var_s = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$linalg );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 215;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_name_21;
        PyObject *tmp_locals_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = const_str_digest_8015da37ef70c6fcb334280663239467;
        tmp_globals_name_21 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_21 = Py_None;
        tmp_fromlist_name_21 = const_tuple_str_plain_register_func_tuple;
        tmp_level_name_21 = const_int_0;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 217;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_register_func );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_85a2119870806da2121981bdd7303318_tuple;
        tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_16 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 218;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_18 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k, tmp_assign_source_18 );
    }
    // Tried code:
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_func );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 221;

            goto try_except_handler_5;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_k );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_args_element_name_4 = tmp_mvar_value_4;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = (PyObject *)moduledict_scipy$linalg;
            assert( tmp_eval_call_1__locals == NULL );
            Py_INCREF( tmp_assign_source_19 );
            tmp_eval_call_1__locals = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = (PyObject *)moduledict_scipy$linalg;
            assert( tmp_eval_call_1__globals == NULL );
            Py_INCREF( tmp_assign_source_20 );
            tmp_eval_call_1__globals = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_k );
            }

            CHECK_OBJECT( tmp_mvar_value_5 );
            tmp_assign_source_21 = tmp_mvar_value_5;
            assert( tmp_eval_call_1__source == NULL );
            Py_INCREF( tmp_assign_source_21 );
            tmp_eval_call_1__source = tmp_assign_source_21;
        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( tmp_eval_call_1__source );
            tmp_isinstance_inst_1 = tmp_eval_call_1__source;
            tmp_isinstance_cls_1 = const_tuple_anon_code_type_memoryview_tuple;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;

                goto try_except_handler_6;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;

                goto try_except_handler_6;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_22;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_name_1;
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                PyObject *tmp_type_arg_1;
                CHECK_OBJECT( tmp_eval_call_1__source );
                tmp_source_name_3 = tmp_eval_call_1__source;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_strip );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;

                    goto try_except_handler_6;
                }
                CHECK_OBJECT( tmp_eval_call_1__source );
                tmp_type_arg_1 = tmp_eval_call_1__source;
                tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_compexpr_left_1 == NULL) );
                tmp_compexpr_right_1 = (PyObject *)&PyBytes_Type;
                tmp_condition_result_3 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_compexpr_left_1 );
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_1;
                }
                else
                {
                    goto condexpr_false_1;
                }
                condexpr_true_1:;
                tmp_args_name_1 = const_tuple_bytes_digest_02908b9762f6c8d62a9c6d964a8ffecc_tuple;
                goto condexpr_end_1;
                condexpr_false_1:;
                tmp_args_name_1 = const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple;
                condexpr_end_1:;
                frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 221;
                tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS( tmp_called_name_4, tmp_args_name_1 );
                Py_DECREF( tmp_called_name_4 );
                if ( tmp_assign_source_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 221;

                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_eval_call_1__source;
                    assert( old != NULL );
                    tmp_eval_call_1__source = tmp_assign_source_22;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            PyObject *tmp_eval_source_1;
            PyObject *tmp_eval_globals_1;
            PyObject *tmp_eval_locals_1;
            PyObject *tmp_eval_compiled_1;
            CHECK_OBJECT( tmp_eval_call_1__source );
            tmp_eval_source_1 = tmp_eval_call_1__source;
            CHECK_OBJECT( tmp_eval_call_1__globals );
            tmp_eval_globals_1 = tmp_eval_call_1__globals;
            CHECK_OBJECT( tmp_eval_call_1__locals );
            tmp_eval_locals_1 = tmp_eval_call_1__locals;
            tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
            if ( tmp_eval_compiled_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;

                goto try_except_handler_6;
            }
            tmp_args_element_name_5 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
            Py_DECREF( tmp_eval_compiled_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;

                goto try_except_handler_6;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_eval_call_1__globals );
        Py_DECREF( tmp_eval_call_1__globals );
        tmp_eval_call_1__globals = NULL;

        CHECK_OBJECT( (PyObject *)tmp_eval_call_1__locals );
        Py_DECREF( tmp_eval_call_1__locals );
        tmp_eval_call_1__locals = NULL;

        Py_XDECREF( tmp_eval_call_1__source );
        tmp_eval_call_1__source = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_eval_call_1__globals );
        Py_DECREF( tmp_eval_call_1__globals );
        tmp_eval_call_1__globals = NULL;

        CHECK_OBJECT( (PyObject *)tmp_eval_call_1__locals );
        Py_DECREF( tmp_eval_call_1__locals );
        tmp_eval_call_1__locals = NULL;

        Py_XDECREF( tmp_eval_call_1__source );
        tmp_eval_call_1__source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$linalg );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;

            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_dd76a5dfd605fe352392570e103175a8, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_dd76a5dfd605fe352392570e103175a8, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_6;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_ValueError );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 222;

            goto try_except_handler_7;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_6;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;

            goto try_except_handler_7;
        }
        tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 220;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_dd76a5dfd605fe352392570e103175a8->m_frame) frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_7;
        branch_no_3:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;

        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_func );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register_func" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 226;

            goto try_except_handler_8;
        }

        tmp_called_name_5 = tmp_mvar_value_7;
        tmp_args_element_name_6 = const_str_plain_pinv;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_pinv2 );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pinv2 );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "pinv2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 226;

            goto try_except_handler_8;
        }

        tmp_args_element_name_7 = tmp_mvar_value_8;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;

            goto try_except_handler_8;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_dd76a5dfd605fe352392570e103175a8, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_dd76a5dfd605fe352392570e103175a8, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_9;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_ValueError );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValueError );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValueError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 227;

            goto try_except_handler_9;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_9;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;

            goto try_except_handler_9;
        }
        tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 225;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_dd76a5dfd605fe352392570e103175a8->m_frame) frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_9;
        branch_no_4:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg, const_str_plain_k );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "k" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg, const_str_plain_register_func );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register_func" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;

        goto frame_exception_exit_1;
    }

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_name_22;
        PyObject *tmp_locals_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
        tmp_globals_name_22 = (PyObject *)moduledict_scipy$linalg;
        tmp_locals_name_22 = Py_None;
        tmp_fromlist_name_22 = const_tuple_str_plain_PytestTester_tuple;
        tmp_level_name_22 = const_int_0;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 232;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_PytestTester );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_PytestTester, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_PytestTester );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PytestTester );
        }

        CHECK_OBJECT( tmp_mvar_value_10 );
        tmp_called_name_6 = tmp_mvar_value_10;
        frame_dd76a5dfd605fe352392570e103175a8->m_frame.f_lineno = 233;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_98f0862546911eb9d3076c5e6fd6b825_tuple, 0 ) );

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_24 );
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg, const_str_plain_PytestTester );
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

        exception_lineno = 234;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd76a5dfd605fe352392570e103175a8 );
#endif
    popFrameStack();

    assertFrameObject( frame_dd76a5dfd605fe352392570e103175a8 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd76a5dfd605fe352392570e103175a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd76a5dfd605fe352392570e103175a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd76a5dfd605fe352392570e103175a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd76a5dfd605fe352392570e103175a8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
