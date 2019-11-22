/* Generated code for Python module 'scipy.optimize._root_scalar'
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

/* The "_module_scipy$optimize$_root_scalar" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_root_scalar;
PyDictObject *moduledict_scipy$optimize$_root_scalar;

/* The declarations of module constants used, if any. */
static PyObject *const_dict_e043f56bd4288fb050010af8f530241b;
static PyObject *const_str_plain_optzeros;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_dict_47da07d1a054fc479d4694625afa2571;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_halley;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_10d81648aba553a61dc3b9d0c7b267e1;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_x1;
static PyObject *const_str_plain__root_scalar_brenth_doc;
extern PyObject *const_str_plain_vals;
static PyObject *const_str_plain_MemoizeDer;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_fprime;
static PyObject *const_str_digest_def942ff8dc84d9bbab670b0fe966bc7;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_callable;
static PyObject *const_str_digest_46718ffb56a96326eb36b030f2d9b786;
static PyObject *const_str_plain__root_scalar_halley_doc;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_slice_none_int_pos_2_none;
extern PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_args_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_newton;
static PyObject *const_str_digest_0798bf28f94a528b3f78449bf95184b4;
extern PyObject *const_str_plain_bracket;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain__root_scalar_newton_doc;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_is_memoized;
static PyObject *const_str_plain__root_scalar_secant_doc;
static PyObject *const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple;
static PyObject *const_tuple_str_plain_MemoizeDer_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_5a5b95827bb250d54d36367ad985f79a;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_b5e284c3f1b228d0a4188b085f969809;
extern PyObject *const_tuple_str_plain_self_str_plain_fun_tuple;
extern PyObject *const_str_plain_x0;
static PyObject *const_list_e38da33ad121898453160915d82b3980_list;
extern PyObject *const_str_plain_xtol;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_disp;
static PyObject *const_list_str_plain_newton_list;
static PyObject *const_str_digest_2a6340d6181a8f0f0c769d7e1043f046;
extern PyObject *const_str_plain_fg;
static PyObject *const_list_str_plain_secant_list;
static PyObject *const_tuple_b7a00fbfa8d97369a7e928fabae5ef8e_tuple;
extern PyObject *const_str_plain_function_calls;
static PyObject *const_str_plain__root_scalar_toms748_doc;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_669a104b5210fdf0856507516c730245;
static PyObject *const_str_digest_8c907f2b5dd4b15a5bc2cdd945a94b7e;
extern PyObject *const_str_plain_brenth;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_bisect;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_98b525d05d7343cf695fbee069ddb8dc;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_f;
static PyObject *const_str_digest_15734d24c244dd0e4ea77fc1fd15c29e;
extern PyObject *const_str_plain_pop;
extern PyObject *const_int_0;
static PyObject *const_str_digest_67aafb655fc659190b8cf073327f5de7;
static PyObject *const_str_plain__root_scalar_brentq_doc;
static PyObject *const_str_digest_6638bf1f24637d2177498531beea460c;
extern PyObject *const_tuple_str_plain_callable_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_n_calls;
extern PyObject *const_str_plain_toms748;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_6d21fa6b6d3ba4b68433a94d2d505a50;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple;
static PyObject *const_str_plain__root_scalar_ridder_doc;
static PyObject *const_str_digest_946c705f201da2c4ef0423645263b040;
static PyObject *const_str_digest_3fbe91d9260f43ef4cb2662743413eaf;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_root_scalar;
static PyObject *const_str_plain__root_scalar_bisect_doc;
extern PyObject *const_str_plain_full_output;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_tuple_str_plain_self_str_plain_x_str_plain_args_str_plain_fg_tuple;
static PyObject *const_str_digest_115dfaa0daf4d332844aaeb658b9d56c;
static PyObject *const_str_digest_6346f12032a993c94ea542dd8159090c;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_f5ffba94f7bbdfb420af91042ab0fde9;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
extern PyObject *const_tuple_str_plain_xtol_tuple;
static PyObject *const_str_digest_9317b1c394d42c42b8469cbf10913555;
extern PyObject *const_str_plain_brentq;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_self;
extern PyObject *const_slice_none_none_none;
static PyObject *const_list_str_plain_halley_list;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_method;
static PyObject *const_list_str_plain_root_scalar_list;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_ncalls;
static PyObject *const_str_digest_1a7190ab2390025a454caa9547efb4a2;
static PyObject *const_str_digest_ffa2d3064887f658a651b5df68be3484;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_fprime2;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_ridder;
static PyObject *const_str_plain_secant;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_a2bb33dbb991e64b02208af925e67405;
static PyObject *const_str_digest_0efb5dff7caa9469ddb5b6be66a8b0a1;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_zeros_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_dict_e043f56bd4288fb050010af8f530241b = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_e043f56bd4288fb050010af8f530241b, const_str_plain_full_output, Py_True );
    PyDict_SetItem( const_dict_e043f56bd4288fb050010af8f530241b, const_str_plain_disp, Py_False );
    assert( PyDict_Size( const_dict_e043f56bd4288fb050010af8f530241b ) == 2 );
    const_str_plain_optzeros = UNSTREAM_STRING_ASCII( &constant_bin[ 5019870 ], 8, 1 );
    const_dict_47da07d1a054fc479d4694625afa2571 = _PyDict_NewPresized( 2 );
    const_str_plain_halley = UNSTREAM_STRING_ASCII( &constant_bin[ 4699961 ], 6, 1 );
    PyDict_SetItem( const_dict_47da07d1a054fc479d4694625afa2571, const_str_plain_halley, const_str_plain_newton );
    const_str_plain_secant = UNSTREAM_STRING_ASCII( &constant_bin[ 4699930 ], 6, 1 );
    PyDict_SetItem( const_dict_47da07d1a054fc479d4694625afa2571, const_str_plain_secant, const_str_plain_newton );
    assert( PyDict_Size( const_dict_47da07d1a054fc479d4694625afa2571 ) == 2 );
    const_str_digest_10d81648aba553a61dc3b9d0c7b267e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019878 ], 26, 0 );
    const_str_plain__root_scalar_brenth_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019904 ], 23, 1 );
    const_str_plain_MemoizeDer = UNSTREAM_STRING_ASCII( &constant_bin[ 5019927 ], 10, 1 );
    const_str_digest_def942ff8dc84d9bbab670b0fe966bc7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019937 ], 17, 0 );
    const_str_digest_46718ffb56a96326eb36b030f2d9b786 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019954 ], 19, 0 );
    const_str_plain__root_scalar_halley_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5019973 ], 23, 1 );
    const_str_digest_0798bf28f94a528b3f78449bf95184b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 5019996 ], 149, 0 );
    const_str_plain__root_scalar_newton_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5020145 ], 23, 1 );
    const_str_plain_is_memoized = UNSTREAM_STRING_ASCII( &constant_bin[ 5020168 ], 11, 1 );
    const_str_plain__root_scalar_secant_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5020179 ], 23, 1 );
    const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple, 0, const_str_plain_xtol ); Py_INCREF( const_str_plain_xtol );
    PyTuple_SET_ITEM( const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple, 1, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple, 2, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    const_tuple_str_plain_MemoizeDer_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MemoizeDer_tuple_type_object_tuple_tuple, 0, const_str_plain_MemoizeDer ); Py_INCREF( const_str_plain_MemoizeDer );
    PyTuple_SET_ITEM( const_tuple_str_plain_MemoizeDer_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_5a5b95827bb250d54d36367ad985f79a = UNSTREAM_STRING_ASCII( &constant_bin[ 5020202 ], 31, 0 );
    const_str_digest_b5e284c3f1b228d0a4188b085f969809 = UNSTREAM_STRING_ASCII( &constant_bin[ 5020233 ], 27, 0 );
    const_list_e38da33ad121898453160915d82b3980_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_e38da33ad121898453160915d82b3980_list, 0, const_str_plain_bisect ); Py_INCREF( const_str_plain_bisect );
    PyList_SET_ITEM( const_list_e38da33ad121898453160915d82b3980_list, 1, const_str_plain_ridder ); Py_INCREF( const_str_plain_ridder );
    PyList_SET_ITEM( const_list_e38da33ad121898453160915d82b3980_list, 2, const_str_plain_brentq ); Py_INCREF( const_str_plain_brentq );
    PyList_SET_ITEM( const_list_e38da33ad121898453160915d82b3980_list, 3, const_str_plain_brenth ); Py_INCREF( const_str_plain_brenth );
    PyList_SET_ITEM( const_list_e38da33ad121898453160915d82b3980_list, 4, const_str_plain_toms748 ); Py_INCREF( const_str_plain_toms748 );
    const_list_str_plain_newton_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_newton_list, 0, const_str_plain_newton ); Py_INCREF( const_str_plain_newton );
    const_str_digest_2a6340d6181a8f0f0c769d7e1043f046 = UNSTREAM_STRING_ASCII( &constant_bin[ 5020260 ], 21, 0 );
    const_list_str_plain_secant_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_secant_list, 0, const_str_plain_secant ); Py_INCREF( const_str_plain_secant );
    const_tuple_b7a00fbfa8d97369a7e928fabae5ef8e_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5020281 ], 164 );
    const_str_plain__root_scalar_toms748_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5020445 ], 24, 1 );
    const_str_digest_669a104b5210fdf0856507516c730245 = UNSTREAM_STRING_ASCII( &constant_bin[ 5020469 ], 516, 0 );
    const_str_digest_8c907f2b5dd4b15a5bc2cdd945a94b7e = UNSTREAM_STRING_ASCII( &constant_bin[ 5020985 ], 18, 0 );
    const_str_digest_98b525d05d7343cf695fbee069ddb8dc = UNSTREAM_STRING_ASCII( &constant_bin[ 5021003 ], 801, 0 );
    const_str_digest_15734d24c244dd0e4ea77fc1fd15c29e = UNSTREAM_STRING_ASCII( &constant_bin[ 5021804 ], 26, 0 );
    const_str_digest_67aafb655fc659190b8cf073327f5de7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5021830 ], 1137, 0 );
    const_str_plain__root_scalar_brentq_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5022967 ], 23, 1 );
    const_str_digest_6638bf1f24637d2177498531beea460c = UNSTREAM_STRING_ASCII( &constant_bin[ 5022990 ], 419, 0 );
    const_str_plain_n_calls = UNSTREAM_STRING_ASCII( &constant_bin[ 5020438 ], 7, 1 );
    const_str_digest_6d21fa6b6d3ba4b68433a94d2d505a50 = UNSTREAM_STRING_ASCII( &constant_bin[ 5023409 ], 32, 0 );
    const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 9, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple, 10, Py_None ); Py_INCREF( Py_None );
    const_str_plain__root_scalar_ridder_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5023441 ], 23, 1 );
    const_str_digest_946c705f201da2c4ef0423645263b040 = UNSTREAM_STRING_ASCII( &constant_bin[ 5023464 ], 410, 0 );
    const_str_digest_3fbe91d9260f43ef4cb2662743413eaf = UNSTREAM_STRING_ASCII( &constant_bin[ 5023874 ], 36, 0 );
    const_str_plain_root_scalar = UNSTREAM_STRING_ASCII( &constant_bin[ 4695311 ], 11, 1 );
    const_str_plain__root_scalar_bisect_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5023910 ], 23, 1 );
    const_str_digest_115dfaa0daf4d332844aaeb658b9d56c = UNSTREAM_STRING_ASCII( &constant_bin[ 5023933 ], 19, 0 );
    const_str_digest_6346f12032a993c94ea542dd8159090c = UNSTREAM_STRING_ASCII( &constant_bin[ 5023952 ], 44, 0 );
    const_str_digest_f5ffba94f7bbdfb420af91042ab0fde9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5023996 ], 47, 0 );
    const_str_digest_9317b1c394d42c42b8469cbf10913555 = UNSTREAM_STRING_ASCII( &constant_bin[ 5024043 ], 73, 0 );
    const_list_str_plain_halley_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_halley_list, 0, const_str_plain_halley ); Py_INCREF( const_str_plain_halley );
    const_list_str_plain_root_scalar_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_root_scalar_list, 0, const_str_plain_root_scalar ); Py_INCREF( const_str_plain_root_scalar );
    const_str_digest_1a7190ab2390025a454caa9547efb4a2 = UNSTREAM_STRING_ASCII( &constant_bin[ 5024116 ], 30, 0 );
    const_str_digest_ffa2d3064887f658a651b5df68be3484 = UNSTREAM_STRING_ASCII( &constant_bin[ 5024146 ], 48, 0 );
    const_str_plain_fprime2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4700947 ], 7, 1 );
    const_str_digest_a2bb33dbb991e64b02208af925e67405 = UNSTREAM_STRING_ASCII( &constant_bin[ 5020985 ], 17, 0 );
    const_str_digest_0efb5dff7caa9469ddb5b6be66a8b0a1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5024194 ], 4254, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_root_scalar( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d1a39f13190493aa4ed181c767708418;
static PyCodeObject *codeobj_107eef94837c488cfa418b89f62f029f;
static PyCodeObject *codeobj_238b884838e0bc1fc4db57119183271b;
static PyCodeObject *codeobj_e32e29412dbd0fb7d3179901a9902bfb;
static PyCodeObject *codeobj_e62c943e8b50a6f85f7a74a6962001e3;
static PyCodeObject *codeobj_ba9477bc3f95f5bd0471ceb93728a7bd;
static PyCodeObject *codeobj_eb74b9fb0d7f53883464e1de37c662b6;
static PyCodeObject *codeobj_d4cef96bedfdc25f9e990e71f6f86b80;
static PyCodeObject *codeobj_626bc75a99d136a730e562019553b049;
static PyCodeObject *codeobj_3b400145016f494c2719259ef141cbb6;
static PyCodeObject *codeobj_ec81ec1d6ee47b4a78e474f50894981d;
static PyCodeObject *codeobj_66e69b4c1f16e05952fd03b78e22189f;
static PyCodeObject *codeobj_e2d85505e76dd224b5d2d5932510708d;
static PyCodeObject *codeobj_f12cb816fee7319bc5685840f74100c1;
static PyCodeObject *codeobj_cddb94c379bdedfbf04db63263e2d295;
static PyCodeObject *codeobj_61742a80cec5c57357260597e787192f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1a7190ab2390025a454caa9547efb4a2 );
    codeobj_d1a39f13190493aa4ed181c767708418 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3fbe91d9260f43ef4cb2662743413eaf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_107eef94837c488cfa418b89f62f029f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MemoizeDer, 19, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_238b884838e0bc1fc4db57119183271b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 35, const_tuple_str_plain_self_str_plain_x_str_plain_args_str_plain_fg_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_e32e29412dbd0fb7d3179901a9902bfb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 29, const_tuple_str_plain_self_str_plain_fun_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e62c943e8b50a6f85f7a74a6962001e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_bisect_doc, 445, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ba9477bc3f95f5bd0471ceb93728a7bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_brenth_doc, 309, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_eb74b9fb0d7f53883464e1de37c662b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_brentq_doc, 290, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d4cef96bedfdc25f9e990e71f6f86b80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_halley_doc, 395, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_626bc75a99d136a730e562019553b049 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_newton_doc, 369, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3b400145016f494c2719259ef141cbb6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_ridder_doc, 426, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ec81ec1d6ee47b4a78e474f50894981d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_secant_doc, 346, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_66e69b4c1f16e05952fd03b78e22189f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__root_scalar_toms748_doc, 327, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e2d85505e76dd224b5d2d5932510708d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fprime, 45, const_tuple_str_plain_self_str_plain_x_str_plain_args_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_f12cb816fee7319bc5685840f74100c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fprime2, 51, const_tuple_str_plain_self_str_plain_x_str_plain_args_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_cddb94c379bdedfbf04db63263e2d295 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ncalls, 57, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_61742a80cec5c57357260597e787192f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_root_scalar, 61, const_tuple_b7a00fbfa8d97369a7e928fabae5ef8e_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_2___call__(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_3_fprime(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_4_fprime2(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_5_ncalls(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_6_root_scalar( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_root_scalar$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fun = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e32e29412dbd0fb7d3179901a9902bfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e32e29412dbd0fb7d3179901a9902bfb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e32e29412dbd0fb7d3179901a9902bfb, codeobj_e32e29412dbd0fb7d3179901a9902bfb, module_scipy$optimize$_root_scalar, sizeof(void *)+sizeof(void *) );
    frame_e32e29412dbd0fb7d3179901a9902bfb = cache_frame_e32e29412dbd0fb7d3179901a9902bfb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e32e29412dbd0fb7d3179901a9902bfb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e32e29412dbd0fb7d3179901a9902bfb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_fun );
        tmp_assattr_name_1 = par_fun;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fun, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_vals, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_x, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_n_calls, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32e29412dbd0fb7d3179901a9902bfb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32e29412dbd0fb7d3179901a9902bfb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e32e29412dbd0fb7d3179901a9902bfb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e32e29412dbd0fb7d3179901a9902bfb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e32e29412dbd0fb7d3179901a9902bfb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e32e29412dbd0fb7d3179901a9902bfb,
        type_description_1,
        par_self,
        par_fun
    );


    // Release cached frame.
    if ( frame_e32e29412dbd0fb7d3179901a9902bfb == cache_frame_e32e29412dbd0fb7d3179901a9902bfb )
    {
        Py_DECREF( frame_e32e29412dbd0fb7d3179901a9902bfb );
    }
    cache_frame_e32e29412dbd0fb7d3179901a9902bfb = NULL;

    assertFrameObject( frame_e32e29412dbd0fb7d3179901a9902bfb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fun );
    Py_DECREF( par_fun );
    par_fun = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_1___init__ );
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


static PyObject *impl_scipy$optimize$_root_scalar$$$function_2___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_fg = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_238b884838e0bc1fc4db57119183271b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_238b884838e0bc1fc4db57119183271b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_238b884838e0bc1fc4db57119183271b, codeobj_238b884838e0bc1fc4db57119183271b, module_scipy$optimize$_root_scalar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_238b884838e0bc1fc4db57119183271b = cache_frame_238b884838e0bc1fc4db57119183271b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_238b884838e0bc1fc4db57119183271b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_238b884838e0bc1fc4db57119183271b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_vals );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fun );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_tuple_element_1 = par_x;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_args );
            tmp_dircall_arg3_1 = par_args;
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_fg == NULL );
            var_fg = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_x );
            tmp_assattr_name_1 = par_x;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_x, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_n_calls );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_n_calls, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 41;
                type_description_1 = "oooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( var_fg );
            tmp_subscribed_name_1 = var_fg;
            tmp_subscript_name_1 = const_slice_none_none_none;
            tmp_assattr_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_vals, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_vals );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_238b884838e0bc1fc4db57119183271b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_238b884838e0bc1fc4db57119183271b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_238b884838e0bc1fc4db57119183271b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_238b884838e0bc1fc4db57119183271b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_238b884838e0bc1fc4db57119183271b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_238b884838e0bc1fc4db57119183271b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_238b884838e0bc1fc4db57119183271b,
        type_description_1,
        par_self,
        par_x,
        par_args,
        var_fg
    );


    // Release cached frame.
    if ( frame_238b884838e0bc1fc4db57119183271b == cache_frame_238b884838e0bc1fc4db57119183271b )
    {
        Py_DECREF( frame_238b884838e0bc1fc4db57119183271b );
    }
    cache_frame_238b884838e0bc1fc4db57119183271b = NULL;

    assertFrameObject( frame_238b884838e0bc1fc4db57119183271b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_2___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_fg );
    var_fg = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_fg );
    var_fg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_2___call__ );
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


