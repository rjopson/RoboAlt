/* Generated code for Python module 'scipy.sparse.csgraph'
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

/* The "_module_scipy$sparse$csgraph" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$csgraph;
PyDictObject *moduledict_scipy$sparse$csgraph;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_a0f903686605ac910f391f0708b892cf_tuple;
extern PyObject *const_str_digest_e58b8e238daae7f316f45d0978267798;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain__traversal;
extern PyObject *const_str_plain_test;
static PyObject *const_str_plain_depth_first_order;
static PyObject *const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple;
extern PyObject *const_tuple_str_plain_PytestTester_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain__shortest_path;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_bellman_ford;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_structural_rank;
static PyObject *const_tuple_22d8f21877885182507407053d7b4644_tuple;
static PyObject *const_str_plain_floyd_warshall;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_cf8e46b3fad13e718b62c08da2a049a7_tuple;
extern PyObject *const_str_plain_csgraph_from_masked;
extern PyObject *const_int_0;
static PyObject *const_str_plain_dijkstra;
static PyObject *const_str_plain_csgraph_to_masked;
extern PyObject *const_str_plain__tools;
static PyObject *const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_list_4024bea57b874442efac2792221286e7_list;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_NUITKA_PACKAGE_scipy_sparse_csgraph;
extern PyObject *const_str_plain_PytestTester;
static PyObject *const_str_digest_84bafb7dc1f75e754c949505f446234c;
static PyObject *const_str_digest_522a6378510bf0fb2069136047071569;
extern PyObject *const_str_plain_csgraph_to_dense;
static PyObject *const_str_plain__min_spanning_tree;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_johnson;
static PyObject *const_tuple_str_digest_8d648240c1bd08d42b98682238e12be6_tuple;
static PyObject *const_str_plain_construct_dist_matrix;
static PyObject *const_tuple_str_plain_laplacian_tuple;
static PyObject *const_str_plain_shortest_path;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple;
static PyObject *const_str_digest_8d648240c1bd08d42b98682238e12be6;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain__laplacian;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_NegativeCycleError;
static PyObject *const_str_plain_breadth_first_order;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_laplacian;
extern PyObject *const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
extern PyObject *const_str_plain_NUITKA_PACKAGE_scipy_sparse;
extern PyObject *const_str_plain_csgraph;
static PyObject *const_tuple_7195a8d849edeb665aabaee4b8c4547f_tuple;
static PyObject *const_str_plain_depth_first_tree;
static PyObject *const_str_plain_minimum_spanning_tree;
static PyObject *const_str_digest_4311f0d3497392bdd0aa73a8b788cc90;
extern PyObject *const_str_plain_csgraph_masked_from_dense;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_df04b61b842b956f756282db1a53daef;
static PyObject *const_tuple_str_plain_minimum_spanning_tree_tuple;
static PyObject *const_str_plain_reverse_cuthill_mckee;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain__reordering;
static PyObject *const_str_plain_reconstruct_path;
extern PyObject *const_str_plain_csgraph_from_dense;
static PyObject *const_str_plain_breadth_first_tree;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_connected_components;
static PyObject *const_str_plain_maximum_bipartite_matching;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain__traversal = UNSTREAM_STRING_ASCII( &constant_bin[ 5356521 ], 10, 1 );
    const_str_plain_depth_first_order = UNSTREAM_STRING_ASCII( &constant_bin[ 5356531 ], 17, 1 );
    const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple = PyTuple_New( 6 );
    const_str_plain_shortest_path = UNSTREAM_STRING_ASCII( &constant_bin[ 5356548 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 0, const_str_plain_shortest_path ); Py_INCREF( const_str_plain_shortest_path );
    const_str_plain_floyd_warshall = UNSTREAM_STRING_ASCII( &constant_bin[ 5356561 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 1, const_str_plain_floyd_warshall ); Py_INCREF( const_str_plain_floyd_warshall );
    const_str_plain_dijkstra = UNSTREAM_STRING_ASCII( &constant_bin[ 5356575 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 2, const_str_plain_dijkstra ); Py_INCREF( const_str_plain_dijkstra );
    const_str_plain_bellman_ford = UNSTREAM_STRING_ASCII( &constant_bin[ 5356583 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 3, const_str_plain_bellman_ford ); Py_INCREF( const_str_plain_bellman_ford );
    const_str_plain_johnson = UNSTREAM_STRING_ASCII( &constant_bin[ 5356595 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 4, const_str_plain_johnson ); Py_INCREF( const_str_plain_johnson );
    const_str_plain_NegativeCycleError = UNSTREAM_STRING_ASCII( &constant_bin[ 5356602 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 5, const_str_plain_NegativeCycleError ); Py_INCREF( const_str_plain_NegativeCycleError );
    const_str_plain__shortest_path = UNSTREAM_STRING_ASCII( &constant_bin[ 5356620 ], 14, 1 );
    const_str_plain_structural_rank = UNSTREAM_STRING_ASCII( &constant_bin[ 5356634 ], 15, 1 );
    const_tuple_22d8f21877885182507407053d7b4644_tuple = PyTuple_New( 7 );
    const_str_plain_construct_dist_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5356649 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 0, const_str_plain_construct_dist_matrix ); Py_INCREF( const_str_plain_construct_dist_matrix );
    const_str_plain_reconstruct_path = UNSTREAM_STRING_ASCII( &constant_bin[ 5356670 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 1, const_str_plain_reconstruct_path ); Py_INCREF( const_str_plain_reconstruct_path );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 2, const_str_plain_csgraph_from_dense ); Py_INCREF( const_str_plain_csgraph_from_dense );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 3, const_str_plain_csgraph_to_dense ); Py_INCREF( const_str_plain_csgraph_to_dense );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 4, const_str_plain_csgraph_masked_from_dense ); Py_INCREF( const_str_plain_csgraph_masked_from_dense );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 5, const_str_plain_csgraph_from_masked ); Py_INCREF( const_str_plain_csgraph_from_masked );
    const_str_plain_csgraph_to_masked = UNSTREAM_STRING_ASCII( &constant_bin[ 5356686 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_22d8f21877885182507407053d7b4644_tuple, 6, const_str_plain_csgraph_to_masked ); Py_INCREF( const_str_plain_csgraph_to_masked );
    const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple = PyTuple_New( 3 );
    const_str_plain_reverse_cuthill_mckee = UNSTREAM_STRING_ASCII( &constant_bin[ 5356703 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple, 0, const_str_plain_reverse_cuthill_mckee ); Py_INCREF( const_str_plain_reverse_cuthill_mckee );
    const_str_plain_maximum_bipartite_matching = UNSTREAM_STRING_ASCII( &constant_bin[ 5356724 ], 26, 1 );
    PyTuple_SET_ITEM( const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple, 1, const_str_plain_maximum_bipartite_matching ); Py_INCREF( const_str_plain_maximum_bipartite_matching );
    PyTuple_SET_ITEM( const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple, 2, const_str_plain_structural_rank ); Py_INCREF( const_str_plain_structural_rank );
    const_list_4024bea57b874442efac2792221286e7_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5356750 ], 437 );
    const_str_plain_NUITKA_PACKAGE_scipy_sparse_csgraph = UNSTREAM_STRING_ASCII( &constant_bin[ 5357187 ], 35, 1 );
    const_str_digest_84bafb7dc1f75e754c949505f446234c = UNSTREAM_STRING_ASCII( &constant_bin[ 5357222 ], 29, 0 );
    const_str_digest_522a6378510bf0fb2069136047071569 = UNSTREAM_STRING_ASCII( &constant_bin[ 5357251 ], 14, 0 );
    const_str_plain__min_spanning_tree = UNSTREAM_STRING_ASCII( &constant_bin[ 5357265 ], 18, 1 );
    const_tuple_str_digest_8d648240c1bd08d42b98682238e12be6_tuple = PyTuple_New( 1 );
    const_str_digest_8d648240c1bd08d42b98682238e12be6 = UNSTREAM_STRING_ASCII( &constant_bin[ 5357230 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d648240c1bd08d42b98682238e12be6_tuple, 0, const_str_digest_8d648240c1bd08d42b98682238e12be6 ); Py_INCREF( const_str_digest_8d648240c1bd08d42b98682238e12be6 );
    const_tuple_str_plain_laplacian_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_laplacian_tuple, 0, const_str_plain_laplacian ); Py_INCREF( const_str_plain_laplacian );
    const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple = PyTuple_New( 5 );
    const_str_plain_breadth_first_order = UNSTREAM_STRING_ASCII( &constant_bin[ 5356854 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 0, const_str_plain_breadth_first_order ); Py_INCREF( const_str_plain_breadth_first_order );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 1, const_str_plain_depth_first_order ); Py_INCREF( const_str_plain_depth_first_order );
    const_str_plain_breadth_first_tree = UNSTREAM_STRING_ASCII( &constant_bin[ 5356894 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 2, const_str_plain_breadth_first_tree ); Py_INCREF( const_str_plain_breadth_first_tree );
    const_str_plain_depth_first_tree = UNSTREAM_STRING_ASCII( &constant_bin[ 5356914 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 3, const_str_plain_depth_first_tree ); Py_INCREF( const_str_plain_depth_first_tree );
    const_str_plain_connected_components = UNSTREAM_STRING_ASCII( &constant_bin[ 5356757 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 4, const_str_plain_connected_components ); Py_INCREF( const_str_plain_connected_components );
    const_str_plain__laplacian = UNSTREAM_STRING_ASCII( &constant_bin[ 5357283 ], 10, 1 );
    const_tuple_7195a8d849edeb665aabaee4b8c4547f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_7195a8d849edeb665aabaee4b8c4547f_tuple, 0, const_str_plain_NUITKA_PACKAGE_scipy_sparse_csgraph ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_scipy_sparse_csgraph );
    PyTuple_SET_ITEM( const_tuple_7195a8d849edeb665aabaee4b8c4547f_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_plain_minimum_spanning_tree = UNSTREAM_STRING_ASCII( &constant_bin[ 5356932 ], 21, 1 );
    const_str_digest_4311f0d3497392bdd0aa73a8b788cc90 = UNSTREAM_STRING_ASCII( &constant_bin[ 5357293 ], 5838, 0 );
    const_str_digest_df04b61b842b956f756282db1a53daef = UNSTREAM_STRING_ASCII( &constant_bin[ 5363131 ], 32, 0 );
    const_tuple_str_plain_minimum_spanning_tree_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_minimum_spanning_tree_tuple, 0, const_str_plain_minimum_spanning_tree ); Py_INCREF( const_str_plain_minimum_spanning_tree );
    const_str_plain__reordering = UNSTREAM_STRING_ASCII( &constant_bin[ 5363163 ], 11, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$csgraph( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_41284a3a620e9212ac74d4ba93f61f95;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_df04b61b842b956f756282db1a53daef );
    codeobj_41284a3a620e9212ac74d4ba93f61f95 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_84bafb7dc1f75e754c949505f446234c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csgraph =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csgraph",
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

MOD_INIT_DECL( scipy$sparse$csgraph )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csgraph );
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
    puts("scipy.sparse.csgraph: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.csgraph: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$csgraph" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csgraph = Py_InitModule4(
        "scipy.sparse.csgraph",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$csgraph = PyModule_Create( &mdef_scipy$sparse$csgraph );
#endif

    moduledict_scipy$sparse$csgraph = MODULE_DICT( module_scipy$sparse$csgraph );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$csgraph,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$csgraph,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$csgraph,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$csgraph );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_8d648240c1bd08d42b98682238e12be6, module_scipy$sparse$csgraph );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_41284a3a620e9212ac74d4ba93f61f95;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_4311f0d3497392bdd0aa73a8b788cc90;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_41284a3a620e9212ac74d4ba93f61f95 = MAKE_MODULE_FRAME( codeobj_41284a3a620e9212ac74d4ba93f61f95, module_scipy$sparse$csgraph );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_41284a3a620e9212ac74d4ba93f61f95 );
    assert( Py_REFCNT( frame_41284a3a620e9212ac74d4ba93f61f95 ) == 2 );

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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        tmp_args_element_name_3 = const_str_digest_522a6378510bf0fb2069136047071569;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
        tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_cf8e46b3fad13e718b62c08da2a049a7_tuple, 0 ) );

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_csgraph;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
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
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_7195a8d849edeb665aabaee4b8c4547f_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 152;
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


            exception_lineno = 152;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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


            exception_lineno = 152;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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


            exception_lineno = 152;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_8 );
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
        tmp_assign_source_9 = const_str_digest_e58b8e238daae7f316f45d0978267798;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY( const_list_4024bea57b874442efac2792221286e7_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__laplacian;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_laplacian_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 180;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_laplacian,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_laplacian );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_laplacian, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain__shortest_path;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 181;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_shortest_path,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_shortest_path );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_shortest_path, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_floyd_warshall,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_floyd_warshall );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_floyd_warshall, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_dijkstra,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_dijkstra );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_dijkstra, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_bellman_ford,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_bellman_ford );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_bellman_ford, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_johnson,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_johnson );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_johnson, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_NegativeCycleError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_NegativeCycleError );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_NegativeCycleError, tmp_assign_source_18 );
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain__traversal;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 183;
        tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_breadth_first_order,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_breadth_first_order );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_breadth_first_order, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_depth_first_order,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_depth_first_order );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_depth_first_order, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_breadth_first_tree,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_breadth_first_tree );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_breadth_first_tree, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_depth_first_tree,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_depth_first_tree );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_depth_first_tree, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_connected_components,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_connected_components );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_connected_components, tmp_assign_source_24 );
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__min_spanning_tree;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_minimum_spanning_tree_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 185;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_minimum_spanning_tree,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_minimum_spanning_tree );
        }

        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_minimum_spanning_tree, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__reordering;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_c8f015fb18b79757b2e18c9a89eafe5e_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 186;
        tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_reverse_cuthill_mckee,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_reverse_cuthill_mckee );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_reverse_cuthill_mckee, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_maximum_bipartite_matching,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_maximum_bipartite_matching );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_maximum_bipartite_matching, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_structural_rank,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_structural_rank );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_structural_rank, tmp_assign_source_29 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__tools;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_22d8f21877885182507407053d7b4644_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 188;
        tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_5__module == NULL );
        tmp_import_from_5__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_20 ) )
        {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_construct_dist_matrix,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_construct_dist_matrix );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_construct_dist_matrix, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_21 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_21 ) )
        {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_reconstruct_path,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_reconstruct_path );
        }

        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_reconstruct_path, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_22 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_22 ) )
        {
           tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_csgraph_from_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_csgraph_from_dense );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_from_dense, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_23 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_23 ) )
        {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_csgraph_to_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_csgraph_to_dense );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_to_dense, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_24 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_24 ) )
        {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_csgraph_masked_from_dense,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_csgraph_masked_from_dense );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_masked_from_dense, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_25 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_25 ) )
        {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_csgraph_from_masked,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_csgraph_from_masked );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_from_masked, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_5__module );
        tmp_import_name_from_26 = tmp_import_from_5__module;
        if ( PyModule_Check( tmp_import_name_from_26 ) )
        {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_scipy$sparse$csgraph,
                const_str_plain_csgraph_to_masked,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_csgraph_to_masked );
        }

        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_to_masked, tmp_assign_source_37 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_f7a7d46a596e4d3ebb7555599bda3d87;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$sparse$csgraph;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_PytestTester_tuple;
        tmp_level_name_7 = const_int_0;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 192;
        tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_PytestTester );
        Py_DECREF( tmp_import_name_from_27 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_PytestTester, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_PytestTester );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PytestTester );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_called_name_4 = tmp_mvar_value_3;
        frame_41284a3a620e9212ac74d4ba93f61f95->m_frame.f_lineno = 193;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_8d648240c1bd08d42b98682238e12be6_tuple, 0 ) );

        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_39 );
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$sparse$csgraph, const_str_plain_PytestTester );
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

        exception_lineno = 194;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_41284a3a620e9212ac74d4ba93f61f95 );
#endif
    popFrameStack();

    assertFrameObject( frame_41284a3a620e9212ac74d4ba93f61f95 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_41284a3a620e9212ac74d4ba93f61f95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_41284a3a620e9212ac74d4ba93f61f95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_41284a3a620e9212ac74d4ba93f61f95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_41284a3a620e9212ac74d4ba93f61f95, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csgraph );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
