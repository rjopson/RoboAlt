/* Generated code for Python module 'defusedxml'
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

/* The "_module_defusedxml" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_defusedxml;
PyDictObject *moduledict_defusedxml;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_defusedxml;
static PyObject *const_str_plain_NUITKA_PACKAGE_defusedxml;
static PyObject *const_str_plain_defused;
extern PyObject *const_str_plain_environ;
static PyObject *const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_defused_mod;
extern PyObject *const_str_plain_ElementTree;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_cElementTree;
static PyObject *const_str_digest_e511ce2b59cdfa80bd47f4ea0ed3af19;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_xmlrpc_tuple;
extern PyObject *const_str_plain_sax;
extern PyObject *const_str_plain__apply_defusing;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_cElementTree_tuple;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_DefusedXmlException;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_xmlrpc;
static PyObject *const_list_00ce7959c59dba3e5ed10cd658329a21_list;
extern PyObject *const_str_plain_expatreader;
extern PyObject *const_str_plain_NotSupportedError;
static PyObject *const_tuple_str_plain_minidom_tuple;
static PyObject *const_str_digest_fc916d355f843c8fad5108ad050f3c75;
extern PyObject *const_tuple_str_plain_pulldom_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ExternalReferenceForbidden;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_tuple_781e2f237f7fc502aa90d6df9b4017f4_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_pulldom;
static PyObject *const_str_plain_minidom;
extern PyObject *const_tuple_str_plain_expatbuilder_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_sax_tuple;
static PyObject *const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple;
static PyObject *const_str_digest_6e6b751ce9013bed1f7e744f2181364a;
extern PyObject *const_str_plain_DTDForbidden;
static PyObject *const_tuple_str_plain_ElementTree_tuple;
extern PyObject *const_str_plain_expatbuilder;
extern PyObject *const_str_plain_EntitiesForbidden;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_monkey_patch;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_common;
static PyObject *const_str_digest_7fe3d4e9ffd4994e81e43a41cf9c57c2;
extern PyObject *const_str_plain_stdlib_mod;
static PyObject *const_str_digest_911922ba64bbf1ffc2f6bc469b8dcf7c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_defuse_stdlib;
extern PyObject *const_tuple_str_plain_expatreader_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_defusedxml = UNSTREAM_STRING_ASCII( &constant_bin[ 513624 ], 10, 1 );
    const_str_plain_NUITKA_PACKAGE_defusedxml = UNSTREAM_STRING_ASCII( &constant_bin[ 513634 ], 25, 1 );
    const_str_plain_defused = UNSTREAM_STRING_ASCII( &constant_bin[ 513624 ], 7, 1 );
    const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 0, const_str_plain_defused ); Py_INCREF( const_str_plain_defused );
    const_str_plain_cElementTree = UNSTREAM_STRING_ASCII( &constant_bin[ 513659 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 1, const_str_plain_cElementTree ); Py_INCREF( const_str_plain_cElementTree );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 2, const_str_plain_ElementTree ); Py_INCREF( const_str_plain_ElementTree );
    const_str_plain_minidom = UNSTREAM_STRING_ASCII( &constant_bin[ 513671 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 3, const_str_plain_minidom ); Py_INCREF( const_str_plain_minidom );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 4, const_str_plain_pulldom ); Py_INCREF( const_str_plain_pulldom );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 5, const_str_plain_sax ); Py_INCREF( const_str_plain_sax );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 6, const_str_plain_expatbuilder ); Py_INCREF( const_str_plain_expatbuilder );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 7, const_str_plain_expatreader ); Py_INCREF( const_str_plain_expatreader );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 8, const_str_plain_xmlrpc ); Py_INCREF( const_str_plain_xmlrpc );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 9, const_str_plain_defused_mod ); Py_INCREF( const_str_plain_defused_mod );
    PyTuple_SET_ITEM( const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 10, const_str_plain_stdlib_mod ); Py_INCREF( const_str_plain_stdlib_mod );
    const_str_digest_e511ce2b59cdfa80bd47f4ea0ed3af19 = UNSTREAM_STRING_ASCII( &constant_bin[ 513678 ], 108, 0 );
    const_tuple_str_plain_xmlrpc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_xmlrpc_tuple, 0, const_str_plain_xmlrpc ); Py_INCREF( const_str_plain_xmlrpc );
    const_tuple_str_plain_cElementTree_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cElementTree_tuple, 0, const_str_plain_cElementTree ); Py_INCREF( const_str_plain_cElementTree );
    const_list_00ce7959c59dba3e5ed10cd658329a21_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_00ce7959c59dba3e5ed10cd658329a21_list, 0, const_str_plain_DefusedXmlException ); Py_INCREF( const_str_plain_DefusedXmlException );
    PyList_SET_ITEM( const_list_00ce7959c59dba3e5ed10cd658329a21_list, 1, const_str_plain_DTDForbidden ); Py_INCREF( const_str_plain_DTDForbidden );
    PyList_SET_ITEM( const_list_00ce7959c59dba3e5ed10cd658329a21_list, 2, const_str_plain_EntitiesForbidden ); Py_INCREF( const_str_plain_EntitiesForbidden );
    PyList_SET_ITEM( const_list_00ce7959c59dba3e5ed10cd658329a21_list, 3, const_str_plain_ExternalReferenceForbidden ); Py_INCREF( const_str_plain_ExternalReferenceForbidden );
    PyList_SET_ITEM( const_list_00ce7959c59dba3e5ed10cd658329a21_list, 4, const_str_plain_NotSupportedError ); Py_INCREF( const_str_plain_NotSupportedError );
    const_tuple_str_plain_minidom_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_minidom_tuple, 0, const_str_plain_minidom ); Py_INCREF( const_str_plain_minidom );
    const_str_digest_fc916d355f843c8fad5108ad050f3c75 = UNSTREAM_STRING_ASCII( &constant_bin[ 513786 ], 22, 0 );
    const_tuple_781e2f237f7fc502aa90d6df9b4017f4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_781e2f237f7fc502aa90d6df9b4017f4_tuple, 0, const_str_plain_NUITKA_PACKAGE_defusedxml ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_defusedxml );
    PyTuple_SET_ITEM( const_tuple_781e2f237f7fc502aa90d6df9b4017f4_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_str_plain_sax_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sax_tuple, 0, const_str_plain_sax ); Py_INCREF( const_str_plain_sax );
    const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 0, const_str_plain_DefusedXmlException ); Py_INCREF( const_str_plain_DefusedXmlException );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 1, const_str_plain_DTDForbidden ); Py_INCREF( const_str_plain_DTDForbidden );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 2, const_str_plain_EntitiesForbidden ); Py_INCREF( const_str_plain_EntitiesForbidden );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 3, const_str_plain_ExternalReferenceForbidden ); Py_INCREF( const_str_plain_ExternalReferenceForbidden );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 4, const_str_plain_NotSupportedError ); Py_INCREF( const_str_plain_NotSupportedError );
    PyTuple_SET_ITEM( const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple, 5, const_str_plain__apply_defusing ); Py_INCREF( const_str_plain__apply_defusing );
    const_str_digest_6e6b751ce9013bed1f7e744f2181364a = UNSTREAM_STRING_ASCII( &constant_bin[ 513808 ], 5, 0 );
    const_tuple_str_plain_ElementTree_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ElementTree_tuple, 0, const_str_plain_ElementTree ); Py_INCREF( const_str_plain_ElementTree );
    const_str_digest_7fe3d4e9ffd4994e81e43a41cf9c57c2 = UNSTREAM_STRING_ASCII( &constant_bin[ 513813 ], 19, 0 );
    const_str_digest_911922ba64bbf1ffc2f6bc469b8dcf7c = UNSTREAM_STRING_ASCII( &constant_bin[ 513832 ], 50, 0 );
    const_str_plain_defuse_stdlib = UNSTREAM_STRING_ASCII( &constant_bin[ 513882 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_defusedxml( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_95d6c60e01eca16e3fe78e55f55a3019;
static PyCodeObject *codeobj_3fb2dfdac079dd5c6fe015219fe0e205;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fc916d355f843c8fad5108ad050f3c75 );
    codeobj_95d6c60e01eca16e3fe78e55f55a3019 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7fe3d4e9ffd4994e81e43a41cf9c57c2, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3fb2dfdac079dd5c6fe015219fe0e205 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_defuse_stdlib, 20, const_tuple_b9b0d363697c4a7e70f1ba131faa332b_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_defusedxml$$$function_1_defuse_stdlib(  );


// The module function definitions.
static PyObject *impl_defusedxml$$$function_1_defuse_stdlib( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_defused = NULL;
    PyObject *var_cElementTree = NULL;
    PyObject *var_ElementTree = NULL;
    PyObject *var_minidom = NULL;
    PyObject *var_pulldom = NULL;
    PyObject *var_sax = NULL;
    PyObject *var_expatbuilder = NULL;
    PyObject *var_expatreader = NULL;
    PyObject *var_xmlrpc = NULL;
    PyObject *var_defused_mod = NULL;
    PyObject *var_stdlib_mod = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3fb2dfdac079dd5c6fe015219fe0e205;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3fb2dfdac079dd5c6fe015219fe0e205 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_defused == NULL );
        var_defused = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fb2dfdac079dd5c6fe015219fe0e205, codeobj_3fb2dfdac079dd5c6fe015219fe0e205, module_defusedxml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fb2dfdac079dd5c6fe015219fe0e205 = cache_frame_3fb2dfdac079dd5c6fe015219fe0e205;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fb2dfdac079dd5c6fe015219fe0e205 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fb2dfdac079dd5c6fe015219fe0e205 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_empty;
        tmp_globals_name_1 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_cElementTree_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 27;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_cElementTree,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_cElementTree );
        }

        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cElementTree == NULL );
        var_cElementTree = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_empty;
        tmp_globals_name_2 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_ElementTree_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 28;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_ElementTree,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ElementTree );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ElementTree == NULL );
        var_ElementTree = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_minidom_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 29;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_minidom,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_minidom );
        }

        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_minidom == NULL );
        var_minidom = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_empty;
        tmp_globals_name_4 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_pulldom_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 30;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_pulldom,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_pulldom );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pulldom == NULL );
        var_pulldom = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_empty;
        tmp_globals_name_5 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_sax_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 31;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_sax,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_sax );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sax == NULL );
        var_sax = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_empty;
        tmp_globals_name_6 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_expatbuilder_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 32;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_expatbuilder,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_expatbuilder );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expatbuilder == NULL );
        var_expatbuilder = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_empty;
        tmp_globals_name_7 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_expatreader_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 33;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_expatreader,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_expatreader );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_expatreader == NULL );
        var_expatreader = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_empty;
        tmp_globals_name_8 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_xmlrpc_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 34;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_xmlrpc,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_xmlrpc );
        }

        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_xmlrpc == NULL );
        var_xmlrpc = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_xmlrpc );
        tmp_called_instance_1 = var_xmlrpc;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_monkey_patch );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    tmp_dictset_value = Py_None;
    CHECK_OBJECT( var_defused );
    tmp_dictset_dict = var_defused;
    CHECK_OBJECT( var_xmlrpc );
    tmp_dictset_key = var_xmlrpc;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_cElementTree );
        tmp_tuple_element_1 = var_cElementTree;
        tmp_iter_arg_1 = PyTuple_New( 7 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_ElementTree );
        tmp_tuple_element_1 = var_ElementTree;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_minidom );
        tmp_tuple_element_1 = var_minidom;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_pulldom );
        tmp_tuple_element_1 = var_pulldom;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( var_sax );
        tmp_tuple_element_1 = var_sax;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 4, tmp_tuple_element_1 );
        CHECK_OBJECT( var_expatbuilder );
        tmp_tuple_element_1 = var_expatbuilder;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 5, tmp_tuple_element_1 );
        CHECK_OBJECT( var_expatreader );
        tmp_tuple_element_1 = var_expatreader;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_iter_arg_1, 6, tmp_tuple_element_1 );
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_10 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooooooooooo";
                exception_lineno = 39;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_defused_mod;
            var_defused_mod = tmp_assign_source_12;
            Py_INCREF( var_defused_mod );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain__apply_defusing );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__apply_defusing );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_apply_defusing" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_defused_mod );
        tmp_args_element_name_1 = var_defused_mod;
        frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_stdlib_mod;
            var_stdlib_mod = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    CHECK_OBJECT( var_stdlib_mod );
    tmp_dictset_value = var_stdlib_mod;
    CHECK_OBJECT( var_defused );
    tmp_dictset_dict = var_defused;
    CHECK_OBJECT( var_defused_mod );
    tmp_dictset_key = var_defused_mod;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fb2dfdac079dd5c6fe015219fe0e205 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fb2dfdac079dd5c6fe015219fe0e205 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fb2dfdac079dd5c6fe015219fe0e205, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fb2dfdac079dd5c6fe015219fe0e205->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fb2dfdac079dd5c6fe015219fe0e205, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fb2dfdac079dd5c6fe015219fe0e205,
        type_description_1,
        var_defused,
        var_cElementTree,
        var_ElementTree,
        var_minidom,
        var_pulldom,
        var_sax,
        var_expatbuilder,
        var_expatreader,
        var_xmlrpc,
        var_defused_mod,
        var_stdlib_mod
    );


    // Release cached frame.
    if ( frame_3fb2dfdac079dd5c6fe015219fe0e205 == cache_frame_3fb2dfdac079dd5c6fe015219fe0e205 )
    {
        Py_DECREF( frame_3fb2dfdac079dd5c6fe015219fe0e205 );
    }
    cache_frame_3fb2dfdac079dd5c6fe015219fe0e205 = NULL;

    assertFrameObject( frame_3fb2dfdac079dd5c6fe015219fe0e205 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_defused );
    tmp_return_value = var_defused;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( defusedxml$$$function_1_defuse_stdlib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_defused );
    Py_DECREF( var_defused );
    var_defused = NULL;

    CHECK_OBJECT( (PyObject *)var_cElementTree );
    Py_DECREF( var_cElementTree );
    var_cElementTree = NULL;

    CHECK_OBJECT( (PyObject *)var_ElementTree );
    Py_DECREF( var_ElementTree );
    var_ElementTree = NULL;

    CHECK_OBJECT( (PyObject *)var_minidom );
    Py_DECREF( var_minidom );
    var_minidom = NULL;

    CHECK_OBJECT( (PyObject *)var_pulldom );
    Py_DECREF( var_pulldom );
    var_pulldom = NULL;

    CHECK_OBJECT( (PyObject *)var_sax );
    Py_DECREF( var_sax );
    var_sax = NULL;

    CHECK_OBJECT( (PyObject *)var_expatbuilder );
    Py_DECREF( var_expatbuilder );
    var_expatbuilder = NULL;

    CHECK_OBJECT( (PyObject *)var_expatreader );
    Py_DECREF( var_expatreader );
    var_expatreader = NULL;

    CHECK_OBJECT( (PyObject *)var_xmlrpc );
    Py_DECREF( var_xmlrpc );
    var_xmlrpc = NULL;

    Py_XDECREF( var_defused_mod );
    var_defused_mod = NULL;

    Py_XDECREF( var_stdlib_mod );
    var_stdlib_mod = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)var_defused );
    Py_DECREF( var_defused );
    var_defused = NULL;

    Py_XDECREF( var_cElementTree );
    var_cElementTree = NULL;

    Py_XDECREF( var_ElementTree );
    var_ElementTree = NULL;

    Py_XDECREF( var_minidom );
    var_minidom = NULL;

    Py_XDECREF( var_pulldom );
    var_pulldom = NULL;

    Py_XDECREF( var_sax );
    var_sax = NULL;

    Py_XDECREF( var_expatbuilder );
    var_expatbuilder = NULL;

    Py_XDECREF( var_expatreader );
    var_expatreader = NULL;

    Py_XDECREF( var_xmlrpc );
    var_xmlrpc = NULL;

    Py_XDECREF( var_defused_mod );
    var_defused_mod = NULL;

    Py_XDECREF( var_stdlib_mod );
    var_stdlib_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( defusedxml$$$function_1_defuse_stdlib );
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



static PyObject *MAKE_FUNCTION_defusedxml$$$function_1_defuse_stdlib(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_defusedxml$$$function_1_defuse_stdlib,
        const_str_plain_defuse_stdlib,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3fb2dfdac079dd5c6fe015219fe0e205,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_defusedxml,
        const_str_digest_e511ce2b59cdfa80bd47f4ea0ed3af19,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_defusedxml =
{
    PyModuleDef_HEAD_INIT,
    "defusedxml",
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

MOD_INIT_DECL( defusedxml )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_defusedxml );
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
    puts("defusedxml: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("defusedxml: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdefusedxml" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_defusedxml = Py_InitModule4(
        "defusedxml",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_defusedxml = PyModule_Create( &mdef_defusedxml );
#endif

    moduledict_defusedxml = MODULE_DICT( module_defusedxml );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_defusedxml,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_defusedxml,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_defusedxml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_defusedxml );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_defusedxml, module_defusedxml );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_95d6c60e01eca16e3fe78e55f55a3019;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_911922ba64bbf1ffc2f6bc469b8dcf7c;
        UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_95d6c60e01eca16e3fe78e55f55a3019 = MAKE_MODULE_FRAME( codeobj_95d6c60e01eca16e3fe78e55f55a3019, module_defusedxml );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_95d6c60e01eca16e3fe78e55f55a3019 );
    assert( Py_REFCNT( frame_95d6c60e01eca16e3fe78e55f55a3019 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 1;
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
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 1;
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
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 1;
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
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_781e2f237f7fc502aa90d6df9b4017f4_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 8;
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
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_common;
        tmp_globals_name_1 = (PyObject *)moduledict_defusedxml;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_f29c767af38026b330b5b58ed5c73ee7_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame.f_lineno = 10;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_DefusedXmlException,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DefusedXmlException );
        }

        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_DefusedXmlException, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_DTDForbidden,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_DTDForbidden );
        }

        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_DTDForbidden, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_EntitiesForbidden,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_EntitiesForbidden );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_EntitiesForbidden, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_ExternalReferenceForbidden,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ExternalReferenceForbidden );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_ExternalReferenceForbidden, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_defusedxml,
                const_str_plain_NotSupportedError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_NotSupportedError );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_NotSupportedError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_defusedxml,
                const_str_plain__apply_defusing,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__apply_defusing );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain__apply_defusing, tmp_assign_source_14 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95d6c60e01eca16e3fe78e55f55a3019 );
#endif
    popFrameStack();

    assertFrameObject( frame_95d6c60e01eca16e3fe78e55f55a3019 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95d6c60e01eca16e3fe78e55f55a3019 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95d6c60e01eca16e3fe78e55f55a3019, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95d6c60e01eca16e3fe78e55f55a3019->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95d6c60e01eca16e3fe78e55f55a3019, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_defusedxml$$$function_1_defuse_stdlib(  );



        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain_defuse_stdlib, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_str_digest_6e6b751ce9013bed1f7e744f2181364a;
        UPDATE_STRING_DICT0( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = LIST_COPY( const_list_00ce7959c59dba3e5ed10cd658329a21_list );
        UPDATE_STRING_DICT1( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_defusedxml, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_defusedxml );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