static PyObject *impl_scipy$optimize$_root_scalar$$$function_3_fprime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_e2d85505e76dd224b5d2d5932510708d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e2d85505e76dd224b5d2d5932510708d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2d85505e76dd224b5d2d5932510708d, codeobj_e2d85505e76dd224b5d2d5932510708d, module_scipy$optimize$_root_scalar, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e2d85505e76dd224b5d2d5932510708d = cache_frame_e2d85505e76dd224b5d2d5932510708d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2d85505e76dd224b5d2d5932510708d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2d85505e76dd224b5d2d5932510708d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_vals );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_dircall_arg1_1 = par_self;
            CHECK_OBJECT( par_x );
            tmp_tuple_element_1 = par_x;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_args );
            tmp_dircall_arg3_1 = par_args;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_vals );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d85505e76dd224b5d2d5932510708d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d85505e76dd224b5d2d5932510708d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2d85505e76dd224b5d2d5932510708d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2d85505e76dd224b5d2d5932510708d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2d85505e76dd224b5d2d5932510708d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2d85505e76dd224b5d2d5932510708d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2d85505e76dd224b5d2d5932510708d,
        type_description_1,
        par_self,
        par_x,
        par_args
    );


    // Release cached frame.
    if ( frame_e2d85505e76dd224b5d2d5932510708d == cache_frame_e2d85505e76dd224b5d2d5932510708d )
    {
        Py_DECREF( frame_e2d85505e76dd224b5d2d5932510708d );
    }
    cache_frame_e2d85505e76dd224b5d2d5932510708d = NULL;

    assertFrameObject( frame_e2d85505e76dd224b5d2d5932510708d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_3_fprime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_3_fprime );
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


