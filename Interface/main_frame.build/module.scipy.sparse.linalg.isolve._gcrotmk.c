/* Generated code for Python module 'scipy.sparse.linalg.isolve._gcrotmk'
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

/* The "_module_scipy$sparse$linalg$isolve$_gcrotmk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$isolve$_gcrotmk;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$_gcrotmk;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32_tuple;
static PyObject *const_str_plain_oldest;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_tuple_int_pos_1_int_0_tuple_tuple;
static PyObject *const_str_digest_a59883598cb6f47063daf49eafc9f51e;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_isfinite;
extern PyObject *const_str_plain_ones;
extern PyObject *const_tuple_str_plain_make_system_tuple;
extern PyObject *const_str_plain_zip;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_bb1e39725966fd8327716e9b9c491bf2_tuple;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_cs;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_tuple_int_pos_1_int_pos_1_tuple_tuple;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_tuple_int_0_int_neg_1_tuple;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_which;
extern PyObject *const_str_plain_atol;
static PyObject *const_tuple_none_none_tuple_empty_tuple_empty_false_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_qr;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_tuple_slice_none_int_neg_1_none_slice_none_none_none_tuple;
static PyObject *const_str_plain_overwrite_qru;
extern PyObject *const_tuple_int_0_int_0_tuple;
extern PyObject *const_tuple_int_pos_1_int_0_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_32caa017647387945cd0c305269bb6e1;
static PyObject *const_dict_70db24d60b08c6c76c4566b9a7fcb1b3;
extern PyObject *const_str_plain_eps;
static PyObject *const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_over;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_nan;
extern PyObject *const_tuple_str_plain_LinAlgError_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_numpy;
static PyObject *const_dict_57bf0736a581f48071f24930e5a8d5a8;
extern PyObject *const_str_digest_2dd0f9dbf76d05bb371f917d7b80aebe;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_divide;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain_economic;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_axpy;
extern PyObject *const_str_plain_conj;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_scal;
static PyObject *const_tuple_str_plain_cz_str_plain_uz_tuple;
extern PyObject *const_str_plain_matvec;
static PyObject *const_list_str_plain_axpy_str_plain_dot_list;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_cu;
static PyObject *const_str_plain_smallest;
extern PyObject *const_str_plain_LinAlgError;
static PyObject *const_str_digest_afe348c0328f0ea5c161d66688cc2aa7;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_pop;
extern PyObject *const_float_1eminus_05;
static PyObject *const_dict_012788ff4162597b3bcc80f5a581a5e5;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
extern PyObject *const_str_plain_rpsolve;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_F;
extern PyObject *const_int_pos_1000;
static PyObject *const_str_plain_qr_insert;
static PyObject *const_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_pivoting;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_tuple_9228130402bf6b5bec48758888f7f24d_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_list_str_plain_axpy_str_plain_dot_str_plain_scal_str_plain_nrm2_list;
extern PyObject *const_float_1eminus_12;
static PyObject *const_tuple_str_plain_c_str_plain_u_tuple;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain_make_system;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_cz;
static PyObject *const_str_digest_97dad59c3ae785a213f2a112c9c99853;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_uz;
extern PyObject *const_str_digest_1b3c3d9968e84810f08ebb3b6ff17a13;
static PyObject *const_str_digest_38f60eb8f98bd670aace1742747e287b;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_str_plain_cu_tuple;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain__fgmres;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_u;
static PyObject *const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_e9b58f2e6c1ea760340dd813c012ecbe;
static PyObject *const_str_digest_5eced94c08f4888182b58c846081cc4d;
static PyObject *const_str_digest_215ab9255fb49ee81689ccfc99c773b8;
static PyObject *const_list_str_plain_gcrotmk_list;
extern PyObject *const_str_plain_get_blas_funcs;
static PyObject *const_tuple_str_plain_oldest_str_plain_smallest_tuple;
extern PyObject *const_str_plain_nrm2;
extern PyObject *const_str_plain_gcrotmk;
extern PyObject *const_str_plain_order;
static PyObject *const_tuple_type_FloatingPointError_type_ZeroDivisionError_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32_tuple = PyTuple_New( 1 );
    const_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32 = UNSTREAM_STRING_ASCII( &constant_bin[ 5479669 ], 154, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32_tuple, 0, const_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32 ); Py_INCREF( const_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32 );
    const_str_plain_oldest = UNSTREAM_STRING_ASCII( &constant_bin[ 737123 ], 6, 1 );
    const_str_digest_a59883598cb6f47063daf49eafc9f51e = UNSTREAM_STRING_ASCII( &constant_bin[ 5479823 ], 32, 0 );
    const_tuple_bb1e39725966fd8327716e9b9c491bf2_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5479855 ], 329 );
    const_tuple_none_none_tuple_empty_tuple_empty_false_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_tuple_empty_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_tuple_empty_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_tuple_empty_false_tuple, 2, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_tuple_empty_false_tuple, 3, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple_empty_tuple_empty_false_tuple, 4, Py_False ); Py_INCREF( Py_False );
    const_str_plain_overwrite_qru = UNSTREAM_STRING_ASCII( &constant_bin[ 5480184 ], 13, 1 );
    const_str_digest_32caa017647387945cd0c305269bb6e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 5480197 ], 25, 0 );
    const_dict_70db24d60b08c6c76c4566b9a7fcb1b3 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_70db24d60b08c6c76c4566b9a7fcb1b3, const_str_plain_which, const_str_plain_col );
    PyDict_SetItem( const_dict_70db24d60b08c6c76c4566b9a7fcb1b3, const_str_plain_overwrite_qru, Py_True );
    PyDict_SetItem( const_dict_70db24d60b08c6c76c4566b9a7fcb1b3, const_str_plain_check_finite, Py_False );
    assert( PyDict_Size( const_dict_70db24d60b08c6c76c4566b9a7fcb1b3 ) == 3 );
    const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 1, const_float_1eminus_05 ); Py_INCREF( const_float_1eminus_05 );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 2, const_int_pos_1000 ); Py_INCREF( const_int_pos_1000 );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 5, const_int_pos_20 ); Py_INCREF( const_int_pos_20 );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 8, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 9, const_str_plain_oldest ); Py_INCREF( const_str_plain_oldest );
    PyTuple_SET_ITEM( const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple, 10, Py_None ); Py_INCREF( Py_None );
    const_dict_57bf0736a581f48071f24930e5a8d5a8 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_57bf0736a581f48071f24930e5a8d5a8, const_str_plain_over, const_str_plain_ignore );
    PyDict_SetItem( const_dict_57bf0736a581f48071f24930e5a8d5a8, const_str_plain_divide, const_str_plain_ignore );
    assert( PyDict_Size( const_dict_57bf0736a581f48071f24930e5a8d5a8 ) == 2 );
    const_tuple_str_plain_cz_str_plain_uz_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cz_str_plain_uz_tuple, 0, const_str_plain_cz ); Py_INCREF( const_str_plain_cz );
    const_str_plain_uz = UNSTREAM_STRING_ASCII( &constant_bin[ 60029 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cz_str_plain_uz_tuple, 1, const_str_plain_uz ); Py_INCREF( const_str_plain_uz );
    const_list_str_plain_axpy_str_plain_dot_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_axpy_str_plain_dot_list, 0, const_str_plain_axpy ); Py_INCREF( const_str_plain_axpy );
    PyList_SET_ITEM( const_list_str_plain_axpy_str_plain_dot_list, 1, const_str_plain_dot ); Py_INCREF( const_str_plain_dot );
    const_str_plain_cu = UNSTREAM_STRING_ASCII( &constant_bin[ 6353 ], 2, 1 );
    const_str_plain_smallest = UNSTREAM_STRING_ASCII( &constant_bin[ 472372 ], 8, 1 );
    const_str_digest_afe348c0328f0ea5c161d66688cc2aa7 = UNSTREAM_STRING_ASCII( &constant_bin[ 5480222 ], 3572, 0 );
    const_dict_012788ff4162597b3bcc80f5a581a5e5 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_012788ff4162597b3bcc80f5a581a5e5, const_str_plain_overwrite_a, Py_True );
    PyDict_SetItem( const_dict_012788ff4162597b3bcc80f5a581a5e5, const_str_plain_mode, const_str_plain_economic );
    PyDict_SetItem( const_dict_012788ff4162597b3bcc80f5a581a5e5, const_str_plain_pivoting, Py_True );
    assert( PyDict_Size( const_dict_012788ff4162597b3bcc80f5a581a5e5 ) == 3 );
    const_str_plain_qr_insert = UNSTREAM_STRING_ASCII( &constant_bin[ 4464745 ], 9, 1 );
    const_tuple_9228130402bf6b5bec48758888f7f24d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5483794 ], 185 );
    const_tuple_str_plain_c_str_plain_u_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_u_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_u_tuple, 1, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_str_digest_97dad59c3ae785a213f2a112c9c99853 = UNSTREAM_STRING_ASCII( &constant_bin[ 5483979 ], 1156, 0 );
    const_str_digest_38f60eb8f98bd670aace1742747e287b = UNSTREAM_STRING_ASCII( &constant_bin[ 5485135 ], 25, 0 );
    const_tuple_str_plain_cu_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cu_tuple, 0, const_str_plain_cu ); Py_INCREF( const_str_plain_cu );
    const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 0, const_str_plain_get_blas_funcs ); Py_INCREF( const_str_plain_get_blas_funcs );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 1, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 2, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 3, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 4, const_str_plain_qr_insert ); Py_INCREF( const_str_plain_qr_insert );
    PyTuple_SET_ITEM( const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple, 5, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    const_str_digest_e9b58f2e6c1ea760340dd813c012ecbe = UNSTREAM_STRING_ASCII( &constant_bin[ 5485160 ], 44, 0 );
    const_str_digest_5eced94c08f4888182b58c846081cc4d = UNSTREAM_STRING_ASCII( &constant_bin[ 5485168 ], 35, 0 );
    const_str_digest_215ab9255fb49ee81689ccfc99c773b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 5485204 ], 38, 0 );
    const_list_str_plain_gcrotmk_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_gcrotmk_list, 0, const_str_plain_gcrotmk ); Py_INCREF( const_str_plain_gcrotmk );
    const_tuple_str_plain_oldest_str_plain_smallest_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_oldest_str_plain_smallest_tuple, 0, const_str_plain_oldest ); Py_INCREF( const_str_plain_oldest );
    PyTuple_SET_ITEM( const_tuple_str_plain_oldest_str_plain_smallest_tuple, 1, const_str_plain_smallest ); Py_INCREF( const_str_plain_smallest );
    const_tuple_type_FloatingPointError_type_ZeroDivisionError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_FloatingPointError_type_ZeroDivisionError_tuple, 0, (PyObject *)PyExc_FloatingPointError ); Py_INCREF( (PyObject *)PyExc_FloatingPointError );
    PyTuple_SET_ITEM( const_tuple_type_FloatingPointError_type_ZeroDivisionError_tuple, 1, (PyObject *)PyExc_ZeroDivisionError ); Py_INCREF( (PyObject *)PyExc_ZeroDivisionError );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$sparse$linalg$isolve$_gcrotmk( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ea1188cd8f6d4ae2435586b1c3f673a;
static PyCodeObject *codeobj_f9151d8374622c9007a030e2e15ae773;
static PyCodeObject *codeobj_6e6aee830a23e3d75c41bd74d4f96524;
static PyCodeObject *codeobj_8199448a68d05d56d9aced7a9b96b7b9;
static PyCodeObject *codeobj_55735cfaae4062fe524d5dd14941f487;
static PyCodeObject *codeobj_f41cdfa8f1ec15ab7249a132c2b36006;
static PyCodeObject *codeobj_16328df4102bdb2a24162c11dbf32a21;
static PyCodeObject *codeobj_805adbb5fa439f95e9c7d34b8132aabd;
static PyCodeObject *codeobj_d7bf84834c07ea9b900f17624a47709c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_215ab9255fb49ee81689ccfc99c773b8 );
    codeobj_2ea1188cd8f6d4ae2435586b1c3f673a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 67, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f9151d8374622c9007a030e2e15ae773 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 69, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e6aee830a23e3d75c41bd74d4f96524 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 305, const_tuple_str_plain_cu_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8199448a68d05d56d9aced7a9b96b7b9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 300, const_tuple_str_plain_c_str_plain_u_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_55735cfaae4062fe524d5dd14941f487 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 380, const_tuple_str_plain_c_str_plain_u_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f41cdfa8f1ec15ab7249a132c2b36006 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 488, const_tuple_str_plain_cz_str_plain_uz_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_16328df4102bdb2a24162c11dbf32a21 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e9b58f2e6c1ea760340dd813c012ecbe, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_805adbb5fa439f95e9c7d34b8132aabd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fgmres, 17, const_tuple_9228130402bf6b5bec48758888f7f24d_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7bf84834c07ea9b900f17624a47709c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gcrotmk, 185, const_tuple_bb1e39725966fd8327716e9b9c491bf2_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda(  );


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_matvec = python_pars[ 0 ];
    PyObject *par_v0 = python_pars[ 1 ];
    PyObject *par_m = python_pars[ 2 ];
    PyObject *par_atol = python_pars[ 3 ];
    PyObject *par_lpsolve = python_pars[ 4 ];
    PyObject *par_rpsolve = python_pars[ 5 ];
    PyObject *par_cs = python_pars[ 6 ];
    PyObject *par_outer_v = python_pars[ 7 ];
    PyObject *par_prepend_outer_v = python_pars[ 8 ];
    PyObject *var_axpy = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_scal = NULL;
    PyObject *var_nrm2 = NULL;
    PyObject *var_vs = NULL;
    PyObject *var_zs = NULL;
    PyObject *var_y = NULL;
    PyObject *var_res = NULL;
    PyObject *var_B = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_eps = NULL;
    PyObject *var_breakdown = NULL;
    PyObject *var_j = NULL;
    PyObject *var_z = NULL;
    PyObject *var_w = NULL;
    PyObject *var_w_norm = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_hcur = NULL;
    PyObject *var_v = NULL;
    PyObject *var_Q2 = NULL;
    PyObject *var_R2 = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_805adbb5fa439f95e9c7d34b8132aabd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_805adbb5fa439f95e9c7d34b8132aabd = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;

    // Actual function body.
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_lpsolve );
        tmp_compexpr_left_1 = par_lpsolve;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_assign_source_1 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda(  );



            {
                PyObject *old = par_lpsolve;
                assert( old != NULL );
                par_lpsolve = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_rpsolve );
        tmp_compexpr_left_2 = par_rpsolve;
        tmp_compexpr_right_2 = Py_None;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda(  );



            {
                PyObject *old = par_rpsolve;
                assert( old != NULL );
                par_rpsolve = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_805adbb5fa439f95e9c7d34b8132aabd, codeobj_805adbb5fa439f95e9c7d34b8132aabd, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_805adbb5fa439f95e9c7d34b8132aabd = cache_frame_805adbb5fa439f95e9c7d34b8132aabd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_805adbb5fa439f95e9c7d34b8132aabd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_805adbb5fa439f95e9c7d34b8132aabd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = LIST_COPY( const_list_str_plain_axpy_str_plain_dot_str_plain_scal_str_plain_nrm2_list );
        CHECK_OBJECT( par_v0 );
        tmp_tuple_element_1 = par_v0;
        tmp_args_element_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_1 );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
        if ( tmp_assign_source_4 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
        if ( tmp_assign_source_5 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
        if ( tmp_assign_source_6 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
        if ( tmp_assign_source_7 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 71;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 71;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 71;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_axpy == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_axpy = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_dot == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_dot = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert( var_scal == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_scal = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        assert( var_nrm2 == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_nrm2 = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_v0 );
        tmp_list_element_1 = par_v0;
        tmp_assign_source_12 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_12, 0, tmp_list_element_1 );
        assert( var_vs == NULL );
        var_vs = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyList_New( 0 );
        assert( var_zs == NULL );
        var_zs = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nan );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_m );
        tmp_left_name_1 = par_m;
        CHECK_OBJECT( par_outer_v );
        tmp_len_arg_1 = par_outer_v;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_m;
            assert( old != NULL );
            par_m = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cs );
        tmp_len_arg_2 = par_cs;
        tmp_tuple_element_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_m );
        tmp_tuple_element_3 = par_m;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( par_v0 );
        tmp_source_name_3 = par_v0;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 81;
        tmp_assign_source_16 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_B == NULL );
        var_B = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ones );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = const_tuple_tuple_int_pos_1_int_pos_1_tuple_tuple;
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( par_v0 );
        tmp_source_name_5 = par_v0;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 84;
        tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Q == NULL );
        var_Q = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = const_tuple_tuple_int_pos_1_int_0_tuple_tuple;
        tmp_dict_key_3 = const_str_plain_dtype;
        CHECK_OBJECT( par_v0 );
        tmp_source_name_7 = par_v0;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 85;
        tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_source_name_8;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_10;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_finfo );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_v0 );
        tmp_source_name_10 = par_v0;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_eps );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_eps == NULL );
        var_eps = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_False;
        assert( var_breakdown == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_breakdown = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_7;
        CHECK_OBJECT( par_m );
        tmp_args_element_name_4 = par_m;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_21;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 92;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_23 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_23;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_prepend_outer_v );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_prepend_outer_v );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_j );
        tmp_compexpr_left_3 = var_j;
        CHECK_OBJECT( par_outer_v );
        tmp_len_arg_3 = par_outer_v;
        tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_outer_v );
            tmp_subscribed_name_1 = par_outer_v;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_1 = var_j;
            tmp_iter_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
            if ( tmp_assign_source_25 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 96;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 96;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;
                Py_XDECREF( old );
            }

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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 96;
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

                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 96;
                goto try_except_handler_6;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_4;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_z;
                var_z = tmp_assign_source_27;
                Py_INCREF( var_z );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_w;
                var_w = tmp_assign_source_28;
                Py_INCREF( var_w );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            int tmp_truth_name_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT( par_prepend_outer_v );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_prepend_outer_v );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_j );
            tmp_compexpr_left_4 = var_j;
            CHECK_OBJECT( par_outer_v );
            tmp_len_arg_4 = par_outer_v;
            tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 97;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_4 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_assign_source_29;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( par_rpsolve );
                tmp_called_name_7 = par_rpsolve;
                CHECK_OBJECT( par_v0 );
                tmp_args_element_name_5 = par_v0;
                frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 98;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                if ( tmp_assign_source_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 98;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_z;
                    var_z = tmp_assign_source_29;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_30;
                tmp_assign_source_30 = Py_None;
                {
                    PyObject *old = var_w;
                    var_w = tmp_assign_source_30;
                    Py_INCREF( var_w );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                int tmp_and_left_truth_3;
                nuitka_bool tmp_and_left_value_3;
                nuitka_bool tmp_and_right_value_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_len_arg_5;
                CHECK_OBJECT( par_prepend_outer_v );
                tmp_operand_name_1 = par_prepend_outer_v;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_and_left_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_3 == 1 )
                {
                    goto and_right_3;
                }
                else
                {
                    goto and_left_3;
                }
                and_right_3:;
                CHECK_OBJECT( var_j );
                tmp_compexpr_left_5 = var_j;
                CHECK_OBJECT( par_m );
                tmp_left_name_2 = par_m;
                CHECK_OBJECT( par_outer_v );
                tmp_len_arg_5 = par_outer_v;
                tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_5 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_compexpr_right_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 100;
                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_4;
                }
                tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_5 = tmp_and_right_value_3;
                goto and_end_3;
                and_left_3:;
                tmp_condition_result_5 = tmp_and_left_value_3;
                and_end_3:;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_5;
                }
                else
                {
                    goto branch_no_5;
                }
                branch_yes_5:;
                // Tried code:
                {
                    PyObject *tmp_assign_source_31;
                    PyObject *tmp_iter_arg_4;
                    PyObject *tmp_subscribed_name_2;
                    PyObject *tmp_subscript_name_2;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_len_arg_6;
                    CHECK_OBJECT( par_outer_v );
                    tmp_subscribed_name_2 = par_outer_v;
                    CHECK_OBJECT( var_j );
                    tmp_left_name_3 = var_j;
                    CHECK_OBJECT( par_m );
                    tmp_left_name_4 = par_m;
                    CHECK_OBJECT( par_outer_v );
                    tmp_len_arg_6 = par_outer_v;
                    tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_6 );
                    if ( tmp_right_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_right_name_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_right_name_4 );
                    if ( tmp_right_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
                    Py_DECREF( tmp_right_name_3 );
                    if ( tmp_subscript_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_iter_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                    Py_DECREF( tmp_subscript_name_2 );
                    if ( tmp_iter_arg_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_4 );
                    Py_DECREF( tmp_iter_arg_4 );
                    if ( tmp_assign_source_31 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_3__source_iter;
                        tmp_tuple_unpack_3__source_iter = tmp_assign_source_31;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_32;
                    PyObject *tmp_unpack_7;
                    CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
                    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 101;
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_3__element_1;
                        tmp_tuple_unpack_3__element_1 = tmp_assign_source_32;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_33;
                    PyObject *tmp_unpack_8;
                    CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
                    tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
                    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
                    if ( tmp_assign_source_33 == NULL )
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


                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 101;
                        goto try_except_handler_8;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_3__element_2;
                        tmp_tuple_unpack_3__element_2 = tmp_assign_source_33;
                        Py_XDECREF( old );
                    }

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

                                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                                exception_lineno = 101;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        exception_lineno = 101;
                        goto try_except_handler_8;
                    }
                }
                goto try_end_5;
                // Exception handler code:
                try_except_handler_8:;
                exception_keeper_type_5 = exception_type;
                exception_keeper_value_5 = exception_value;
                exception_keeper_tb_5 = exception_tb;
                exception_keeper_lineno_5 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
                Py_DECREF( tmp_tuple_unpack_3__source_iter );
                tmp_tuple_unpack_3__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_5;
                exception_value = exception_keeper_value_5;
                exception_tb = exception_keeper_tb_5;
                exception_lineno = exception_keeper_lineno_5;

                goto try_except_handler_7;
                // End of try:
                try_end_5:;
                goto try_end_6;
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

                Py_XDECREF( tmp_tuple_unpack_3__element_1 );
                tmp_tuple_unpack_3__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_3__element_2 );
                tmp_tuple_unpack_3__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_6;
                exception_value = exception_keeper_value_6;
                exception_tb = exception_keeper_tb_6;
                exception_lineno = exception_keeper_lineno_6;

                goto try_except_handler_4;
                // End of try:
                try_end_6:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
                Py_DECREF( tmp_tuple_unpack_3__source_iter );
                tmp_tuple_unpack_3__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_34;
                    CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
                    tmp_assign_source_34 = tmp_tuple_unpack_3__element_1;
                    {
                        PyObject *old = var_z;
                        var_z = tmp_assign_source_34;
                        Py_INCREF( var_z );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_3__element_1 );
                tmp_tuple_unpack_3__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_35;
                    CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
                    tmp_assign_source_35 = tmp_tuple_unpack_3__element_2;
                    {
                        PyObject *old = var_w;
                        var_w = tmp_assign_source_35;
                        Py_INCREF( var_w );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_3__element_2 );
                tmp_tuple_unpack_3__element_2 = NULL;

                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_assign_source_36;
                    PyObject *tmp_called_name_8;
                    PyObject *tmp_args_element_name_6;
                    PyObject *tmp_subscribed_name_3;
                    PyObject *tmp_subscript_name_3;
                    CHECK_OBJECT( par_rpsolve );
                    tmp_called_name_8 = par_rpsolve;
                    CHECK_OBJECT( var_vs );
                    tmp_subscribed_name_3 = var_vs;
                    tmp_subscript_name_3 = const_int_neg_1;
                    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
                    if ( tmp_args_element_name_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 103;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_4;
                    }
                    frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 103;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_6 };
                        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_6 );
                    if ( tmp_assign_source_36 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 103;
                        type_description_1 = "oooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_4;
                    }
                    {
                        PyObject *old = var_z;
                        var_z = tmp_assign_source_36;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_37;
                    tmp_assign_source_37 = Py_None;
                    {
                        PyObject *old = var_w;
                        var_w = tmp_assign_source_37;
                        Py_INCREF( var_w );
                        Py_XDECREF( old );
                    }

                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        if ( var_w == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "w" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_compexpr_left_6 = var_w;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_8;
            CHECK_OBJECT( par_lpsolve );
            tmp_called_name_9 = par_lpsolve;
            CHECK_OBJECT( par_matvec );
            tmp_called_name_10 = par_matvec;
            if ( var_z == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "z" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 107;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_args_element_name_8 = var_z;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 107;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 107;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_38 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 107;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_w;
                var_w = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_instance_1;
            if ( var_w == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "w" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 110;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_instance_1 = var_w;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 110;
            tmp_assign_source_39 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_w;
                var_w = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_11 = var_nrm2;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_9 = var_w;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_w_norm;
            var_w_norm = tmp_assign_source_40;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_10;
        tmp_called_name_12 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_cs );
        tmp_args_element_name_10 = par_cs;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_42 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 116;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_6 = tmp_for_loop_2__iter_value;
        tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_6 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
        if ( tmp_assign_source_44 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 116;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
        if ( tmp_assign_source_45 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 116;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_45;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 116;
                    goto try_except_handler_11;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 116;
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_46 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_46;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_47 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_47;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( var_dot );
        tmp_called_name_13 = var_dot;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_11 = var_c;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_12 = var_w;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT( var_alpha );
        tmp_ass_subvalue_1 = var_alpha;
        CHECK_OBJECT( var_B );
        tmp_ass_subscribed_1 = var_B;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_4 = var_i;
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_4 = var_j;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_4 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_14 = var_axpy;
        CHECK_OBJECT( var_c );
        tmp_args_element_name_13 = var_c;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_14 = var_w;
        CHECK_OBJECT( var_c );
        tmp_source_name_11 = var_c;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_args_element_name_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_alpha );
        tmp_operand_name_2 = var_alpha;
        tmp_args_element_name_16 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_15 );

            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_w;
            assert( old != NULL );
            var_w = tmp_assign_source_49;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_12 = tmp_mvar_value_8;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_zeros );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_j );
        tmp_left_name_5 = var_j;
        tmp_right_name_5 = const_int_pos_2;
        tmp_tuple_element_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_name_4 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
        tmp_dict_key_4 = const_str_plain_dtype;
        CHECK_OBJECT( var_Q );
        tmp_source_name_13 = var_Q;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dtype );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 122;
        tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_hcur;
            var_hcur = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_called_name_16 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( var_vs );
        tmp_args_element_name_17 = var_vs;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_51;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_52 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_52 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                exception_lineno = 123;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_iter_arg_8 = tmp_for_loop_3__iter_value;
        tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_8 );
        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
        if ( tmp_assign_source_54 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 123;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
        if ( tmp_assign_source_55 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 123;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_55;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 123;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 123;
            goto try_except_handler_14;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_56 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_56;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_57 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_57;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        CHECK_OBJECT( var_dot );
        tmp_called_name_17 = var_dot;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_18 = var_v;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_19 = var_w;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
        }

        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_58;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_alpha );
        tmp_ass_subvalue_2 = var_alpha;
        CHECK_OBJECT( var_hcur );
        tmp_ass_subscribed_2 = var_hcur;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_source_name_14;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_18 = var_axpy;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_20 = var_v;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_21 = var_w;
        CHECK_OBJECT( var_v );
        tmp_source_name_14 = var_v;
        tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_shape );
        if ( tmp_subscribed_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_name_5 = const_int_0;
        tmp_args_element_name_22 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
        Py_DECREF( tmp_subscribed_name_5 );
        if ( tmp_args_element_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT( var_alpha );
        tmp_operand_name_3 = var_alpha;
        tmp_args_element_name_23 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_22 );

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_18, call_args );
        }

        Py_DECREF( tmp_args_element_name_22 );
        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_w;
            assert( old != NULL );
            var_w = tmp_assign_source_59;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_4;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_19 = var_nrm2;
        CHECK_OBJECT( var_w );
        tmp_args_element_name_24 = var_w;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_hcur );
        tmp_ass_subscribed_3 = var_hcur;
        if ( var_i == NULL )
        {
            Py_DECREF( tmp_ass_subvalue_3 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_left_name_6 = var_i;
        tmp_right_name_6 = const_int_pos_1;
        tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_ass_subscript_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_20;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_kw_name_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_source_name_15 = tmp_mvar_value_9;
        tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_errstate );
        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_kw_name_5 = PyDict_Copy( const_dict_57bf0736a581f48071f24930e5a8d5a8 );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 129;
        tmp_assign_source_60 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_20, tmp_kw_name_5 );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_16;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_16 = tmp_with_1__source;
        tmp_called_name_21 = LOOKUP_SPECIAL( tmp_source_name_16, const_str_plain___enter__ );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 129;
        tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS( tmp_called_name_21 );
        Py_DECREF( tmp_called_name_21 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_61;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_17 = tmp_with_1__source;
        tmp_assign_source_62 = LOOKUP_SPECIAL( tmp_source_name_17, const_str_plain___exit__ );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_62;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = Py_True;
        {
            PyObject *old = tmp_with_1__indicator;
            tmp_with_1__indicator = tmp_assign_source_63;
            Py_INCREF( tmp_with_1__indicator );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        tmp_left_name_7 = const_int_pos_1;
        CHECK_OBJECT( var_hcur );
        tmp_subscribed_name_6 = var_hcur;
        tmp_subscript_name_6 = const_int_neg_1;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, -1 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_64 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_64;
            Py_XDECREF( old );
        }

    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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

    if ( exception_keeper_tb_13 == NULL )
    {
        exception_keeper_tb_13 = MAKE_TRACEBACK( frame_805adbb5fa439f95e9c7d34b8132aabd, exception_keeper_lineno_13 );
    }
    else if ( exception_keeper_lineno_13 != 0 )
    {
        exception_keeper_tb_13 = ADD_TRACEBACK( exception_keeper_tb_13, frame_805adbb5fa439f95e9c7d34b8132aabd, exception_keeper_lineno_13 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    PyException_SetTraceback( exception_keeper_value_13, (PyObject *)exception_keeper_tb_13 );
    PUBLISH_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_65;
            tmp_assign_source_65 = Py_False;
            {
                PyObject *old = tmp_with_1__indicator;
                assert( old != NULL );
                tmp_with_1__indicator = tmp_assign_source_65;
                Py_INCREF( tmp_with_1__indicator );
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_args_element_name_27;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_22 = tmp_with_1__exit;
            tmp_args_element_name_25 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_26 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_27 = EXC_TRACEBACK(PyThreadState_GET());
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 129;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_22, call_args );
            }

            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 129;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame) frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 129;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame) frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_18;
        branch_end_7:;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_13;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres );
    return NULL;
    // End of try:
    try_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_8;
        nuitka_bool tmp_compexpr_right_8;
        int tmp_truth_name_3;
        CHECK_OBJECT( tmp_with_1__indicator );
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_with_1__indicator );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_15 );
            Py_XDECREF( exception_keeper_value_15 );
            Py_XDECREF( exception_keeper_tb_15 );

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_compexpr_left_8 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_23;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_23 = tmp_with_1__exit;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 129;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_15 );
                Py_XDECREF( exception_keeper_value_15 );
                Py_XDECREF( exception_keeper_tb_15 );

                exception_lineno = 129;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_9:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    {
        nuitka_bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_9;
        nuitka_bool tmp_compexpr_right_9;
        int tmp_truth_name_4;
        CHECK_OBJECT( tmp_with_1__indicator );
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_with_1__indicator );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_compexpr_left_9 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_compexpr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_24;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_24 = tmp_with_1__exit;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 129;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_10:;
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_4;
    // End of try:
    try_end_16:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_called_name_25;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_28;
        int tmp_truth_name_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_18 = tmp_mvar_value_10;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_isfinite );
        if ( tmp_called_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if ( var_alpha == NULL )
        {
            Py_DECREF( tmp_called_name_25 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_28 = var_alpha;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_called_name_25 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 133;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_11 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            CHECK_OBJECT( var_scal );
            tmp_called_name_26 = var_scal;
            if ( var_alpha == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "alpha" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_args_element_name_29 = var_alpha;
            CHECK_OBJECT( var_w );
            tmp_args_element_name_30 = var_w;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
                tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
            }

            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = var_w;
                assert( old != NULL );
                var_w = tmp_assign_source_66;
                Py_DECREF( old );
            }

        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_hcur );
        tmp_subscribed_name_7 = var_hcur;
        tmp_subscript_name_7 = const_int_neg_1;
        tmp_compexpr_left_10 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, -1 );
        if ( tmp_compexpr_left_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_eps );
        tmp_left_name_8 = var_eps;
        CHECK_OBJECT( var_w_norm );
        tmp_right_name_8 = var_w_norm;
        tmp_compexpr_right_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_compexpr_right_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_10 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_operand_name_5 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        Py_DECREF( tmp_compexpr_left_10 );
        Py_DECREF( tmp_compexpr_right_10 );
        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_67;
            tmp_assign_source_67 = Py_True;
            {
                PyObject *old = var_breakdown;
                var_breakdown = tmp_assign_source_67;
                Py_INCREF( var_breakdown );
                Py_XDECREF( old );
            }

        }
        branch_no_12:;
    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_source_name_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_31;
        CHECK_OBJECT( var_vs );
        tmp_source_name_19 = var_vs;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
        if ( tmp_called_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if ( var_w == NULL )
        {
            Py_DECREF( tmp_called_name_27 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "w" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_31 = var_w;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_called_name_27 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_source_name_20;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT( var_zs );
        tmp_source_name_20 = var_zs;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
        if ( tmp_called_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if ( var_z == NULL )
        {
            Py_DECREF( tmp_called_name_28 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_32 = var_z;
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
        }

        Py_DECREF( tmp_called_name_28 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_29;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_22;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_21 = tmp_mvar_value_11;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_zeros );
        if ( tmp_called_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_j );
        tmp_left_name_9 = var_j;
        tmp_right_name_9 = const_int_pos_2;
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_29 );

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_j );
        tmp_left_name_10 = var_j;
        tmp_right_name_10 = const_int_pos_2;
        tmp_tuple_element_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_29 );
            Py_DECREF( tmp_tuple_element_6 );

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
        tmp_args_name_5 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
        tmp_dict_key_5 = const_str_plain_dtype;
        CHECK_OBJECT( var_Q );
        tmp_source_name_22 = var_Q;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_dtype );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_29 );
            Py_DECREF( tmp_args_name_5 );

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_order;
        tmp_dict_value_6 = const_str_plain_F;
        tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 148;
        tmp_assign_source_68 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_5, tmp_kw_name_6 );
        Py_DECREF( tmp_called_name_29 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_Q2;
            var_Q2 = tmp_assign_source_68;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_step_name_1;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_Q );
        tmp_ass_subvalue_4 = var_Q;
        CHECK_OBJECT( var_Q2 );
        tmp_ass_subscribed_4 = var_Q2;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_j );
        tmp_left_name_11 = var_j;
        tmp_right_name_11 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_tuple_element_8 == NULL) );
        tmp_ass_subscript_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_8 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_j );
        tmp_left_name_12 = var_j;
        tmp_right_name_12 = const_int_pos_1;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_4 );

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_tuple_element_8 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_8 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        tmp_ass_subvalue_5 = const_int_pos_1;
        CHECK_OBJECT( var_Q2 );
        tmp_ass_subscribed_5 = var_Q2;
        CHECK_OBJECT( var_j );
        tmp_left_name_13 = var_j;
        tmp_right_name_13 = const_int_pos_1;
        tmp_tuple_element_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subscript_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_j );
        tmp_left_name_14 = var_j;
        tmp_right_name_14 = const_int_pos_1;
        tmp_tuple_element_9 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_5 );

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_9 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_name_30;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_24;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_23 = tmp_mvar_value_12;
        tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_zeros );
        if ( tmp_called_name_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_j );
        tmp_left_name_15 = var_j;
        tmp_right_name_15 = const_int_pos_2;
        tmp_tuple_element_11 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_tuple_element_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_30 );

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_11 = var_j;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
        tmp_args_name_6 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
        tmp_dict_key_7 = const_str_plain_dtype;
        CHECK_OBJECT( var_R );
        tmp_source_name_24 = var_R;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_dtype );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_30 );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_name_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_order;
        tmp_dict_value_8 = const_str_plain_F;
        tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 152;
        tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_30, tmp_args_name_6, tmp_kw_name_7 );
        Py_DECREF( tmp_called_name_30 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_R2;
            var_R2 = tmp_assign_source_69;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( var_R );
        tmp_ass_subvalue_6 = var_R;
        CHECK_OBJECT( var_R2 );
        tmp_ass_subscribed_6 = var_R2;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_j );
        tmp_left_name_16 = var_j;
        tmp_right_name_16 = const_int_pos_1;
        tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_12 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_tuple_element_12 == NULL) );
        tmp_ass_subscript_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 0, tmp_tuple_element_12 );
        tmp_tuple_element_12 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 1, tmp_tuple_element_12 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subscript_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_name_31;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kw_name_8;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_qr_insert );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr_insert );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr_insert" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_called_name_31 = tmp_mvar_value_13;
        CHECK_OBJECT( var_Q2 );
        tmp_tuple_element_13 = var_Q2;
        tmp_args_name_7 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_13 );
        CHECK_OBJECT( var_R2 );
        tmp_tuple_element_13 = var_R2;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_13 );
        CHECK_OBJECT( var_hcur );
        tmp_tuple_element_13 = var_hcur;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_7, 2, tmp_tuple_element_13 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_13 = var_j;
        Py_INCREF( tmp_tuple_element_13 );
        PyTuple_SET_ITEM( tmp_args_name_7, 3, tmp_tuple_element_13 );
        tmp_kw_name_8 = PyDict_Copy( const_dict_70db24d60b08c6c76c4566b9a7fcb1b3 );
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 155;
        tmp_iter_arg_9 = CALL_FUNCTION( tmp_called_name_31, tmp_args_name_7, tmp_kw_name_8 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_8 );
        if ( tmp_iter_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_70 = MAKE_ITERATOR( tmp_iter_arg_9 );
        Py_DECREF( tmp_iter_arg_9 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_70;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
        if ( tmp_assign_source_71 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_71;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
        if ( tmp_assign_source_72 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_72;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_6 ); assert( HAS_ITERNEXT( tmp_iterator_name_6 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 155;
                    goto try_except_handler_20;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 155;
            goto try_except_handler_20;
        }
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_4;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_73 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_Q;
            assert( old != NULL );
            var_Q = tmp_assign_source_73;
            Py_INCREF( var_Q );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_74 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_R;
            assert( old != NULL );
            var_R = tmp_assign_source_74;
            Py_INCREF( var_R );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        tmp_called_name_32 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_32 != NULL );
        CHECK_OBJECT( var_Q );
        tmp_subscribed_name_8 = var_Q;
        tmp_subscript_name_8 = const_tuple_int_0_int_neg_1_tuple;
        tmp_args_element_name_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 163;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
        }

        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_res;
            assert( old != NULL );
            var_res = tmp_assign_source_75;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        int tmp_truth_name_6;
        CHECK_OBJECT( var_res );
        tmp_compexpr_left_11 = var_res;
        CHECK_OBJECT( par_atol );
        tmp_compexpr_right_11 = par_atol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_breakdown == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "breakdown" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE( var_breakdown );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_right_value_1 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_13 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        goto loop_end_1;
        branch_no_13:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_called_name_33;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_14;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_14;
        tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_isfinite );
        if ( tmp_called_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_R == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "R" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_9 = var_R;
        if ( var_j == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_14 = var_j;
        tmp_subscript_name_9 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_14 );
        if ( var_j == NULL )
        {
            Py_DECREF( tmp_called_name_33 );
            Py_DECREF( tmp_subscript_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_14 = var_j;
        Py_INCREF( tmp_tuple_element_14 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_14 );
        tmp_args_element_name_34 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_args_element_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_33 );

            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_operand_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
        }

        Py_DECREF( tmp_called_name_33 );
        Py_DECREF( tmp_args_element_name_34 );
        if ( tmp_operand_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
        Py_DECREF( tmp_operand_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_called_name_34;
            PyObject *tmp_mvar_value_15;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_34 = tmp_mvar_value_15;
            frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 171;
            tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_34 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 171;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_14:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_name_35;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_step_name_4;
        PyObject *tmp_start_name_5;
        PyObject *tmp_stop_name_5;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_step_name_5;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_start_name_6;
        PyObject *tmp_stop_name_6;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_step_name_6;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_lstsq );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lstsq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_called_name_35 = tmp_mvar_value_16;
        if ( var_R == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "R" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_subscribed_name_10 = var_R;
        tmp_start_name_4 = Py_None;
        if ( var_j == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_left_name_17 = var_j;
        tmp_right_name_17 = const_int_pos_1;
        tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_stop_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_15 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_stop_name_4 );
        assert( !(tmp_tuple_element_15 == NULL) );
        tmp_subscript_name_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_15 );
        tmp_start_name_5 = Py_None;
        if ( var_j == NULL )
        {
            Py_DECREF( tmp_subscript_name_10 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_left_name_18 = var_j;
        tmp_right_name_18 = const_int_pos_1;
        tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_stop_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_10 );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_step_name_5 = Py_None;
        tmp_tuple_element_15 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
        Py_DECREF( tmp_stop_name_5 );
        assert( !(tmp_tuple_element_15 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_15 );
        tmp_args_element_name_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_args_element_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        if ( var_Q == NULL )
        {
            Py_DECREF( tmp_args_element_name_35 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Q" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_subscribed_name_11 = var_Q;
        tmp_tuple_element_16 = const_int_0;
        tmp_subscript_name_11 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_subscript_name_11, 0, tmp_tuple_element_16 );
        tmp_start_name_6 = Py_None;
        if ( var_j == NULL )
        {
            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_subscript_name_11 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_left_name_19 = var_j;
        tmp_right_name_19 = const_int_pos_1;
        tmp_stop_name_6 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_stop_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_subscript_name_11 );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_step_name_6 = Py_None;
        tmp_tuple_element_16 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
        Py_DECREF( tmp_stop_name_6 );
        assert( !(tmp_tuple_element_16 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_11, 1, tmp_tuple_element_16 );
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        Py_DECREF( tmp_subscript_name_11 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 178;
        tmp_args_element_name_36 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_args_element_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, call_args );
        }

        Py_DECREF( tmp_args_element_name_35 );
        Py_DECREF( tmp_args_element_name_36 );
        if ( tmp_iter_arg_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_assign_source_76 = MAKE_ITERATOR( tmp_iter_arg_10 );
        Py_DECREF( tmp_iter_arg_10 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_15, 0, 4 );
        if ( tmp_assign_source_77 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 178;
            goto try_except_handler_22;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_16, 1, 4 );
        if ( tmp_assign_source_78 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 178;
            goto try_except_handler_22;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_17, 2, 4 );
        if ( tmp_assign_source_79 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 178;
            goto try_except_handler_22;
        }
        assert( tmp_tuple_unpack_7__element_3 == NULL );
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_18, 3, 4 );
        if ( tmp_assign_source_80 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 178;
            goto try_except_handler_22;
        }
        assert( tmp_tuple_unpack_7__element_4 == NULL );
        tmp_tuple_unpack_7__element_4 = tmp_assign_source_80;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_7 ); assert( HAS_ITERNEXT( tmp_iterator_name_7 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

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

                    type_description_1 = "oooooooooooooooooooooooooooooooooo";
                    exception_lineno = 178;
                    goto try_except_handler_22;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            exception_lineno = 178;
            goto try_except_handler_22;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_4 );
    tmp_tuple_unpack_7__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_81 = tmp_tuple_unpack_7__element_1;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_81 );
        var_y = tmp_assign_source_81;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_82 = tmp_tuple_unpack_7__element_2;
        assert( var__ == NULL );
        Py_INCREF( tmp_assign_source_82 );
        var__ = tmp_assign_source_82;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
        tmp_assign_source_83 = tmp_tuple_unpack_7__element_3;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_83;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_4 );
        tmp_assign_source_84 = tmp_tuple_unpack_7__element_4;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_84;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_4 );
    tmp_tuple_unpack_7__element_4 = NULL;

    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_start_name_7;
        PyObject *tmp_stop_name_7;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_step_name_7;
        CHECK_OBJECT( var_B );
        tmp_subscribed_name_12 = var_B;
        tmp_tuple_element_17 = const_slice_none_none_none;
        tmp_subscript_name_12 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_subscript_name_12, 0, tmp_tuple_element_17 );
        tmp_start_name_7 = Py_None;
        if ( var_j == NULL )
        {
            Py_DECREF( tmp_subscript_name_12 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_20 = var_j;
        tmp_right_name_20 = const_int_pos_1;
        tmp_stop_name_7 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_stop_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_12 );

            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_7 = Py_None;
        tmp_tuple_element_17 = MAKE_SLICEOBJ3( tmp_start_name_7, tmp_stop_name_7, tmp_step_name_7 );
        Py_DECREF( tmp_stop_name_7 );
        assert( !(tmp_tuple_element_17 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_12, 1, tmp_tuple_element_17 );
        tmp_assign_source_85 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_assign_source_85 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_B;
            assert( old != NULL );
            var_B = tmp_assign_source_85;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_18;
        if ( var_Q == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Q" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = var_Q;
        tmp_return_value = PyTuple_New( 7 );
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_18 );
        if ( var_R == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "R" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = var_R;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_18 );
        CHECK_OBJECT( var_B );
        tmp_tuple_element_18 = var_B;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_18 );
        CHECK_OBJECT( var_vs );
        tmp_tuple_element_18 = var_vs;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_18 );
        CHECK_OBJECT( var_zs );
        tmp_tuple_element_18 = var_zs;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_18 );
        CHECK_OBJECT( var_y );
        tmp_tuple_element_18 = var_y;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_18 );
        if ( var_res == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "res" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "oooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = var_res;
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_18 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_805adbb5fa439f95e9c7d34b8132aabd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_805adbb5fa439f95e9c7d34b8132aabd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_805adbb5fa439f95e9c7d34b8132aabd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_805adbb5fa439f95e9c7d34b8132aabd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_805adbb5fa439f95e9c7d34b8132aabd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_805adbb5fa439f95e9c7d34b8132aabd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_805adbb5fa439f95e9c7d34b8132aabd,
        type_description_1,
        par_matvec,
        par_v0,
        par_m,
        par_atol,
        par_lpsolve,
        par_rpsolve,
        par_cs,
        par_outer_v,
        par_prepend_outer_v,
        var_axpy,
        var_dot,
        var_scal,
        var_nrm2,
        var_vs,
        var_zs,
        var_y,
        var_res,
        var_B,
        var_Q,
        var_R,
        var_eps,
        var_breakdown,
        var_j,
        var_z,
        var_w,
        var_w_norm,
        var_i,
        var_c,
        var_alpha,
        var_hcur,
        var_v,
        var_Q2,
        var_R2,
        var__
    );


    // Release cached frame.
    if ( frame_805adbb5fa439f95e9c7d34b8132aabd == cache_frame_805adbb5fa439f95e9c7d34b8132aabd )
    {
        Py_DECREF( frame_805adbb5fa439f95e9c7d34b8132aabd );
    }
    cache_frame_805adbb5fa439f95e9c7d34b8132aabd = NULL;

    assertFrameObject( frame_805adbb5fa439f95e9c7d34b8132aabd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_matvec );
    Py_DECREF( par_matvec );
    par_matvec = NULL;

    CHECK_OBJECT( (PyObject *)par_v0 );
    Py_DECREF( par_v0 );
    par_v0 = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_lpsolve );
    Py_DECREF( par_lpsolve );
    par_lpsolve = NULL;

    CHECK_OBJECT( (PyObject *)par_rpsolve );
    Py_DECREF( par_rpsolve );
    par_rpsolve = NULL;

    CHECK_OBJECT( (PyObject *)par_cs );
    Py_DECREF( par_cs );
    par_cs = NULL;

    CHECK_OBJECT( (PyObject *)par_outer_v );
    Py_DECREF( par_outer_v );
    par_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend_outer_v );
    Py_DECREF( par_prepend_outer_v );
    par_prepend_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)var_axpy );
    Py_DECREF( var_axpy );
    var_axpy = NULL;

    CHECK_OBJECT( (PyObject *)var_dot );
    Py_DECREF( var_dot );
    var_dot = NULL;

    CHECK_OBJECT( (PyObject *)var_scal );
    Py_DECREF( var_scal );
    var_scal = NULL;

    CHECK_OBJECT( (PyObject *)var_nrm2 );
    Py_DECREF( var_nrm2 );
    var_nrm2 = NULL;

    CHECK_OBJECT( (PyObject *)var_vs );
    Py_DECREF( var_vs );
    var_vs = NULL;

    CHECK_OBJECT( (PyObject *)var_zs );
    Py_DECREF( var_zs );
    var_zs = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_B );
    Py_DECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)var_eps );
    Py_DECREF( var_eps );
    var_eps = NULL;

    Py_XDECREF( var_breakdown );
    var_breakdown = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_w_norm );
    var_w_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_hcur );
    var_hcur = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_Q2 );
    var_Q2 = NULL;

    Py_XDECREF( var_R2 );
    var_R2 = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_matvec );
    Py_DECREF( par_matvec );
    par_matvec = NULL;

    CHECK_OBJECT( (PyObject *)par_v0 );
    Py_DECREF( par_v0 );
    par_v0 = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    CHECK_OBJECT( (PyObject *)par_lpsolve );
    Py_DECREF( par_lpsolve );
    par_lpsolve = NULL;

    CHECK_OBJECT( (PyObject *)par_rpsolve );
    Py_DECREF( par_rpsolve );
    par_rpsolve = NULL;

    CHECK_OBJECT( (PyObject *)par_cs );
    Py_DECREF( par_cs );
    par_cs = NULL;

    CHECK_OBJECT( (PyObject *)par_outer_v );
    Py_DECREF( par_outer_v );
    par_outer_v = NULL;

    CHECK_OBJECT( (PyObject *)par_prepend_outer_v );
    Py_DECREF( par_prepend_outer_v );
    par_prepend_outer_v = NULL;

    Py_XDECREF( var_axpy );
    var_axpy = NULL;

    Py_XDECREF( var_dot );
    var_dot = NULL;

    Py_XDECREF( var_scal );
    var_scal = NULL;

    Py_XDECREF( var_nrm2 );
    var_nrm2 = NULL;

    Py_XDECREF( var_vs );
    var_vs = NULL;

    Py_XDECREF( var_zs );
    var_zs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_eps );
    var_eps = NULL;

    Py_XDECREF( var_breakdown );
    var_breakdown = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_w_norm );
    var_w_norm = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_hcur );
    var_hcur = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_Q2 );
    var_Q2 = NULL;

    Py_XDECREF( var_R2 );
    var_R2 = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres );
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


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_tol = python_pars[ 3 ];
    PyObject *par_maxiter = python_pars[ 4 ];
    PyObject *par_M = python_pars[ 5 ];
    PyObject *par_callback = python_pars[ 6 ];
    PyObject *par_m = python_pars[ 7 ];
    PyObject *par_k = python_pars[ 8 ];
    PyObject *par_CU = python_pars[ 9 ];
    PyObject *par_discard_C = python_pars[ 10 ];
    PyObject *par_truncate = python_pars[ 11 ];
    PyObject *par_atol = python_pars[ 12 ];
    PyObject *var_x = NULL;
    PyObject *var_postprocess = NULL;
    PyObject *var_matvec = NULL;
    PyObject *var_psolve = NULL;
    PyObject *var_axpy = NULL;
    PyObject *var_dot = NULL;
    PyObject *var_scal = NULL;
    PyObject *var_r = NULL;
    PyObject *var_nrm2 = NULL;
    PyObject *var_b_norm = NULL;
    PyObject *var_C = NULL;
    PyObject *var_us = NULL;
    PyObject *var_j = NULL;
    PyObject *var_c = NULL;
    PyObject *var_u = NULL;
    PyObject *var_Q = NULL;
    PyObject *var_R = NULL;
    PyObject *var_P = NULL;
    PyObject *var_cs = NULL;
    PyObject *var_new_us = NULL;
    PyObject *var_i = NULL;
    PyObject *var_yc = NULL;
    PyObject *var_j_outer = NULL;
    PyObject *var_beta = NULL;
    PyObject *var_beta_tol = NULL;
    PyObject *var_ml = NULL;
    PyObject *var_B = NULL;
    PyObject *var_vs = NULL;
    PyObject *var_zs = NULL;
    PyObject *var_y = NULL;
    PyObject *var_pres = NULL;
    PyObject *var_ux = NULL;
    PyObject *var_z = NULL;
    PyObject *var_by = NULL;
    PyObject *var_cu = NULL;
    PyObject *var_byc = NULL;
    PyObject *var_hy = NULL;
    PyObject *var_cx = NULL;
    PyObject *var_v = NULL;
    PyObject *var_hyc = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_gamma = NULL;
    PyObject *var_D = NULL;
    PyObject *var_W = NULL;
    PyObject *var_sigma = NULL;
    PyObject *var_V = NULL;
    PyObject *var_new_CU = NULL;
    PyObject *var_w = NULL;
    PyObject *var_cup = NULL;
    PyObject *var_wp = NULL;
    PyObject *var_cp = NULL;
    PyObject *var_up = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_0_var_u = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_1_var_u = NULL;
    PyObject *outline_2_var_cz = NULL;
    PyObject *outline_2_var_uz = NULL;
    PyObject *tmp_for_loop_10__for_iterator = NULL;
    PyObject *tmp_for_loop_10__iter_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_tuple_unpack_14__element_1 = NULL;
    PyObject *tmp_tuple_unpack_14__element_2 = NULL;
    PyObject *tmp_tuple_unpack_14__source_iter = NULL;
    PyObject *tmp_tuple_unpack_15__element_1 = NULL;
    PyObject *tmp_tuple_unpack_15__element_2 = NULL;
    PyObject *tmp_tuple_unpack_15__source_iter = NULL;
    PyObject *tmp_tuple_unpack_16__element_1 = NULL;
    PyObject *tmp_tuple_unpack_16__element_2 = NULL;
    PyObject *tmp_tuple_unpack_16__source_iter = NULL;
    PyObject *tmp_tuple_unpack_17__element_1 = NULL;
    PyObject *tmp_tuple_unpack_17__element_2 = NULL;
    PyObject *tmp_tuple_unpack_17__source_iter = NULL;
    PyObject *tmp_tuple_unpack_18__element_1 = NULL;
    PyObject *tmp_tuple_unpack_18__element_2 = NULL;
    PyObject *tmp_tuple_unpack_18__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__element_5 = NULL;
    PyObject *tmp_tuple_unpack_8__element_6 = NULL;
    PyObject *tmp_tuple_unpack_8__element_7 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d7bf84834c07ea9b900f17624a47709c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_FrameObject *frame_8199448a68d05d56d9aced7a9b96b7b9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_8199448a68d05d56d9aced7a9b96b7b9_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    bool tmp_result;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_FrameObject *frame_55735cfaae4062fe524d5dd14941f487_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    static struct Nuitka_FrameObject *cache_frame_55735cfaae4062fe524d5dd14941f487_3 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_FrameObject *frame_f41cdfa8f1ec15ab7249a132c2b36006_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    static struct Nuitka_FrameObject *cache_frame_f41cdfa8f1ec15ab7249a132c2b36006_4 = NULL;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7bf84834c07ea9b900f17624a47709c = NULL;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d7bf84834c07ea9b900f17624a47709c, codeobj_d7bf84834c07ea9b900f17624a47709c, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d7bf84834c07ea9b900f17624a47709c = cache_frame_d7bf84834c07ea9b900f17624a47709c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d7bf84834c07ea9b900f17624a47709c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d7bf84834c07ea9b900f17624a47709c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_make_system );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_system );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_system" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_M );
        tmp_args_element_name_2 = par_M;
        CHECK_OBJECT( par_x0 );
        tmp_args_element_name_3 = par_x0;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_4 = par_b;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
        if ( tmp_assign_source_2 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
        if ( tmp_assign_source_3 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
        if ( tmp_assign_source_4 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
        if ( tmp_assign_source_5 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
        if ( tmp_assign_source_6 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 267;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 267;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_7;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_M;
            assert( old != NULL );
            par_M = tmp_assign_source_8;
            Py_INCREF( par_M );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_x = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_10;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
        assert( var_postprocess == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_postprocess = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_5 = par_b;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isfinite, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 269;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_2dd0f9dbf76d05bb371f917d7b80aebe;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 270;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_truncate );
        tmp_compexpr_left_1 = par_truncate;
        tmp_compexpr_right_1 = const_tuple_str_plain_oldest_str_plain_smallest_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_1 = const_str_digest_a59883598cb6f47063daf49eafc9f51e;
            CHECK_OBJECT( par_truncate );
            tmp_tuple_element_1 = par_truncate;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 273;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 273;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 273;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_atol );
        tmp_compexpr_left_2 = par_atol;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 276;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = const_tuple_str_digest_6d3777a8b8f464f5ce65f84d9c62ae32_tuple;
            tmp_dict_key_1 = const_str_plain_category;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 279;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_4;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_2 = const_str_plain_stacklevel;
            tmp_dict_value_2 = const_int_pos_2;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 276;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( par_tol );
            tmp_assign_source_12 = par_tol;
            {
                PyObject *old = par_atol;
                assert( old != NULL );
                par_atol = tmp_assign_source_12;
                Py_INCREF( par_atol );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_matvec );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_matvec == NULL );
        var_matvec = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_M );
        tmp_source_name_3 = par_M;
        tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_matvec );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_psolve == NULL );
        var_psolve = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_CU );
        tmp_compexpr_left_3 = par_CU;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_assign_source_15 = PyList_New( 0 );
            {
                PyObject *old = par_CU;
                assert( old != NULL );
                par_CU = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_k );
        tmp_compexpr_left_4 = par_k;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_5 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( par_m );
            tmp_assign_source_16 = par_m;
            {
                PyObject *old = par_k;
                assert( old != NULL );
                par_k = tmp_assign_source_16;
                Py_INCREF( par_k );
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_none_none_none_tuple;
        tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_17 == NULL) );
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_6, 0, 3 );
        if ( tmp_assign_source_18 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_7, 1, 3 );
        if ( tmp_assign_source_19 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_8, 2, 3 );
        if ( tmp_assign_source_20 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 291;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_20;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
        assert( var_axpy == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_axpy = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
        assert( var_dot == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_dot = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_3;
        assert( var_scal == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_scal = tmp_assign_source_23;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_b );
        tmp_left_name_2 = par_b;
        CHECK_OBJECT( var_matvec );
        tmp_called_name_3 = var_matvec;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_6 = var_x;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        tmp_args_element_name_7 = LIST_COPY( const_list_str_plain_axpy_str_plain_dot_str_plain_scal_str_plain_nrm2_list );
        CHECK_OBJECT( var_x );
        tmp_tuple_element_2 = var_x;
        tmp_args_element_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_r );
        tmp_tuple_element_2 = var_r;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_2 );
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 295;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_9, 0, 4 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_10, 1, 4 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_11, 2, 4 );
        if ( tmp_assign_source_28 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_12, 3, 4 );
        if ( tmp_assign_source_29 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_4 == NULL );
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 295;
                    goto try_except_handler_7;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 295;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_axpy;
            assert( old != NULL );
            var_axpy = tmp_assign_source_30;
            Py_INCREF( var_axpy );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_dot;
            assert( old != NULL );
            var_dot = tmp_assign_source_31;
            Py_INCREF( var_dot );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_scal;
            assert( old != NULL );
            var_scal = tmp_assign_source_32;
            Py_INCREF( var_scal );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_4;
        assert( var_nrm2 == NULL );
        Py_INCREF( tmp_assign_source_33 );
        var_nrm2 = tmp_assign_source_33;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_5 = var_nrm2;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_9 = par_b;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b_norm == NULL );
        var_b_norm = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_discard_C );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_discard_C );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT( par_CU );
                tmp_iter_arg_4 = par_CU;
                tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_4 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_35;
            }
            {
                PyObject *tmp_assign_source_36;
                tmp_assign_source_36 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_36;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_8199448a68d05d56d9aced7a9b96b7b9_2, codeobj_8199448a68d05d56d9aced7a9b96b7b9, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *) );
            frame_8199448a68d05d56d9aced7a9b96b7b9_2 = cache_frame_8199448a68d05d56d9aced7a9b96b7b9_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_8199448a68d05d56d9aced7a9b96b7b9_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_37;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_37 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_37 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oo";
                        exception_lineno = 300;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_iter_arg_5;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_iter_arg_5 = tmp_listcomp_1__iter_value_0;
                tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_5 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_2 = "oo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_38;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_unpack_13;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_13 = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
                if ( tmp_assign_source_39 == NULL )
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
                    exception_lineno = 300;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_39;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_unpack_14 = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
                if ( tmp_assign_source_40 == NULL )
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
                    exception_lineno = 300;
                    goto try_except_handler_11;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_40;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__source_iter );
                tmp_iterator_name_3 = tmp_listcomp$tuple_unpack_1__source_iter;
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

                            type_description_2 = "oo";
                            exception_lineno = 300;
                            goto try_except_handler_11;
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
                    exception_lineno = 300;
                    goto try_except_handler_11;
                }
            }
            goto try_end_7;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_10;
            // End of try:
            try_end_7:;
            goto try_end_8;
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

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_9;
            // End of try:
            try_end_8:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_1__source_iter );
            tmp_listcomp$tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_41;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_1 );
                tmp_assign_source_41 = tmp_listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_0_var_c;
                    outline_0_var_c = tmp_assign_source_41;
                    Py_INCREF( outline_0_var_c );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_1 );
            tmp_listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_42;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_1__element_2 );
                tmp_assign_source_42 = tmp_listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_0_var_u;
                    outline_0_var_u = tmp_assign_source_42;
                    Py_INCREF( outline_0_var_u );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_1__element_2 );
            tmp_listcomp$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_3;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                tmp_tuple_element_3 = Py_None;
                tmp_append_value_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( outline_0_var_u );
                tmp_tuple_element_3 = outline_0_var_u;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_3 );
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 300;
                    type_description_2 = "oo";
                    goto try_except_handler_9;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_ass_subvalue_1 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_ass_subvalue_1 );
            goto try_return_handler_9;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_2;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
            Py_DECREF( tmp_listcomp_1__$0 );
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
            Py_DECREF( tmp_listcomp_1__contraction );
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF( tmp_listcomp_1__iter_value_0 );
            tmp_listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_8199448a68d05d56d9aced7a9b96b7b9_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_8199448a68d05d56d9aced7a9b96b7b9_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_8199448a68d05d56d9aced7a9b96b7b9_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_8199448a68d05d56d9aced7a9b96b7b9_2,
                type_description_2,
                outline_0_var_c,
                outline_0_var_u
            );


            // Release cached frame.
            if ( frame_8199448a68d05d56d9aced7a9b96b7b9_2 == cache_frame_8199448a68d05d56d9aced7a9b96b7b9_2 )
            {
                Py_DECREF( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );
            }
            cache_frame_8199448a68d05d56d9aced7a9b96b7b9_2 = NULL;

            assertFrameObject( frame_8199448a68d05d56d9aced7a9b96b7b9_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            Py_XDECREF( outline_0_var_u );
            outline_0_var_u = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_10 = exception_type;
            exception_keeper_value_10 = exception_value;
            exception_keeper_tb_10 = exception_tb;
            exception_keeper_lineno_10 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( outline_0_var_c );
            outline_0_var_c = NULL;

            Py_XDECREF( outline_0_var_u );
            outline_0_var_u = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_10;
            exception_value = exception_keeper_value_10;
            exception_tb = exception_keeper_tb_10;
            exception_lineno = exception_keeper_lineno_10;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            outline_exception_1:;
            exception_lineno = 300;
            goto frame_exception_exit_1;
            outline_result_1:;
            CHECK_OBJECT( par_CU );
            tmp_ass_subscribed_1 = par_CU;
            tmp_ass_subscript_1 = const_slice_none_none_none;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_CU );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_CU );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            CHECK_OBJECT( par_CU );
            tmp_source_name_4 = par_CU;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sort );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_3 = const_str_plain_key;
            tmp_dict_value_3 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda(  );



            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 305;
            tmp_call_result_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_6;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_source_name_6 = par_A;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_tuple_element_4, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_CU );
            tmp_len_arg_1 = par_CU;
            tmp_tuple_element_5 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_tuple_element_4 );

                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_tuple_element_4, 1, tmp_tuple_element_5 );
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            tmp_dict_key_4 = const_str_plain_dtype;
            CHECK_OBJECT( var_r );
            tmp_source_name_7 = var_r;
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dtype );
            if ( tmp_dict_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_name_2 );

                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
            Py_DECREF( tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_order;
            tmp_dict_value_5 = const_str_plain_F;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 308;
            tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_43 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_C == NULL );
            var_C = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = PyList_New( 0 );
            assert( var_us == NULL );
            var_us = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = const_int_0;
            assert( var_j == NULL );
            Py_INCREF( tmp_assign_source_45 );
            var_j = tmp_assign_source_45;
        }
        loop_start_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( par_CU );
            tmp_operand_name_2 = par_CU;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 311;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            goto loop_end_2;
            branch_no_8:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_CU );
            tmp_called_instance_3 = par_CU;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 313;
            tmp_iter_arg_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_46 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__source_iter;
                tmp_tuple_unpack_4__source_iter = tmp_assign_source_46;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_15, 0, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 313;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_1;
                tmp_tuple_unpack_4__element_1 = tmp_assign_source_47;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_16, 1, 2 );
            if ( tmp_assign_source_48 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 313;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_2;
                tmp_tuple_unpack_4__element_2 = tmp_assign_source_48;
                Py_XDECREF( old );
            }

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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 313;
                        goto try_except_handler_13;
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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 313;
                goto try_except_handler_13;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        try_end_9:;
        goto try_end_10;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_49 = tmp_tuple_unpack_4__element_1;
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_49;
                Py_INCREF( var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_50 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_u;
                var_u = tmp_assign_source_50;
                Py_INCREF( var_u );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT( var_c );
            tmp_compexpr_left_5 = var_c;
            tmp_compexpr_right_5 = Py_None;
            tmp_condition_result_9 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_51;
                PyObject *tmp_called_name_8;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( var_matvec );
                tmp_called_name_8 = var_matvec;
                CHECK_OBJECT( var_u );
                tmp_args_element_name_10 = var_u;
                frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 315;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_assign_source_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                if ( tmp_assign_source_51 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 315;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_c;
                    assert( old != NULL );
                    var_c = tmp_assign_source_51;
                    Py_DECREF( old );
                }

            }
            branch_no_9:;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_tuple_element_6;
            CHECK_OBJECT( var_c );
            tmp_ass_subvalue_2 = var_c;
            CHECK_OBJECT( var_C );
            tmp_ass_subscribed_2 = var_C;
            tmp_tuple_element_6 = const_slice_none_none_none;
            tmp_ass_subscript_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_6 = var_j;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_6 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_j );
            tmp_left_name_3 = var_j;
            tmp_right_name_3 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_52 = tmp_left_name_3;
            var_j = tmp_assign_source_52;

        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( var_us );
            tmp_called_instance_4 = var_us;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_11 = var_u;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 318;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_2;
        loop_end_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_qr );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 321;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }

            tmp_called_name_9 = tmp_mvar_value_7;
            CHECK_OBJECT( var_C );
            tmp_tuple_element_7 = var_C;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_7 );
            tmp_kw_name_4 = PyDict_Copy( const_dict_012788ff4162597b3bcc80f5a581a5e5 );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 321;
            tmp_iter_arg_7 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_iter_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            assert( tmp_tuple_unpack_5__source_iter == NULL );
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_53;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_17, 0, 3 );
            if ( tmp_assign_source_54 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 321;
                goto try_except_handler_15;
            }
            assert( tmp_tuple_unpack_5__element_1 == NULL );
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_54;
        }
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_18 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_18, 1, 3 );
            if ( tmp_assign_source_55 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 321;
                goto try_except_handler_15;
            }
            assert( tmp_tuple_unpack_5__element_2 == NULL );
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_55;
        }
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_19 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_56 = UNPACK_NEXT( tmp_unpack_19, 2, 3 );
            if ( tmp_assign_source_56 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 321;
                goto try_except_handler_15;
            }
            assert( tmp_tuple_unpack_5__element_3 == NULL );
            tmp_tuple_unpack_5__element_3 = tmp_assign_source_56;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 321;
                        goto try_except_handler_15;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 321;
                goto try_except_handler_15;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        try_end_11:;
        goto try_end_12;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_1;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_57 = tmp_tuple_unpack_5__element_1;
            assert( var_Q == NULL );
            Py_INCREF( tmp_assign_source_57 );
            var_Q = tmp_assign_source_57;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_58;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_58 = tmp_tuple_unpack_5__element_2;
            assert( var_R == NULL );
            Py_INCREF( tmp_assign_source_58 );
            var_R = tmp_assign_source_58;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_59;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_59 = tmp_tuple_unpack_5__element_3;
            assert( var_P == NULL );
            Py_INCREF( tmp_assign_source_59 );
            var_P = tmp_assign_source_59;
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        CHECK_OBJECT( var_C );
        Py_DECREF( var_C );
        var_C = NULL;

        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( var_Q );
            tmp_source_name_8 = var_Q;
            tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_60 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cs == NULL );
            var_cs = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            tmp_assign_source_61 = PyList_New( 0 );
            assert( var_new_us == NULL );
            var_new_us = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_len_arg_2;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_xrange );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 329;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_8;
            CHECK_OBJECT( var_cs );
            tmp_len_arg_2 = var_cs;
            tmp_args_element_name_12 = BUILTIN_LEN( tmp_len_arg_2 );
            assert( !(tmp_args_element_name_12 == NULL) );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 329;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_iter_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 329;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_8 );
            Py_DECREF( tmp_iter_arg_8 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 329;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_62;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_2 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_63 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_63 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 329;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_63;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_64 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_j;
                assert( old != NULL );
                var_j = tmp_assign_source_64;
                Py_INCREF( var_j );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( var_us );
            tmp_subscribed_name_2 = var_us;
            CHECK_OBJECT( var_P );
            tmp_subscribed_name_3 = var_P;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_3 = var_j;
            tmp_subscript_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_subscript_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_65 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = var_u;
                var_u = tmp_assign_source_65;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_xrange );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 331;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_called_name_11 = tmp_mvar_value_9;
            CHECK_OBJECT( var_j );
            tmp_args_element_name_13 = var_j;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 331;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            if ( tmp_iter_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_66 = MAKE_ITERATOR( tmp_iter_arg_9 );
            Py_DECREF( tmp_iter_arg_9 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_66;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_67;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_3 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_67 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_67 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 331;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_67;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_68;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_68 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_68;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_source_name_9;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_tuple_element_8;
            CHECK_OBJECT( var_axpy );
            tmp_called_name_12 = var_axpy;
            CHECK_OBJECT( var_us );
            tmp_subscribed_name_4 = var_us;
            CHECK_OBJECT( var_P );
            tmp_subscribed_name_5 = var_P;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_5 = var_i;
            tmp_subscript_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_args_element_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            CHECK_OBJECT( var_u );
            tmp_args_element_name_15 = var_u;
            CHECK_OBJECT( var_u );
            tmp_source_name_9 = var_u;
            tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_14 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_subscript_name_6 = const_int_0;
            tmp_args_element_name_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_14 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_7 = var_R;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_8 = var_i;
            tmp_subscript_name_7 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_8 = var_j;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_8 );
            tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscript_name_7 );
            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_16 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            tmp_args_element_name_17 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_args_element_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_14 );
                Py_DECREF( tmp_args_element_name_16 );

                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_args_element_name_14 );
            Py_DECREF( tmp_args_element_name_16 );
            Py_DECREF( tmp_args_element_name_17 );
            if ( tmp_assign_source_69 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 332;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_17;
            }
            {
                PyObject *old = var_u;
                assert( old != NULL );
                var_u = tmp_assign_source_69;
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        goto loop_start_4;
        loop_end_4:;
        goto try_end_13;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        try_end_13:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_name_13;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_13 != NULL );
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_8 = var_R;
            CHECK_OBJECT( var_j );
            tmp_tuple_element_9 = var_j;
            tmp_subscript_name_8 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_9 = var_j;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_9 );
            tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            Py_DECREF( tmp_subscript_name_8 );
            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 333;
            {
                PyObject *call_args[] = { tmp_args_element_name_18 };
                tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_left_name_4 = const_float_1eminus_12;
            tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_14 != NULL );
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_9 = var_R;
            tmp_subscript_name_9 = const_tuple_int_0_int_0_tuple;
            tmp_args_element_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            if ( tmp_args_element_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_6 );

                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 333;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
            }

            Py_DECREF( tmp_args_element_name_19 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_6 );

                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_compexpr_right_6 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_compexpr_right_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_6 );

                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            goto loop_end_3;
            branch_no_10:;
        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_name_15;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_args_element_name_21;
            CHECK_OBJECT( var_scal );
            tmp_called_name_15 = var_scal;
            tmp_left_name_5 = const_float_1_0;
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_10 = var_R;
            CHECK_OBJECT( var_j );
            tmp_tuple_element_10 = var_j;
            tmp_subscript_name_10 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_10 = var_j;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_10 );
            tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            Py_DECREF( tmp_subscript_name_10 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_args_element_name_20 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            CHECK_OBJECT( var_u );
            tmp_args_element_name_21 = var_u;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 336;
            {
                PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
                tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_assign_source_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 336;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = var_u;
                assert( old != NULL );
                var_u = tmp_assign_source_70;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_22;
            CHECK_OBJECT( var_new_us );
            tmp_called_instance_5 = var_new_us;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_22 = var_u;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 337;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 337;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_14;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
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
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_1;
        // End of try:
        try_end_14:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_list_arg_2;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_called_name_16 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( var_cs );
            tmp_args_element_name_23 = var_cs;
            CHECK_OBJECT( var_new_us );
            tmp_args_element_name_24 = var_new_us;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 340;
            {
                PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
                tmp_list_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
            }

            if ( tmp_list_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscribed_name_11 = PySequence_List( tmp_list_arg_2 );
            Py_DECREF( tmp_list_arg_2 );
            if ( tmp_subscribed_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_11 = const_slice_none_none_int_neg_1;
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            Py_DECREF( tmp_subscribed_name_11 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_CU );
            tmp_ass_subscribed_3 = par_CU;
            tmp_ass_subscript_3 = const_slice_none_none_none;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_CU );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_CU );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        // Tried code:
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_name_17;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_25;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_tuple_element_11;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_blas_funcs );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_blas_funcs" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }

            tmp_called_name_17 = tmp_mvar_value_10;
            tmp_args_element_name_25 = LIST_COPY( const_list_str_plain_axpy_str_plain_dot_list );
            CHECK_OBJECT( var_r );
            tmp_tuple_element_11 = var_r;
            tmp_args_element_name_26 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_args_element_name_26, 0, tmp_tuple_element_11 );
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
                tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_args_element_name_25 );
            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_iter_arg_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_assign_source_71 = MAKE_ITERATOR( tmp_iter_arg_10 );
            Py_DECREF( tmp_iter_arg_10 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            assert( tmp_tuple_unpack_6__source_iter == NULL );
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_71;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_20 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_72 = UNPACK_NEXT( tmp_unpack_20, 0, 2 );
            if ( tmp_assign_source_72 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_19;
            }
            assert( tmp_tuple_unpack_6__element_1 == NULL );
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_72;
        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_unpack_21;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_21 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_73 = UNPACK_NEXT( tmp_unpack_21, 1, 2 );
            if ( tmp_assign_source_73 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_19;
            }
            assert( tmp_tuple_unpack_6__element_2 == NULL );
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_73;
        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_6 ); assert( HAS_ITERNEXT( tmp_iterator_name_6 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 343;
                        goto try_except_handler_19;
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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_19;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        try_end_15:;
        goto try_end_16;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_1;
        // End of try:
        try_end_16:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        {
            PyObject *tmp_assign_source_74;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
            tmp_assign_source_74 = tmp_tuple_unpack_6__element_1;
            {
                PyObject *old = var_axpy;
                assert( old != NULL );
                var_axpy = tmp_assign_source_74;
                Py_INCREF( var_axpy );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_75;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
            tmp_assign_source_75 = tmp_tuple_unpack_6__element_2;
            {
                PyObject *old = var_dot;
                assert( old != NULL );
                var_dot = tmp_assign_source_75;
                Py_INCREF( var_dot );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT( par_CU );
            tmp_iter_arg_11 = par_CU;
            tmp_assign_source_76 = MAKE_ITERATOR( tmp_iter_arg_11 );
            if ( tmp_assign_source_76 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_3__for_iterator == NULL );
            tmp_for_loop_3__for_iterator = tmp_assign_source_76;
        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_77;
            CHECK_OBJECT( tmp_for_loop_3__for_iterator );
            tmp_next_source_4 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_77 = ITERATOR_NEXT( tmp_next_source_4 );
            if ( tmp_assign_source_77 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 353;
                    goto try_except_handler_20;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_77;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_iter_arg_12;
            CHECK_OBJECT( tmp_for_loop_3__iter_value );
            tmp_iter_arg_12 = tmp_for_loop_3__iter_value;
            tmp_assign_source_78 = MAKE_ITERATOR( tmp_iter_arg_12 );
            if ( tmp_assign_source_78 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__source_iter;
                tmp_tuple_unpack_7__source_iter = tmp_assign_source_78;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_unpack_22;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_22 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_22, 0, 2 );
            if ( tmp_assign_source_79 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 353;
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_1;
                tmp_tuple_unpack_7__element_1 = tmp_assign_source_79;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_23 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_23, 1, 2 );
            if ( tmp_assign_source_80 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 353;
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_2;
                tmp_tuple_unpack_7__element_2 = tmp_assign_source_80;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_7;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_7 ); assert( HAS_ITERNEXT( tmp_iterator_name_7 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 353;
                        goto try_except_handler_22;
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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 353;
                goto try_except_handler_22;
            }
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_21;
        // End of try:
        try_end_17:;
        goto try_end_18;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_20;
        // End of try:
        try_end_18:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        {
            PyObject *tmp_assign_source_81;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
            tmp_assign_source_81 = tmp_tuple_unpack_7__element_1;
            {
                PyObject *old = var_c;
                var_c = tmp_assign_source_81;
                Py_INCREF( var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        {
            PyObject *tmp_assign_source_82;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
            tmp_assign_source_82 = tmp_tuple_unpack_7__element_2;
            {
                PyObject *old = var_u;
                var_u = tmp_assign_source_82;
                Py_INCREF( var_u );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        {
            PyObject *tmp_assign_source_83;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            CHECK_OBJECT( var_dot );
            tmp_called_name_18 = var_dot;
            CHECK_OBJECT( var_c );
            tmp_args_element_name_27 = var_c;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_28 = var_r;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
                tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
            }

            if ( tmp_assign_source_83 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = var_yc;
                var_yc = tmp_assign_source_83;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_29;
            PyObject *tmp_args_element_name_30;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_source_name_10;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_args_element_name_32;
            CHECK_OBJECT( var_axpy );
            tmp_called_name_19 = var_axpy;
            CHECK_OBJECT( var_u );
            tmp_args_element_name_29 = var_u;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_30 = var_x;
            CHECK_OBJECT( var_x );
            tmp_source_name_10 = var_x;
            tmp_subscribed_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
            if ( tmp_subscribed_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            tmp_subscript_name_12 = const_int_0;
            tmp_args_element_name_31 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
            Py_DECREF( tmp_subscribed_name_12 );
            if ( tmp_args_element_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            CHECK_OBJECT( var_yc );
            tmp_args_element_name_32 = var_yc;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 355;
            {
                PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_19, call_args );
            }

            Py_DECREF( tmp_args_element_name_31 );
            if ( tmp_assign_source_84 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_84;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_subscribed_name_13;
            PyObject *tmp_source_name_11;
            PyObject *tmp_subscript_name_13;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_operand_name_4;
            CHECK_OBJECT( var_axpy );
            tmp_called_name_20 = var_axpy;
            CHECK_OBJECT( var_c );
            tmp_args_element_name_33 = var_c;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_34 = var_r;
            CHECK_OBJECT( var_r );
            tmp_source_name_11 = var_r;
            tmp_subscribed_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
            if ( tmp_subscribed_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            tmp_subscript_name_13 = const_int_0;
            tmp_args_element_name_35 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
            Py_DECREF( tmp_subscribed_name_13 );
            if ( tmp_args_element_name_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            CHECK_OBJECT( var_yc );
            tmp_operand_name_4 = var_yc;
            tmp_args_element_name_36 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
            if ( tmp_args_element_name_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_35 );

                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 356;
            {
                PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
                tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_20, call_args );
            }

            Py_DECREF( tmp_args_element_name_35 );
            Py_DECREF( tmp_args_element_name_36 );
            if ( tmp_assign_source_85 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 356;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_20;
            }
            {
                PyObject *old = var_r;
                assert( old != NULL );
                var_r = tmp_assign_source_85;
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        goto loop_start_5;
        loop_end_5:;
        goto try_end_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto frame_exception_exit_1;
        // End of try:
        try_end_19:;
        Py_XDECREF( tmp_for_loop_3__iter_value );
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
        Py_DECREF( tmp_for_loop_3__for_iterator );
        tmp_for_loop_3__for_iterator = NULL;

        branch_no_11:;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_name_21;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_37;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "xrange" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_21 = tmp_mvar_value_11;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_37 = par_maxiter;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_37 };
            tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        if ( tmp_iter_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = MAKE_ITERATOR( tmp_iter_arg_13 );
        Py_DECREF( tmp_iter_arg_13 );
        if ( tmp_assign_source_86 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_4__for_iterator == NULL );
        tmp_for_loop_4__for_iterator = tmp_assign_source_86;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT( tmp_for_loop_4__for_iterator );
        tmp_next_source_5 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_87 = ITERATOR_NEXT( tmp_next_source_5 );
        if ( tmp_assign_source_87 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_6;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 359;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_87;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT( tmp_for_loop_4__iter_value );
        tmp_assign_source_88 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_j_outer;
            var_j_outer = tmp_assign_source_88;
            Py_INCREF( var_j_outer );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_7 = par_callback;
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_12 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_22;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_38;
            CHECK_OBJECT( par_callback );
            tmp_called_name_22 = par_callback;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 362;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }

            tmp_args_element_name_38 = var_x;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 362;
            {
                PyObject *call_args[] = { tmp_args_element_name_38 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
            }

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 362;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_12:;
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_name_23;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_23 = var_nrm2;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_name_39 = var_r;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_39 };
            tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        if ( tmp_assign_source_89 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_beta;
            var_beta = tmp_assign_source_89;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_name_24;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_called_name_24 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_24 != NULL );
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_40 = par_atol;
        CHECK_OBJECT( par_tol );
        tmp_left_name_6 = par_tol;
        CHECK_OBJECT( var_b_norm );
        tmp_right_name_6 = var_b_norm;
        tmp_args_element_name_41 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 367;
        {
            PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41 };
            tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
        }

        Py_DECREF( tmp_args_element_name_41 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_beta_tol;
            var_beta_tol = tmp_assign_source_90;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_beta );
        tmp_compexpr_left_8 = var_beta;
        CHECK_OBJECT( var_beta_tol );
        tmp_compexpr_right_8 = var_beta_tol;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_j_outer );
        tmp_compexpr_left_9 = var_j_outer;
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_CU );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_CU );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_or_right_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_condition_result_13 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_13 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_assign_source_91;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_element_name_42;
            CHECK_OBJECT( par_b );
            tmp_left_name_7 = par_b;
            CHECK_OBJECT( var_matvec );
            tmp_called_name_25 = var_matvec;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 371;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }

            tmp_args_element_name_42 = var_x;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_args_element_name_42 };
                tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
            }

            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_assign_source_91 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_assign_source_91 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 371;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = var_r;
                var_r = tmp_assign_source_91;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_element_name_43;
            CHECK_OBJECT( var_nrm2 );
            tmp_called_name_26 = var_nrm2;
            CHECK_OBJECT( var_r );
            tmp_args_element_name_43 = var_r;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 372;
            {
                PyObject *call_args[] = { tmp_args_element_name_43 };
                tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
            }

            if ( tmp_assign_source_92 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 372;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = var_beta;
                assert( old != NULL );
                var_beta = tmp_assign_source_92;
                Py_DECREF( old );
            }

        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_beta );
        tmp_compexpr_left_10 = var_beta;
        CHECK_OBJECT( var_beta_tol );
        tmp_compexpr_right_10 = var_beta_tol;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_93;
            tmp_assign_source_93 = const_int_neg_1;
            {
                PyObject *old = var_j_outer;
                assert( old != NULL );
                var_j_outer = tmp_assign_source_93;
                Py_INCREF( var_j_outer );
                Py_DECREF( old );
            }

        }
        goto loop_end_6;
        branch_no_14:;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_27;
        PyObject *tmp_args_element_name_44;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_args_element_name_45;
        CHECK_OBJECT( par_m );
        tmp_left_name_8 = par_m;
        tmp_called_name_27 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_27 != NULL );
        CHECK_OBJECT( par_k );
        tmp_left_name_9 = par_k;
        CHECK_OBJECT( par_CU );
        tmp_len_arg_3 = par_CU;
        tmp_right_name_9 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_name_44 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_args_element_name_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_args_element_name_45 = const_int_0;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = { tmp_args_element_name_44, tmp_args_element_name_45 };
            tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_27, call_args );
        }

        Py_DECREF( tmp_args_element_name_44 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_94 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_94 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ml;
            var_ml = tmp_assign_source_94;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_95;
        // Tried code:
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_iter_arg_14;
            CHECK_OBJECT( par_CU );
            tmp_iter_arg_14 = par_CU;
            tmp_assign_source_96 = MAKE_ITERATOR( tmp_iter_arg_14 );
            if ( tmp_assign_source_96 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_96;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_97;
            tmp_assign_source_97 = PyList_New( 0 );
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_97;
                Py_XDECREF( old );
            }

        }
        MAKE_OR_REUSE_FRAME( cache_frame_55735cfaae4062fe524d5dd14941f487_3, codeobj_55735cfaae4062fe524d5dd14941f487, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *) );
        frame_55735cfaae4062fe524d5dd14941f487_3 = cache_frame_55735cfaae4062fe524d5dd14941f487_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_55735cfaae4062fe524d5dd14941f487_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_55735cfaae4062fe524d5dd14941f487_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_98;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_6 = tmp_listcomp_2__$0;
            tmp_assign_source_98 = ITERATOR_NEXT( tmp_next_source_6 );
            if ( tmp_assign_source_98 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_7;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "oo";
                    exception_lineno = 380;
                    goto try_except_handler_25;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_98;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_iter_arg_15;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_iter_arg_15 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_99 = MAKE_ITERATOR( tmp_iter_arg_15 );
            if ( tmp_assign_source_99 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_2 = "oo";
                goto try_except_handler_26;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_99;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_2__source_iter );
            tmp_unpack_24 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_100 = UNPACK_NEXT( tmp_unpack_24, 0, 2 );
            if ( tmp_assign_source_100 == NULL )
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
                exception_lineno = 380;
                goto try_except_handler_27;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_100;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_unpack_25;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_2__source_iter );
            tmp_unpack_25 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_101 = UNPACK_NEXT( tmp_unpack_25, 1, 2 );
            if ( tmp_assign_source_101 == NULL )
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
                exception_lineno = 380;
                goto try_except_handler_27;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_101;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_2__source_iter );
            tmp_iterator_name_8 = tmp_listcomp$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

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
                        exception_lineno = 380;
                        goto try_except_handler_27;
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
                exception_lineno = 380;
                goto try_except_handler_27;
            }
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_2__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_2__source_iter );
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_26;
        // End of try:
        try_end_20:;
        goto try_end_21;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_listcomp$tuple_unpack_2__element_1 );
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_listcomp$tuple_unpack_2__element_2 );
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_25;
        // End of try:
        try_end_21:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_2__source_iter );
        Py_DECREF( tmp_listcomp$tuple_unpack_2__source_iter );
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_102;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_2__element_1 );
            tmp_assign_source_102 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_102;
                Py_INCREF( outline_1_var_c );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_2__element_1 );
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_103;
            CHECK_OBJECT( tmp_listcomp$tuple_unpack_2__element_2 );
            tmp_assign_source_103 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_u;
                outline_1_var_u = tmp_assign_source_103;
                Py_INCREF( outline_1_var_u );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_listcomp$tuple_unpack_2__element_2 );
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT( outline_1_var_c );
            tmp_append_value_2 = outline_1_var_c;
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_2 = "oo";
                goto try_except_handler_25;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_2 = "oo";
            goto try_except_handler_25;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_assign_source_95 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_assign_source_95 );
        goto try_return_handler_25;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55735cfaae4062fe524d5dd14941f487_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_55735cfaae4062fe524d5dd14941f487_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_24;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_55735cfaae4062fe524d5dd14941f487_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_55735cfaae4062fe524d5dd14941f487_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_55735cfaae4062fe524d5dd14941f487_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_55735cfaae4062fe524d5dd14941f487_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_55735cfaae4062fe524d5dd14941f487_3,
            type_description_2,
            outline_1_var_c,
            outline_1_var_u
        );


        // Release cached frame.
        if ( frame_55735cfaae4062fe524d5dd14941f487_3 == cache_frame_55735cfaae4062fe524d5dd14941f487_3 )
        {
            Py_DECREF( frame_55735cfaae4062fe524d5dd14941f487_3 );
        }
        cache_frame_55735cfaae4062fe524d5dd14941f487_3 = NULL;

        assertFrameObject( frame_55735cfaae4062fe524d5dd14941f487_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_24;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_XDECREF( outline_1_var_c );
        outline_1_var_c = NULL;

        Py_XDECREF( outline_1_var_u );
        outline_1_var_u = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( outline_1_var_c );
        outline_1_var_c = NULL;

        Py_XDECREF( outline_1_var_u );
        outline_1_var_u = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
        return NULL;
        outline_exception_2:;
        exception_lineno = 380;
        goto try_except_handler_23;
        outline_result_2:;
        {
            PyObject *old = var_cs;
            var_cs = tmp_assign_source_95;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_iter_arg_16;
        PyObject *tmp_called_name_28;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_left_name_11;
        PyObject *tmp_called_name_29;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain__fgmres );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fgmres );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_fgmres" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_called_name_28 = tmp_mvar_value_12;
        CHECK_OBJECT( var_matvec );
        tmp_tuple_element_12 = var_matvec;
        tmp_args_name_4 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_12 );
        if ( var_r == NULL )
        {
            Py_DECREF( tmp_args_name_4 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_left_name_10 = var_r;
        CHECK_OBJECT( var_beta );
        tmp_right_name_10 = var_beta;
        tmp_tuple_element_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_tuple_element_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_12 );
        CHECK_OBJECT( var_ml );
        tmp_tuple_element_12 = var_ml;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_12 );
        tmp_dict_key_6 = const_str_plain_rpsolve;
        CHECK_OBJECT( var_psolve );
        tmp_dict_value_6 = var_psolve;
        tmp_kw_name_5 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_atol;
        tmp_called_name_29 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_29 != NULL );
        CHECK_OBJECT( par_atol );
        tmp_args_element_name_46 = par_atol;
        CHECK_OBJECT( par_tol );
        tmp_left_name_12 = par_tol;
        CHECK_OBJECT( var_b_norm );
        tmp_right_name_11 = var_b_norm;
        tmp_args_element_name_47 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_args_element_name_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = { tmp_args_element_name_46, tmp_args_element_name_47 };
            tmp_left_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_29, call_args );
        }

        Py_DECREF( tmp_args_element_name_47 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT( var_beta );
        tmp_right_name_12 = var_beta;
        tmp_dict_value_7 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_5 );

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_cs;
        CHECK_OBJECT( var_cs );
        tmp_dict_value_8 = var_cs;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 383;
        tmp_iter_arg_16 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_4, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_iter_arg_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_104 = MAKE_ITERATOR( tmp_iter_arg_16 );
        Py_DECREF( tmp_iter_arg_16 );
        if ( tmp_assign_source_104 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_104;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_26 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_105 = UNPACK_NEXT( tmp_unpack_26, 0, 7 );
        if ( tmp_assign_source_105 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_105;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_27 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_106 = UNPACK_NEXT( tmp_unpack_27, 1, 7 );
        if ( tmp_assign_source_106 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_106;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_28 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_107 = UNPACK_NEXT( tmp_unpack_28, 2, 7 );
        if ( tmp_assign_source_107 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_3;
            tmp_tuple_unpack_8__element_3 = tmp_assign_source_107;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_29 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_108 = UNPACK_NEXT( tmp_unpack_29, 3, 7 );
        if ( tmp_assign_source_108 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_4;
            tmp_tuple_unpack_8__element_4 = tmp_assign_source_108;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_unpack_30;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_30 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_109 = UNPACK_NEXT( tmp_unpack_30, 4, 7 );
        if ( tmp_assign_source_109 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_5;
            tmp_tuple_unpack_8__element_5 = tmp_assign_source_109;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_unpack_31;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_31 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_110 = UNPACK_NEXT( tmp_unpack_31, 5, 7 );
        if ( tmp_assign_source_110 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_6;
            tmp_tuple_unpack_8__element_6 = tmp_assign_source_110;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_32;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_unpack_32 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT( tmp_unpack_32, 6, 7 );
        if ( tmp_assign_source_111 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_7;
            tmp_tuple_unpack_8__element_7 = tmp_assign_source_111;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
        tmp_iterator_name_9 = tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_9 ); assert( HAS_ITERNEXT( tmp_iterator_name_9 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 383;
                    goto try_except_handler_30;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 7)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 383;
            goto try_except_handler_30;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_29;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_5 );
    tmp_tuple_unpack_8__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_6 );
    tmp_tuple_unpack_8__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_7 );
    tmp_tuple_unpack_8__element_7 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_23:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
        tmp_assign_source_112 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var_Q;
            var_Q = tmp_assign_source_112;
            Py_INCREF( var_Q );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
        tmp_assign_source_113 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_R;
            var_R = tmp_assign_source_113;
            Py_INCREF( var_R );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_3 );
        tmp_assign_source_114 = tmp_tuple_unpack_8__element_3;
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_114;
            Py_INCREF( var_B );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_4 );
        tmp_assign_source_115 = tmp_tuple_unpack_8__element_4;
        {
            PyObject *old = var_vs;
            var_vs = tmp_assign_source_115;
            Py_INCREF( var_vs );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_5 );
        tmp_assign_source_116 = tmp_tuple_unpack_8__element_5;
        {
            PyObject *old = var_zs;
            var_zs = tmp_assign_source_116;
            Py_INCREF( var_zs );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_5 );
    tmp_tuple_unpack_8__element_5 = NULL;

    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_6 );
        tmp_assign_source_117 = tmp_tuple_unpack_8__element_6;
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_117;
            Py_INCREF( var_y );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_6 );
    tmp_tuple_unpack_8__element_6 = NULL;

    {
        PyObject *tmp_assign_source_118;
        CHECK_OBJECT( tmp_tuple_unpack_8__element_7 );
        tmp_assign_source_118 = tmp_tuple_unpack_8__element_7;
        {
            PyObject *old = var_pres;
            var_pres = tmp_assign_source_118;
            Py_INCREF( var_pres );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_8__element_7 );
    tmp_tuple_unpack_8__element_7 = NULL;

    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_y );
        tmp_left_name_13 = var_y;
        CHECK_OBJECT( var_beta );
        tmp_right_name_13 = var_beta;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        tmp_assign_source_119 = tmp_left_name_13;
        var_y = tmp_assign_source_119;

    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
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

    if ( exception_keeper_tb_28 == NULL )
    {
        exception_keeper_tb_28 = MAKE_TRACEBACK( frame_d7bf84834c07ea9b900f17624a47709c, exception_keeper_lineno_28 );
    }
    else if ( exception_keeper_lineno_28 != 0 )
    {
        exception_keeper_tb_28 = ADD_TRACEBACK( exception_keeper_tb_28, frame_d7bf84834c07ea9b900f17624a47709c, exception_keeper_lineno_28 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28 );
    PyException_SetTraceback( exception_keeper_value_28, (PyObject *)exception_keeper_tb_28 );
    PUBLISH_EXCEPTION( &exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_mvar_value_13;
        tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }

        tmp_compexpr_right_11 = tmp_mvar_value_13;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
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
        goto try_break_handler_31;
        goto branch_end_15;
        branch_no_15:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 382;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d7bf84834c07ea9b900f17624a47709c->m_frame) frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_31;
        branch_end_15:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
    return NULL;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_23;
    // try break handler code:
    try_break_handler_31:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_end_6;
    // End of try:
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_left_name_14;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscript_name_15;
        CHECK_OBJECT( var_zs );
        tmp_subscribed_name_14 = var_zs;
        tmp_subscript_name_14 = const_int_0;
        tmp_left_name_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_y );
        tmp_subscribed_name_15 = var_y;
        tmp_subscript_name_15 = const_int_0;
        tmp_right_name_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, 0 );
        if ( tmp_right_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_14 );

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_120 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_right_name_14 );
        if ( tmp_assign_source_120 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ux;
            var_ux = tmp_assign_source_120;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_name_30;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        tmp_called_name_30 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_zs );
        tmp_subscribed_name_16 = var_zs;
        tmp_subscript_name_16 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_48 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
        if ( tmp_args_element_name_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_y );
        tmp_subscribed_name_17 = var_y;
        tmp_subscript_name_17 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_49 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
        if ( tmp_args_element_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_48 );

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = { tmp_args_element_name_48, tmp_args_element_name_49 };
            tmp_iter_arg_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_30, call_args );
        }

        Py_DECREF( tmp_args_element_name_48 );
        Py_DECREF( tmp_args_element_name_49 );
        if ( tmp_iter_arg_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_121 = MAKE_ITERATOR( tmp_iter_arg_17 );
        Py_DECREF( tmp_iter_arg_17 );
        if ( tmp_assign_source_121 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_121;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT( tmp_for_loop_5__for_iterator );
        tmp_next_source_7 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_122 = ITERATOR_NEXT( tmp_next_source_7 );
        if ( tmp_assign_source_122 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_8;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 416;
                goto try_except_handler_32;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_122;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_iter_arg_18;
        CHECK_OBJECT( tmp_for_loop_5__iter_value );
        tmp_iter_arg_18 = tmp_for_loop_5__iter_value;
        tmp_assign_source_123 = MAKE_ITERATOR( tmp_iter_arg_18 );
        if ( tmp_assign_source_123 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__source_iter;
            tmp_tuple_unpack_9__source_iter = tmp_assign_source_123;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
        tmp_unpack_33 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_124 = UNPACK_NEXT( tmp_unpack_33, 0, 2 );
        if ( tmp_assign_source_124 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_1;
            tmp_tuple_unpack_9__element_1 = tmp_assign_source_124;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
        tmp_unpack_34 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_125 = UNPACK_NEXT( tmp_unpack_34, 1, 2 );
        if ( tmp_assign_source_125 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_2;
            tmp_tuple_unpack_9__element_2 = tmp_assign_source_125;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT( tmp_tuple_unpack_9__source_iter );
        tmp_iterator_name_10 = tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_10 ); assert( HAS_ITERNEXT( tmp_iterator_name_10 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 416;
                    goto try_except_handler_34;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_34;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
    Py_DECREF( tmp_tuple_unpack_9__source_iter );
    tmp_tuple_unpack_9__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_33;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_9__element_1 );
    tmp_tuple_unpack_9__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_2 );
    tmp_tuple_unpack_9__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    try_end_26:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
    Py_DECREF( tmp_tuple_unpack_9__source_iter );
    tmp_tuple_unpack_9__source_iter = NULL;

    {
        PyObject *tmp_assign_source_126;
        CHECK_OBJECT( tmp_tuple_unpack_9__element_1 );
        tmp_assign_source_126 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_126;
            Py_INCREF( var_z );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_9__element_1 );
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_127;
        CHECK_OBJECT( tmp_tuple_unpack_9__element_2 );
        tmp_assign_source_127 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_yc;
            var_yc = tmp_assign_source_127;
            Py_INCREF( var_yc );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_9__element_2 );
    tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_name_31;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_source_name_12;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_args_element_name_53;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_31 = var_axpy;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_50 = var_z;
        CHECK_OBJECT( var_ux );
        tmp_args_element_name_51 = var_ux;
        CHECK_OBJECT( var_ux );
        tmp_source_name_12 = var_ux;
        tmp_subscribed_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
        if ( tmp_subscribed_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_subscript_name_18 = const_int_0;
        tmp_args_element_name_52 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, 0 );
        Py_DECREF( tmp_subscribed_name_18 );
        if ( tmp_args_element_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        CHECK_OBJECT( var_yc );
        tmp_args_element_name_53 = var_yc;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
            tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_31, call_args );
        }

        Py_DECREF( tmp_args_element_name_52 );
        if ( tmp_assign_source_128 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_ux;
            assert( old != NULL );
            var_ux = tmp_assign_source_128;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_23;
    // End of try:
    try_end_27:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_54;
        CHECK_OBJECT( var_B );
        tmp_called_instance_6 = var_B;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_54 = var_y;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = { tmp_args_element_name_54 };
            tmp_assign_source_129 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_assign_source_129 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_by;
            var_by = tmp_assign_source_129;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_iter_arg_19;
        PyObject *tmp_called_name_32;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_args_element_name_56;
        tmp_called_name_32 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( par_CU );
        tmp_args_element_name_55 = par_CU;
        CHECK_OBJECT( var_by );
        tmp_args_element_name_56 = var_by;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = { tmp_args_element_name_55, tmp_args_element_name_56 };
            tmp_iter_arg_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_32, call_args );
        }

        if ( tmp_iter_arg_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_130 = MAKE_ITERATOR( tmp_iter_arg_19 );
        Py_DECREF( tmp_iter_arg_19 );
        if ( tmp_assign_source_130 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_130;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT( tmp_for_loop_6__for_iterator );
        tmp_next_source_8 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_131 = ITERATOR_NEXT( tmp_next_source_8 );
        if ( tmp_assign_source_131 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_9;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 419;
                goto try_except_handler_35;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_131;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_iter_arg_20;
        CHECK_OBJECT( tmp_for_loop_6__iter_value );
        tmp_iter_arg_20 = tmp_for_loop_6__iter_value;
        tmp_assign_source_132 = MAKE_ITERATOR( tmp_iter_arg_20 );
        if ( tmp_assign_source_132 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_132;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_unpack_35 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_133 = UNPACK_NEXT( tmp_unpack_35, 0, 2 );
        if ( tmp_assign_source_133 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 419;
            goto try_except_handler_37;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_133;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_unpack_36;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_unpack_36 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_134 = UNPACK_NEXT( tmp_unpack_36, 1, 2 );
        if ( tmp_assign_source_134 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 419;
            goto try_except_handler_37;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_134;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT( tmp_tuple_unpack_10__source_iter );
        tmp_iterator_name_11 = tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_11 ); assert( HAS_ITERNEXT( tmp_iterator_name_11 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 419;
                    goto try_except_handler_37;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 419;
            goto try_except_handler_37;
        }
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_36;
    // End of try:
    try_end_28:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    try_end_29:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    {
        PyObject *tmp_assign_source_135;
        CHECK_OBJECT( tmp_tuple_unpack_10__element_1 );
        tmp_assign_source_135 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_cu;
            var_cu = tmp_assign_source_135;
            Py_INCREF( var_cu );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_136;
        CHECK_OBJECT( tmp_tuple_unpack_10__element_2 );
        tmp_assign_source_136 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_byc;
            var_byc = tmp_assign_source_136;
            Py_INCREF( var_byc );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_iter_arg_21;
        CHECK_OBJECT( var_cu );
        tmp_iter_arg_21 = var_cu;
        tmp_assign_source_137 = MAKE_ITERATOR( tmp_iter_arg_21 );
        if ( tmp_assign_source_137 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__source_iter;
            tmp_tuple_unpack_11__source_iter = tmp_assign_source_137;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_unpack_37;
        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
        tmp_unpack_37 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_138 = UNPACK_NEXT( tmp_unpack_37, 0, 2 );
        if ( tmp_assign_source_138 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 420;
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_1;
            tmp_tuple_unpack_11__element_1 = tmp_assign_source_138;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_38;
        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
        tmp_unpack_38 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT( tmp_unpack_38, 1, 2 );
        if ( tmp_assign_source_139 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 420;
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_2;
            tmp_tuple_unpack_11__element_2 = tmp_assign_source_139;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_12;
        CHECK_OBJECT( tmp_tuple_unpack_11__source_iter );
        tmp_iterator_name_12 = tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_12 ); assert( HAS_ITERNEXT( tmp_iterator_name_12 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_12 )->tp_iternext)( tmp_iterator_name_12 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 420;
                    goto try_except_handler_39;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 420;
            goto try_except_handler_39;
        }
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
    Py_DECREF( tmp_tuple_unpack_11__source_iter );
    tmp_tuple_unpack_11__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_38;
    // End of try:
    try_end_30:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
    tmp_tuple_unpack_11__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
    tmp_tuple_unpack_11__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_35;
    // End of try:
    try_end_31:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
    Py_DECREF( tmp_tuple_unpack_11__source_iter );
    tmp_tuple_unpack_11__source_iter = NULL;

    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT( tmp_tuple_unpack_11__element_1 );
        tmp_assign_source_140 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_140;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT( tmp_tuple_unpack_11__element_2 );
        tmp_assign_source_141 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_141;
            Py_INCREF( var_u );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
    tmp_tuple_unpack_11__element_2 = NULL;

    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_name_33;
        PyObject *tmp_args_element_name_57;
        PyObject *tmp_args_element_name_58;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_source_name_13;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_args_element_name_60;
        PyObject *tmp_operand_name_5;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_33 = var_axpy;
        CHECK_OBJECT( var_u );
        tmp_args_element_name_57 = var_u;
        CHECK_OBJECT( var_ux );
        tmp_args_element_name_58 = var_ux;
        CHECK_OBJECT( var_ux );
        tmp_source_name_13 = var_ux;
        tmp_subscribed_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
        if ( tmp_subscribed_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_subscript_name_19 = const_int_0;
        tmp_args_element_name_59 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_19, tmp_subscript_name_19, 0 );
        Py_DECREF( tmp_subscribed_name_19 );
        if ( tmp_args_element_name_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        CHECK_OBJECT( var_byc );
        tmp_operand_name_5 = var_byc;
        tmp_args_element_name_60 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
        if ( tmp_args_element_name_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_59 );

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = { tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60 };
            tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_33, call_args );
        }

        Py_DECREF( tmp_args_element_name_59 );
        Py_DECREF( tmp_args_element_name_60 );
        if ( tmp_assign_source_142 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = var_ux;
            assert( old != NULL );
            var_ux = tmp_assign_source_142;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_35;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_23;
    // End of try:
    try_end_32:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_name_34;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_61;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_name_62;
        CHECK_OBJECT( var_Q );
        tmp_source_name_14 = var_Q;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dot );
        if ( tmp_called_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_R );
        tmp_called_instance_7 = var_R;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_62 = var_y;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_62 };
            tmp_args_element_name_61 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_34 );

            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = { tmp_args_element_name_61 };
            tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
        }

        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_args_element_name_61 );
        if ( tmp_assign_source_143 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_hy;
            var_hy = tmp_assign_source_143;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_left_name_15;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_subscript_name_20;
        PyObject *tmp_right_name_15;
        PyObject *tmp_subscribed_name_21;
        PyObject *tmp_subscript_name_21;
        CHECK_OBJECT( var_vs );
        tmp_subscribed_name_20 = var_vs;
        tmp_subscript_name_20 = const_int_0;
        tmp_left_name_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_20, tmp_subscript_name_20, 0 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_hy );
        tmp_subscribed_name_21 = var_hy;
        tmp_subscript_name_21 = const_int_0;
        tmp_right_name_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_21, tmp_subscript_name_21, 0 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_144 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_assign_source_144 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cx;
            var_cx = tmp_assign_source_144;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_iter_arg_22;
        PyObject *tmp_called_name_35;
        PyObject *tmp_args_element_name_63;
        PyObject *tmp_subscribed_name_22;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_subscribed_name_23;
        PyObject *tmp_subscript_name_23;
        tmp_called_name_35 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT( var_vs );
        tmp_subscribed_name_22 = var_vs;
        tmp_subscript_name_22 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_63 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
        if ( tmp_args_element_name_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_hy );
        tmp_subscribed_name_23 = var_hy;
        tmp_subscript_name_23 = const_slice_int_pos_1_none_none;
        tmp_args_element_name_64 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
        if ( tmp_args_element_name_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_63 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_63, tmp_args_element_name_64 };
            tmp_iter_arg_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_35, call_args );
        }

        Py_DECREF( tmp_args_element_name_63 );
        Py_DECREF( tmp_args_element_name_64 );
        if ( tmp_iter_arg_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_145 = MAKE_ITERATOR( tmp_iter_arg_22 );
        Py_DECREF( tmp_iter_arg_22 );
        if ( tmp_assign_source_145 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_145;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_146;
        CHECK_OBJECT( tmp_for_loop_7__for_iterator );
        tmp_next_source_9 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_146 = ITERATOR_NEXT( tmp_next_source_9 );
        if ( tmp_assign_source_146 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_10;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 426;
                goto try_except_handler_40;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_146;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_iter_arg_23;
        CHECK_OBJECT( tmp_for_loop_7__iter_value );
        tmp_iter_arg_23 = tmp_for_loop_7__iter_value;
        tmp_assign_source_147 = MAKE_ITERATOR( tmp_iter_arg_23 );
        if ( tmp_assign_source_147 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__source_iter;
            tmp_tuple_unpack_12__source_iter = tmp_assign_source_147;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_unpack_39;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_unpack_39 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_148 = UNPACK_NEXT( tmp_unpack_39, 0, 2 );
        if ( tmp_assign_source_148 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 426;
            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_1;
            tmp_tuple_unpack_12__element_1 = tmp_assign_source_148;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_unpack_40;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_unpack_40 = tmp_tuple_unpack_12__source_iter;
        tmp_assign_source_149 = UNPACK_NEXT( tmp_unpack_40, 1, 2 );
        if ( tmp_assign_source_149 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 426;
            goto try_except_handler_42;
        }
        {
            PyObject *old = tmp_tuple_unpack_12__element_2;
            tmp_tuple_unpack_12__element_2 = tmp_assign_source_149;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT( tmp_tuple_unpack_12__source_iter );
        tmp_iterator_name_13 = tmp_tuple_unpack_12__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_13 ); assert( HAS_ITERNEXT( tmp_iterator_name_13 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_13 )->tp_iternext)( tmp_iterator_name_13 );

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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 426;
                    goto try_except_handler_42;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 426;
            goto try_except_handler_42;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
    Py_DECREF( tmp_tuple_unpack_12__source_iter );
    tmp_tuple_unpack_12__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_41;
    // End of try:
    try_end_33:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
    tmp_tuple_unpack_12__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
    tmp_tuple_unpack_12__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_40;
    // End of try:
    try_end_34:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_12__source_iter );
    Py_DECREF( tmp_tuple_unpack_12__source_iter );
    tmp_tuple_unpack_12__source_iter = NULL;

    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT( tmp_tuple_unpack_12__element_1 );
        tmp_assign_source_150 = tmp_tuple_unpack_12__element_1;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_150;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_12__element_1 );
    tmp_tuple_unpack_12__element_1 = NULL;

    {
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT( tmp_tuple_unpack_12__element_2 );
        tmp_assign_source_151 = tmp_tuple_unpack_12__element_2;
        {
            PyObject *old = var_hyc;
            var_hyc = tmp_assign_source_151;
            Py_INCREF( var_hyc );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_12__element_2 );
    tmp_tuple_unpack_12__element_2 = NULL;

    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_name_36;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_subscribed_name_24;
        PyObject *tmp_source_name_15;
        PyObject *tmp_subscript_name_24;
        PyObject *tmp_args_element_name_68;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_36 = var_axpy;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_65 = var_v;
        CHECK_OBJECT( var_cx );
        tmp_args_element_name_66 = var_cx;
        CHECK_OBJECT( var_cx );
        tmp_source_name_15 = var_cx;
        tmp_subscribed_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
        if ( tmp_subscribed_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_subscript_name_24 = const_int_0;
        tmp_args_element_name_67 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_24, tmp_subscript_name_24, 0 );
        Py_DECREF( tmp_subscribed_name_24 );
        if ( tmp_args_element_name_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT( var_hyc );
        tmp_args_element_name_68 = var_hyc;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = { tmp_args_element_name_65, tmp_args_element_name_66, tmp_args_element_name_67, tmp_args_element_name_68 };
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_36, call_args );
        }

        Py_DECREF( tmp_args_element_name_67 );
        if ( tmp_assign_source_152 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_cx;
            assert( old != NULL );
            var_cx = tmp_assign_source_152;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_40;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_23;
    // End of try:
    try_end_35:;
    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_called_name_37;
        PyObject *tmp_args_element_name_69;
        tmp_left_name_16 = const_int_pos_1;
        CHECK_OBJECT( var_nrm2 );
        tmp_called_name_37 = var_nrm2;
        CHECK_OBJECT( var_cx );
        tmp_args_element_name_69 = var_cx;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_69 };
            tmp_right_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
        }

        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_assign_source_153 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assign_source_153 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_alpha;
            var_alpha = tmp_assign_source_153;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_70;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_called_instance_8 = tmp_mvar_value_14;
        CHECK_OBJECT( var_alpha );
        tmp_args_element_name_70 = var_alpha;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = { tmp_args_element_name_70 };
            tmp_operand_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_isfinite, call_args );
        }

        if ( tmp_operand_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
        Py_DECREF( tmp_operand_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 434;
            tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS( PyExc_FloatingPointError );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 434;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        branch_no_16:;
    }
    goto try_end_36;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
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

    if ( exception_keeper_tb_41 == NULL )
    {
        exception_keeper_tb_41 = MAKE_TRACEBACK( frame_d7bf84834c07ea9b900f17624a47709c, exception_keeper_lineno_41 );
    }
    else if ( exception_keeper_lineno_41 != 0 )
    {
        exception_keeper_tb_41 = ADD_TRACEBACK( exception_keeper_tb_41, frame_d7bf84834c07ea9b900f17624a47709c, exception_keeper_lineno_41 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_41, &exception_keeper_value_41, &exception_keeper_tb_41 );
    PyException_SetTraceback( exception_keeper_value_41, (PyObject *)exception_keeper_tb_41 );
    PUBLISH_EXCEPTION( &exception_keeper_type_41, &exception_keeper_value_41, &exception_keeper_tb_41 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_12 = const_tuple_type_FloatingPointError_type_ZeroDivisionError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_17;
        }
        else
        {
            goto branch_no_17;
        }
        branch_yes_17:;
        goto try_continue_handler_44;
        goto branch_end_17;
        branch_no_17:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 431;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_d7bf84834c07ea9b900f17624a47709c->m_frame) frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_44;
        branch_end_17:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
    return NULL;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto try_except_handler_23;
    // try continue handler code:
    try_continue_handler_44:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto loop_start_6;
    // End of try:
    // End of try:
    try_end_36:;
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_name_38;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        CHECK_OBJECT( var_scal );
        tmp_called_name_38 = var_scal;
        CHECK_OBJECT( var_alpha );
        tmp_args_element_name_71 = var_alpha;
        CHECK_OBJECT( var_cx );
        tmp_args_element_name_72 = var_cx;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = { tmp_args_element_name_71, tmp_args_element_name_72 };
            tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_38, call_args );
        }

        if ( tmp_assign_source_154 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_cx;
            assert( old != NULL );
            var_cx = tmp_assign_source_154;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_name_39;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        CHECK_OBJECT( var_scal );
        tmp_called_name_39 = var_scal;
        CHECK_OBJECT( var_alpha );
        tmp_args_element_name_73 = var_alpha;
        CHECK_OBJECT( var_ux );
        tmp_args_element_name_74 = var_ux;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 440;
        {
            PyObject *call_args[] = { tmp_args_element_name_73, tmp_args_element_name_74 };
            tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_39, call_args );
        }

        if ( tmp_assign_source_155 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_ux;
            assert( old != NULL );
            var_ux = tmp_assign_source_155;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_name_40;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_args_element_name_76;
        CHECK_OBJECT( var_dot );
        tmp_called_name_40 = var_dot;
        CHECK_OBJECT( var_cx );
        tmp_args_element_name_75 = var_cx;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_name_76 = var_r;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_75, tmp_args_element_name_76 };
            tmp_assign_source_156 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_40, call_args );
        }

        if ( tmp_assign_source_156 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_gamma;
            var_gamma = tmp_assign_source_156;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_name_41;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_subscribed_name_25;
        PyObject *tmp_source_name_16;
        PyObject *tmp_subscript_name_25;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_operand_name_7;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_41 = var_axpy;
        CHECK_OBJECT( var_cx );
        tmp_args_element_name_77 = var_cx;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_name_78 = var_r;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_source_name_16 = var_r;
        tmp_subscribed_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
        if ( tmp_subscribed_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_name_25 = const_int_0;
        tmp_args_element_name_79 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_25, tmp_subscript_name_25, 0 );
        Py_DECREF( tmp_subscribed_name_25 );
        if ( tmp_args_element_name_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_gamma );
        tmp_operand_name_7 = var_gamma;
        tmp_args_element_name_80 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_7 );
        if ( tmp_args_element_name_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_79 );

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80 };
            tmp_assign_source_157 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_41, call_args );
        }

        Py_DECREF( tmp_args_element_name_79 );
        Py_DECREF( tmp_args_element_name_80 );
        if ( tmp_assign_source_157 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_157;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_name_42;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_args_element_name_82;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_subscribed_name_26;
        PyObject *tmp_source_name_17;
        PyObject *tmp_subscript_name_26;
        PyObject *tmp_args_element_name_84;
        CHECK_OBJECT( var_axpy );
        tmp_called_name_42 = var_axpy;
        CHECK_OBJECT( var_ux );
        tmp_args_element_name_81 = var_ux;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_args_element_name_82 = var_x;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_source_name_17 = var_x;
        tmp_subscribed_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
        if ( tmp_subscribed_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_name_26 = const_int_0;
        tmp_args_element_name_83 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_26, tmp_subscript_name_26, 0 );
        Py_DECREF( tmp_subscribed_name_26 );
        if ( tmp_args_element_name_83 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT( var_gamma );
        tmp_args_element_name_84 = var_gamma;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = { tmp_args_element_name_81, tmp_args_element_name_82, tmp_args_element_name_83, tmp_args_element_name_84 };
            tmp_assign_source_158 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_42, call_args );
        }

        Py_DECREF( tmp_args_element_name_83 );
        if ( tmp_assign_source_158 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_158;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT( par_truncate );
        tmp_compexpr_left_13 = par_truncate;
        tmp_compexpr_right_13 = const_str_plain_oldest;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_18;
        }
        else
        {
            goto branch_no_18;
        }
        branch_yes_18:;
        loop_start_11:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_operand_name_8;
            int tmp_and_left_truth_2;
            PyObject *tmp_and_left_value_2;
            PyObject *tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT( par_CU );
            tmp_len_arg_4 = par_CU;
            tmp_compexpr_left_14 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_compexpr_left_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 449;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            CHECK_OBJECT( par_k );
            tmp_compexpr_right_14 = par_k;
            tmp_and_left_value_2 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
            Py_DECREF( tmp_compexpr_left_14 );
            if ( tmp_and_left_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 449;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
            if ( tmp_and_left_truth_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_and_left_value_2 );

                exception_lineno = 449;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            if ( tmp_and_left_truth_2 == 1 )
            {
                goto and_right_2;
            }
            else
            {
                goto and_left_2;
            }
            and_right_2:;
            Py_DECREF( tmp_and_left_value_2 );
            CHECK_OBJECT( par_CU );
            tmp_and_right_value_2 = par_CU;
            Py_INCREF( tmp_and_right_value_2 );
            tmp_operand_name_8 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_operand_name_8 = tmp_and_left_value_2;
            and_end_2:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_8 );
            Py_DECREF( tmp_operand_name_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 449;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_condition_result_19 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_19;
            }
            else
            {
                goto branch_no_19;
            }
            branch_yes_19:;
            goto loop_end_11;
            branch_no_19:;
        }
        {
            PyObject *tmp_delsubscr_target_1;
            PyObject *tmp_delsubscr_subscript_1;
            CHECK_OBJECT( par_CU );
            tmp_delsubscr_target_1 = par_CU;
            tmp_delsubscr_subscript_1 = const_int_0;
            tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 450;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        goto loop_start_11;
        loop_end_11:;
        goto branch_end_18;
        branch_no_18:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            CHECK_OBJECT( par_truncate );
            tmp_compexpr_left_15 = par_truncate;
            tmp_compexpr_right_15 = const_str_plain_smallest;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 451;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_condition_result_20 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                nuitka_bool tmp_condition_result_21;
                int tmp_and_left_truth_3;
                nuitka_bool tmp_and_left_value_3;
                nuitka_bool tmp_and_right_value_3;
                PyObject *tmp_compexpr_left_16;
                PyObject *tmp_compexpr_right_16;
                PyObject *tmp_len_arg_5;
                int tmp_truth_name_5;
                CHECK_OBJECT( par_CU );
                tmp_len_arg_5 = par_CU;
                tmp_compexpr_left_16 = BUILTIN_LEN( tmp_len_arg_5 );
                if ( tmp_compexpr_left_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 452;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_23;
                }
                CHECK_OBJECT( par_k );
                tmp_compexpr_right_16 = par_k;
                tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                Py_DECREF( tmp_compexpr_left_16 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 452;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_23;
                }
                tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_and_left_truth_3 == 1 )
                {
                    goto and_right_3;
                }
                else
                {
                    goto and_left_3;
                }
                and_right_3:;
                CHECK_OBJECT( par_CU );
                tmp_truth_name_5 = CHECK_IF_TRUE( par_CU );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 452;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_23;
                }
                tmp_and_right_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_21 = tmp_and_right_value_3;
                goto and_end_3;
                and_left_3:;
                tmp_condition_result_21 = tmp_and_left_value_3;
                and_end_3:;
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
                    PyObject *tmp_assign_source_159;
                    PyObject *tmp_source_name_18;
                    PyObject *tmp_called_name_43;
                    PyObject *tmp_mvar_value_15;
                    PyObject *tmp_args_element_name_85;
                    PyObject *tmp_source_name_19;
                    PyObject *tmp_subscribed_name_27;
                    PyObject *tmp_subscript_name_27;
                    PyObject *tmp_args_element_name_86;
                    PyObject *tmp_source_name_20;
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_solve );

                    if (unlikely( tmp_mvar_value_15 == NULL ))
                    {
                        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve );
                    }

                    if ( tmp_mvar_value_15 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }

                    tmp_called_name_43 = tmp_mvar_value_15;
                    CHECK_OBJECT( var_R );
                    tmp_subscribed_name_27 = var_R;
                    tmp_subscript_name_27 = const_tuple_slice_none_int_neg_1_none_slice_none_none_none_tuple;
                    tmp_source_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
                    if ( tmp_source_name_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    tmp_args_element_name_85 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_T );
                    Py_DECREF( tmp_source_name_19 );
                    if ( tmp_args_element_name_85 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    CHECK_OBJECT( var_B );
                    tmp_source_name_20 = var_B;
                    tmp_args_element_name_86 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
                    if ( tmp_args_element_name_86 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_85 );

                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 454;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86 };
                        tmp_source_name_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_43, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_85 );
                    Py_DECREF( tmp_args_element_name_86 );
                    if ( tmp_source_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    tmp_assign_source_159 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_T );
                    Py_DECREF( tmp_source_name_18 );
                    if ( tmp_assign_source_159 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 454;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    {
                        PyObject *old = var_D;
                        var_D = tmp_assign_source_159;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_160;
                    PyObject *tmp_iter_arg_24;
                    PyObject *tmp_called_name_44;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_element_name_87;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_svd );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 455;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_45;
                    }

                    tmp_called_name_44 = tmp_mvar_value_16;
                    CHECK_OBJECT( var_D );
                    tmp_args_element_name_87 = var_D;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 455;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_87 };
                        tmp_iter_arg_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
                    }

                    if ( tmp_iter_arg_24 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 455;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_45;
                    }
                    tmp_assign_source_160 = MAKE_ITERATOR( tmp_iter_arg_24 );
                    Py_DECREF( tmp_iter_arg_24 );
                    if ( tmp_assign_source_160 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 455;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_45;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_13__source_iter;
                        tmp_tuple_unpack_13__source_iter = tmp_assign_source_160;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_161;
                    PyObject *tmp_unpack_41;
                    CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                    tmp_unpack_41 = tmp_tuple_unpack_13__source_iter;
                    tmp_assign_source_161 = UNPACK_NEXT( tmp_unpack_41, 0, 3 );
                    if ( tmp_assign_source_161 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 455;
                        goto try_except_handler_46;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_13__element_1;
                        tmp_tuple_unpack_13__element_1 = tmp_assign_source_161;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_162;
                    PyObject *tmp_unpack_42;
                    CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                    tmp_unpack_42 = tmp_tuple_unpack_13__source_iter;
                    tmp_assign_source_162 = UNPACK_NEXT( tmp_unpack_42, 1, 3 );
                    if ( tmp_assign_source_162 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 455;
                        goto try_except_handler_46;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_13__element_2;
                        tmp_tuple_unpack_13__element_2 = tmp_assign_source_162;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_163;
                    PyObject *tmp_unpack_43;
                    CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                    tmp_unpack_43 = tmp_tuple_unpack_13__source_iter;
                    tmp_assign_source_163 = UNPACK_NEXT( tmp_unpack_43, 2, 3 );
                    if ( tmp_assign_source_163 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 455;
                        goto try_except_handler_46;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_13__element_3;
                        tmp_tuple_unpack_13__element_3 = tmp_assign_source_163;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_14;
                    CHECK_OBJECT( tmp_tuple_unpack_13__source_iter );
                    tmp_iterator_name_14 = tmp_tuple_unpack_13__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_14 ); assert( HAS_ITERNEXT( tmp_iterator_name_14 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_14 )->tp_iternext)( tmp_iterator_name_14 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 455;
                                goto try_except_handler_46;
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
                        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 455;
                        goto try_except_handler_46;
                    }
                }
                goto try_end_37;
                // Exception handler code:
                try_except_handler_46:;
                exception_keeper_type_43 = exception_type;
                exception_keeper_value_43 = exception_value;
                exception_keeper_tb_43 = exception_tb;
                exception_keeper_lineno_43 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
                Py_DECREF( tmp_tuple_unpack_13__source_iter );
                tmp_tuple_unpack_13__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_43;
                exception_value = exception_keeper_value_43;
                exception_tb = exception_keeper_tb_43;
                exception_lineno = exception_keeper_lineno_43;

                goto try_except_handler_45;
                // End of try:
                try_end_37:;
                goto try_end_38;
                // Exception handler code:
                try_except_handler_45:;
                exception_keeper_type_44 = exception_type;
                exception_keeper_value_44 = exception_value;
                exception_keeper_tb_44 = exception_tb;
                exception_keeper_lineno_44 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_13__element_1 );
                tmp_tuple_unpack_13__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_13__element_2 );
                tmp_tuple_unpack_13__element_2 = NULL;

                Py_XDECREF( tmp_tuple_unpack_13__element_3 );
                tmp_tuple_unpack_13__element_3 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_44;
                exception_value = exception_keeper_value_44;
                exception_tb = exception_keeper_tb_44;
                exception_lineno = exception_keeper_lineno_44;

                goto try_except_handler_23;
                // End of try:
                try_end_38:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_13__source_iter );
                Py_DECREF( tmp_tuple_unpack_13__source_iter );
                tmp_tuple_unpack_13__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_164;
                    CHECK_OBJECT( tmp_tuple_unpack_13__element_1 );
                    tmp_assign_source_164 = tmp_tuple_unpack_13__element_1;
                    {
                        PyObject *old = var_W;
                        var_W = tmp_assign_source_164;
                        Py_INCREF( var_W );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_13__element_1 );
                tmp_tuple_unpack_13__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_165;
                    CHECK_OBJECT( tmp_tuple_unpack_13__element_2 );
                    tmp_assign_source_165 = tmp_tuple_unpack_13__element_2;
                    {
                        PyObject *old = var_sigma;
                        var_sigma = tmp_assign_source_165;
                        Py_INCREF( var_sigma );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_13__element_2 );
                tmp_tuple_unpack_13__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_166;
                    CHECK_OBJECT( tmp_tuple_unpack_13__element_3 );
                    tmp_assign_source_166 = tmp_tuple_unpack_13__element_3;
                    {
                        PyObject *old = var_V;
                        var_V = tmp_assign_source_166;
                        Py_INCREF( var_V );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_13__element_3 );
                tmp_tuple_unpack_13__element_3 = NULL;

                {
                    PyObject *tmp_assign_source_167;
                    tmp_assign_source_167 = PyList_New( 0 );
                    {
                        PyObject *old = var_new_CU;
                        var_new_CU = tmp_assign_source_167;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_168;
                    PyObject *tmp_iter_arg_25;
                    PyObject *tmp_called_name_45;
                    PyObject *tmp_args_element_name_88;
                    PyObject *tmp_source_name_21;
                    PyObject *tmp_subscribed_name_28;
                    PyObject *tmp_subscript_name_28;
                    PyObject *tmp_tuple_element_13;
                    PyObject *tmp_start_name_1;
                    PyObject *tmp_stop_name_1;
                    PyObject *tmp_left_name_17;
                    PyObject *tmp_right_name_17;
                    PyObject *tmp_step_name_1;
                    tmp_called_name_45 = (PyObject *)&PyEnum_Type;
                    CHECK_OBJECT( var_W );
                    tmp_subscribed_name_28 = var_W;
                    tmp_tuple_element_13 = const_slice_none_none_none;
                    tmp_subscript_name_28 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_13 );
                    PyTuple_SET_ITEM( tmp_subscript_name_28, 0, tmp_tuple_element_13 );
                    tmp_start_name_1 = Py_None;
                    CHECK_OBJECT( par_k );
                    tmp_left_name_17 = par_k;
                    tmp_right_name_17 = const_int_pos_1;
                    tmp_stop_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_17, tmp_right_name_17 );
                    if ( tmp_stop_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_subscript_name_28 );

                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    tmp_step_name_1 = Py_None;
                    tmp_tuple_element_13 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
                    Py_DECREF( tmp_stop_name_1 );
                    assert( !(tmp_tuple_element_13 == NULL) );
                    PyTuple_SET_ITEM( tmp_subscript_name_28, 1, tmp_tuple_element_13 );
                    tmp_source_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
                    Py_DECREF( tmp_subscript_name_28 );
                    if ( tmp_source_name_21 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    tmp_args_element_name_88 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_T );
                    Py_DECREF( tmp_source_name_21 );
                    if ( tmp_args_element_name_88 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 459;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_88 };
                        tmp_iter_arg_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_88 );
                    if ( tmp_iter_arg_25 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    tmp_assign_source_168 = MAKE_ITERATOR( tmp_iter_arg_25 );
                    Py_DECREF( tmp_iter_arg_25 );
                    if ( tmp_assign_source_168 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                    {
                        PyObject *old = tmp_for_loop_8__for_iterator;
                        tmp_for_loop_8__for_iterator = tmp_assign_source_168;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                loop_start_12:;
                {
                    PyObject *tmp_next_source_10;
                    PyObject *tmp_assign_source_169;
                    CHECK_OBJECT( tmp_for_loop_8__for_iterator );
                    tmp_next_source_10 = tmp_for_loop_8__for_iterator;
                    tmp_assign_source_169 = ITERATOR_NEXT( tmp_next_source_10 );
                    if ( tmp_assign_source_169 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_12;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 459;
                            goto try_except_handler_47;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_8__iter_value;
                        tmp_for_loop_8__iter_value = tmp_assign_source_169;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_170;
                    PyObject *tmp_iter_arg_26;
                    CHECK_OBJECT( tmp_for_loop_8__iter_value );
                    tmp_iter_arg_26 = tmp_for_loop_8__iter_value;
                    tmp_assign_source_170 = MAKE_ITERATOR( tmp_iter_arg_26 );
                    if ( tmp_assign_source_170 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 459;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_48;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_14__source_iter;
                        tmp_tuple_unpack_14__source_iter = tmp_assign_source_170;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_171;
                    PyObject *tmp_unpack_44;
                    CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                    tmp_unpack_44 = tmp_tuple_unpack_14__source_iter;
                    tmp_assign_source_171 = UNPACK_NEXT( tmp_unpack_44, 0, 2 );
                    if ( tmp_assign_source_171 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 459;
                        goto try_except_handler_49;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_14__element_1;
                        tmp_tuple_unpack_14__element_1 = tmp_assign_source_171;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_172;
                    PyObject *tmp_unpack_45;
                    CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                    tmp_unpack_45 = tmp_tuple_unpack_14__source_iter;
                    tmp_assign_source_172 = UNPACK_NEXT( tmp_unpack_45, 1, 2 );
                    if ( tmp_assign_source_172 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 459;
                        goto try_except_handler_49;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_14__element_2;
                        tmp_tuple_unpack_14__element_2 = tmp_assign_source_172;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_15;
                    CHECK_OBJECT( tmp_tuple_unpack_14__source_iter );
                    tmp_iterator_name_15 = tmp_tuple_unpack_14__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_15 ); assert( HAS_ITERNEXT( tmp_iterator_name_15 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_15 )->tp_iternext)( tmp_iterator_name_15 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 459;
                                goto try_except_handler_49;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 459;
                        goto try_except_handler_49;
                    }
                }
                goto try_end_39;
                // Exception handler code:
                try_except_handler_49:;
                exception_keeper_type_45 = exception_type;
                exception_keeper_value_45 = exception_value;
                exception_keeper_tb_45 = exception_tb;
                exception_keeper_lineno_45 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_14__source_iter );
                Py_DECREF( tmp_tuple_unpack_14__source_iter );
                tmp_tuple_unpack_14__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_45;
                exception_value = exception_keeper_value_45;
                exception_tb = exception_keeper_tb_45;
                exception_lineno = exception_keeper_lineno_45;

                goto try_except_handler_48;
                // End of try:
                try_end_39:;
                goto try_end_40;
                // Exception handler code:
                try_except_handler_48:;
                exception_keeper_type_46 = exception_type;
                exception_keeper_value_46 = exception_value;
                exception_keeper_tb_46 = exception_tb;
                exception_keeper_lineno_46 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_14__element_1 );
                tmp_tuple_unpack_14__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_14__element_2 );
                tmp_tuple_unpack_14__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_46;
                exception_value = exception_keeper_value_46;
                exception_tb = exception_keeper_tb_46;
                exception_lineno = exception_keeper_lineno_46;

                goto try_except_handler_47;
                // End of try:
                try_end_40:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_14__source_iter );
                Py_DECREF( tmp_tuple_unpack_14__source_iter );
                tmp_tuple_unpack_14__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_173;
                    CHECK_OBJECT( tmp_tuple_unpack_14__element_1 );
                    tmp_assign_source_173 = tmp_tuple_unpack_14__element_1;
                    {
                        PyObject *old = var_j;
                        var_j = tmp_assign_source_173;
                        Py_INCREF( var_j );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_14__element_1 );
                tmp_tuple_unpack_14__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_174;
                    CHECK_OBJECT( tmp_tuple_unpack_14__element_2 );
                    tmp_assign_source_174 = tmp_tuple_unpack_14__element_2;
                    {
                        PyObject *old = var_w;
                        var_w = tmp_assign_source_174;
                        Py_INCREF( var_w );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_14__element_2 );
                tmp_tuple_unpack_14__element_2 = NULL;

                // Tried code:
                {
                    PyObject *tmp_assign_source_175;
                    PyObject *tmp_iter_arg_27;
                    PyObject *tmp_subscribed_name_29;
                    PyObject *tmp_subscript_name_29;
                    CHECK_OBJECT( par_CU );
                    tmp_subscribed_name_29 = par_CU;
                    tmp_subscript_name_29 = const_int_0;
                    tmp_iter_arg_27 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_29, tmp_subscript_name_29, 0 );
                    if ( tmp_iter_arg_27 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 460;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_50;
                    }
                    tmp_assign_source_175 = MAKE_ITERATOR( tmp_iter_arg_27 );
                    Py_DECREF( tmp_iter_arg_27 );
                    if ( tmp_assign_source_175 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 460;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_50;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_15__source_iter;
                        tmp_tuple_unpack_15__source_iter = tmp_assign_source_175;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_176;
                    PyObject *tmp_unpack_46;
                    CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                    tmp_unpack_46 = tmp_tuple_unpack_15__source_iter;
                    tmp_assign_source_176 = UNPACK_NEXT( tmp_unpack_46, 0, 2 );
                    if ( tmp_assign_source_176 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 460;
                        goto try_except_handler_51;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_15__element_1;
                        tmp_tuple_unpack_15__element_1 = tmp_assign_source_176;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_177;
                    PyObject *tmp_unpack_47;
                    CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                    tmp_unpack_47 = tmp_tuple_unpack_15__source_iter;
                    tmp_assign_source_177 = UNPACK_NEXT( tmp_unpack_47, 1, 2 );
                    if ( tmp_assign_source_177 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 460;
                        goto try_except_handler_51;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_15__element_2;
                        tmp_tuple_unpack_15__element_2 = tmp_assign_source_177;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_16;
                    CHECK_OBJECT( tmp_tuple_unpack_15__source_iter );
                    tmp_iterator_name_16 = tmp_tuple_unpack_15__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_16 ); assert( HAS_ITERNEXT( tmp_iterator_name_16 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_16 )->tp_iternext)( tmp_iterator_name_16 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 460;
                                goto try_except_handler_51;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 460;
                        goto try_except_handler_51;
                    }
                }
                goto try_end_41;
                // Exception handler code:
                try_except_handler_51:;
                exception_keeper_type_47 = exception_type;
                exception_keeper_value_47 = exception_value;
                exception_keeper_tb_47 = exception_tb;
                exception_keeper_lineno_47 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_15__source_iter );
                Py_DECREF( tmp_tuple_unpack_15__source_iter );
                tmp_tuple_unpack_15__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_47;
                exception_value = exception_keeper_value_47;
                exception_tb = exception_keeper_tb_47;
                exception_lineno = exception_keeper_lineno_47;

                goto try_except_handler_50;
                // End of try:
                try_end_41:;
                goto try_end_42;
                // Exception handler code:
                try_except_handler_50:;
                exception_keeper_type_48 = exception_type;
                exception_keeper_value_48 = exception_value;
                exception_keeper_tb_48 = exception_tb;
                exception_keeper_lineno_48 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_15__element_1 );
                tmp_tuple_unpack_15__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_15__element_2 );
                tmp_tuple_unpack_15__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_48;
                exception_value = exception_keeper_value_48;
                exception_tb = exception_keeper_tb_48;
                exception_lineno = exception_keeper_lineno_48;

                goto try_except_handler_47;
                // End of try:
                try_end_42:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_15__source_iter );
                Py_DECREF( tmp_tuple_unpack_15__source_iter );
                tmp_tuple_unpack_15__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_178;
                    CHECK_OBJECT( tmp_tuple_unpack_15__element_1 );
                    tmp_assign_source_178 = tmp_tuple_unpack_15__element_1;
                    {
                        PyObject *old = var_c;
                        var_c = tmp_assign_source_178;
                        Py_INCREF( var_c );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_15__element_1 );
                tmp_tuple_unpack_15__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_179;
                    CHECK_OBJECT( tmp_tuple_unpack_15__element_2 );
                    tmp_assign_source_179 = tmp_tuple_unpack_15__element_2;
                    {
                        PyObject *old = var_u;
                        var_u = tmp_assign_source_179;
                        Py_INCREF( var_u );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_15__element_2 );
                tmp_tuple_unpack_15__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_180;
                    PyObject *tmp_left_name_18;
                    PyObject *tmp_right_name_18;
                    PyObject *tmp_subscribed_name_30;
                    PyObject *tmp_subscript_name_30;
                    CHECK_OBJECT( var_c );
                    tmp_left_name_18 = var_c;
                    CHECK_OBJECT( var_w );
                    tmp_subscribed_name_30 = var_w;
                    tmp_subscript_name_30 = const_int_0;
                    tmp_right_name_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_30, tmp_subscript_name_30, 0 );
                    if ( tmp_right_name_18 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 461;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    tmp_assign_source_180 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
                    Py_DECREF( tmp_right_name_18 );
                    if ( tmp_assign_source_180 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 461;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = var_c;
                        assert( old != NULL );
                        var_c = tmp_assign_source_180;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_181;
                    PyObject *tmp_left_name_19;
                    PyObject *tmp_right_name_19;
                    PyObject *tmp_subscribed_name_31;
                    PyObject *tmp_subscript_name_31;
                    CHECK_OBJECT( var_u );
                    tmp_left_name_19 = var_u;
                    CHECK_OBJECT( var_w );
                    tmp_subscribed_name_31 = var_w;
                    tmp_subscript_name_31 = const_int_0;
                    tmp_right_name_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_31, tmp_subscript_name_31, 0 );
                    if ( tmp_right_name_19 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 462;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    tmp_assign_source_181 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
                    Py_DECREF( tmp_right_name_19 );
                    if ( tmp_assign_source_181 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 462;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = var_u;
                        assert( old != NULL );
                        var_u = tmp_assign_source_181;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_182;
                    PyObject *tmp_iter_arg_28;
                    PyObject *tmp_called_name_46;
                    PyObject *tmp_args_element_name_89;
                    PyObject *tmp_subscribed_name_32;
                    PyObject *tmp_subscript_name_32;
                    PyObject *tmp_args_element_name_90;
                    PyObject *tmp_subscribed_name_33;
                    PyObject *tmp_subscript_name_33;
                    tmp_called_name_46 = (PyObject *)&PyZip_Type;
                    CHECK_OBJECT( par_CU );
                    tmp_subscribed_name_32 = par_CU;
                    tmp_subscript_name_32 = const_slice_int_pos_1_none_none;
                    tmp_args_element_name_89 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_32, tmp_subscript_name_32 );
                    if ( tmp_args_element_name_89 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 463;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    CHECK_OBJECT( var_w );
                    tmp_subscribed_name_33 = var_w;
                    tmp_subscript_name_33 = const_slice_int_pos_1_none_none;
                    tmp_args_element_name_90 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_33, tmp_subscript_name_33 );
                    if ( tmp_args_element_name_90 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_89 );

                        exception_lineno = 463;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 463;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_89, tmp_args_element_name_90 };
                        tmp_iter_arg_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_46, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_89 );
                    Py_DECREF( tmp_args_element_name_90 );
                    if ( tmp_iter_arg_28 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 463;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    tmp_assign_source_182 = MAKE_ITERATOR( tmp_iter_arg_28 );
                    Py_DECREF( tmp_iter_arg_28 );
                    if ( tmp_assign_source_182 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 463;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = tmp_for_loop_9__for_iterator;
                        tmp_for_loop_9__for_iterator = tmp_assign_source_182;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                loop_start_13:;
                {
                    PyObject *tmp_next_source_11;
                    PyObject *tmp_assign_source_183;
                    CHECK_OBJECT( tmp_for_loop_9__for_iterator );
                    tmp_next_source_11 = tmp_for_loop_9__for_iterator;
                    tmp_assign_source_183 = ITERATOR_NEXT( tmp_next_source_11 );
                    if ( tmp_assign_source_183 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_13;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 463;
                            goto try_except_handler_52;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_9__iter_value;
                        tmp_for_loop_9__iter_value = tmp_assign_source_183;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_184;
                    PyObject *tmp_iter_arg_29;
                    CHECK_OBJECT( tmp_for_loop_9__iter_value );
                    tmp_iter_arg_29 = tmp_for_loop_9__iter_value;
                    tmp_assign_source_184 = MAKE_ITERATOR( tmp_iter_arg_29 );
                    if ( tmp_assign_source_184 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 463;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_53;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_16__source_iter;
                        tmp_tuple_unpack_16__source_iter = tmp_assign_source_184;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_185;
                    PyObject *tmp_unpack_48;
                    CHECK_OBJECT( tmp_tuple_unpack_16__source_iter );
                    tmp_unpack_48 = tmp_tuple_unpack_16__source_iter;
                    tmp_assign_source_185 = UNPACK_NEXT( tmp_unpack_48, 0, 2 );
                    if ( tmp_assign_source_185 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 463;
                        goto try_except_handler_54;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_16__element_1;
                        tmp_tuple_unpack_16__element_1 = tmp_assign_source_185;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_186;
                    PyObject *tmp_unpack_49;
                    CHECK_OBJECT( tmp_tuple_unpack_16__source_iter );
                    tmp_unpack_49 = tmp_tuple_unpack_16__source_iter;
                    tmp_assign_source_186 = UNPACK_NEXT( tmp_unpack_49, 1, 2 );
                    if ( tmp_assign_source_186 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 463;
                        goto try_except_handler_54;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_16__element_2;
                        tmp_tuple_unpack_16__element_2 = tmp_assign_source_186;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_17;
                    CHECK_OBJECT( tmp_tuple_unpack_16__source_iter );
                    tmp_iterator_name_17 = tmp_tuple_unpack_16__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_17 ); assert( HAS_ITERNEXT( tmp_iterator_name_17 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_17 )->tp_iternext)( tmp_iterator_name_17 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 463;
                                goto try_except_handler_54;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 463;
                        goto try_except_handler_54;
                    }
                }
                goto try_end_43;
                // Exception handler code:
                try_except_handler_54:;
                exception_keeper_type_49 = exception_type;
                exception_keeper_value_49 = exception_value;
                exception_keeper_tb_49 = exception_tb;
                exception_keeper_lineno_49 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_16__source_iter );
                Py_DECREF( tmp_tuple_unpack_16__source_iter );
                tmp_tuple_unpack_16__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_49;
                exception_value = exception_keeper_value_49;
                exception_tb = exception_keeper_tb_49;
                exception_lineno = exception_keeper_lineno_49;

                goto try_except_handler_53;
                // End of try:
                try_end_43:;
                goto try_end_44;
                // Exception handler code:
                try_except_handler_53:;
                exception_keeper_type_50 = exception_type;
                exception_keeper_value_50 = exception_value;
                exception_keeper_tb_50 = exception_tb;
                exception_keeper_lineno_50 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_16__element_1 );
                tmp_tuple_unpack_16__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_16__element_2 );
                tmp_tuple_unpack_16__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_50;
                exception_value = exception_keeper_value_50;
                exception_tb = exception_keeper_tb_50;
                exception_lineno = exception_keeper_lineno_50;

                goto try_except_handler_52;
                // End of try:
                try_end_44:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_16__source_iter );
                Py_DECREF( tmp_tuple_unpack_16__source_iter );
                tmp_tuple_unpack_16__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_187;
                    CHECK_OBJECT( tmp_tuple_unpack_16__element_1 );
                    tmp_assign_source_187 = tmp_tuple_unpack_16__element_1;
                    {
                        PyObject *old = var_cup;
                        var_cup = tmp_assign_source_187;
                        Py_INCREF( var_cup );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_16__element_1 );
                tmp_tuple_unpack_16__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_188;
                    CHECK_OBJECT( tmp_tuple_unpack_16__element_2 );
                    tmp_assign_source_188 = tmp_tuple_unpack_16__element_2;
                    {
                        PyObject *old = var_wp;
                        var_wp = tmp_assign_source_188;
                        Py_INCREF( var_wp );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_16__element_2 );
                tmp_tuple_unpack_16__element_2 = NULL;

                // Tried code:
                {
                    PyObject *tmp_assign_source_189;
                    PyObject *tmp_iter_arg_30;
                    CHECK_OBJECT( var_cup );
                    tmp_iter_arg_30 = var_cup;
                    tmp_assign_source_189 = MAKE_ITERATOR( tmp_iter_arg_30 );
                    if ( tmp_assign_source_189 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 464;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_55;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_17__source_iter;
                        tmp_tuple_unpack_17__source_iter = tmp_assign_source_189;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_190;
                    PyObject *tmp_unpack_50;
                    CHECK_OBJECT( tmp_tuple_unpack_17__source_iter );
                    tmp_unpack_50 = tmp_tuple_unpack_17__source_iter;
                    tmp_assign_source_190 = UNPACK_NEXT( tmp_unpack_50, 0, 2 );
                    if ( tmp_assign_source_190 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 464;
                        goto try_except_handler_56;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_17__element_1;
                        tmp_tuple_unpack_17__element_1 = tmp_assign_source_190;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_191;
                    PyObject *tmp_unpack_51;
                    CHECK_OBJECT( tmp_tuple_unpack_17__source_iter );
                    tmp_unpack_51 = tmp_tuple_unpack_17__source_iter;
                    tmp_assign_source_191 = UNPACK_NEXT( tmp_unpack_51, 1, 2 );
                    if ( tmp_assign_source_191 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 464;
                        goto try_except_handler_56;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_17__element_2;
                        tmp_tuple_unpack_17__element_2 = tmp_assign_source_191;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_18;
                    CHECK_OBJECT( tmp_tuple_unpack_17__source_iter );
                    tmp_iterator_name_18 = tmp_tuple_unpack_17__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_18 ); assert( HAS_ITERNEXT( tmp_iterator_name_18 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_18 )->tp_iternext)( tmp_iterator_name_18 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 464;
                                goto try_except_handler_56;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 464;
                        goto try_except_handler_56;
                    }
                }
                goto try_end_45;
                // Exception handler code:
                try_except_handler_56:;
                exception_keeper_type_51 = exception_type;
                exception_keeper_value_51 = exception_value;
                exception_keeper_tb_51 = exception_tb;
                exception_keeper_lineno_51 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_17__source_iter );
                Py_DECREF( tmp_tuple_unpack_17__source_iter );
                tmp_tuple_unpack_17__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_51;
                exception_value = exception_keeper_value_51;
                exception_tb = exception_keeper_tb_51;
                exception_lineno = exception_keeper_lineno_51;

                goto try_except_handler_55;
                // End of try:
                try_end_45:;
                goto try_end_46;
                // Exception handler code:
                try_except_handler_55:;
                exception_keeper_type_52 = exception_type;
                exception_keeper_value_52 = exception_value;
                exception_keeper_tb_52 = exception_tb;
                exception_keeper_lineno_52 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_17__element_1 );
                tmp_tuple_unpack_17__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_17__element_2 );
                tmp_tuple_unpack_17__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_52;
                exception_value = exception_keeper_value_52;
                exception_tb = exception_keeper_tb_52;
                exception_lineno = exception_keeper_lineno_52;

                goto try_except_handler_52;
                // End of try:
                try_end_46:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_17__source_iter );
                Py_DECREF( tmp_tuple_unpack_17__source_iter );
                tmp_tuple_unpack_17__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_192;
                    CHECK_OBJECT( tmp_tuple_unpack_17__element_1 );
                    tmp_assign_source_192 = tmp_tuple_unpack_17__element_1;
                    {
                        PyObject *old = var_cp;
                        var_cp = tmp_assign_source_192;
                        Py_INCREF( var_cp );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_17__element_1 );
                tmp_tuple_unpack_17__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_193;
                    CHECK_OBJECT( tmp_tuple_unpack_17__element_2 );
                    tmp_assign_source_193 = tmp_tuple_unpack_17__element_2;
                    {
                        PyObject *old = var_up;
                        var_up = tmp_assign_source_193;
                        Py_INCREF( var_up );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_17__element_2 );
                tmp_tuple_unpack_17__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_194;
                    PyObject *tmp_called_name_47;
                    PyObject *tmp_args_element_name_91;
                    PyObject *tmp_args_element_name_92;
                    PyObject *tmp_args_element_name_93;
                    PyObject *tmp_subscribed_name_34;
                    PyObject *tmp_source_name_22;
                    PyObject *tmp_subscript_name_34;
                    PyObject *tmp_args_element_name_94;
                    CHECK_OBJECT( var_axpy );
                    tmp_called_name_47 = var_axpy;
                    CHECK_OBJECT( var_cp );
                    tmp_args_element_name_91 = var_cp;
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_92 = var_c;
                    CHECK_OBJECT( var_c );
                    tmp_source_name_22 = var_c;
                    tmp_subscribed_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_shape );
                    if ( tmp_subscribed_name_34 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 465;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    tmp_subscript_name_34 = const_int_0;
                    tmp_args_element_name_93 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_34, tmp_subscript_name_34, 0 );
                    Py_DECREF( tmp_subscribed_name_34 );
                    if ( tmp_args_element_name_93 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 465;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    CHECK_OBJECT( var_wp );
                    tmp_args_element_name_94 = var_wp;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 465;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_91, tmp_args_element_name_92, tmp_args_element_name_93, tmp_args_element_name_94 };
                        tmp_assign_source_194 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_47, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_93 );
                    if ( tmp_assign_source_194 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 465;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    {
                        PyObject *old = var_c;
                        assert( old != NULL );
                        var_c = tmp_assign_source_194;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_195;
                    PyObject *tmp_called_name_48;
                    PyObject *tmp_args_element_name_95;
                    PyObject *tmp_args_element_name_96;
                    PyObject *tmp_args_element_name_97;
                    PyObject *tmp_subscribed_name_35;
                    PyObject *tmp_source_name_23;
                    PyObject *tmp_subscript_name_35;
                    PyObject *tmp_args_element_name_98;
                    CHECK_OBJECT( var_axpy );
                    tmp_called_name_48 = var_axpy;
                    CHECK_OBJECT( var_up );
                    tmp_args_element_name_95 = var_up;
                    CHECK_OBJECT( var_u );
                    tmp_args_element_name_96 = var_u;
                    CHECK_OBJECT( var_u );
                    tmp_source_name_23 = var_u;
                    tmp_subscribed_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_shape );
                    if ( tmp_subscribed_name_35 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 466;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    tmp_subscript_name_35 = const_int_0;
                    tmp_args_element_name_97 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_35, tmp_subscript_name_35, 0 );
                    Py_DECREF( tmp_subscribed_name_35 );
                    if ( tmp_args_element_name_97 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 466;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    CHECK_OBJECT( var_wp );
                    tmp_args_element_name_98 = var_wp;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 466;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_95, tmp_args_element_name_96, tmp_args_element_name_97, tmp_args_element_name_98 };
                        tmp_assign_source_195 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_48, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_97 );
                    if ( tmp_assign_source_195 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 466;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_52;
                    }
                    {
                        PyObject *old = var_u;
                        assert( old != NULL );
                        var_u = tmp_assign_source_195;
                        Py_DECREF( old );
                    }

                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 463;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_52;
                }
                goto loop_start_13;
                loop_end_13:;
                goto try_end_47;
                // Exception handler code:
                try_except_handler_52:;
                exception_keeper_type_53 = exception_type;
                exception_keeper_value_53 = exception_value;
                exception_keeper_tb_53 = exception_tb;
                exception_keeper_lineno_53 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_for_loop_9__iter_value );
                tmp_for_loop_9__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                Py_DECREF( tmp_for_loop_9__for_iterator );
                tmp_for_loop_9__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_53;
                exception_value = exception_keeper_value_53;
                exception_tb = exception_keeper_tb_53;
                exception_lineno = exception_keeper_lineno_53;

                goto try_except_handler_47;
                // End of try:
                try_end_47:;
                Py_XDECREF( tmp_for_loop_9__iter_value );
                tmp_for_loop_9__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
                Py_DECREF( tmp_for_loop_9__for_iterator );
                tmp_for_loop_9__for_iterator = NULL;

                {
                    PyObject *tmp_assign_source_196;
                    PyObject *tmp_iter_arg_31;
                    CHECK_OBJECT( var_new_CU );
                    tmp_iter_arg_31 = var_new_CU;
                    tmp_assign_source_196 = MAKE_ITERATOR( tmp_iter_arg_31 );
                    if ( tmp_assign_source_196 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 471;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = tmp_for_loop_10__for_iterator;
                        tmp_for_loop_10__for_iterator = tmp_assign_source_196;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                loop_start_14:;
                {
                    PyObject *tmp_next_source_12;
                    PyObject *tmp_assign_source_197;
                    CHECK_OBJECT( tmp_for_loop_10__for_iterator );
                    tmp_next_source_12 = tmp_for_loop_10__for_iterator;
                    tmp_assign_source_197 = ITERATOR_NEXT( tmp_next_source_12 );
                    if ( tmp_assign_source_197 == NULL )
                    {
                        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                        {

                            goto loop_end_14;
                        }
                        else
                        {

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                            exception_lineno = 471;
                            goto try_except_handler_57;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_10__iter_value;
                        tmp_for_loop_10__iter_value = tmp_assign_source_197;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_198;
                    PyObject *tmp_iter_arg_32;
                    CHECK_OBJECT( tmp_for_loop_10__iter_value );
                    tmp_iter_arg_32 = tmp_for_loop_10__iter_value;
                    tmp_assign_source_198 = MAKE_ITERATOR( tmp_iter_arg_32 );
                    if ( tmp_assign_source_198 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 471;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_58;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_18__source_iter;
                        tmp_tuple_unpack_18__source_iter = tmp_assign_source_198;
                        Py_XDECREF( old );
                    }

                }
                // Tried code:
                {
                    PyObject *tmp_assign_source_199;
                    PyObject *tmp_unpack_52;
                    CHECK_OBJECT( tmp_tuple_unpack_18__source_iter );
                    tmp_unpack_52 = tmp_tuple_unpack_18__source_iter;
                    tmp_assign_source_199 = UNPACK_NEXT( tmp_unpack_52, 0, 2 );
                    if ( tmp_assign_source_199 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 471;
                        goto try_except_handler_59;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_18__element_1;
                        tmp_tuple_unpack_18__element_1 = tmp_assign_source_199;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_200;
                    PyObject *tmp_unpack_53;
                    CHECK_OBJECT( tmp_tuple_unpack_18__source_iter );
                    tmp_unpack_53 = tmp_tuple_unpack_18__source_iter;
                    tmp_assign_source_200 = UNPACK_NEXT( tmp_unpack_53, 1, 2 );
                    if ( tmp_assign_source_200 == NULL )
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


                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 471;
                        goto try_except_handler_59;
                    }
                    {
                        PyObject *old = tmp_tuple_unpack_18__element_2;
                        tmp_tuple_unpack_18__element_2 = tmp_assign_source_200;
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_iterator_name_19;
                    CHECK_OBJECT( tmp_tuple_unpack_18__source_iter );
                    tmp_iterator_name_19 = tmp_tuple_unpack_18__source_iter;
                    // Check if iterator has left-over elements.
                    CHECK_OBJECT( tmp_iterator_name_19 ); assert( HAS_ITERNEXT( tmp_iterator_name_19 ) );

                    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_19 )->tp_iternext)( tmp_iterator_name_19 );

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

                                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                                exception_lineno = 471;
                                goto try_except_handler_59;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 471;
                        goto try_except_handler_59;
                    }
                }
                goto try_end_48;
                // Exception handler code:
                try_except_handler_59:;
                exception_keeper_type_54 = exception_type;
                exception_keeper_value_54 = exception_value;
                exception_keeper_tb_54 = exception_tb;
                exception_keeper_lineno_54 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_18__source_iter );
                Py_DECREF( tmp_tuple_unpack_18__source_iter );
                tmp_tuple_unpack_18__source_iter = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_54;
                exception_value = exception_keeper_value_54;
                exception_tb = exception_keeper_tb_54;
                exception_lineno = exception_keeper_lineno_54;

                goto try_except_handler_58;
                // End of try:
                try_end_48:;
                goto try_end_49;
                // Exception handler code:
                try_except_handler_58:;
                exception_keeper_type_55 = exception_type;
                exception_keeper_value_55 = exception_value;
                exception_keeper_tb_55 = exception_tb;
                exception_keeper_lineno_55 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_tuple_unpack_18__element_1 );
                tmp_tuple_unpack_18__element_1 = NULL;

                Py_XDECREF( tmp_tuple_unpack_18__element_2 );
                tmp_tuple_unpack_18__element_2 = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_55;
                exception_value = exception_keeper_value_55;
                exception_tb = exception_keeper_tb_55;
                exception_lineno = exception_keeper_lineno_55;

                goto try_except_handler_57;
                // End of try:
                try_end_49:;
                CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_18__source_iter );
                Py_DECREF( tmp_tuple_unpack_18__source_iter );
                tmp_tuple_unpack_18__source_iter = NULL;

                {
                    PyObject *tmp_assign_source_201;
                    CHECK_OBJECT( tmp_tuple_unpack_18__element_1 );
                    tmp_assign_source_201 = tmp_tuple_unpack_18__element_1;
                    {
                        PyObject *old = var_cp;
                        var_cp = tmp_assign_source_201;
                        Py_INCREF( var_cp );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_18__element_1 );
                tmp_tuple_unpack_18__element_1 = NULL;

                {
                    PyObject *tmp_assign_source_202;
                    CHECK_OBJECT( tmp_tuple_unpack_18__element_2 );
                    tmp_assign_source_202 = tmp_tuple_unpack_18__element_2;
                    {
                        PyObject *old = var_up;
                        var_up = tmp_assign_source_202;
                        Py_INCREF( var_up );
                        Py_XDECREF( old );
                    }

                }
                Py_XDECREF( tmp_tuple_unpack_18__element_2 );
                tmp_tuple_unpack_18__element_2 = NULL;

                {
                    PyObject *tmp_assign_source_203;
                    PyObject *tmp_called_name_49;
                    PyObject *tmp_args_element_name_99;
                    PyObject *tmp_args_element_name_100;
                    CHECK_OBJECT( var_dot );
                    tmp_called_name_49 = var_dot;
                    CHECK_OBJECT( var_cp );
                    tmp_args_element_name_99 = var_cp;
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_100 = var_c;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 472;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_99, tmp_args_element_name_100 };
                        tmp_assign_source_203 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_49, call_args );
                    }

                    if ( tmp_assign_source_203 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 472;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    {
                        PyObject *old = var_alpha;
                        assert( old != NULL );
                        var_alpha = tmp_assign_source_203;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_204;
                    PyObject *tmp_called_name_50;
                    PyObject *tmp_args_element_name_101;
                    PyObject *tmp_args_element_name_102;
                    PyObject *tmp_args_element_name_103;
                    PyObject *tmp_subscribed_name_36;
                    PyObject *tmp_source_name_24;
                    PyObject *tmp_subscript_name_36;
                    PyObject *tmp_args_element_name_104;
                    PyObject *tmp_operand_name_9;
                    CHECK_OBJECT( var_axpy );
                    tmp_called_name_50 = var_axpy;
                    CHECK_OBJECT( var_cp );
                    tmp_args_element_name_101 = var_cp;
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_102 = var_c;
                    CHECK_OBJECT( var_c );
                    tmp_source_name_24 = var_c;
                    tmp_subscribed_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_shape );
                    if ( tmp_subscribed_name_36 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 473;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    tmp_subscript_name_36 = const_int_0;
                    tmp_args_element_name_103 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_36, tmp_subscript_name_36, 0 );
                    Py_DECREF( tmp_subscribed_name_36 );
                    if ( tmp_args_element_name_103 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 473;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    CHECK_OBJECT( var_alpha );
                    tmp_operand_name_9 = var_alpha;
                    tmp_args_element_name_104 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_9 );
                    if ( tmp_args_element_name_104 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_103 );

                        exception_lineno = 473;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 473;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_101, tmp_args_element_name_102, tmp_args_element_name_103, tmp_args_element_name_104 };
                        tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_50, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_103 );
                    Py_DECREF( tmp_args_element_name_104 );
                    if ( tmp_assign_source_204 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 473;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    {
                        PyObject *old = var_c;
                        assert( old != NULL );
                        var_c = tmp_assign_source_204;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_205;
                    PyObject *tmp_called_name_51;
                    PyObject *tmp_args_element_name_105;
                    PyObject *tmp_args_element_name_106;
                    PyObject *tmp_args_element_name_107;
                    PyObject *tmp_subscribed_name_37;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_subscript_name_37;
                    PyObject *tmp_args_element_name_108;
                    PyObject *tmp_operand_name_10;
                    CHECK_OBJECT( var_axpy );
                    tmp_called_name_51 = var_axpy;
                    CHECK_OBJECT( var_up );
                    tmp_args_element_name_105 = var_up;
                    CHECK_OBJECT( var_u );
                    tmp_args_element_name_106 = var_u;
                    CHECK_OBJECT( var_u );
                    tmp_source_name_25 = var_u;
                    tmp_subscribed_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_shape );
                    if ( tmp_subscribed_name_37 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 474;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    tmp_subscript_name_37 = const_int_0;
                    tmp_args_element_name_107 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_37, tmp_subscript_name_37, 0 );
                    Py_DECREF( tmp_subscribed_name_37 );
                    if ( tmp_args_element_name_107 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 474;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    CHECK_OBJECT( var_alpha );
                    tmp_operand_name_10 = var_alpha;
                    tmp_args_element_name_108 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_10 );
                    if ( tmp_args_element_name_108 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_args_element_name_107 );

                        exception_lineno = 474;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 474;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_105, tmp_args_element_name_106, tmp_args_element_name_107, tmp_args_element_name_108 };
                        tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_51, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_107 );
                    Py_DECREF( tmp_args_element_name_108 );
                    if ( tmp_assign_source_205 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 474;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_57;
                    }
                    {
                        PyObject *old = var_u;
                        assert( old != NULL );
                        var_u = tmp_assign_source_205;
                        Py_DECREF( old );
                    }

                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 471;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_57;
                }
                goto loop_start_14;
                loop_end_14:;
                goto try_end_50;
                // Exception handler code:
                try_except_handler_57:;
                exception_keeper_type_56 = exception_type;
                exception_keeper_value_56 = exception_value;
                exception_keeper_tb_56 = exception_tb;
                exception_keeper_lineno_56 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_for_loop_10__iter_value );
                tmp_for_loop_10__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
                Py_DECREF( tmp_for_loop_10__for_iterator );
                tmp_for_loop_10__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_56;
                exception_value = exception_keeper_value_56;
                exception_tb = exception_keeper_tb_56;
                exception_lineno = exception_keeper_lineno_56;

                goto try_except_handler_47;
                // End of try:
                try_end_50:;
                Py_XDECREF( tmp_for_loop_10__iter_value );
                tmp_for_loop_10__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_10__for_iterator );
                Py_DECREF( tmp_for_loop_10__for_iterator );
                tmp_for_loop_10__for_iterator = NULL;

                {
                    PyObject *tmp_assign_source_206;
                    PyObject *tmp_called_name_52;
                    PyObject *tmp_args_element_name_109;
                    CHECK_OBJECT( var_nrm2 );
                    tmp_called_name_52 = var_nrm2;
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_109 = var_c;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 475;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_109 };
                        tmp_assign_source_206 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
                    }

                    if ( tmp_assign_source_206 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 475;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = var_alpha;
                        assert( old != NULL );
                        var_alpha = tmp_assign_source_206;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_207;
                    PyObject *tmp_called_name_53;
                    PyObject *tmp_args_element_name_110;
                    PyObject *tmp_left_name_20;
                    PyObject *tmp_right_name_20;
                    PyObject *tmp_args_element_name_111;
                    CHECK_OBJECT( var_scal );
                    tmp_called_name_53 = var_scal;
                    tmp_left_name_20 = const_float_1_0;
                    CHECK_OBJECT( var_alpha );
                    tmp_right_name_20 = var_alpha;
                    tmp_args_element_name_110 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
                    if ( tmp_args_element_name_110 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 476;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    CHECK_OBJECT( var_c );
                    tmp_args_element_name_111 = var_c;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 476;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_110, tmp_args_element_name_111 };
                        tmp_assign_source_207 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_53, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_110 );
                    if ( tmp_assign_source_207 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 476;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = var_c;
                        assert( old != NULL );
                        var_c = tmp_assign_source_207;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_assign_source_208;
                    PyObject *tmp_called_name_54;
                    PyObject *tmp_args_element_name_112;
                    PyObject *tmp_left_name_21;
                    PyObject *tmp_right_name_21;
                    PyObject *tmp_args_element_name_113;
                    CHECK_OBJECT( var_scal );
                    tmp_called_name_54 = var_scal;
                    tmp_left_name_21 = const_float_1_0;
                    CHECK_OBJECT( var_alpha );
                    tmp_right_name_21 = var_alpha;
                    tmp_args_element_name_112 = BINARY_OPERATION_TRUEDIV_FLOAT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
                    if ( tmp_args_element_name_112 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 477;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    CHECK_OBJECT( var_u );
                    tmp_args_element_name_113 = var_u;
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 477;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_112, tmp_args_element_name_113 };
                        tmp_assign_source_208 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_54, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_112 );
                    if ( tmp_assign_source_208 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 477;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    {
                        PyObject *old = var_u;
                        assert( old != NULL );
                        var_u = tmp_assign_source_208;
                        Py_DECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_instance_9;
                    PyObject *tmp_call_result_6;
                    PyObject *tmp_args_element_name_114;
                    PyObject *tmp_tuple_element_14;
                    CHECK_OBJECT( var_new_CU );
                    tmp_called_instance_9 = var_new_CU;
                    CHECK_OBJECT( var_c );
                    tmp_tuple_element_14 = var_c;
                    tmp_args_element_name_114 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_14 );
                    PyTuple_SET_ITEM( tmp_args_element_name_114, 0, tmp_tuple_element_14 );
                    CHECK_OBJECT( var_u );
                    tmp_tuple_element_14 = var_u;
                    Py_INCREF( tmp_tuple_element_14 );
                    PyTuple_SET_ITEM( tmp_args_element_name_114, 1, tmp_tuple_element_14 );
                    frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 479;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_114 };
                        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_append, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_114 );
                    if ( tmp_call_result_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 479;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_47;
                    }
                    Py_DECREF( tmp_call_result_6 );
                }
                if ( CONSIDER_THREADING() == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 459;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_47;
                }
                goto loop_start_12;
                loop_end_12:;
                goto try_end_51;
                // Exception handler code:
                try_except_handler_47:;
                exception_keeper_type_57 = exception_type;
                exception_keeper_value_57 = exception_value;
                exception_keeper_tb_57 = exception_tb;
                exception_keeper_lineno_57 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF( tmp_for_loop_8__iter_value );
                tmp_for_loop_8__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                Py_DECREF( tmp_for_loop_8__for_iterator );
                tmp_for_loop_8__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_57;
                exception_value = exception_keeper_value_57;
                exception_tb = exception_keeper_tb_57;
                exception_lineno = exception_keeper_lineno_57;

                goto try_except_handler_23;
                // End of try:
                try_end_51:;
                Py_XDECREF( tmp_for_loop_8__iter_value );
                tmp_for_loop_8__iter_value = NULL;

                CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
                Py_DECREF( tmp_for_loop_8__for_iterator );
                tmp_for_loop_8__for_iterator = NULL;

                {
                    PyObject *tmp_ass_subvalue_4;
                    PyObject *tmp_ass_subscribed_4;
                    PyObject *tmp_ass_subscript_4;
                    CHECK_OBJECT( var_new_CU );
                    tmp_ass_subvalue_4 = var_new_CU;
                    CHECK_OBJECT( par_CU );
                    tmp_ass_subscribed_4 = par_CU;
                    tmp_ass_subscript_4 = const_slice_none_none_none;
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 480;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_23;
                    }
                }
                branch_no_21:;
            }
            branch_no_20:;
        }
        branch_end_18:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_115;
        PyObject *tmp_tuple_element_15;
        CHECK_OBJECT( par_CU );
        tmp_called_instance_10 = par_CU;
        CHECK_OBJECT( var_cx );
        tmp_tuple_element_15 = var_cx;
        tmp_args_element_name_115 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_args_element_name_115, 0, tmp_tuple_element_15 );
        CHECK_OBJECT( var_ux );
        tmp_tuple_element_15 = var_ux;
        Py_INCREF( tmp_tuple_element_15 );
        PyTuple_SET_ITEM( tmp_args_element_name_115, 1, tmp_tuple_element_15 );
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = { tmp_args_element_name_115 };
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_append, call_args );
        }

        Py_DECREF( tmp_args_element_name_115 );
        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_52:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    {
        PyObject *tmp_called_name_55;
        PyObject *tmp_source_name_26;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_116;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT( par_CU );
        tmp_source_name_26 = par_CU;
        tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_append );
        if ( tmp_called_name_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = Py_None;
        tmp_args_element_name_116 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_args_element_name_116, 0, tmp_tuple_element_16 );
        if ( var_x == NULL )
        {
            Py_DECREF( tmp_called_name_55 );
            Py_DECREF( tmp_args_element_name_116 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = var_x;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 486;
        tmp_tuple_element_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_copy );
        if ( tmp_tuple_element_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_55 );
            Py_DECREF( tmp_args_element_name_116 );

            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_116, 1, tmp_tuple_element_16 );
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = { tmp_args_element_name_116 };
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
        }

        Py_DECREF( tmp_called_name_55 );
        Py_DECREF( tmp_args_element_name_116 );
        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_6;
        CHECK_OBJECT( par_discard_C );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_discard_C );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            // Tried code:
            {
                PyObject *tmp_assign_source_209;
                PyObject *tmp_iter_arg_33;
                CHECK_OBJECT( par_CU );
                tmp_iter_arg_33 = par_CU;
                tmp_assign_source_209 = MAKE_ITERATOR( tmp_iter_arg_33 );
                if ( tmp_assign_source_209 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_60;
                }
                assert( tmp_listcomp_3__$0 == NULL );
                tmp_listcomp_3__$0 = tmp_assign_source_209;
            }
            {
                PyObject *tmp_assign_source_210;
                tmp_assign_source_210 = PyList_New( 0 );
                assert( tmp_listcomp_3__contraction == NULL );
                tmp_listcomp_3__contraction = tmp_assign_source_210;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_f41cdfa8f1ec15ab7249a132c2b36006_4, codeobj_f41cdfa8f1ec15ab7249a132c2b36006, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *)+sizeof(void *) );
            frame_f41cdfa8f1ec15ab7249a132c2b36006_4 = cache_frame_f41cdfa8f1ec15ab7249a132c2b36006_4;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_15:;
            {
                PyObject *tmp_next_source_13;
                PyObject *tmp_assign_source_211;
                CHECK_OBJECT( tmp_listcomp_3__$0 );
                tmp_next_source_13 = tmp_listcomp_3__$0;
                tmp_assign_source_211 = ITERATOR_NEXT( tmp_next_source_13 );
                if ( tmp_assign_source_211 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_15;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oo";
                        exception_lineno = 488;
                        goto try_except_handler_61;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_3__iter_value_0;
                    tmp_listcomp_3__iter_value_0 = tmp_assign_source_211;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_212;
                PyObject *tmp_iter_arg_34;
                CHECK_OBJECT( tmp_listcomp_3__iter_value_0 );
                tmp_iter_arg_34 = tmp_listcomp_3__iter_value_0;
                tmp_assign_source_212 = MAKE_ITERATOR( tmp_iter_arg_34 );
                if ( tmp_assign_source_212 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_2 = "oo";
                    goto try_except_handler_62;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_3__source_iter;
                    tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_212;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_213;
                PyObject *tmp_unpack_54;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_3__source_iter );
                tmp_unpack_54 = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_assign_source_213 = UNPACK_NEXT( tmp_unpack_54, 0, 2 );
                if ( tmp_assign_source_213 == NULL )
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
                    exception_lineno = 488;
                    goto try_except_handler_63;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_3__element_1;
                    tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_213;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_214;
                PyObject *tmp_unpack_55;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_3__source_iter );
                tmp_unpack_55 = tmp_listcomp$tuple_unpack_3__source_iter;
                tmp_assign_source_214 = UNPACK_NEXT( tmp_unpack_55, 1, 2 );
                if ( tmp_assign_source_214 == NULL )
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
                    exception_lineno = 488;
                    goto try_except_handler_63;
                }
                {
                    PyObject *old = tmp_listcomp$tuple_unpack_3__element_2;
                    tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_214;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_20;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_3__source_iter );
                tmp_iterator_name_20 = tmp_listcomp$tuple_unpack_3__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT( tmp_iterator_name_20 ); assert( HAS_ITERNEXT( tmp_iterator_name_20 ) );

                tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_20 )->tp_iternext)( tmp_iterator_name_20 );

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
                            exception_lineno = 488;
                            goto try_except_handler_63;
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
                    exception_lineno = 488;
                    goto try_except_handler_63;
                }
            }
            goto try_end_53;
            // Exception handler code:
            try_except_handler_63:;
            exception_keeper_type_59 = exception_type;
            exception_keeper_value_59 = exception_value;
            exception_keeper_tb_59 = exception_tb;
            exception_keeper_lineno_59 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_3__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_3__source_iter );
            tmp_listcomp$tuple_unpack_3__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_59;
            exception_value = exception_keeper_value_59;
            exception_tb = exception_keeper_tb_59;
            exception_lineno = exception_keeper_lineno_59;

            goto try_except_handler_62;
            // End of try:
            try_end_53:;
            goto try_end_54;
            // Exception handler code:
            try_except_handler_62:;
            exception_keeper_type_60 = exception_type;
            exception_keeper_value_60 = exception_value;
            exception_keeper_tb_60 = exception_tb;
            exception_keeper_lineno_60 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_listcomp$tuple_unpack_3__element_1 );
            tmp_listcomp$tuple_unpack_3__element_1 = NULL;

            Py_XDECREF( tmp_listcomp$tuple_unpack_3__element_2 );
            tmp_listcomp$tuple_unpack_3__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_60;
            exception_value = exception_keeper_value_60;
            exception_tb = exception_keeper_tb_60;
            exception_lineno = exception_keeper_lineno_60;

            goto try_except_handler_61;
            // End of try:
            try_end_54:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp$tuple_unpack_3__source_iter );
            Py_DECREF( tmp_listcomp$tuple_unpack_3__source_iter );
            tmp_listcomp$tuple_unpack_3__source_iter = NULL;

            {
                PyObject *tmp_assign_source_215;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_3__element_1 );
                tmp_assign_source_215 = tmp_listcomp$tuple_unpack_3__element_1;
                {
                    PyObject *old = outline_2_var_cz;
                    outline_2_var_cz = tmp_assign_source_215;
                    Py_INCREF( outline_2_var_cz );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_3__element_1 );
            tmp_listcomp$tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_216;
                CHECK_OBJECT( tmp_listcomp$tuple_unpack_3__element_2 );
                tmp_assign_source_216 = tmp_listcomp$tuple_unpack_3__element_2;
                {
                    PyObject *old = outline_2_var_uz;
                    outline_2_var_uz = tmp_assign_source_216;
                    Py_INCREF( outline_2_var_uz );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_listcomp$tuple_unpack_3__element_2 );
            tmp_listcomp$tuple_unpack_3__element_2 = NULL;

            {
                PyObject *tmp_append_list_3;
                PyObject *tmp_append_value_3;
                PyObject *tmp_tuple_element_17;
                CHECK_OBJECT( tmp_listcomp_3__contraction );
                tmp_append_list_3 = tmp_listcomp_3__contraction;
                tmp_tuple_element_17 = Py_None;
                tmp_append_value_3 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_17 );
                PyTuple_SET_ITEM( tmp_append_value_3, 0, tmp_tuple_element_17 );
                CHECK_OBJECT( outline_2_var_uz );
                tmp_tuple_element_17 = outline_2_var_uz;
                Py_INCREF( tmp_tuple_element_17 );
                PyTuple_SET_ITEM( tmp_append_value_3, 1, tmp_tuple_element_17 );
                assert( PyList_Check( tmp_append_list_3 ) );
                tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
                Py_DECREF( tmp_append_value_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 488;
                    type_description_2 = "oo";
                    goto try_except_handler_61;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_2 = "oo";
                goto try_except_handler_61;
            }
            goto loop_start_15;
            loop_end_15:;
            CHECK_OBJECT( tmp_listcomp_3__contraction );
            tmp_ass_subvalue_5 = tmp_listcomp_3__contraction;
            Py_INCREF( tmp_ass_subvalue_5 );
            goto try_return_handler_61;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            // Return handler code:
            try_return_handler_61:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
            Py_DECREF( tmp_listcomp_3__$0 );
            tmp_listcomp_3__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
            Py_DECREF( tmp_listcomp_3__contraction );
            tmp_listcomp_3__contraction = NULL;

            Py_XDECREF( tmp_listcomp_3__iter_value_0 );
            tmp_listcomp_3__iter_value_0 = NULL;

            goto frame_return_exit_4;
            // Exception handler code:
            try_except_handler_61:;
            exception_keeper_type_61 = exception_type;
            exception_keeper_value_61 = exception_value;
            exception_keeper_tb_61 = exception_tb;
            exception_keeper_lineno_61 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
            Py_DECREF( tmp_listcomp_3__$0 );
            tmp_listcomp_3__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
            Py_DECREF( tmp_listcomp_3__contraction );
            tmp_listcomp_3__contraction = NULL;

            Py_XDECREF( tmp_listcomp_3__iter_value_0 );
            tmp_listcomp_3__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_61;
            exception_value = exception_keeper_value_61;
            exception_tb = exception_keeper_tb_61;
            exception_lineno = exception_keeper_lineno_61;

            goto frame_exception_exit_4;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_3;

            frame_return_exit_4:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_60;

            frame_exception_exit_4:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_f41cdfa8f1ec15ab7249a132c2b36006_4, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_f41cdfa8f1ec15ab7249a132c2b36006_4->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_f41cdfa8f1ec15ab7249a132c2b36006_4, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_f41cdfa8f1ec15ab7249a132c2b36006_4,
                type_description_2,
                outline_2_var_cz,
                outline_2_var_uz
            );


            // Release cached frame.
            if ( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 == cache_frame_f41cdfa8f1ec15ab7249a132c2b36006_4 )
            {
                Py_DECREF( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );
            }
            cache_frame_f41cdfa8f1ec15ab7249a132c2b36006_4 = NULL;

            assertFrameObject( frame_f41cdfa8f1ec15ab7249a132c2b36006_4 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;

            frame_no_exception_3:;
            goto skip_nested_handling_3;
            nested_frame_exit_3:;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
            skip_nested_handling_3:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            // Return handler code:
            try_return_handler_60:;
            Py_XDECREF( outline_2_var_cz );
            outline_2_var_cz = NULL;

            Py_XDECREF( outline_2_var_uz );
            outline_2_var_uz = NULL;

            goto outline_result_3;
            // Exception handler code:
            try_except_handler_60:;
            exception_keeper_type_62 = exception_type;
            exception_keeper_value_62 = exception_value;
            exception_keeper_tb_62 = exception_tb;
            exception_keeper_lineno_62 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( outline_2_var_cz );
            outline_2_var_cz = NULL;

            Py_XDECREF( outline_2_var_uz );
            outline_2_var_uz = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_62;
            exception_value = exception_keeper_value_62;
            exception_tb = exception_keeper_tb_62;
            exception_lineno = exception_keeper_lineno_62;

            goto outline_exception_3;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
            return NULL;
            outline_exception_3:;
            exception_lineno = 488;
            goto frame_exception_exit_1;
            outline_result_3:;
            CHECK_OBJECT( par_CU );
            tmp_ass_subscribed_5 = par_CU;
            tmp_ass_subscript_5 = const_slice_none_none_none;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_22:;
    }
    {
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_called_name_56;
        PyObject *tmp_args_element_name_117;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        CHECK_OBJECT( var_postprocess );
        tmp_called_name_56 = var_postprocess;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_117 = var_x;
        frame_d7bf84834c07ea9b900f17624a47709c->m_frame.f_lineno = 490;
        {
            PyObject *call_args[] = { tmp_args_element_name_117 };
            tmp_tuple_element_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
        }

        if ( tmp_tuple_element_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_18 );
        if ( var_j_outer == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "j_outer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_22 = var_j_outer;
        tmp_right_name_22 = const_int_pos_1;
        tmp_tuple_element_18 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_tuple_element_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_18 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7bf84834c07ea9b900f17624a47709c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7bf84834c07ea9b900f17624a47709c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7bf84834c07ea9b900f17624a47709c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7bf84834c07ea9b900f17624a47709c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7bf84834c07ea9b900f17624a47709c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7bf84834c07ea9b900f17624a47709c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d7bf84834c07ea9b900f17624a47709c,
        type_description_1,
        par_A,
        par_b,
        par_x0,
        par_tol,
        par_maxiter,
        par_M,
        par_callback,
        par_m,
        par_k,
        par_CU,
        par_discard_C,
        par_truncate,
        par_atol,
        var_x,
        var_postprocess,
        var_matvec,
        var_psolve,
        var_axpy,
        var_dot,
        var_scal,
        var_r,
        var_nrm2,
        var_b_norm,
        var_C,
        var_us,
        var_j,
        var_c,
        var_u,
        var_Q,
        var_R,
        var_P,
        var_cs,
        var_new_us,
        var_i,
        var_yc,
        var_j_outer,
        var_beta,
        var_beta_tol,
        var_ml,
        var_B,
        var_vs,
        var_zs,
        var_y,
        var_pres,
        var_ux,
        var_z,
        var_by,
        var_cu,
        var_byc,
        var_hy,
        var_cx,
        var_v,
        var_hyc,
        var_alpha,
        var_gamma,
        var_D,
        var_W,
        var_sigma,
        var_V,
        var_new_CU,
        var_w,
        var_cup,
        var_wp,
        var_cp,
        var_up
    );


    // Release cached frame.
    if ( frame_d7bf84834c07ea9b900f17624a47709c == cache_frame_d7bf84834c07ea9b900f17624a47709c )
    {
        Py_DECREF( frame_d7bf84834c07ea9b900f17624a47709c );
    }
    cache_frame_d7bf84834c07ea9b900f17624a47709c = NULL;

    assertFrameObject( frame_d7bf84834c07ea9b900f17624a47709c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_4:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_CU );
    Py_DECREF( par_CU );
    par_CU = NULL;

    CHECK_OBJECT( (PyObject *)par_discard_C );
    Py_DECREF( par_discard_C );
    par_discard_C = NULL;

    CHECK_OBJECT( (PyObject *)par_truncate );
    Py_DECREF( par_truncate );
    par_truncate = NULL;

    CHECK_OBJECT( (PyObject *)par_atol );
    Py_DECREF( par_atol );
    par_atol = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_postprocess );
    Py_DECREF( var_postprocess );
    var_postprocess = NULL;

    CHECK_OBJECT( (PyObject *)var_matvec );
    Py_DECREF( var_matvec );
    var_matvec = NULL;

    CHECK_OBJECT( (PyObject *)var_psolve );
    Py_DECREF( var_psolve );
    var_psolve = NULL;

    CHECK_OBJECT( (PyObject *)var_axpy );
    Py_DECREF( var_axpy );
    var_axpy = NULL;

    CHECK_OBJECT( (PyObject *)var_dot );
    Py_DECREF( var_dot );
    var_dot = NULL;

    CHECK_OBJECT( (PyObject *)var_scal );
    Py_DECREF( var_scal );
    var_scal = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_nrm2 );
    Py_DECREF( var_nrm2 );
    var_nrm2 = NULL;

    CHECK_OBJECT( (PyObject *)var_b_norm );
    Py_DECREF( var_b_norm );
    var_b_norm = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_us );
    var_us = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_P );
    var_P = NULL;

    Py_XDECREF( var_cs );
    var_cs = NULL;

    Py_XDECREF( var_new_us );
    var_new_us = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_yc );
    var_yc = NULL;

    Py_XDECREF( var_j_outer );
    var_j_outer = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

    Py_XDECREF( var_beta_tol );
    var_beta_tol = NULL;

    Py_XDECREF( var_ml );
    var_ml = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_vs );
    var_vs = NULL;

    Py_XDECREF( var_zs );
    var_zs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_pres );
    var_pres = NULL;

    Py_XDECREF( var_ux );
    var_ux = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_by );
    var_by = NULL;

    Py_XDECREF( var_cu );
    var_cu = NULL;

    Py_XDECREF( var_byc );
    var_byc = NULL;

    Py_XDECREF( var_hy );
    var_hy = NULL;

    Py_XDECREF( var_cx );
    var_cx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_hyc );
    var_hyc = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_gamma );
    var_gamma = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_sigma );
    var_sigma = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_new_CU );
    var_new_CU = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_cup );
    var_cup = NULL;

    Py_XDECREF( var_wp );
    var_wp = NULL;

    Py_XDECREF( var_cp );
    var_cp = NULL;

    Py_XDECREF( var_up );
    var_up = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    Py_XDECREF( par_CU );
    par_CU = NULL;

    CHECK_OBJECT( (PyObject *)par_discard_C );
    Py_DECREF( par_discard_C );
    par_discard_C = NULL;

    CHECK_OBJECT( (PyObject *)par_truncate );
    Py_DECREF( par_truncate );
    par_truncate = NULL;

    Py_XDECREF( par_atol );
    par_atol = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_postprocess );
    var_postprocess = NULL;

    Py_XDECREF( var_matvec );
    var_matvec = NULL;

    Py_XDECREF( var_psolve );
    var_psolve = NULL;

    Py_XDECREF( var_axpy );
    var_axpy = NULL;

    Py_XDECREF( var_dot );
    var_dot = NULL;

    Py_XDECREF( var_scal );
    var_scal = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_nrm2 );
    var_nrm2 = NULL;

    Py_XDECREF( var_b_norm );
    var_b_norm = NULL;

    Py_XDECREF( var_C );
    var_C = NULL;

    Py_XDECREF( var_us );
    var_us = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_Q );
    var_Q = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_P );
    var_P = NULL;

    Py_XDECREF( var_cs );
    var_cs = NULL;

    Py_XDECREF( var_new_us );
    var_new_us = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_yc );
    var_yc = NULL;

    Py_XDECREF( var_j_outer );
    var_j_outer = NULL;

    Py_XDECREF( var_beta );
    var_beta = NULL;

    Py_XDECREF( var_beta_tol );
    var_beta_tol = NULL;

    Py_XDECREF( var_ml );
    var_ml = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_vs );
    var_vs = NULL;

    Py_XDECREF( var_zs );
    var_zs = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_pres );
    var_pres = NULL;

    Py_XDECREF( var_ux );
    var_ux = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_by );
    var_by = NULL;

    Py_XDECREF( var_cu );
    var_cu = NULL;

    Py_XDECREF( var_byc );
    var_byc = NULL;

    Py_XDECREF( var_hy );
    var_hy = NULL;

    Py_XDECREF( var_cx );
    var_cx = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_hyc );
    var_hyc = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_gamma );
    var_gamma = NULL;

    Py_XDECREF( var_D );
    var_D = NULL;

    Py_XDECREF( var_W );
    var_W = NULL;

    Py_XDECREF( var_sigma );
    var_sigma = NULL;

    Py_XDECREF( var_V );
    var_V = NULL;

    Py_XDECREF( var_new_CU );
    var_new_CU = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_cup );
    var_cup = NULL;

    Py_XDECREF( var_wp );
    var_wp = NULL;

    Py_XDECREF( var_cp );
    var_cp = NULL;

    Py_XDECREF( var_up );
    var_up = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk );
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


static PyObject *impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cu = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6e6aee830a23e3d75c41bd74d4f96524;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e6aee830a23e3d75c41bd74d4f96524 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e6aee830a23e3d75c41bd74d4f96524, codeobj_6e6aee830a23e3d75c41bd74d4f96524, module_scipy$sparse$linalg$isolve$_gcrotmk, sizeof(void *) );
    frame_6e6aee830a23e3d75c41bd74d4f96524 = cache_frame_6e6aee830a23e3d75c41bd74d4f96524;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e6aee830a23e3d75c41bd74d4f96524 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e6aee830a23e3d75c41bd74d4f96524 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_cu );
        tmp_subscribed_name_1 = par_cu;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_1 );
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e6aee830a23e3d75c41bd74d4f96524 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e6aee830a23e3d75c41bd74d4f96524 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e6aee830a23e3d75c41bd74d4f96524 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e6aee830a23e3d75c41bd74d4f96524, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e6aee830a23e3d75c41bd74d4f96524->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e6aee830a23e3d75c41bd74d4f96524, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e6aee830a23e3d75c41bd74d4f96524,
        type_description_1,
        par_cu
    );


    // Release cached frame.
    if ( frame_6e6aee830a23e3d75c41bd74d4f96524 == cache_frame_6e6aee830a23e3d75c41bd74d4f96524 )
    {
        Py_DECREF( frame_6e6aee830a23e3d75c41bd74d4f96524 );
    }
    cache_frame_6e6aee830a23e3d75c41bd74d4f96524 = NULL;

    assertFrameObject( frame_6e6aee830a23e3d75c41bd74d4f96524 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cu );
    Py_DECREF( par_cu );
    par_cu = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cu );
    Py_DECREF( par_cu );
    par_cu = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda );
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



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres,
        const_str_plain__fgmres,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_805adbb5fa439f95e9c7d34b8132aabd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        const_str_digest_97dad59c3ae785a213f2a112c9c99853,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_32caa017647387945cd0c305269bb6e1,
#endif
        codeobj_2ea1188cd8f6d4ae2435586b1c3f673a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_32caa017647387945cd0c305269bb6e1,
#endif
        codeobj_f9151d8374622c9007a030e2e15ae773,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk,
        const_str_plain_gcrotmk,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d7bf84834c07ea9b900f17624a47709c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        const_str_digest_afe348c0328f0ea5c161d66688cc2aa7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_38f60eb8f98bd670aace1742747e287b,
#endif
        codeobj_6e6aee830a23e3d75c41bd74d4f96524,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$isolve$_gcrotmk,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$isolve$_gcrotmk =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.isolve._gcrotmk",
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

MOD_INIT_DECL( scipy$sparse$linalg$isolve$_gcrotmk )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$_gcrotmk );
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
    puts("scipy.sparse.linalg.isolve._gcrotmk: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.isolve._gcrotmk: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.sparse.linalg.isolve._gcrotmk: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$sparse$linalg$isolve$_gcrotmk" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$isolve$_gcrotmk = Py_InitModule4(
        "scipy.sparse.linalg.isolve._gcrotmk",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$sparse$linalg$isolve$_gcrotmk = PyModule_Create( &mdef_scipy$sparse$linalg$isolve$_gcrotmk );
#endif

    moduledict_scipy$sparse$linalg$isolve$_gcrotmk = MODULE_DICT( module_scipy$sparse$linalg$isolve$_gcrotmk );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$isolve$_gcrotmk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$sparse$linalg$isolve$_gcrotmk );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5eced94c08f4888182b58c846081cc4d, module_scipy$sparse$linalg$isolve$_gcrotmk );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_16328df4102bdb2a24162c11dbf32a21;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_16328df4102bdb2a24162c11dbf32a21 = MAKE_MODULE_FRAME( codeobj_16328df4102bdb2a24162c11dbf32a21, module_scipy$sparse$linalg$isolve$_gcrotmk );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_16328df4102bdb2a24162c11dbf32a21 );
    assert( Py_REFCNT( frame_16328df4102bdb2a24162c11dbf32a21 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 4;
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_warnings;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_3 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_4 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_9eeb2ab1dfd0281192cbfebe9402e557_tuple;
        tmp_level_name_5 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_get_blas_funcs );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_get_blas_funcs, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_qr );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_solve );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_svd );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_qr_insert );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_qr_insert, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_lstsq );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_18 );
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
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_1b3c3d9968e84810f08ebb3b6ff17a13;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$sparse$linalg$isolve$_gcrotmk;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_make_system_tuple;
        tmp_level_name_6 = const_int_0;
        frame_16328df4102bdb2a24162c11dbf32a21->m_frame.f_lineno = 11;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_make_system );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_make_system, tmp_assign_source_19 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16328df4102bdb2a24162c11dbf32a21 );
#endif
    popFrameStack();

    assertFrameObject( frame_16328df4102bdb2a24162c11dbf32a21 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16328df4102bdb2a24162c11dbf32a21 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16328df4102bdb2a24162c11dbf32a21, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16328df4102bdb2a24162c11dbf32a21->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16328df4102bdb2a24162c11dbf32a21, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = LIST_COPY( const_list_str_plain_gcrotmk_list );
        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_tuple_empty_tuple_empty_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_21 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_1__fgmres( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain__fgmres, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_e59ebd71de09e39b288d8ab09eb7c259_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_22 = MAKE_FUNCTION_scipy$sparse$linalg$isolve$_gcrotmk$$$function_2_gcrotmk( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain_gcrotmk, tmp_assign_source_22 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$_gcrotmk, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$_gcrotmk );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