static PyObject *impl_scipy$optimize$_root_scalar$$$function_4_fprime2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_f12cb816fee7319bc5685840f74100c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f12cb816fee7319bc5685840f74100c1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f12cb816fee7319bc5685840f74100c1, codeobj_f12cb816fee7319bc5685840f74100c1, module_scipy$optimize$_root_scalar, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f12cb816fee7319bc5685840f74100c1 = cache_frame_f12cb816fee7319bc5685840f74100c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f12cb816fee7319bc5685840f74100c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f12cb816fee7319bc5685840f74100c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_vals );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_2 = par_x;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_dircall_arg1_1 = par_self;
            CHECK_OBJECT( par_x );
            tmp_tuple_element_1 = par_x;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_args );
            tmp_dircall_arg3_1 = par_args;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_call_result_1 = impl___internal__$$$function_4_complex_call_helper_pos_star_list( dir_call_args );
            }
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_vals );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_2;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 2 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12cb816fee7319bc5685840f74100c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12cb816fee7319bc5685840f74100c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f12cb816fee7319bc5685840f74100c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f12cb816fee7319bc5685840f74100c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f12cb816fee7319bc5685840f74100c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f12cb816fee7319bc5685840f74100c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f12cb816fee7319bc5685840f74100c1,
        type_description_1,
        par_self,
        par_x,
        par_args
    );


    // Release cached frame.
    if ( frame_f12cb816fee7319bc5685840f74100c1 == cache_frame_f12cb816fee7319bc5685840f74100c1 )
    {
        Py_DECREF( frame_f12cb816fee7319bc5685840f74100c1 );
    }
    cache_frame_f12cb816fee7319bc5685840f74100c1 = NULL;

    assertFrameObject( frame_f12cb816fee7319bc5685840f74100c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_4_fprime2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_4_fprime2 );
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


static PyObject *impl_scipy$optimize$_root_scalar$$$function_5_ncalls( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_cddb94c379bdedfbf04db63263e2d295;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cddb94c379bdedfbf04db63263e2d295 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cddb94c379bdedfbf04db63263e2d295, codeobj_cddb94c379bdedfbf04db63263e2d295, module_scipy$optimize$_root_scalar, sizeof(void *) );
    frame_cddb94c379bdedfbf04db63263e2d295 = cache_frame_cddb94c379bdedfbf04db63263e2d295;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cddb94c379bdedfbf04db63263e2d295 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cddb94c379bdedfbf04db63263e2d295 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_n_calls );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cddb94c379bdedfbf04db63263e2d295 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cddb94c379bdedfbf04db63263e2d295 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cddb94c379bdedfbf04db63263e2d295 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cddb94c379bdedfbf04db63263e2d295, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cddb94c379bdedfbf04db63263e2d295->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cddb94c379bdedfbf04db63263e2d295, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cddb94c379bdedfbf04db63263e2d295,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_cddb94c379bdedfbf04db63263e2d295 == cache_frame_cddb94c379bdedfbf04db63263e2d295 )
    {
        Py_DECREF( frame_cddb94c379bdedfbf04db63263e2d295 );
    }
    cache_frame_cddb94c379bdedfbf04db63263e2d295 = NULL;

    assertFrameObject( frame_cddb94c379bdedfbf04db63263e2d295 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_5_ncalls );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_5_ncalls );
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


static PyObject *impl_scipy$optimize$_root_scalar$$$function_6_root_scalar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *par_bracket = python_pars[ 3 ];
    PyObject *par_fprime = python_pars[ 4 ];
    PyObject *par_fprime2 = python_pars[ 5 ];
    PyObject *par_x0 = python_pars[ 6 ];
    PyObject *par_x1 = python_pars[ 7 ];
    PyObject *par_xtol = python_pars[ 8 ];
    PyObject *par_rtol = python_pars[ 9 ];
    PyObject *par_maxiter = python_pars[ 10 ];
    PyObject *par_options = python_pars[ 11 ];
    PyObject *var_is_memoized = NULL;
    PyObject *var_kwargs = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_meth = NULL;
    PyObject *var_map2underlying = NULL;
    PyObject *var_methodc = NULL;
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_r = NULL;
    PyObject *var_sol = NULL;
    PyObject *var_n_calls = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_61742a80cec5c57357260597e787192f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_scipy$optimize$_root_scalar$$$function_6_root_scalar = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_61742a80cec5c57357260597e787192f = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61742a80cec5c57357260597e787192f, codeobj_61742a80cec5c57357260597e787192f, module_scipy$optimize$_root_scalar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61742a80cec5c57357260597e787192f = cache_frame_61742a80cec5c57357260597e787192f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61742a80cec5c57357260597e787192f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61742a80cec5c57357260597e787192f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_args );
            tmp_tuple_element_1 = par_args;
            tmp_assign_source_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_args;
                assert( old != NULL );
                par_args = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_options );
        tmp_compexpr_left_1 = par_options;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyDict_New();
            {
                PyObject *old = par_options;
                assert( old != NULL );
                par_options = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_False;
        assert( var_is_memoized == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_is_memoized = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_fprime2 );
        tmp_compexpr_left_2 = par_fprime2;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_callable );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_fprime2 );
        tmp_args_element_name_1 = par_fprime2;
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_value_name_1;
            CHECK_OBJECT( par_fprime2 );
            tmp_value_name_1 = par_fprime2;
            tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_4;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_MemoizeDer );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MemoizeDer );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MemoizeDer" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 191;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                CHECK_OBJECT( par_f );
                tmp_args_element_name_2 = par_f;
                frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 191;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 191;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_f;
                    assert( old != NULL );
                    par_f = tmp_assign_source_4;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = Py_True;
                {
                    PyObject *old = var_is_memoized;
                    assert( old != NULL );
                    var_is_memoized = tmp_assign_source_5;
                    Py_INCREF( var_is_memoized );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_f );
                tmp_source_name_1 = par_f;
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fprime2 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_fprime2;
                    assert( old != NULL );
                    par_fprime2 = tmp_assign_source_6;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_f );
                tmp_source_name_2 = par_f;
                tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fprime );
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_fprime;
                    assert( old != NULL );
                    par_fprime = tmp_assign_source_7;
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_8;
                tmp_assign_source_8 = Py_None;
                {
                    PyObject *old = par_fprime2;
                    assert( old != NULL );
                    par_fprime2 = tmp_assign_source_8;
                    Py_INCREF( par_fprime2 );
                    Py_DECREF( old );
                }

            }
            branch_end_4:;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        if ( par_fprime == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_fprime;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_2 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_callable );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_callable );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "callable" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        if ( par_fprime == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = par_fprime;
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_value_name_2;
            if ( par_fprime == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 198;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_value_name_2 = par_fprime;
            tmp_res = CHECK_IF_TRUE( tmp_value_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_MemoizeDer );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MemoizeDer );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MemoizeDer" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 199;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                if ( par_f == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 199;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_4 = par_f;
                frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_f;
                    par_f = tmp_assign_source_9;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_10;
                tmp_assign_source_10 = Py_True;
                {
                    PyObject *old = var_is_memoized;
                    var_is_memoized = tmp_assign_source_10;
                    Py_INCREF( var_is_memoized );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_11;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( par_f );
                tmp_source_name_3 = par_f;
                tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fprime );
                if ( tmp_assign_source_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_fprime;
                    par_fprime = tmp_assign_source_11;
                    Py_XDECREF( old );
                }

            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = Py_None;
                {
                    PyObject *old = par_fprime;
                    par_fprime = tmp_assign_source_12;
                    Py_INCREF( par_fprime );
                    Py_XDECREF( old );
                }

            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( var_kwargs == NULL );
        var_kwargs = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_str_plain_xtol_str_plain_rtol_str_plain_maxiter_tuple;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_14 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 207;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_16 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_16;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_5;
        if (locals_scipy$optimize$_root_scalar$$$function_6_root_scalar == NULL) locals_scipy$optimize$_root_scalar$$$function_6_root_scalar = PyDict_New();
        tmp_called_instance_1 = locals_scipy$optimize$_root_scalar$$$function_6_root_scalar;
        Py_INCREF( tmp_called_instance_1 );
        if ( par_f != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_f );
            value = par_f;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_f, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_f );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_args != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_args );
            value = par_args;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_args, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_args );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_method != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_method );
            value = par_method;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_method, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_method );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_bracket != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_bracket );
            value = par_bracket;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_bracket, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_bracket );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_fprime != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_fprime );
            value = par_fprime;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_fprime, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_fprime );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_fprime2 != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_fprime2 );
            value = par_fprime2;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_fprime2, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_fprime2 );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_x0 != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_x0 );
            value = par_x0;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_x0, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_x0 );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_x1 != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_x1 );
            value = par_x1;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_x1, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_x1 );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_xtol != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_xtol );
            value = par_xtol;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_xtol, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_xtol );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_rtol != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_rtol );
            value = par_rtol;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_rtol, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_rtol );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_maxiter != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_maxiter );
            value = par_maxiter;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_maxiter, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_maxiter );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( par_options != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( par_options );
            value = par_options;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_options, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_options );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( var_is_memoized != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( var_is_memoized );
            value = var_is_memoized;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_is_memoized, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_is_memoized );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( var_kwargs != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( var_kwargs );
            value = var_kwargs;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_kwargs, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_kwargs );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( var_k != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( var_k );
            value = var_k;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_k, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_k );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if ( var_v != NULL )
        {
            PyObject *value;
            CHECK_OBJECT( var_v );
            value = var_v;

            UPDATE_STRING_DICT0( (PyDictObject *)tmp_called_instance_1, (Nuitka_StringObject *)const_str_plain_v, value );
        }
        else
        {
            int res = PyDict_DelItem( tmp_called_instance_1, const_str_plain_v );

            if ( res != 0 )
            {
                CLEAR_ERROR_OCCURRED();
            }
        }

        CHECK_OBJECT( var_k );
        tmp_args_element_name_5 = var_k;
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_v );
        tmp_compexpr_left_4 = var_v;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        CHECK_OBJECT( var_v );
        tmp_dictset_value = var_v;
        CHECK_OBJECT( var_kwargs );
        tmp_dictset_dict = var_kwargs;
        CHECK_OBJECT( var_k );
        tmp_dictset_key = var_k;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oooooooooooooooooooooooo";
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_options );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_options );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_kwargs );
            tmp_called_instance_2 = var_kwargs;
            CHECK_OBJECT( par_options );
            tmp_args_element_name_6 = par_options;
            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 214;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_update, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT( var_kwargs );
        tmp_source_name_4 = var_kwargs;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_e043f56bd4288fb050010af8f530241b );
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 217;
        tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( par_method );
        tmp_operand_name_4 = par_method;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_bracket );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_bracket );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assign_source_18;
                tmp_assign_source_18 = const_str_plain_brentq;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_18;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( par_x0 );
                tmp_compexpr_left_5 = par_x0;
                tmp_compexpr_right_5 = Py_None;
                tmp_condition_result_11 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_11;
                }
                else
                {
                    goto branch_no_11;
                }
                branch_yes_11:;
                {
                    nuitka_bool tmp_condition_result_12;
                    int tmp_truth_name_3;
                    if ( par_fprime == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 225;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_truth_name_3 = CHECK_IF_TRUE( par_fprime );
                    if ( tmp_truth_name_3 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 225;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_12 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_12;
                    }
                    else
                    {
                        goto branch_no_12;
                    }
                    branch_yes_12:;
                    {
                        nuitka_bool tmp_condition_result_13;
                        int tmp_truth_name_4;
                        if ( par_fprime2 == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime2" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 226;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_truth_name_4 = CHECK_IF_TRUE( par_fprime2 );
                        if ( tmp_truth_name_4 == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 226;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_13 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_13;
                        }
                        else
                        {
                            goto branch_no_13;
                        }
                        branch_yes_13:;
                        {
                            PyObject *tmp_assign_source_19;
                            tmp_assign_source_19 = const_str_plain_halley;
                            {
                                PyObject *old = par_method;
                                assert( old != NULL );
                                par_method = tmp_assign_source_19;
                                Py_INCREF( par_method );
                                Py_DECREF( old );
                            }

                        }
                        goto branch_end_13;
                        branch_no_13:;
                        {
                            PyObject *tmp_assign_source_20;
                            tmp_assign_source_20 = const_str_plain_newton;
                            {
                                PyObject *old = par_method;
                                assert( old != NULL );
                                par_method = tmp_assign_source_20;
                                Py_INCREF( par_method );
                                Py_DECREF( old );
                            }

                        }
                        branch_end_13:;
                    }
                    goto branch_end_12;
                    branch_no_12:;
                    {
                        PyObject *tmp_assign_source_21;
                        tmp_assign_source_21 = const_str_plain_secant;
                        {
                            PyObject *old = par_method;
                            assert( old != NULL );
                            par_method = tmp_assign_source_21;
                            Py_INCREF( par_method );
                            Py_DECREF( old );
                        }

                    }
                    branch_end_12:;
                }
                branch_no_11:;
            }
            branch_end_10:;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_operand_name_5;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_5 = par_method;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_9317b1c394d42c42b8469cbf10913555;
            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 233;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_3;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_method;
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 236;
        tmp_assign_source_22 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_meth == NULL );
        var_meth = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_Copy( const_dict_47da07d1a054fc479d4694625afa2571 );
        assert( var_map2underlying == NULL );
        var_map2underlying = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_optzeros );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_optzeros );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "optzeros" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_getattr_target_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var_map2underlying );
        tmp_called_instance_4 = var_map2underlying;
        CHECK_OBJECT( var_meth );
        tmp_args_element_name_7 = var_meth;
        CHECK_OBJECT( var_meth );
        tmp_args_element_name_8 = var_meth;
        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_getattr_attr_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, call_args );
        }

        if ( tmp_getattr_attr_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_24 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        Py_DECREF( tmp_getattr_attr_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert( var_methodc == NULL );
        var_methodc = tmp_assign_source_24;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_61742a80cec5c57357260597e787192f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_61742a80cec5c57357260597e787192f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_6 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
            CHECK_OBJECT( var_meth );
            tmp_right_name_1 = var_meth;
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 242;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 242;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto branch_end_15;
        branch_no_15:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 239;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_61742a80cec5c57357260597e787192f->m_frame) frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_4;
        branch_end_15:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_6_root_scalar );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_7 = var_meth;
        tmp_compexpr_right_7 = LIST_COPY( const_list_e38da33ad121898453160915d82b3980_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_7, tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT( par_bracket );
            tmp_isinstance_inst_2 = par_bracket;
            tmp_tuple_element_2 = (PyObject *)&PyList_Type;
            tmp_isinstance_cls_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = (PyObject *)&PyTuple_Type;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_2 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_isinstance_cls_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_6;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndarray );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_isinstance_cls_2 );

                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_isinstance_cls_2, 2, tmp_tuple_element_2 );
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_6 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_17 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_17;
            }
            else
            {
                goto branch_no_17;
            }
            branch_yes_17:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_left_name_2 = const_str_digest_2a6340d6181a8f0f0c769d7e1043f046;
                if ( par_method == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 246;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_2 = par_method;
                tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 246;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 246;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_17:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_bracket );
            tmp_subscribed_name_1 = par_bracket;
            tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
            if ( tmp_assign_source_26 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 248;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
            if ( tmp_assign_source_27 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 248;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
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

                        type_description_1 = "oooooooooooooooooooooooo";
                        exception_lineno = 248;
                        goto try_except_handler_6;
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

                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 248;
                goto try_except_handler_6;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;
            assert( var_a == NULL );
            Py_INCREF( tmp_assign_source_28 );
            var_a = tmp_assign_source_28;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;
            assert( var_b == NULL );
            Py_INCREF( tmp_assign_source_29 );
            var_b = tmp_assign_source_29;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dircall_arg4_1;
            CHECK_OBJECT( var_methodc );
            tmp_dircall_arg1_1 = var_methodc;
            if ( par_f == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_tuple_element_3 = par_f;
            tmp_dircall_arg2_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_a );
            tmp_tuple_element_3 = var_a;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( var_b );
            tmp_tuple_element_3 = var_b;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_3 );
            tmp_dict_key_1 = const_str_plain_args;
            CHECK_OBJECT( par_args );
            tmp_dict_value_1 = par_args;
            tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_kwargs );
            tmp_dircall_arg4_1 = var_kwargs;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg4_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_iter_arg_3 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
            }
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
            if ( tmp_assign_source_31 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 249;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
            if ( tmp_assign_source_32 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 249;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                        type_description_1 = "oooooooooooooooooooooooo";
                        exception_lineno = 249;
                        goto try_except_handler_8;
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

                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 249;
                goto try_except_handler_8;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_1;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_33 = tmp_tuple_unpack_2__element_1;
            assert( var_r == NULL );
            Py_INCREF( tmp_assign_source_33 );
            var_r = tmp_assign_source_33;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_34 = tmp_tuple_unpack_2__element_2;
            assert( var_sol == NULL );
            Py_INCREF( tmp_assign_source_34 );
            var_sol = tmp_assign_source_34;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_16;
        branch_no_16:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_8 = var_meth;
            tmp_compexpr_right_8 = LIST_COPY( const_list_str_plain_secant_list );
            tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_18 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_18;
            }
            else
            {
                goto branch_no_18;
            }
            branch_yes_18:;
            {
                nuitka_bool tmp_condition_result_19;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( par_x0 );
                tmp_compexpr_left_9 = par_x0;
                tmp_compexpr_right_9 = Py_None;
                tmp_condition_result_19 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_19;
                }
                else
                {
                    goto branch_no_19;
                }
                branch_yes_19:;
                {
                    PyObject *tmp_raise_type_4;
                    PyObject *tmp_make_exception_arg_4;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    tmp_left_name_3 = const_str_digest_10d81648aba553a61dc3b9d0c7b267e1;
                    if ( par_method == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 252;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_right_name_3 = par_method;
                    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_make_exception_arg_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 252;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 252;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_4 };
                        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_4 );
                    assert( !(tmp_raise_type_4 == NULL) );
                    exception_type = tmp_raise_type_4;
                    exception_lineno = 252;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_19:;
            }
            {
                nuitka_bool tmp_condition_result_20;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                CHECK_OBJECT( par_x1 );
                tmp_compexpr_left_10 = par_x1;
                tmp_compexpr_right_10 = Py_None;
                tmp_condition_result_20 = ( tmp_compexpr_left_10 == tmp_compexpr_right_10 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_20 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_20;
                }
                else
                {
                    goto branch_no_20;
                }
                branch_yes_20:;
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_make_exception_arg_5;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    tmp_left_name_4 = const_str_digest_15734d24c244dd0e4ea77fc1fd15c29e;
                    if ( par_method == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 254;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_right_name_4 = par_method;
                    tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                    if ( tmp_make_exception_arg_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 254;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 254;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_5 };
                        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_5 );
                    assert( !(tmp_raise_type_5 == NULL) );
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 254;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_20:;
            }
            {
                nuitka_bool tmp_condition_result_21;
                PyObject *tmp_key_name_1;
                PyObject *tmp_dict_name_1;
                tmp_key_name_1 = const_str_plain_xtol;
                CHECK_OBJECT( var_kwargs );
                tmp_dict_name_1 = var_kwargs;
                tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 255;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_21 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_21 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_21;
                }
                else
                {
                    goto branch_no_21;
                }
                branch_yes_21:;
                {
                    PyObject *tmp_called_instance_5;
                    CHECK_OBJECT( var_kwargs );
                    tmp_called_instance_5 = var_kwargs;
                    frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 256;
                    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_xtol_tuple, 0 ) );

                    if ( tmp_dictset_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 256;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( var_kwargs );
                    tmp_dictset_dict = var_kwargs;
                    tmp_dictset_key = const_str_plain_tol;
                    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                    Py_DECREF( tmp_dictset_value );
                    assert( !(tmp_res != 0) );
                }
                branch_no_21:;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_dircall_arg3_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_dircall_arg4_2;
                CHECK_OBJECT( var_methodc );
                tmp_dircall_arg1_2 = var_methodc;
                if ( par_f == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 257;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }

                tmp_tuple_element_4 = par_f;
                tmp_dircall_arg2_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_x0 );
                tmp_tuple_element_4 = par_x0;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_4 );
                tmp_dict_key_2 = const_str_plain_args;
                CHECK_OBJECT( par_args );
                tmp_dict_value_2 = par_args;
                tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_fprime;
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_4 = const_str_plain_fprime2;
                tmp_dict_value_4 = Py_None;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_5 = const_str_plain_x1;
                CHECK_OBJECT( par_x1 );
                tmp_dict_value_5 = par_x1;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( var_kwargs );
                tmp_dircall_arg4_2 = var_kwargs;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg4_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                    tmp_iter_arg_4 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 257;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }
                tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 257;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto try_except_handler_9;
                }
                assert( tmp_tuple_unpack_3__source_iter == NULL );
                tmp_tuple_unpack_3__source_iter = tmp_assign_source_35;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
                if ( tmp_assign_source_36 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooo";
                    exception_lineno = 257;
                    goto try_except_handler_10;
                }
                assert( tmp_tuple_unpack_3__element_1 == NULL );
                tmp_tuple_unpack_3__element_1 = tmp_assign_source_36;
            }
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
                tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
                if ( tmp_assign_source_37 == NULL )
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


                    type_description_1 = "oooooooooooooooooooooooo";
                    exception_lineno = 257;
                    goto try_except_handler_10;
                }
                assert( tmp_tuple_unpack_3__element_2 == NULL );
                tmp_tuple_unpack_3__element_2 = tmp_assign_source_37;
            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

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

                            type_description_1 = "oooooooooooooooooooooooo";
                            exception_lineno = 257;
                            goto try_except_handler_10;
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

                    type_description_1 = "oooooooooooooooooooooooo";
                    exception_lineno = 257;
                    goto try_except_handler_10;
                }
            }
            goto try_end_7;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_9;
            // End of try:
            try_end_7:;
            goto try_end_8;
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

            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto frame_exception_exit_1;
            // End of try:
            try_end_8:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
            Py_DECREF( tmp_tuple_unpack_3__source_iter );
            tmp_tuple_unpack_3__source_iter = NULL;

            {
                PyObject *tmp_assign_source_38;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                tmp_assign_source_38 = tmp_tuple_unpack_3__element_1;
                assert( var_r == NULL );
                Py_INCREF( tmp_assign_source_38 );
                var_r = tmp_assign_source_38;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_1 );
            tmp_tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_39;
                CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                tmp_assign_source_39 = tmp_tuple_unpack_3__element_2;
                assert( var_sol == NULL );
                Py_INCREF( tmp_assign_source_39 );
                var_sol = tmp_assign_source_39;
            }
            Py_XDECREF( tmp_tuple_unpack_3__element_2 );
            tmp_tuple_unpack_3__element_2 = NULL;

            goto branch_end_18;
            branch_no_18:;
            {
                nuitka_bool tmp_condition_result_22;
                PyObject *tmp_compexpr_left_11;
                PyObject *tmp_compexpr_right_11;
                CHECK_OBJECT( var_meth );
                tmp_compexpr_left_11 = var_meth;
                tmp_compexpr_right_11 = LIST_COPY( const_list_str_plain_newton_list );
                tmp_res = PySequence_Contains( tmp_compexpr_right_11, tmp_compexpr_left_11 );
                Py_DECREF( tmp_compexpr_right_11 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 259;
                    type_description_1 = "oooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_22 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_22 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_22;
                }
                else
                {
                    goto branch_no_22;
                }
                branch_yes_22:;
                {
                    nuitka_bool tmp_condition_result_23;
                    PyObject *tmp_compexpr_left_12;
                    PyObject *tmp_compexpr_right_12;
                    CHECK_OBJECT( par_x0 );
                    tmp_compexpr_left_12 = par_x0;
                    tmp_compexpr_right_12 = Py_None;
                    tmp_condition_result_23 = ( tmp_compexpr_left_12 == tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_23 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_23;
                    }
                    else
                    {
                        goto branch_no_23;
                    }
                    branch_yes_23:;
                    {
                        PyObject *tmp_raise_type_6;
                        PyObject *tmp_make_exception_arg_6;
                        PyObject *tmp_left_name_5;
                        PyObject *tmp_right_name_5;
                        tmp_left_name_5 = const_str_digest_10d81648aba553a61dc3b9d0c7b267e1;
                        if ( par_method == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 261;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_right_name_5 = par_method;
                        tmp_make_exception_arg_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
                        if ( tmp_make_exception_arg_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 261;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 261;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_6 };
                            tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_6 );
                        assert( !(tmp_raise_type_6 == NULL) );
                        exception_type = tmp_raise_type_6;
                        exception_lineno = 261;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_23:;
                }
                {
                    nuitka_bool tmp_condition_result_24;
                    PyObject *tmp_operand_name_7;
                    if ( par_fprime == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 262;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_operand_name_7 = par_fprime;
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 262;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_24 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_24 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_24;
                    }
                    else
                    {
                        goto branch_no_24;
                    }
                    branch_yes_24:;
                    {
                        PyObject *tmp_raise_type_7;
                        PyObject *tmp_make_exception_arg_7;
                        PyObject *tmp_left_name_6;
                        PyObject *tmp_right_name_6;
                        tmp_left_name_6 = const_str_digest_5a5b95827bb250d54d36367ad985f79a;
                        if ( par_method == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 263;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_right_name_6 = par_method;
                        tmp_make_exception_arg_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
                        if ( tmp_make_exception_arg_7 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 263;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 263;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_7 };
                            tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_7 );
                        assert( !(tmp_raise_type_7 == NULL) );
                        exception_type = tmp_raise_type_7;
                        exception_lineno = 263;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_24:;
                }
                {
                    nuitka_bool tmp_condition_result_25;
                    PyObject *tmp_key_name_2;
                    PyObject *tmp_dict_name_2;
                    tmp_key_name_2 = const_str_plain_xtol;
                    CHECK_OBJECT( var_kwargs );
                    tmp_dict_name_2 = var_kwargs;
                    tmp_res = PyDict_Contains( tmp_dict_name_2, tmp_key_name_2 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 264;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_25 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_25 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_25;
                    }
                    else
                    {
                        goto branch_no_25;
                    }
                    branch_yes_25:;
                    {
                        PyObject *tmp_called_instance_6;
                        CHECK_OBJECT( var_kwargs );
                        tmp_called_instance_6 = var_kwargs;
                        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 265;
                        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_xtol_tuple, 0 ) );

                        if ( tmp_dictset_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 265;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( var_kwargs );
                        tmp_dictset_dict = var_kwargs;
                        tmp_dictset_key = const_str_plain_tol;
                        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                        Py_DECREF( tmp_dictset_value );
                        assert( !(tmp_res != 0) );
                    }
                    branch_no_25:;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_40;
                    PyObject *tmp_iter_arg_5;
                    PyObject *tmp_dircall_arg1_3;
                    PyObject *tmp_dircall_arg2_3;
                    PyObject *tmp_tuple_element_5;
                    PyObject *tmp_dircall_arg3_3;
                    PyObject *tmp_dict_key_6;
                    PyObject *tmp_dict_value_6;
                    PyObject *tmp_dict_key_7;
                    PyObject *tmp_dict_value_7;
                    PyObject *tmp_dict_key_8;
                    PyObject *tmp_dict_value_8;
                    PyObject *tmp_dircall_arg4_3;
                    CHECK_OBJECT( var_methodc );
                    tmp_dircall_arg1_3 = var_methodc;
                    if ( par_f == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 266;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto try_except_handler_11;
                    }

                    tmp_tuple_element_5 = par_f;
                    tmp_dircall_arg2_3 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_5 );
                    CHECK_OBJECT( par_x0 );
                    tmp_tuple_element_5 = par_x0;
                    Py_INCREF( tmp_tuple_element_5 );
                    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_5 );
                    tmp_dict_key_6 = const_str_plain_args;
                    CHECK_OBJECT( par_args );
                    tmp_dict_value_6 = par_args;
                    tmp_dircall_arg3_3 = _PyDict_NewPresized( 3 );
                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_6, tmp_dict_value_6 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_7 = const_str_plain_fprime;
                    if ( par_fprime == NULL )
                    {
                        Py_DECREF( tmp_dircall_arg2_3 );
                        Py_DECREF( tmp_dircall_arg3_3 );
                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 266;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto try_except_handler_11;
                    }

                    tmp_dict_value_7 = par_fprime;
                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_7, tmp_dict_value_7 );
                    assert( !(tmp_res != 0) );
                    tmp_dict_key_8 = const_str_plain_fprime2;
                    tmp_dict_value_8 = Py_None;
                    tmp_res = PyDict_SetItem( tmp_dircall_arg3_3, tmp_dict_key_8, tmp_dict_value_8 );
                    assert( !(tmp_res != 0) );
                    CHECK_OBJECT( var_kwargs );
                    tmp_dircall_arg4_3 = var_kwargs;
                    Py_INCREF( tmp_dircall_arg1_3 );
                    Py_INCREF( tmp_dircall_arg4_3 );

                    {
                        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_3};
                        tmp_iter_arg_5 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                    }
                    if ( tmp_iter_arg_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 266;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto try_except_handler_11;
                    }
                    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_5 );
                    Py_DECREF( tmp_iter_arg_5 );
                    if ( tmp_assign_source_40 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 266;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto try_except_handler_11;
                    }
                    assert( tmp_tuple_unpack_4__source_iter == NULL );
                    tmp_tuple_unpack_4__source_iter = tmp_assign_source_40;
                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_41;
                    PyObject *tmp_unpack_7;
                    CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
                    tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
                    if ( tmp_assign_source_41 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooo";
                        exception_lineno = 266;
                        goto try_except_handler_12;
                    }
                    assert( tmp_tuple_unpack_4__element_1 == NULL );
                    tmp_tuple_unpack_4__element_1 = tmp_assign_source_41;
                }
                {
                    PyObject *tmp_assign_source_42;
                    PyObject *tmp_unpack_8;
                    CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
                    tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
                    if ( tmp_assign_source_42 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooo";
                        exception_lineno = 266;
                        goto try_except_handler_12;
                    }
                    assert( tmp_tuple_unpack_4__element_2 == NULL );
                    tmp_tuple_unpack_4__element_2 = tmp_assign_source_42;
                }
                {
                    PyObject *tmp_iterator_name_4;
                    CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
                    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

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

                                type_description_1 = "oooooooooooooooooooooooo";
                                exception_lineno = 266;
                                goto try_except_handler_12;
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

                        type_description_1 = "oooooooooooooooooooooooo";
                        exception_lineno = 266;
                        goto try_except_handler_12;
                    }
                }
                goto try_end_9;
                // Exception handler code:
                try_except_handler_12:;
                exception_keeper_type_10 = exception_type;
                exception_keeper_value_10 = exception_value;
                exception_keeper_tb_10 = exception_tb;
                exception_keeper_lineno_10 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
                Py_DECREF( tmp_tuple_unpack_4__source_iter );
                tmp_tuple_unpack_4__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_10;
                exception_value = exception_keeper_value_10;
                exception_tb = exception_keeper_tb_10;
                exception_lineno = exception_keeper_lineno_10;

                goto try_except_handler_11;
                // End of try:
                try_end_9:;
                goto try_end_10;
                // Exception handler code:
                try_except_handler_11:;
                exception_keeper_type_11 = exception_type;
                exception_keeper_value_11 = exception_value;
                exception_keeper_tb_11 = exception_tb;
                exception_keeper_lineno_11 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_4__element_1 );
                tmp_tuple_unpack_4__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_4__element_2 );
                tmp_tuple_unpack_4__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_11;
                exception_value = exception_keeper_value_11;
                exception_tb = exception_keeper_tb_11;
                exception_lineno = exception_keeper_lineno_11;

                goto frame_exception_exit_1;
                // End of try:
                try_end_10:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
                Py_DECREF( tmp_tuple_unpack_4__source_iter );
                tmp_tuple_unpack_4__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_43;
                    CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
                    tmp_assign_source_43 = tmp_tuple_unpack_4__element_1;
                    assert( var_r == NULL );
                    Py_INCREF( tmp_assign_source_43 );
                    var_r = tmp_assign_source_43;
                }
                Py_XDECREF( tmp_tuple_unpack_4__element_1 );
                tmp_tuple_unpack_4__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_44;
                    CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
                    tmp_assign_source_44 = tmp_tuple_unpack_4__element_2;
                    assert( var_sol == NULL );
                    Py_INCREF( tmp_assign_source_44 );
                    var_sol = tmp_assign_source_44;
                }
                Py_XDECREF( tmp_tuple_unpack_4__element_2 );
                tmp_tuple_unpack_4__element_2 = NULL;

                goto branch_end_22;
                branch_no_22:;
                {
                    nuitka_bool tmp_condition_result_26;
                    PyObject *tmp_compexpr_left_13;
                    PyObject *tmp_compexpr_right_13;
                    CHECK_OBJECT( var_meth );
                    tmp_compexpr_left_13 = var_meth;
                    tmp_compexpr_right_13 = LIST_COPY( const_list_str_plain_halley_list );
                    tmp_res = PySequence_Contains( tmp_compexpr_right_13, tmp_compexpr_left_13 );
                    Py_DECREF( tmp_compexpr_right_13 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 268;
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_26 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_26 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_26;
                    }
                    else
                    {
                        goto branch_no_26;
                    }
                    branch_yes_26:;
                    {
                        nuitka_bool tmp_condition_result_27;
                        PyObject *tmp_compexpr_left_14;
                        PyObject *tmp_compexpr_right_14;
                        CHECK_OBJECT( par_x0 );
                        tmp_compexpr_left_14 = par_x0;
                        tmp_compexpr_right_14 = Py_None;
                        tmp_condition_result_27 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_27 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_27;
                        }
                        else
                        {
                            goto branch_no_27;
                        }
                        branch_yes_27:;
                        {
                            PyObject *tmp_raise_type_8;
                            PyObject *tmp_make_exception_arg_8;
                            PyObject *tmp_left_name_7;
                            PyObject *tmp_right_name_7;
                            tmp_left_name_7 = const_str_digest_10d81648aba553a61dc3b9d0c7b267e1;
                            if ( par_method == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 270;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_right_name_7 = par_method;
                            tmp_make_exception_arg_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
                            if ( tmp_make_exception_arg_8 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 270;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 270;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_8 };
                                tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                            }

                            Py_DECREF( tmp_make_exception_arg_8 );
                            assert( !(tmp_raise_type_8 == NULL) );
                            exception_type = tmp_raise_type_8;
                            exception_lineno = 270;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        branch_no_27:;
                    }
                    {
                        nuitka_bool tmp_condition_result_28;
                        PyObject *tmp_operand_name_8;
                        if ( par_fprime == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 271;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_operand_name_8 = par_fprime;
                        tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 271;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_28 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_28 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_28;
                        }
                        else
                        {
                            goto branch_no_28;
                        }
                        branch_yes_28:;
                        {
                            PyObject *tmp_raise_type_9;
                            PyObject *tmp_make_exception_arg_9;
                            PyObject *tmp_left_name_8;
                            PyObject *tmp_right_name_8;
                            tmp_left_name_8 = const_str_digest_5a5b95827bb250d54d36367ad985f79a;
                            if ( par_method == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 272;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_right_name_8 = par_method;
                            tmp_make_exception_arg_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
                            if ( tmp_make_exception_arg_9 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 272;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 272;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_9 };
                                tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                            }

                            Py_DECREF( tmp_make_exception_arg_9 );
                            assert( !(tmp_raise_type_9 == NULL) );
                            exception_type = tmp_raise_type_9;
                            exception_lineno = 272;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        branch_no_28:;
                    }
                    {
                        nuitka_bool tmp_condition_result_29;
                        PyObject *tmp_operand_name_9;
                        if ( par_fprime2 == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime2" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 273;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_operand_name_9 = par_fprime2;
                        tmp_res = CHECK_IF_TRUE( tmp_operand_name_9 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 273;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_29 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_29 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_29;
                        }
                        else
                        {
                            goto branch_no_29;
                        }
                        branch_yes_29:;
                        {
                            PyObject *tmp_raise_type_10;
                            PyObject *tmp_make_exception_arg_10;
                            PyObject *tmp_left_name_9;
                            PyObject *tmp_right_name_9;
                            tmp_left_name_9 = const_str_digest_6d21fa6b6d3ba4b68433a94d2d505a50;
                            if ( par_method == NULL )
                            {

                                exception_type = PyExc_UnboundLocalError;
                                Py_INCREF( exception_type );
                                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                CHAIN_EXCEPTION( exception_value );

                                exception_lineno = 274;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_right_name_9 = par_method;
                            tmp_make_exception_arg_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
                            if ( tmp_make_exception_arg_10 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 274;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 274;
                            {
                                PyObject *call_args[] = { tmp_make_exception_arg_10 };
                                tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                            }

                            Py_DECREF( tmp_make_exception_arg_10 );
                            assert( !(tmp_raise_type_10 == NULL) );
                            exception_type = tmp_raise_type_10;
                            exception_lineno = 274;
                            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        branch_no_29:;
                    }
                    {
                        nuitka_bool tmp_condition_result_30;
                        PyObject *tmp_key_name_3;
                        PyObject *tmp_dict_name_3;
                        tmp_key_name_3 = const_str_plain_xtol;
                        CHECK_OBJECT( var_kwargs );
                        tmp_dict_name_3 = var_kwargs;
                        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 275;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_30 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_30 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_30;
                        }
                        else
                        {
                            goto branch_no_30;
                        }
                        branch_yes_30:;
                        {
                            PyObject *tmp_called_instance_7;
                            CHECK_OBJECT( var_kwargs );
                            tmp_called_instance_7 = var_kwargs;
                            frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 276;
                            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_xtol_tuple, 0 ) );

                            if ( tmp_dictset_value == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 276;
                                type_description_1 = "oooooooooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( var_kwargs );
                            tmp_dictset_dict = var_kwargs;
                            tmp_dictset_key = const_str_plain_tol;
                            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                            Py_DECREF( tmp_dictset_value );
                            assert( !(tmp_res != 0) );
                        }
                        branch_no_30:;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_45;
                        PyObject *tmp_iter_arg_6;
                        PyObject *tmp_dircall_arg1_4;
                        PyObject *tmp_dircall_arg2_4;
                        PyObject *tmp_tuple_element_6;
                        PyObject *tmp_dircall_arg3_4;
                        PyObject *tmp_dict_key_9;
                        PyObject *tmp_dict_value_9;
                        PyObject *tmp_dict_key_10;
                        PyObject *tmp_dict_value_10;
                        PyObject *tmp_dict_key_11;
                        PyObject *tmp_dict_value_11;
                        PyObject *tmp_dircall_arg4_4;
                        CHECK_OBJECT( var_methodc );
                        tmp_dircall_arg1_4 = var_methodc;
                        if ( par_f == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 277;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto try_except_handler_13;
                        }

                        tmp_tuple_element_6 = par_f;
                        tmp_dircall_arg2_4 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 0, tmp_tuple_element_6 );
                        CHECK_OBJECT( par_x0 );
                        tmp_tuple_element_6 = par_x0;
                        Py_INCREF( tmp_tuple_element_6 );
                        PyTuple_SET_ITEM( tmp_dircall_arg2_4, 1, tmp_tuple_element_6 );
                        tmp_dict_key_9 = const_str_plain_args;
                        CHECK_OBJECT( par_args );
                        tmp_dict_value_9 = par_args;
                        tmp_dircall_arg3_4 = _PyDict_NewPresized( 3 );
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_9, tmp_dict_value_9 );
                        assert( !(tmp_res != 0) );
                        tmp_dict_key_10 = const_str_plain_fprime;
                        if ( par_fprime == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            Py_DECREF( tmp_dircall_arg3_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 277;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto try_except_handler_13;
                        }

                        tmp_dict_value_10 = par_fprime;
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_10, tmp_dict_value_10 );
                        assert( !(tmp_res != 0) );
                        tmp_dict_key_11 = const_str_plain_fprime2;
                        if ( par_fprime2 == NULL )
                        {
                            Py_DECREF( tmp_dircall_arg2_4 );
                            Py_DECREF( tmp_dircall_arg3_4 );
                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fprime2" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 277;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto try_except_handler_13;
                        }

                        tmp_dict_value_11 = par_fprime2;
                        tmp_res = PyDict_SetItem( tmp_dircall_arg3_4, tmp_dict_key_11, tmp_dict_value_11 );
                        assert( !(tmp_res != 0) );
                        CHECK_OBJECT( var_kwargs );
                        tmp_dircall_arg4_4 = var_kwargs;
                        Py_INCREF( tmp_dircall_arg1_4 );
                        Py_INCREF( tmp_dircall_arg4_4 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4, tmp_dircall_arg3_4, tmp_dircall_arg4_4};
                            tmp_iter_arg_6 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                        }
                        if ( tmp_iter_arg_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 277;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto try_except_handler_13;
                        }
                        tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_6 );
                        Py_DECREF( tmp_iter_arg_6 );
                        if ( tmp_assign_source_45 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 277;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto try_except_handler_13;
                        }
                        assert( tmp_tuple_unpack_5__source_iter == NULL );
                        tmp_tuple_unpack_5__source_iter = tmp_assign_source_45;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_assign_source_46;
                        PyObject *tmp_unpack_9;
                        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
                        tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
                        if ( tmp_assign_source_46 == NULL )
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


                            type_description_1 = "oooooooooooooooooooooooo";
                            exception_lineno = 277;
                            goto try_except_handler_14;
                        }
                        assert( tmp_tuple_unpack_5__element_1 == NULL );
                        tmp_tuple_unpack_5__element_1 = tmp_assign_source_46;
                    }
                    {
                        PyObject *tmp_assign_source_47;
                        PyObject *tmp_unpack_10;
                        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
                        tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
                        if ( tmp_assign_source_47 == NULL )
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


                            type_description_1 = "oooooooooooooooooooooooo";
                            exception_lineno = 277;
                            goto try_except_handler_14;
                        }
                        assert( tmp_tuple_unpack_5__element_2 == NULL );
                        tmp_tuple_unpack_5__element_2 = tmp_assign_source_47;
                    }
                    {
                        PyObject *tmp_iterator_name_5;
                        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
                        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
                        // Check if iterator has left-over elements.
                        CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

                        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

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

                                    type_description_1 = "oooooooooooooooooooooooo";
                                    exception_lineno = 277;
                                    goto try_except_handler_14;
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

                            type_description_1 = "oooooooooooooooooooooooo";
                            exception_lineno = 277;
                            goto try_except_handler_14;
                        }
                    }
                    goto try_end_11;
                    // Exception handler code:
                    try_except_handler_14:;
                    exception_keeper_type_12 = exception_type;
                    exception_keeper_value_12 = exception_value;
                    exception_keeper_tb_12 = exception_tb;
                    exception_keeper_lineno_12 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
                    Py_DECREF( tmp_tuple_unpack_5__source_iter );
                    tmp_tuple_unpack_5__source_iter = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_12;
                    exception_value = exception_keeper_value_12;
                    exception_tb = exception_keeper_tb_12;
                    exception_lineno = exception_keeper_lineno_12;

                    goto try_except_handler_13;
                    // End of try:
                    try_end_11:;
                    goto try_end_12;
                    // Exception handler code:
                    try_except_handler_13:;
                    exception_keeper_type_13 = exception_type;
                    exception_keeper_value_13 = exception_value;
                    exception_keeper_tb_13 = exception_tb;
                    exception_keeper_lineno_13 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
                    tmp_tuple_unpack_5__element_1 = NULL;

                    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
                    tmp_tuple_unpack_5__element_2 = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_13;
                    exception_value = exception_keeper_value_13;
                    exception_tb = exception_keeper_tb_13;
                    exception_lineno = exception_keeper_lineno_13;

                    goto frame_exception_exit_1;
                    // End of try:
                    try_end_12:;
                    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
                    Py_DECREF( tmp_tuple_unpack_5__source_iter );
                    tmp_tuple_unpack_5__source_iter = NULL;

                    {
                        PyObject *tmp_assign_source_48;
                        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
                        tmp_assign_source_48 = tmp_tuple_unpack_5__element_1;
                        assert( var_r == NULL );
                        Py_INCREF( tmp_assign_source_48 );
                        var_r = tmp_assign_source_48;
                    }
                    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
                    tmp_tuple_unpack_5__element_1 = NULL;

                    {
                        PyObject *tmp_assign_source_49;
                        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
                        tmp_assign_source_49 = tmp_tuple_unpack_5__element_2;
                        assert( var_sol == NULL );
                        Py_INCREF( tmp_assign_source_49 );
                        var_sol = tmp_assign_source_49;
                    }
                    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
                    tmp_tuple_unpack_5__element_2 = NULL;

                    goto branch_end_26;
                    branch_no_26:;
                    {
                        PyObject *tmp_raise_type_11;
                        PyObject *tmp_make_exception_arg_11;
                        PyObject *tmp_left_name_10;
                        PyObject *tmp_right_name_10;
                        tmp_left_name_10 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
                        if ( par_method == NULL )
                        {

                            exception_type = PyExc_UnboundLocalError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 279;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_right_name_10 = par_method;
                        tmp_make_exception_arg_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
                        if ( tmp_make_exception_arg_11 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 279;
                            type_description_1 = "oooooooooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_61742a80cec5c57357260597e787192f->m_frame.f_lineno = 279;
                        {
                            PyObject *call_args[] = { tmp_make_exception_arg_11 };
                            tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                        }

                        Py_DECREF( tmp_make_exception_arg_11 );
                        assert( !(tmp_raise_type_11 == NULL) );
                        exception_type = tmp_raise_type_11;
                        exception_lineno = 279;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_end_26:;
                }
                branch_end_22:;
            }
            branch_end_18:;
        }
        branch_end_16:;
    }
    {
        nuitka_bool tmp_condition_result_31;
        int tmp_truth_name_5;
        if ( var_is_memoized == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_memoized" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_5 = CHECK_IF_TRUE( var_is_memoized );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_31 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_31;
        }
        else
        {
            goto branch_no_31;
        }
        branch_yes_31:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_source_name_6;
            if ( par_f == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = par_f;
            tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_n_calls );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n_calls == NULL );
            var_n_calls = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( var_n_calls );
            tmp_assattr_name_1 = var_n_calls;
            if ( var_sol == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sol" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_assattr_target_1 = var_sol;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_function_calls, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_31:;
    }
    if ( var_sol == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sol" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_sol;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61742a80cec5c57357260597e787192f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61742a80cec5c57357260597e787192f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61742a80cec5c57357260597e787192f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61742a80cec5c57357260597e787192f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61742a80cec5c57357260597e787192f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61742a80cec5c57357260597e787192f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61742a80cec5c57357260597e787192f,
        type_description_1,
        par_f,
        par_args,
        par_method,
        par_bracket,
        par_fprime,
        par_fprime2,
        par_x0,
        par_x1,
        par_xtol,
        par_rtol,
        par_maxiter,
        par_options,
        var_is_memoized,
        var_kwargs,
        var_k,
        var_v,
        var_meth,
        var_map2underlying,
        var_methodc,
        var_a,
        var_b,
        var_r,
        var_sol,
        var_n_calls
    );


    // Release cached frame.
    if ( frame_61742a80cec5c57357260597e787192f == cache_frame_61742a80cec5c57357260597e787192f )
    {
        Py_DECREF( frame_61742a80cec5c57357260597e787192f );
    }
    cache_frame_61742a80cec5c57357260597e787192f = NULL;

    assertFrameObject( frame_61742a80cec5c57357260597e787192f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_6_root_scalar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_bracket );
    Py_DECREF( par_bracket );
    par_bracket = NULL;

    Py_XDECREF( par_fprime );
    par_fprime = NULL;

    Py_XDECREF( par_fprime2 );
    par_fprime2 = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x1 );
    Py_DECREF( par_x1 );
    par_x1 = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_options );
    Py_DECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_is_memoized );
    var_is_memoized = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_meth );
    Py_DECREF( var_meth );
    var_meth = NULL;

    CHECK_OBJECT( (PyObject *)var_map2underlying );
    Py_DECREF( var_map2underlying );
    var_map2underlying = NULL;

    CHECK_OBJECT( (PyObject *)var_methodc );
    Py_DECREF( var_methodc );
    var_methodc = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    Py_XDECREF( var_n_calls );
    var_n_calls = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_f );
    par_f = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_bracket );
    Py_DECREF( par_bracket );
    par_bracket = NULL;

    Py_XDECREF( par_fprime );
    par_fprime = NULL;

    Py_XDECREF( par_fprime2 );
    par_fprime2 = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x1 );
    Py_DECREF( par_x1 );
    par_x1 = NULL;

    CHECK_OBJECT( (PyObject *)par_xtol );
    Py_DECREF( par_xtol );
    par_xtol = NULL;

    CHECK_OBJECT( (PyObject *)par_rtol );
    Py_DECREF( par_rtol );
    par_rtol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    Py_XDECREF( par_options );
    par_options = NULL;

    Py_XDECREF( var_is_memoized );
    var_is_memoized = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_map2underlying );
    var_map2underlying = NULL;

    Py_XDECREF( var_methodc );
    var_methodc = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_sol );
    var_sol = NULL;

    Py_XDECREF( var_n_calls );
    var_n_calls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_6_root_scalar );
    return NULL;

function_exception_exit:
    Py_XDECREF( locals_scipy$optimize$_root_scalar$$$function_6_root_scalar );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF( locals_scipy$optimize$_root_scalar$$$function_6_root_scalar );


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc,
        const_str_plain__root_scalar_secant_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ec81ec1d6ee47b4a78e474f50894981d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_669a104b5210fdf0856507516c730245,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc,
        const_str_plain__root_scalar_newton_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_626bc75a99d136a730e562019553b049,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_98b525d05d7343cf695fbee069ddb8dc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc,
        const_str_plain__root_scalar_halley_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d4cef96bedfdc25f9e990e71f6f86b80,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_67aafb655fc659190b8cf073327f5de7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc,
        const_str_plain__root_scalar_ridder_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3b400145016f494c2719259ef141cbb6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6638bf1f24637d2177498531beea460c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc,
        const_str_plain__root_scalar_bisect_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e62c943e8b50a6f85f7a74a6962001e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6638bf1f24637d2177498531beea460c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_115dfaa0daf4d332844aaeb658b9d56c,
#endif
        codeobj_e32e29412dbd0fb7d3179901a9902bfb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_2___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_46718ffb56a96326eb36b030f2d9b786,
#endif
        codeobj_238b884838e0bc1fc4db57119183271b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6346f12032a993c94ea542dd8159090c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_3_fprime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_3_fprime,
        const_str_plain_fprime,
#if PYTHON_VERSION >= 300
        const_str_digest_a2bb33dbb991e64b02208af925e67405,
#endif
        codeobj_e2d85505e76dd224b5d2d5932510708d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_f5ffba94f7bbdfb420af91042ab0fde9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_4_fprime2(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_4_fprime2,
        const_str_plain_fprime2,
#if PYTHON_VERSION >= 300
        const_str_digest_8c907f2b5dd4b15a5bc2cdd945a94b7e,
#endif
        codeobj_f12cb816fee7319bc5685840f74100c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_ffa2d3064887f658a651b5df68be3484,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_5_ncalls(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_5_ncalls,
        const_str_plain_ncalls,
#if PYTHON_VERSION >= 300
        const_str_digest_def942ff8dc84d9bbab670b0fe966bc7,
#endif
        codeobj_cddb94c379bdedfbf04db63263e2d295,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_6_root_scalar( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_6_root_scalar,
        const_str_plain_root_scalar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_61742a80cec5c57357260597e787192f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_0efb5dff7caa9469ddb5b6be66a8b0a1,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc,
        const_str_plain__root_scalar_brentq_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb74b9fb0d7f53883464e1de37c662b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6638bf1f24637d2177498531beea460c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc,
        const_str_plain__root_scalar_brenth_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ba9477bc3f95f5bd0471ceb93728a7bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6638bf1f24637d2177498531beea460c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc,
        const_str_plain__root_scalar_toms748_doc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66e69b4c1f16e05952fd03b78e22189f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_root_scalar,
        const_str_digest_6638bf1f24637d2177498531beea460c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_root_scalar =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._root_scalar",
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

MOD_INIT_DECL( scipy$optimize$_root_scalar )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_root_scalar );
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
    puts("scipy.optimize._root_scalar: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._root_scalar: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._root_scalar: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_root_scalar" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_root_scalar = Py_InitModule4(
        "scipy.optimize._root_scalar",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_root_scalar = PyModule_Create( &mdef_scipy$optimize$_root_scalar );
#endif

    moduledict_scipy$optimize$_root_scalar = MODULE_DICT( module_scipy$optimize$_root_scalar );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_root_scalar,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_root_scalar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_root_scalar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_root_scalar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_root_scalar );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b5e284c3f1b228d0a4188b085f969809, module_scipy$optimize$_root_scalar );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d1a39f13190493aa4ed181c767708418;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$optimize$_root_scalar_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_107eef94837c488cfa418b89f62f029f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_107eef94837c488cfa418b89f62f029f_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0798bf28f94a528b3f78449bf95184b4;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d1a39f13190493aa4ed181c767708418 = MAKE_MODULE_FRAME( codeobj_d1a39f13190493aa4ed181c767708418, module_scipy$optimize$_root_scalar );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d1a39f13190493aa4ed181c767708418 );
    assert( Py_REFCNT( frame_d1a39f13190493aa4ed181c767708418 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 9;
        tmp_assign_source_4 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_4 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_4 );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_root_scalar;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 11;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_root_scalar;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_callable_tuple;
        tmp_level_name_2 = const_int_0;
        frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_callable );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_callable, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_empty;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_root_scalar;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_zeros_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$optimize$_root_scalar,
                const_str_plain_zeros,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_zeros );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_optzeros, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_str_plain_root_scalar_list );
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_MemoizeDer_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 19;
            tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;

                goto try_except_handler_2;
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
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_1;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_1 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 19;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 19;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$optimize$_root_scalar_19 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b5e284c3f1b228d0a4188b085f969809;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_946c705f201da2c4ef0423645263b040;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_MemoizeDer;
        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_107eef94837c488cfa418b89f62f029f_2, codeobj_107eef94837c488cfa418b89f62f029f, module_scipy$optimize$_root_scalar, sizeof(void *) );
        frame_107eef94837c488cfa418b89f62f029f_2 = cache_frame_107eef94837c488cfa418b89f62f029f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_107eef94837c488cfa418b89f62f029f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_107eef94837c488cfa418b89f62f029f_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_2___call__(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_3_fprime(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain_fprime, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_4_fprime2(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain_fprime2, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_5_ncalls(  );



        tmp_res = PyObject_SetItem( locals_scipy$optimize$_root_scalar_19, const_str_plain_ncalls, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_107eef94837c488cfa418b89f62f029f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_107eef94837c488cfa418b89f62f029f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_107eef94837c488cfa418b89f62f029f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_107eef94837c488cfa418b89f62f029f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_107eef94837c488cfa418b89f62f029f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_107eef94837c488cfa418b89f62f029f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_107eef94837c488cfa418b89f62f029f_2 == cache_frame_107eef94837c488cfa418b89f62f029f_2 )
        {
            Py_DECREF( frame_107eef94837c488cfa418b89f62f029f_2 );
        }
        cache_frame_107eef94837c488cfa418b89f62f029f_2 = NULL;

        assertFrameObject( frame_107eef94837c488cfa418b89f62f029f_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_MemoizeDer;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$optimize$_root_scalar_19;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_d1a39f13190493aa4ed181c767708418->m_frame.f_lineno = 19;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_scipy$optimize$_root_scalar_19 );
        locals_scipy$optimize$_root_scalar_19 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_scipy$optimize$_root_scalar_19 );
        locals_scipy$optimize$_root_scalar_19 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$optimize$_root_scalar );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 19;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_MemoizeDer, tmp_assign_source_16 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1a39f13190493aa4ed181c767708418 );
#endif
    popFrameStack();

    assertFrameObject( frame_d1a39f13190493aa4ed181c767708418 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d1a39f13190493aa4ed181c767708418 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d1a39f13190493aa4ed181c767708418, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d1a39f13190493aa4ed181c767708418->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d1a39f13190493aa4ed181c767708418, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_5b18c2ce259fa62a0c04700c4334dd03_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_18 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_6_root_scalar( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain_root_scalar, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_7__root_scalar_brentq_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_brentq_doc, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_8__root_scalar_brenth_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_brenth_doc, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_9__root_scalar_toms748_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_toms748_doc, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_10__root_scalar_secant_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_secant_doc, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_11__root_scalar_newton_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_newton_doc, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_12__root_scalar_halley_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_halley_doc, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_13__root_scalar_ridder_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_ridder_doc, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$optimize$_root_scalar$$$function_14__root_scalar_bisect_doc(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain__root_scalar_bisect_doc, tmp_assign_source_26 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_root_scalar, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_root_scalar );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
