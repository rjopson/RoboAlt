/* Generated code for Python module 'scipy.optimize._remove_redundancy'
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

/* The "_module_scipy$optimize$_remove_redundancy" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_remove_redundancy;
PyDictObject *moduledict_scipy$optimize$_remove_redundancy;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_638d3471ba85cc3f70980d4d6e225f39;
static PyObject *const_tuple_97ccbac315151a40f68f0b013d474111_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_db0fd0a7f4d94630403d92557ac42ddf;
static PyObject *const_str_plain__get_densest;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_plu;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_a6732aad0edd29935ba3b157b8304482;
extern PyObject *const_str_plain_tocsc;
extern PyObject *const_str_plain_m;
extern PyObject *const_float_1eminus_13;
extern PyObject *const_str_plain__remove_redundancy;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_4c87017943f78f23620fca3653a50cc3;
extern PyObject *const_str_digest_b3117338a7d7f2c2bce08edeabb5b442;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_10073b7f4be39da1697f56d3904da078;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain__remove_redundancy_dense;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain__remove_redundancy_sparse;
static PyObject *const_str_digest_271405c9355dbbb5f5f2cc7c670d818c;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_status;
static PyObject *const_str_digest_57ca7d081d85a156c6c788af0d7b001b;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_trans;
extern PyObject *const_str_plain_solve_triangular;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_3db209a3dc99145bd1506a885c70475a;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_flatten;
static PyObject *const_str_plain_rowCounts;
static PyObject *const_dict_5da5ec012d1f4f047ad3c5e595142539;
static PyObject *const_tuple_7d65e1a418cdd6307c71dc712bdf6ac9_tuple;
extern PyObject *const_str_plain_lu_factor;
extern PyObject *const_str_plain_message;
extern PyObject *const_float_1eminus_08;
static PyObject *const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_LU;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_perm_r;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain__row_count;
extern PyObject *const_str_plain_lu_solve;
static PyObject *const_str_digest_9d760432111e0913d97a513be78a3ff4;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_argmax;
extern PyObject *const_str_plain_spsolve;
extern PyObject *const_str_digest_212f0654b5847c7caef6d817811e4ecf;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_a10906f10aeed7b831feaf9bfc0b6047;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_piv;
static PyObject *const_tuple_d96bfe9174f4d17640d5d43af1a9ce41_tuple;
static PyObject *const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_float_10000000_0;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_e40a3cfbaa7299bcc0d0edb7e237a1cd;
extern PyObject *const_str_plain_s_min;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_tuple_int_neg_1_int_pos_1_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_Vh;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_logical_not;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_allclose;
static PyObject *const_str_plain_bg_update_dense;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_i_remove;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_axis;
extern PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
static PyObject *const_str_plain_i_zero;
extern PyObject *const_tuple_str_plain_A_str_plain_tol_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_unit_diagonal;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_tuple_str_plain_svd_tuple;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_np;
static PyObject *const_dict_f6ad340c064834e660441a117bc3f700;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain__remove_zero_rows;
extern PyObject *const_str_plain_delete;
extern PyObject *const_str_empty;
static PyObject *const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple;
static PyObject *const_str_plain_eligibleRows;
extern PyObject *const_str_plain_U;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_638d3471ba85cc3f70980d4d6e225f39 = UNSTREAM_STRING_ASCII( &constant_bin[ 4992892 ], 1010, 0 );
    const_tuple_97ccbac315151a40f68f0b013d474111_tuple = PyTuple_New( 9 );
    const_str_plain_plu = UNSTREAM_STRING_ASCII( &constant_bin[ 1884 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 0, const_str_plain_plu ); Py_INCREF( const_str_plain_plu );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 1, const_str_plain_perm_r ); Py_INCREF( const_str_plain_perm_r );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 4, const_str_plain_LU ); Py_INCREF( const_str_plain_LU );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 5, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 6, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 7, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 8, const_str_plain_piv ); Py_INCREF( const_str_plain_piv );
    const_str_digest_db0fd0a7f4d94630403d92557ac42ddf = UNSTREAM_STRING_ASCII( &constant_bin[ 4993902 ], 986, 0 );
    const_str_plain__get_densest = UNSTREAM_STRING_ASCII( &constant_bin[ 4994888 ], 12, 1 );
    const_str_digest_a6732aad0edd29935ba3b157b8304482 = UNSTREAM_STRING_ASCII( &constant_bin[ 4994900 ], 1007, 0 );
    const_str_digest_4c87017943f78f23620fca3653a50cc3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4995907 ], 42, 0 );
    const_str_digest_10073b7f4be39da1697f56d3904da078 = UNSTREAM_STRING_ASCII( &constant_bin[ 4995949 ], 98, 0 );
    const_str_digest_271405c9355dbbb5f5f2cc7c670d818c = UNSTREAM_STRING_ASCII( &constant_bin[ 4996047 ], 110, 0 );
    const_str_digest_57ca7d081d85a156c6c788af0d7b001b = UNSTREAM_STRING_ASCII( &constant_bin[ 4996157 ], 230, 0 );
    const_str_digest_3db209a3dc99145bd1506a885c70475a = UNSTREAM_STRING_ASCII( &constant_bin[ 4996387 ], 789, 0 );
    const_str_plain_rowCounts = UNSTREAM_STRING_ASCII( &constant_bin[ 4997176 ], 9, 1 );
    const_dict_5da5ec012d1f4f047ad3c5e595142539 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5da5ec012d1f4f047ad3c5e595142539, const_str_plain_trans, const_int_pos_1 );
    assert( PyDict_Size( const_dict_5da5ec012d1f4f047ad3c5e595142539 ) == 1 );
    const_tuple_7d65e1a418cdd6307c71dc712bdf6ac9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4997185 ], 195 );
    const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 2, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    const_str_plain_i_zero = UNSTREAM_STRING_ASCII( &constant_bin[ 4997380 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 4, const_str_plain_i_zero ); Py_INCREF( const_str_plain_i_zero );
    const_str_plain__row_count = UNSTREAM_STRING_ASCII( &constant_bin[ 4997386 ], 10, 1 );
    const_str_digest_9d760432111e0913d97a513be78a3ff4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4997396 ], 398, 0 );
    const_str_digest_a10906f10aeed7b831feaf9bfc0b6047 = UNSTREAM_STRING_ASCII( &constant_bin[ 4997794 ], 442, 0 );
    const_tuple_d96bfe9174f4d17640d5d43af1a9ce41_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4998236 ], 130 );
    const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_plain_eligibleRows = UNSTREAM_STRING_ASCII( &constant_bin[ 4997992 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple, 1, const_str_plain_eligibleRows ); Py_INCREF( const_str_plain_eligibleRows );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple, 2, const_str_plain_rowCounts ); Py_INCREF( const_str_plain_rowCounts );
    const_str_digest_e40a3cfbaa7299bcc0d0edb7e237a1cd = UNSTREAM_STRING_ASCII( &constant_bin[ 4998366 ], 36, 0 );
    const_str_plain_Vh = UNSTREAM_STRING_ASCII( &constant_bin[ 4635626 ], 2, 1 );
    const_str_plain_bg_update_dense = UNSTREAM_STRING_ASCII( &constant_bin[ 4998402 ], 15, 1 );
    const_str_plain_i_remove = UNSTREAM_STRING_ASCII( &constant_bin[ 4998417 ], 8, 1 );
    const_dict_f6ad340c064834e660441a117bc3f700 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_f6ad340c064834e660441a117bc3f700, const_str_plain_lower, Py_True );
    PyDict_SetItem( const_dict_f6ad340c064834e660441a117bc3f700, const_str_plain_unit_diagonal, Py_True );
    assert( PyDict_Size( const_dict_f6ad340c064834e660441a117bc3f700 ) == 2 );
    const_str_plain__remove_zero_rows = UNSTREAM_STRING_ASCII( &constant_bin[ 4998425 ], 17, 1 );
    const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 2, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 3, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 4, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 6, const_str_plain_Vh ); Py_INCREF( const_str_plain_Vh );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 7, const_str_plain_eps ); Py_INCREF( const_str_plain_eps );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 8, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 9, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 10, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 11, const_str_plain_s_min ); Py_INCREF( const_str_plain_s_min );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 12, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 13, const_str_plain_eligibleRows ); Py_INCREF( const_str_plain_eligibleRows );
    PyTuple_SET_ITEM( const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 14, const_str_plain_i_remove ); Py_INCREF( const_str_plain_i_remove );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_remove_redundancy( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_03387d31a4119474adbb9d7f79941026;
static PyCodeObject *codeobj_3eed212459f999be2f5aced7c8957516;
static PyCodeObject *codeobj_efec3b0873c99eb9891a325d29853918;
static PyCodeObject *codeobj_4c073a08a0a1db8ad98c5c25c5c769dc;
static PyCodeObject *codeobj_d751c6f08e3dd853072a6c11e91aabe7;
static PyCodeObject *codeobj_71bc195a3546799b28086aba86defe39;
static PyCodeObject *codeobj_7e92d6e09c10b7158eb085220b8732c7;
static PyCodeObject *codeobj_fc17c14e41830a62bdb29ca9b61440c4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e40a3cfbaa7299bcc0d0edb7e237a1cd );
    codeobj_03387d31a4119474adbb9d7f79941026 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4c87017943f78f23620fca3653a50cc3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3eed212459f999be2f5aced7c8957516 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_densest, 34, const_tuple_str_plain_A_str_plain_eligibleRows_str_plain_rowCounts_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_efec3b0873c99eb9891a325d29853918 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_redundancy, 362, const_tuple_1a9b9f31485af75c073706c3ac5ab83f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c073a08a0a1db8ad98c5c25c5c769dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_redundancy_dense, 107, const_tuple_7d65e1a418cdd6307c71dc712bdf6ac9_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d751c6f08e3dd853072a6c11e91aabe7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_redundancy_sparse, 235, const_tuple_d96bfe9174f4d17640d5d43af1a9ce41_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71bc195a3546799b28086aba86defe39 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__remove_zero_rows, 57, const_tuple_bc76595242cd1acf849eca2ecae51b38_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e92d6e09c10b7158eb085220b8732c7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__row_count, 13, const_tuple_str_plain_A_str_plain_tol_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc17c14e41830a62bdb29ca9b61440c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bg_update_dense, 95, const_tuple_97ccbac315151a40f68f0b013d474111_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_1__row_count(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_2__get_densest(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy(  );


// The module function definitions.
static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_1__row_count( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7e92d6e09c10b7158eb085220b8732c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e92d6e09c10b7158eb085220b8732c7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7e92d6e09c10b7158eb085220b8732c7, codeobj_7e92d6e09c10b7158eb085220b8732c7, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *) );
    frame_7e92d6e09c10b7158eb085220b8732c7 = cache_frame_7e92d6e09c10b7158eb085220b8732c7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7e92d6e09c10b7158eb085220b8732c7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7e92d6e09c10b7158eb085220b8732c7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        frame_7e92d6e09c10b7158eb085220b8732c7->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_float_1eminus_13;
        tmp_source_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_7e92d6e09c10b7158eb085220b8732c7->m_frame.f_lineno = 31;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_7e92d6e09c10b7158eb085220b8732c7->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_7e92d6e09c10b7158eb085220b8732c7->m_frame.f_lineno = 31;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e92d6e09c10b7158eb085220b8732c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e92d6e09c10b7158eb085220b8732c7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7e92d6e09c10b7158eb085220b8732c7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7e92d6e09c10b7158eb085220b8732c7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7e92d6e09c10b7158eb085220b8732c7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7e92d6e09c10b7158eb085220b8732c7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7e92d6e09c10b7158eb085220b8732c7,
        type_description_1,
        par_A,
        NULL
    );


    // Release cached frame.
    if ( frame_7e92d6e09c10b7158eb085220b8732c7 == cache_frame_7e92d6e09c10b7158eb085220b8732c7 )
    {
        Py_DECREF( frame_7e92d6e09c10b7158eb085220b8732c7 );
    }
    cache_frame_7e92d6e09c10b7158eb085220b8732c7 = NULL;

    assertFrameObject( frame_7e92d6e09c10b7158eb085220b8732c7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_1__row_count );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_1__row_count );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_2__get_densest( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_eligibleRows = python_pars[ 1 ];
    PyObject *var_rowCounts = NULL;
    struct Nuitka_FrameObject *frame_3eed212459f999be2f5aced7c8957516;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3eed212459f999be2f5aced7c8957516 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3eed212459f999be2f5aced7c8957516, codeobj_3eed212459f999be2f5aced7c8957516, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3eed212459f999be2f5aced7c8957516 = cache_frame_3eed212459f999be2f5aced7c8957516;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3eed212459f999be2f5aced7c8957516 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3eed212459f999be2f5aced7c8957516 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__row_count );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__row_count );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_row_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_3eed212459f999be2f5aced7c8957516->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_rowCounts == NULL );
        var_rowCounts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argmax );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_rowCounts );
        tmp_left_name_1 = var_rowCounts;
        CHECK_OBJECT( par_eligibleRows );
        tmp_right_name_1 = par_eligibleRows;
        tmp_args_element_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3eed212459f999be2f5aced7c8957516->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3eed212459f999be2f5aced7c8957516 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3eed212459f999be2f5aced7c8957516 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3eed212459f999be2f5aced7c8957516 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3eed212459f999be2f5aced7c8957516, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3eed212459f999be2f5aced7c8957516->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3eed212459f999be2f5aced7c8957516, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3eed212459f999be2f5aced7c8957516,
        type_description_1,
        par_A,
        par_eligibleRows,
        var_rowCounts
    );


    // Release cached frame.
    if ( frame_3eed212459f999be2f5aced7c8957516 == cache_frame_3eed212459f999be2f5aced7c8957516 )
    {
        Py_DECREF( frame_3eed212459f999be2f5aced7c8957516 );
    }
    cache_frame_3eed212459f999be2f5aced7c8957516 = NULL;

    assertFrameObject( frame_3eed212459f999be2f5aced7c8957516 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_2__get_densest );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_eligibleRows );
    Py_DECREF( par_eligibleRows );
    par_eligibleRows = NULL;

    CHECK_OBJECT( (PyObject *)var_rowCounts );
    Py_DECREF( var_rowCounts );
    var_rowCounts = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_eligibleRows );
    Py_DECREF( par_eligibleRows );
    par_eligibleRows = NULL;

    Py_XDECREF( var_rowCounts );
    var_rowCounts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_2__get_densest );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_i_zero = NULL;
    struct Nuitka_FrameObject *frame_71bc195a3546799b28086aba86defe39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_71bc195a3546799b28086aba86defe39 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_status = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_empty;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_message = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71bc195a3546799b28086aba86defe39, codeobj_71bc195a3546799b28086aba86defe39, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71bc195a3546799b28086aba86defe39 = cache_frame_71bc195a3546799b28086aba86defe39;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71bc195a3546799b28086aba86defe39 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71bc195a3546799b28086aba86defe39 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__row_count );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__row_count );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_row_count" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_71bc195a3546799b28086aba86defe39->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_zero == NULL );
        var_i_zero = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_1 = par_A;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_i_zero );
        tmp_args_element_name_2 = var_i_zero;
        frame_71bc195a3546799b28086aba86defe39->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_logical_not, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_allclose );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_subscribed_name_2 = par_b;
        CHECK_OBJECT( var_i_zero );
        tmp_subscript_name_2 = var_i_zero;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = const_int_0;
        frame_71bc195a3546799b28086aba86defe39->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_pos_2;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_5;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = const_str_digest_10073b7f4be39da1697f56d3904da078;
            {
                PyObject *old = var_message;
                assert( old != NULL );
                var_message = tmp_assign_source_6;
                Py_INCREF( var_message );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_b );
        tmp_subscribed_name_3 = par_b;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_i_zero );
        tmp_args_element_name_5 = var_i_zero;
        frame_71bc195a3546799b28086aba86defe39->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_subscript_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_logical_not, call_args );
        }

        if ( tmp_subscript_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71bc195a3546799b28086aba86defe39 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71bc195a3546799b28086aba86defe39 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71bc195a3546799b28086aba86defe39, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71bc195a3546799b28086aba86defe39->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71bc195a3546799b28086aba86defe39, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71bc195a3546799b28086aba86defe39,
        type_description_1,
        par_A,
        par_b,
        var_status,
        var_message,
        var_i_zero
    );


    // Release cached frame.
    if ( frame_71bc195a3546799b28086aba86defe39 == cache_frame_71bc195a3546799b28086aba86defe39 )
    {
        Py_DECREF( frame_71bc195a3546799b28086aba86defe39 );
    }
    cache_frame_71bc195a3546799b28086aba86defe39 = NULL;

    assertFrameObject( frame_71bc195a3546799b28086aba86defe39 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_2 = par_A;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_2 = par_b;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_status );
        tmp_tuple_element_2 = var_status;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( var_message );
        tmp_tuple_element_2 = var_message;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)var_status );
    Py_DECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)var_i_zero );
    Py_DECREF( var_i_zero );
    var_i_zero = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_i_zero );
    var_i_zero = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_plu = python_pars[ 0 ];
    PyObject *par_perm_r = python_pars[ 1 ];
    PyObject *par_v = python_pars[ 2 ];
    PyObject *par_j = python_pars[ 3 ];
    PyObject *var_LU = NULL;
    PyObject *var_p = NULL;
    PyObject *var_u = NULL;
    PyObject *var_l = NULL;
    PyObject *var_piv = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fc17c14e41830a62bdb29ca9b61440c4;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_fc17c14e41830a62bdb29ca9b61440c4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc17c14e41830a62bdb29ca9b61440c4, codeobj_fc17c14e41830a62bdb29ca9b61440c4, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fc17c14e41830a62bdb29ca9b61440c4 = cache_frame_fc17c14e41830a62bdb29ca9b61440c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc17c14e41830a62bdb29ca9b61440c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc17c14e41830a62bdb29ca9b61440c4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_plu );
        tmp_iter_arg_1 = par_plu;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 96;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 96;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 96;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 96;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_LU == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_LU = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_p == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_p = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_solve_triangular );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_LU );
        tmp_tuple_element_1 = var_LU;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_v );
        tmp_subscribed_name_1 = par_v;
        CHECK_OBJECT( par_perm_r );
        tmp_subscript_name_1 = par_perm_r;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_f6ad340c064834e660441a117bc3f700 );
        frame_fc17c14e41830a62bdb29ca9b61440c4->m_frame.f_lineno = 98;
        tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u == NULL );
        var_u = tmp_assign_source_6;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_2 = var_u;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( par_j );
        tmp_left_name_1 = par_j;
        tmp_right_name_1 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_LU );
        tmp_ass_subscribed_1 = var_LU;
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( par_j );
        tmp_left_name_2 = par_j;
        tmp_right_name_2 = const_int_pos_1;
        tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_stop_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        Py_DECREF( tmp_stop_name_2 );
        assert( !(tmp_tuple_element_2 == NULL) );
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_j );
        tmp_tuple_element_2 = par_j;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_2 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_3 = var_u;
        CHECK_OBJECT( par_j );
        tmp_left_name_3 = par_j;
        tmp_right_name_3 = const_int_pos_1;
        tmp_start_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_start_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_3 = Py_None;
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_start_name_3 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_l == NULL );
        var_l = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_LU );
        tmp_subscribed_name_4 = var_LU;
        CHECK_OBJECT( par_j );
        tmp_tuple_element_3 = par_j;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_j );
        tmp_tuple_element_3 = par_j;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_3 );
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_piv == NULL );
        var_piv = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( var_LU );
        tmp_assign_source_9 = var_LU;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_9 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( par_j );
        tmp_left_name_4 = par_j;
        tmp_right_name_4 = const_int_pos_1;
        tmp_start_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_start_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_stop_name_4 = Py_None;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_start_name_4 );
        assert( !(tmp_tuple_element_4 == NULL) );
        tmp_assign_source_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( par_j );
        tmp_tuple_element_4 = par_j;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_10, 1, tmp_tuple_element_4 );
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_5 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_5 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_l );
        tmp_left_name_6 = var_l;
        CHECK_OBJECT( var_piv );
        tmp_right_name_6 = var_piv;
        tmp_right_name_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_2 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc17c14e41830a62bdb29ca9b61440c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc17c14e41830a62bdb29ca9b61440c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc17c14e41830a62bdb29ca9b61440c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc17c14e41830a62bdb29ca9b61440c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc17c14e41830a62bdb29ca9b61440c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc17c14e41830a62bdb29ca9b61440c4,
        type_description_1,
        par_plu,
        par_perm_r,
        par_v,
        par_j,
        var_LU,
        var_p,
        var_u,
        var_l,
        var_piv
    );


    // Release cached frame.
    if ( frame_fc17c14e41830a62bdb29ca9b61440c4 == cache_frame_fc17c14e41830a62bdb29ca9b61440c4 )
    {
        Py_DECREF( frame_fc17c14e41830a62bdb29ca9b61440c4 );
    }
    cache_frame_fc17c14e41830a62bdb29ca9b61440c4 = NULL;

    assertFrameObject( frame_fc17c14e41830a62bdb29ca9b61440c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_LU );
        tmp_tuple_element_5 = var_LU;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_p );
        tmp_tuple_element_5 = var_p;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_plu );
    Py_DECREF( par_plu );
    par_plu = NULL;

    CHECK_OBJECT( (PyObject *)par_perm_r );
    Py_DECREF( par_perm_r );
    par_perm_r = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    CHECK_OBJECT( (PyObject *)var_LU );
    Py_DECREF( var_LU );
    var_LU = NULL;

    CHECK_OBJECT( (PyObject *)var_p );
    Py_DECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_l );
    Py_DECREF( var_l );
    var_l = NULL;

    CHECK_OBJECT( (PyObject *)var_piv );
    Py_DECREF( var_piv );
    var_piv = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_plu );
    Py_DECREF( par_plu );
    par_plu = NULL;

    CHECK_OBJECT( (PyObject *)par_perm_r );
    Py_DECREF( par_perm_r );
    par_perm_r = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    Py_XDECREF( var_LU );
    var_LU = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_l );
    var_l = NULL;

    Py_XDECREF( var_piv );
    var_piv = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_rhs = python_pars[ 1 ];
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_v = NULL;
    PyObject *var_b = NULL;
    PyObject *var_k = NULL;
    PyObject *var_d = NULL;
    PyObject *var_lu = NULL;
    PyObject *var_perm_r = NULL;
    PyObject *var_A_orig = NULL;
    PyObject *var_e = NULL;
    PyObject *var_B = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_LU = NULL;
    PyObject *var_p = NULL;
    PyObject *var_i1 = NULL;
    PyObject *var_i2 = NULL;
    PyObject *var_pi = NULL;
    PyObject *var_js = NULL;
    PyObject *var_batch = NULL;
    PyObject *var_dependent = NULL;
    PyObject *var_j_index = NULL;
    PyObject *var_j_indices = NULL;
    PyObject *var_c = NULL;
    PyObject *var_bibar = NULL;
    PyObject *var_bnorm = NULL;
    PyObject *var_keep = NULL;
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
    struct Nuitka_FrameObject *frame_4c073a08a0a1db8ad98c5c25c5c769dc;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_4c073a08a0a1db8ad98c5c25c5c769dc = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c073a08a0a1db8ad98c5c25c5c769dc, codeobj_4c073a08a0a1db8ad98c5c25c5c769dc, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4c073a08a0a1db8ad98c5c25c5c769dc = cache_frame_4c073a08a0a1db8ad98c5c25c5c769dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c073a08a0a1db8ad98c5c25c5c769dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c073a08a0a1db8ad98c5c25c5c769dc ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_remove_zero_rows" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_rhs );
        tmp_args_element_name_2 = par_rhs;
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                    exception_lineno = 148;
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

            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 148;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_6;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_rhs;
            assert( old != NULL );
            par_rhs = tmp_assign_source_7;
            Py_INCREF( par_rhs );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_status = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_message = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_1 = var_status;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            tmp_return_value = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_rhs );
            tmp_tuple_element_1 = par_rhs;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_status );
            tmp_tuple_element_1 = var_status;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_message );
            tmp_tuple_element_1 = var_message;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 153;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 153;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                    exception_lineno = 153;
                    goto try_except_handler_5;
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

            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            exception_lineno = 153;
            goto try_except_handler_5;
        }
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_m = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_n = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_1 = var_m;
        tmp_list_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT( var_v );
        tmp_list_arg_2 = var_v;
        tmp_assign_source_16 = PySequence_List( tmp_list_arg_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_2 = var_m;
        CHECK_OBJECT( var_m );
        tmp_left_name_1 = var_m;
        CHECK_OBJECT( var_n );
        tmp_right_name_1 = var_n;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_set_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PySet_New( tmp_set_arg_1 );
        Py_DECREF( tmp_set_arg_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k == NULL );
        var_k = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyList_New( 0 );
        assert( var_d == NULL );
        var_d = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_None;
        assert( var_lu == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_lu = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_None;
        assert( var_perm_r == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_perm_r = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( par_A );
        tmp_assign_source_21 = par_A;
        assert( var_A_orig == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_A_orig = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 165;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hstack );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_4 = var_m;
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_eye, call_args );
        }

        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 165;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_A );
        tmp_tuple_element_2 = par_A;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_22;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 166;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_5 = var_m;
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_e == NULL );
        var_e = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_1 = par_A;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_b );
        tmp_tuple_element_3 = var_b;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_3 );
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_B == NULL );
        var_B = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_v );
        tmp_iter_arg_3 = var_v;
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_26 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 185;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_27 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_27;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_e );
        tmp_ass_subscribed_1 = var_e;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_2 = var_i;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_ass_subvalue_2 = const_int_0;
            CHECK_OBJECT( var_e );
            tmp_ass_subscribed_2 = var_e;
            CHECK_OBJECT( var_i );
            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_1;
            tmp_ass_subscript_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_b );
        tmp_subscribed_name_2 = var_b;
        CHECK_OBJECT( var_i );
        tmp_left_name_3 = var_i;
        tmp_right_name_3 = const_int_pos_1;
        tmp_subscript_name_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_subscript_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_bg_update_dense );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bg_update_dense );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bg_update_dense" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        if ( var_lu == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_name_6 = var_lu;
        if ( var_perm_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm_r" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_name_7 = var_perm_r;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_3 = par_A;
        tmp_tuple_element_4 = const_slice_none_none_none;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_4 = var_j;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_4 );
        tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_i );
        tmp_left_name_4 = var_i;
        tmp_right_name_4 = const_int_pos_1;
        tmp_args_element_name_9 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_lu;
            var_lu = tmp_assign_source_29;
            Py_XDECREF( old );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_4c073a08a0a1db8ad98c5c25c5c769dc, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_4c073a08a0a1db8ad98c5c25c5c769dc, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 195;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_linalg );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_B );
            tmp_args_element_name_10 = var_B;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_30 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_lu_factor, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_lu;
                var_lu = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT( var_lu );
            tmp_iter_arg_4 = var_lu;
            tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_9;
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 196;
                goto try_except_handler_10;
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 196;
                goto try_except_handler_10;
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

                        type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                        exception_lineno = 196;
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

                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 196;
                goto try_except_handler_10;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_9;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_34 = tmp_tuple_unpack_3__element_1;
            {
                PyObject *old = var_LU;
                var_LU = tmp_assign_source_34;
                Py_INCREF( var_LU );
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
                PyObject *old = var_p;
                var_p = tmp_assign_source_35;
                Py_INCREF( var_p );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_list_arg_3;
            PyObject *tmp_xrange_low_3;
            CHECK_OBJECT( var_m );
            tmp_xrange_low_3 = var_m;
            tmp_list_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_3 );
            if ( tmp_list_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_36 = PySequence_List( tmp_list_arg_3 );
            Py_DECREF( tmp_list_arg_3 );
            if ( tmp_assign_source_36 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_perm_r;
                var_perm_r = tmp_assign_source_36;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_11;
            tmp_called_name_4 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT( var_p );
            tmp_args_element_name_11 = var_p;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 198;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_38 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_38 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                    exception_lineno = 198;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_iter_arg_6 = tmp_for_loop_2__iter_value;
            tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_6 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 198;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__source_iter;
                tmp_tuple_unpack_4__source_iter = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 198;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_1;
                tmp_tuple_unpack_4__element_1 = tmp_assign_source_40;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
            tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
            tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 198;
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_4__element_2;
                tmp_tuple_unpack_4__element_2 = tmp_assign_source_41;
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

                        type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                        exception_lineno = 198;
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

                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 198;
                goto try_except_handler_13;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_12;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_11;
        // End of try:
        try_end_9:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
        Py_DECREF( tmp_tuple_unpack_4__source_iter );
        tmp_tuple_unpack_4__source_iter = NULL;

        {
            PyObject *tmp_assign_source_42;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
            tmp_assign_source_42 = tmp_tuple_unpack_4__element_1;
            {
                PyObject *old = var_i1;
                var_i1 = tmp_assign_source_42;
                Py_INCREF( var_i1 );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_1 );
        tmp_tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_43;
            CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
            tmp_assign_source_43 = tmp_tuple_unpack_4__element_2;
            {
                PyObject *old = var_i2;
                var_i2 = tmp_assign_source_43;
                Py_INCREF( var_i2 );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_4__element_2 );
        tmp_tuple_unpack_4__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_perm_r );
            tmp_subscribed_name_4 = var_perm_r;
            CHECK_OBJECT( var_i2 );
            tmp_subscript_name_4 = var_i2;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_iter_arg_7 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_7, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_perm_r );
            tmp_subscribed_name_5 = var_perm_r;
            CHECK_OBJECT( var_i1 );
            tmp_subscript_name_5 = var_i1;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 199;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 1, tmp_tuple_element_5 );
            tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_45;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
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


                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 199;
                goto try_except_handler_15;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_46;
                Py_XDECREF( old );
            }

        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_15:;
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

        goto try_except_handler_14;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_ass_subvalue_3 = tmp_tuple_unpack_5__element_1;
            CHECK_OBJECT( var_perm_r );
            tmp_ass_subscribed_3 = var_perm_r;
            CHECK_OBJECT( var_i1 );
            tmp_ass_subscript_3 = var_i1;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_ass_subvalue_4 = tmp_tuple_unpack_5__element_2;
            CHECK_OBJECT( var_perm_r );
            tmp_ass_subscribed_4 = var_perm_r;
            CHECK_OBJECT( var_i2 );
            tmp_ass_subscript_4 = var_i2;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_14:;
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

        goto try_except_handler_11;
        // End of try:
        try_end_11:;
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_12;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
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
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_8;
        // End of try:
        try_end_12:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 191;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame) frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
        goto try_except_handler_8;
        branch_end_3:;
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_6;
    // End of try:
    try_end_13:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense );
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_linalg );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_lu_solve );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if ( var_lu == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 201;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_tuple_element_6 = var_lu;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_e );
        tmp_tuple_element_6 = var_e;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_6 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_5da5ec012d1f4f047ad3c5e595142539 );
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 201;
        tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_pi;
            var_pi = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_list_arg_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_set_arg_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 204;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_6 = tmp_mvar_value_8;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_array );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_k );
        tmp_left_name_5 = var_k;
        CHECK_OBJECT( var_b );
        tmp_set_arg_2 = var_b;
        tmp_right_name_5 = PySet_New( tmp_set_arg_2 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 204;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_list_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        assert( !(tmp_list_arg_4 == NULL) );
        tmp_args_element_name_12 = PySequence_List( tmp_list_arg_4 );
        Py_DECREF( tmp_list_arg_4 );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 204;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_js;
            var_js = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = const_int_pos_50;
        {
            PyObject *old = var_batch;
            var_batch = tmp_assign_source_49;
            Py_INCREF( var_batch );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = Py_True;
        {
            PyObject *old = var_dependent;
            var_dependent = tmp_assign_source_50;
            Py_INCREF( var_dependent );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_4;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_xrange_step_1;
        tmp_xrange_low_4 = const_int_0;
        CHECK_OBJECT( var_js );
        tmp_len_arg_1 = var_js;
        tmp_xrange_high_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_xrange_high_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_batch );
        tmp_xrange_step_1 = var_batch;
        tmp_iter_arg_8 = BUILTIN_XRANGE3( tmp_xrange_low_4, tmp_xrange_high_2, tmp_xrange_step_1 );
        Py_DECREF( tmp_xrange_high_2 );
        if ( tmp_iter_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_8 );
        Py_DECREF( tmp_iter_arg_8 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
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
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                exception_lineno = 210;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_53 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_j_index;
            var_j_index = tmp_assign_source_53;
            Py_INCREF( var_j_index );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( var_js );
        tmp_subscribed_name_6 = var_js;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_source_name_7 = tmp_mvar_value_9;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_arange );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT( var_j_index );
        tmp_args_element_name_13 = var_j_index;
        tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_8 != NULL );
        CHECK_OBJECT( var_j_index );
        tmp_left_name_6 = var_j_index;
        CHECK_OBJECT( var_batch );
        tmp_right_name_6 = var_batch;
        tmp_args_element_name_15 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT( var_js );
        tmp_len_arg_2 = var_js;
        tmp_args_element_name_16 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_15 );

            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_subscript_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_subscript_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_54 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_j_indices;
            var_j_indices = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_args_element_name_18;
        tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_9 != NULL );
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_7 = par_A;
        tmp_tuple_element_7 = const_slice_none_none_none;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_j_indices );
        tmp_tuple_element_7 = var_j_indices;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_7 );
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 213;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT( var_pi );
        tmp_args_element_name_18 = var_pi;
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_args_element_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_55;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_c );
        tmp_compexpr_left_4 = var_c;
        tmp_compexpr_right_4 = const_float_1eminus_08;
        tmp_called_instance_6 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 214;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_any );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 214;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_56;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_19;
            CHECK_OBJECT( var_js );
            tmp_subscribed_name_8 = var_js;
            CHECK_OBJECT( var_j_index );
            tmp_left_name_7 = var_j_index;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 215;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_called_instance_7 = tmp_mvar_value_10;
            CHECK_OBJECT( var_c );
            tmp_args_element_name_19 = var_c;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 215;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_right_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_argmax, call_args );
            }

            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_subscript_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_subscript_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_56 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            Py_DECREF( tmp_subscript_name_8 );
            if ( tmp_assign_source_56 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_56;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_subscribed_name_9;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            PyObject *tmp_tuple_element_9;
            CHECK_OBJECT( par_A );
            tmp_subscribed_name_9 = par_A;
            tmp_tuple_element_8 = const_slice_none_none_none;
            tmp_subscript_name_9 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_8 = var_j;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_8 );
            tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
            Py_DECREF( tmp_subscript_name_9 );
            if ( tmp_ass_subvalue_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            CHECK_OBJECT( var_B );
            tmp_ass_subscribed_5 = var_B;
            tmp_tuple_element_9 = const_slice_none_none_none;
            tmp_ass_subscript_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( var_i );
            tmp_tuple_element_9 = var_i;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_9 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );
            Py_DECREF( tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            CHECK_OBJECT( var_j );
            tmp_ass_subvalue_6 = var_j;
            CHECK_OBJECT( var_b );
            tmp_ass_subscribed_6 = var_b;
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_6 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_16;
            }
        }
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = Py_False;
            {
                PyObject *old = var_dependent;
                assert( old != NULL );
                var_dependent = tmp_assign_source_57;
                Py_INCREF( var_dependent );
                Py_DECREF( old );
            }

        }
        goto loop_end_3;
        branch_no_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_6;
    // End of try:
    try_end_14:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        if ( var_dependent == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dependent" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 220;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( var_dependent );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_called_instance_8;
            CHECK_OBJECT( var_pi );
            tmp_source_name_9 = var_pi;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_T );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dot );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_rhs );
            tmp_called_instance_8 = par_rhs;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 221;
            tmp_args_element_name_20 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 0 ) );

            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 221;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_bibar;
                var_bibar = tmp_assign_source_58;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 222;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_source_name_10 = tmp_mvar_value_11;
            tmp_called_instance_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linalg );
            if ( tmp_called_instance_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_rhs );
            tmp_args_element_name_21 = par_rhs;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 222;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_assign_source_59 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_norm, call_args );
            }

            Py_DECREF( tmp_called_instance_9 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 222;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_bnorm;
                var_bnorm = tmp_assign_source_59;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_11 != NULL );
            CHECK_OBJECT( var_bibar );
            tmp_args_element_name_22 = var_bibar;
            frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_left_name_9 = const_int_pos_1;
            CHECK_OBJECT( var_bnorm );
            tmp_right_name_9 = var_bnorm;
            tmp_right_name_8 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 223;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_compexpr_left_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_compexpr_right_5 = const_float_1eminus_08;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                goto try_except_handler_6;
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
            Py_XDECREF( var_status );
            var_status = NULL;

            Py_XDECREF( var_message );
            var_message = NULL;

            {
                PyObject *tmp_tuple_element_10;
                CHECK_OBJECT( var_A_orig );
                tmp_tuple_element_10 = var_A_orig;
                tmp_return_value = PyTuple_New( 4 );
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_10 );
                CHECK_OBJECT( par_rhs );
                tmp_tuple_element_10 = par_rhs;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_10 );
                tmp_tuple_element_10 = const_int_pos_2;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_10 );
                tmp_tuple_element_10 = const_str_digest_57ca7d081d85a156c6c788af0d7b001b;
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_10 );
                goto try_return_handler_6;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_called_instance_10;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_23;
                CHECK_OBJECT( var_d );
                tmp_called_instance_10 = var_d;
                CHECK_OBJECT( var_i );
                tmp_args_element_name_23 = var_i;
                frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame.f_lineno = 228;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 228;
                    type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_15;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_xrange_low_5;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_5 = var_m;
        tmp_set_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_5 );
        if ( tmp_set_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = PySet_New( tmp_set_arg_3 );
        Py_DECREF( tmp_set_arg_3 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep == NULL );
        var_keep = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_list_arg_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_set_arg_4;
        CHECK_OBJECT( var_keep );
        tmp_left_name_10 = var_keep;
        CHECK_OBJECT( var_d );
        tmp_set_arg_4 = var_d;
        tmp_right_name_10 = PySet_New( tmp_set_arg_4 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        assert( !(tmp_list_arg_5 == NULL) );
        tmp_assign_source_61 = PySequence_List( tmp_list_arg_5 );
        Py_DECREF( tmp_list_arg_5 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_keep;
            assert( old != NULL );
            var_keep = tmp_assign_source_61;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        CHECK_OBJECT( var_A_orig );
        tmp_subscribed_name_10 = var_A_orig;
        CHECK_OBJECT( var_keep );
        tmp_tuple_element_12 = var_keep;
        tmp_subscript_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_12 );
        tmp_tuple_element_12 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_12 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_12 );
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_tuple_element_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( par_rhs );
        tmp_subscribed_name_11 = par_rhs;
        CHECK_OBJECT( var_keep );
        tmp_subscript_name_11 = var_keep;
        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_tuple_element_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 232;
            type_description_1 = "ooNNooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( var_status );
        tmp_tuple_element_11 = var_status;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
        CHECK_OBJECT( var_message );
        tmp_tuple_element_11 = var_message;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_11 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c073a08a0a1db8ad98c5c25c5c769dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c073a08a0a1db8ad98c5c25c5c769dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c073a08a0a1db8ad98c5c25c5c769dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c073a08a0a1db8ad98c5c25c5c769dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c073a08a0a1db8ad98c5c25c5c769dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c073a08a0a1db8ad98c5c25c5c769dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c073a08a0a1db8ad98c5c25c5c769dc,
        type_description_1,
        par_A,
        par_rhs,
        NULL,
        NULL,
        var_status,
        var_message,
        NULL,
        var_m,
        var_n,
        var_v,
        var_b,
        var_k,
        var_d,
        var_lu,
        var_perm_r,
        var_A_orig,
        var_e,
        var_B,
        var_i,
        var_j,
        var_LU,
        var_p,
        var_i1,
        var_i2,
        var_pi,
        var_js,
        var_batch,
        var_dependent,
        var_j_index,
        var_j_indices,
        var_c,
        var_bibar,
        var_bnorm,
        var_keep
    );


    // Release cached frame.
    if ( frame_4c073a08a0a1db8ad98c5c25c5c769dc == cache_frame_4c073a08a0a1db8ad98c5c25c5c769dc )
    {
        Py_DECREF( frame_4c073a08a0a1db8ad98c5c25c5c769dc );
    }
    cache_frame_4c073a08a0a1db8ad98c5c25c5c769dc = NULL;

    assertFrameObject( frame_4c073a08a0a1db8ad98c5c25c5c769dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rhs );
    Py_DECREF( par_rhs );
    par_rhs = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_perm_r );
    var_perm_r = NULL;

    Py_XDECREF( var_A_orig );
    var_A_orig = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_LU );
    var_LU = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_i1 );
    var_i1 = NULL;

    Py_XDECREF( var_i2 );
    var_i2 = NULL;

    Py_XDECREF( var_pi );
    var_pi = NULL;

    Py_XDECREF( var_js );
    var_js = NULL;

    Py_XDECREF( var_batch );
    var_batch = NULL;

    Py_XDECREF( var_dependent );
    var_dependent = NULL;

    Py_XDECREF( var_j_index );
    var_j_index = NULL;

    Py_XDECREF( var_j_indices );
    var_j_indices = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_bibar );
    var_bibar = NULL;

    Py_XDECREF( var_bnorm );
    var_bnorm = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rhs );
    Py_DECREF( par_rhs );
    par_rhs = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_lu );
    var_lu = NULL;

    Py_XDECREF( var_perm_r );
    var_perm_r = NULL;

    Py_XDECREF( var_A_orig );
    var_A_orig = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_LU );
    var_LU = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_i1 );
    var_i1 = NULL;

    Py_XDECREF( var_i2 );
    var_i2 = NULL;

    Py_XDECREF( var_pi );
    var_pi = NULL;

    Py_XDECREF( var_js );
    var_js = NULL;

    Py_XDECREF( var_batch );
    var_batch = NULL;

    Py_XDECREF( var_dependent );
    var_dependent = NULL;

    Py_XDECREF( var_j_index );
    var_j_index = NULL;

    Py_XDECREF( var_j_indices );
    var_j_indices = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_bibar );
    var_bibar = NULL;

    Py_XDECREF( var_bnorm );
    var_bnorm = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_rhs = python_pars[ 1 ];
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_v = NULL;
    PyObject *var_b = NULL;
    PyObject *var_k = NULL;
    PyObject *var_d = NULL;
    PyObject *var_A_orig = NULL;
    PyObject *var_e = NULL;
    PyObject *var_i = NULL;
    PyObject *var_B = NULL;
    PyObject *var_pi = NULL;
    PyObject *var_js = NULL;
    PyObject *var_c = NULL;
    PyObject *var_j = NULL;
    PyObject *var_bibar = NULL;
    PyObject *var_bnorm = NULL;
    PyObject *var_keep = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d751c6f08e3dd853072a6c11e91aabe7;
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
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_d751c6f08e3dd853072a6c11e91aabe7 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d751c6f08e3dd853072a6c11e91aabe7, codeobj_d751c6f08e3dd853072a6c11e91aabe7, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d751c6f08e3dd853072a6c11e91aabe7 = cache_frame_d751c6f08e3dd853072a6c11e91aabe7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d751c6f08e3dd853072a6c11e91aabe7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d751c6f08e3dd853072a6c11e91aabe7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_remove_zero_rows" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_rhs );
        tmp_args_element_name_2 = par_rhs;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooNNooNooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 277;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 277;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 277;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 277;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooNNooNooooooooooooooooo";
                    exception_lineno = 277;
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

            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 277;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_6;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_rhs;
            assert( old != NULL );
            par_rhs = tmp_assign_source_7;
            Py_INCREF( par_rhs );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_status = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_message = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_1 = var_status;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            tmp_return_value = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_rhs );
            tmp_tuple_element_1 = par_rhs;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_status );
            tmp_tuple_element_1 = var_status;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_message );
            tmp_tuple_element_1 = var_message;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "ooNNooNooooooooooooooooo";
                    exception_lineno = 282;
                    goto try_except_handler_5;
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

            type_description_1 = "ooNNooNooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_5;
        }
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_m = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_n = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_1 = var_m;
        tmp_list_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_list_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = PySequence_List( tmp_list_arg_1 );
        Py_DECREF( tmp_list_arg_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_list_arg_2;
        CHECK_OBJECT( var_v );
        tmp_list_arg_2 = var_v;
        tmp_assign_source_16 = PySequence_List( tmp_list_arg_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_2 = var_m;
        CHECK_OBJECT( var_m );
        tmp_left_name_1 = var_m;
        CHECK_OBJECT( var_n );
        tmp_right_name_1 = var_n;
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_xrange_high_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
        Py_DECREF( tmp_xrange_high_1 );
        if ( tmp_set_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = PySet_New( tmp_set_arg_1 );
        Py_DECREF( tmp_set_arg_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k == NULL );
        var_k = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyList_New( 0 );
        assert( var_d == NULL );
        var_d = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( par_A );
        tmp_assign_source_19 = par_A;
        assert( var_A_orig == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_A_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sparse );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hstack );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sparse );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_m );
        tmp_args_element_name_4 = var_m;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_eye, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_A );
        tmp_tuple_element_2 = par_A;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_2 );
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 292;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tocsc );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_20;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 293;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_5 = var_m;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_e == NULL );
        var_e = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_v );
        tmp_iter_arg_3 = var_v;
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_23 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooNNooNooooooooooooooooo";
                exception_lineno = 315;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_24 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_24;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_1 = par_A;
        tmp_tuple_element_3 = const_slice_none_none_none;
        tmp_subscript_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_b );
        tmp_tuple_element_3 = var_b;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_3 );
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_B;
            var_B = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_e );
        tmp_ass_subscribed_1 = var_e;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_2 = var_i;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            tmp_ass_subvalue_2 = const_int_0;
            CHECK_OBJECT( var_e );
            tmp_ass_subscribed_2 = var_e;
            CHECK_OBJECT( var_i );
            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_1;
            tmp_ass_subscript_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "scipy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sparse );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_linalg );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_spsolve );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_B );
        tmp_called_instance_5 = var_B;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 322;
        tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_transpose );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_e );
        tmp_args_element_name_7 = var_e;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 322;
        tmp_assign_source_26 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_pi;
            var_pi = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_set_arg_2;
        CHECK_OBJECT( var_k );
        tmp_left_name_3 = var_k;
        CHECK_OBJECT( var_b );
        tmp_set_arg_2 = var_b;
        tmp_right_name_3 = PySet_New( tmp_set_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_list_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        assert( !(tmp_list_arg_3 == NULL) );
        tmp_assign_source_27 = PySequence_List( tmp_list_arg_3 );
        Py_DECREF( tmp_list_arg_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_js;
            var_js = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_8 = tmp_mvar_value_6;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_abs );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_A );
        tmp_subscribed_name_3 = par_A;
        tmp_tuple_element_4 = const_slice_none_none_none;
        tmp_subscript_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_js );
        tmp_tuple_element_4 = var_js;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_4 );
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_called_instance_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 333;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_8 );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( var_pi );
        tmp_args_element_name_9 = var_pi;
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_3 = const_float_1eminus_08;
        tmp_called_instance_6 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 333;
        tmp_subscribed_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_nonzero );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_c );
        tmp_len_arg_1 = var_c;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        assert( !(tmp_res == -1) );
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_29;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_js );
            tmp_subscribed_name_4 = var_js;
            CHECK_OBJECT( var_c );
            tmp_subscribed_name_5 = var_c;
            tmp_subscript_name_5 = const_int_0;
            tmp_subscript_name_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_subscript_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 335;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_j;
                var_j = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_j );
            tmp_ass_subvalue_3 = var_j;
            CHECK_OBJECT( var_b );
            tmp_ass_subscribed_3 = var_b;
            CHECK_OBJECT( var_i );
            tmp_ass_subscript_3 = var_i;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_instance_9;
            CHECK_OBJECT( var_pi );
            tmp_source_name_10 = var_pi;
            tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
            if ( tmp_source_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dot );
            Py_DECREF( tmp_source_name_9 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_rhs );
            tmp_called_instance_9 = par_rhs;
            frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 348;
            tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 0 ) );

            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 348;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 348;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 348;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_bibar;
                var_bibar = tmp_assign_source_30;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 349;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_source_name_11 = tmp_mvar_value_7;
            tmp_called_instance_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_linalg );
            if ( tmp_called_instance_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_rhs );
            tmp_args_element_name_11 = par_rhs;
            frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assign_source_31 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_norm, call_args );
            }

            Py_DECREF( tmp_called_instance_10 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = var_bnorm;
                var_bnorm = tmp_assign_source_31;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_right_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_6 != NULL );
            CHECK_OBJECT( var_bibar );
            tmp_args_element_name_12 = var_bibar;
            frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 350;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_left_name_5 = const_int_pos_1;
            CHECK_OBJECT( var_bnorm );
            tmp_right_name_5 = var_bnorm;
            tmp_right_name_4 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 350;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_compexpr_left_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_compexpr_right_5 = const_float_1eminus_08;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooNNooNooooooooooooooooo";
                goto try_except_handler_6;
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
            Py_XDECREF( var_status );
            var_status = NULL;

            Py_XDECREF( var_message );
            var_message = NULL;

            {
                PyObject *tmp_tuple_element_5;
                CHECK_OBJECT( var_A_orig );
                tmp_tuple_element_5 = var_A_orig;
                tmp_return_value = PyTuple_New( 4 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( par_rhs );
                tmp_tuple_element_5 = par_rhs;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
                tmp_tuple_element_5 = const_int_pos_2;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
                tmp_tuple_element_5 = const_str_digest_57ca7d081d85a156c6c788af0d7b001b;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_5 );
                goto try_return_handler_6;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_called_instance_11;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_13;
                CHECK_OBJECT( var_d );
                tmp_called_instance_11 = var_d;
                CHECK_OBJECT( var_i );
                tmp_args_element_name_13 = var_i;
                frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame.f_lineno = 355;
                {
                    PyObject *call_args[] = { tmp_args_element_name_13 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "ooNNooNooooooooooooooooo";
                    goto try_except_handler_6;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooNNooNooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_xrange_low_3;
        CHECK_OBJECT( var_m );
        tmp_xrange_low_3 = var_m;
        tmp_set_arg_3 = BUILTIN_XRANGE1( tmp_xrange_low_3 );
        if ( tmp_set_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = PySet_New( tmp_set_arg_3 );
        Py_DECREF( tmp_set_arg_3 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 357;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep == NULL );
        var_keep = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_list_arg_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_set_arg_4;
        CHECK_OBJECT( var_keep );
        tmp_left_name_6 = var_keep;
        CHECK_OBJECT( var_d );
        tmp_set_arg_4 = var_d;
        tmp_right_name_6 = PySet_New( tmp_set_arg_4 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        assert( !(tmp_list_arg_4 == NULL) );
        tmp_assign_source_33 = PySequence_List( tmp_list_arg_4 );
        Py_DECREF( tmp_list_arg_4 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_keep;
            assert( old != NULL );
            var_keep = tmp_assign_source_33;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_A_orig );
        tmp_subscribed_name_6 = var_A_orig;
        CHECK_OBJECT( var_keep );
        tmp_tuple_element_7 = var_keep;
        tmp_subscript_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_7 );
        tmp_tuple_element_7 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_7 );
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( par_rhs );
        tmp_subscribed_name_7 = par_rhs;
        CHECK_OBJECT( var_keep );
        tmp_subscript_name_7 = var_keep;
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 359;
            type_description_1 = "ooNNooNooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_status );
        tmp_tuple_element_6 = var_status;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
        CHECK_OBJECT( var_message );
        tmp_tuple_element_6 = var_message;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d751c6f08e3dd853072a6c11e91aabe7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d751c6f08e3dd853072a6c11e91aabe7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d751c6f08e3dd853072a6c11e91aabe7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d751c6f08e3dd853072a6c11e91aabe7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d751c6f08e3dd853072a6c11e91aabe7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d751c6f08e3dd853072a6c11e91aabe7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d751c6f08e3dd853072a6c11e91aabe7,
        type_description_1,
        par_A,
        par_rhs,
        NULL,
        NULL,
        var_status,
        var_message,
        NULL,
        var_m,
        var_n,
        var_v,
        var_b,
        var_k,
        var_d,
        var_A_orig,
        var_e,
        var_i,
        var_B,
        var_pi,
        var_js,
        var_c,
        var_j,
        var_bibar,
        var_bnorm,
        var_keep
    );


    // Release cached frame.
    if ( frame_d751c6f08e3dd853072a6c11e91aabe7 == cache_frame_d751c6f08e3dd853072a6c11e91aabe7 )
    {
        Py_DECREF( frame_d751c6f08e3dd853072a6c11e91aabe7 );
    }
    cache_frame_d751c6f08e3dd853072a6c11e91aabe7 = NULL;

    assertFrameObject( frame_d751c6f08e3dd853072a6c11e91aabe7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rhs );
    Py_DECREF( par_rhs );
    par_rhs = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_A_orig );
    var_A_orig = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_pi );
    var_pi = NULL;

    Py_XDECREF( var_js );
    var_js = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_bibar );
    var_bibar = NULL;

    Py_XDECREF( var_bnorm );
    var_bnorm = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rhs );
    Py_DECREF( par_rhs );
    par_rhs = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_A_orig );
    var_A_orig = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_pi );
    var_pi = NULL;

    Py_XDECREF( var_js );
    var_js = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_bibar );
    var_bibar = NULL;

    Py_XDECREF( var_bnorm );
    var_bnorm = NULL;

    Py_XDECREF( var_keep );
    var_keep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse );
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


static PyObject *impl_scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_U = NULL;
    PyObject *var_s = NULL;
    PyObject *var_Vh = NULL;
    PyObject *var_eps = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_s_min = NULL;
    PyObject *var_v = NULL;
    PyObject *var_eligibleRows = NULL;
    PyObject *var_i_remove = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_efec3b0873c99eb9891a325d29853918;
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
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_efec3b0873c99eb9891a325d29853918 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_efec3b0873c99eb9891a325d29853918, codeobj_efec3b0873c99eb9891a325d29853918, module_scipy$optimize$_remove_redundancy, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_efec3b0873c99eb9891a325d29853918 = cache_frame_efec3b0873c99eb9891a325d29853918;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_efec3b0873c99eb9891a325d29853918 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_efec3b0873c99eb9891a325d29853918 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__remove_zero_rows );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_remove_zero_rows" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 395;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 395;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 395;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 395;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 395;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 395;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_6;
            Py_INCREF( par_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_7;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_status = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_message = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_status );
        tmp_compexpr_left_1 = var_status;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_1 = par_A;
            tmp_return_value = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_b );
            tmp_tuple_element_1 = par_b;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_status );
            tmp_tuple_element_1 = var_status;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( var_message );
            tmp_tuple_element_1 = var_message;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_svd );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 400;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_3 = par_A;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
        if ( tmp_assign_source_11 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 400;
                    goto try_except_handler_5;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 400;
            goto try_except_handler_5;
        }
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

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        assert( var_U == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_U = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_s = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_3;
        assert( var_Vh == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_Vh = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 401;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 401;
        tmp_source_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_finfo, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eps );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_eps == NULL );
        var_eps = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_s );
        tmp_called_instance_2 = var_s;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 402;
        tmp_left_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_max );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_3 != NULL );
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 402;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 402;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_eps );
        tmp_right_name_2 = var_eps;
        tmp_assign_source_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_A );
        tmp_source_name_3 = par_A;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_8, 0, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 404;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_9, 1, 2 );
        if ( tmp_assign_source_21 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 404;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_21;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 404;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 404;
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
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_1;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_m = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_n = tmp_assign_source_23;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_2 = var_m;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_2 = var_n;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_1 = var_s;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_24 = const_int_0;
        Py_INCREF( tmp_assign_source_24 );
        condexpr_end_1:;
        assert( var_s_min == NULL );
        var_s_min = tmp_assign_source_24;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_s_min );
        tmp_args_element_name_5 = var_s_min;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_compexpr_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_3 = var_tol;
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_U );
        tmp_subscribed_name_2 = var_U;
        tmp_subscript_name_2 = const_tuple_slice_none_none_none_int_neg_1_tuple;
        tmp_assign_source_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_v );
        tmp_args_element_name_6 = var_v;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tol );
        tmp_left_name_3 = var_tol;
        tmp_right_name_3 = const_float_10000000_0;
        tmp_compexpr_right_4 = BINARY_OPERATION_MUL_OBJECT_FLOAT( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eligibleRows;
            var_eligibleRows = tmp_assign_source_26;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_10;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_eligibleRows );
        tmp_args_element_name_7 = var_eligibleRows;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_any, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_abs );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_called_instance_5 = var_v;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_10 = par_A;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_compexpr_left_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_5 = var_tol;
        tmp_args_element_name_8 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 426;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = const_int_pos_4;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_27;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = const_str_digest_212f0654b5847c7caef6d817811e4ecf;
            {
                PyObject *old = var_message;
                assert( old != NULL );
                var_message = tmp_assign_source_28;
                Py_INCREF( var_message );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        int tmp_truth_name_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_8;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_any );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_9;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_abs );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_called_instance_6 = var_v;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_13 = par_b;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_tol );
        tmp_left_name_4 = var_tol;
        tmp_right_name_4 = const_int_pos_10;
        tmp_compexpr_right_6 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 435;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
            tmp_assign_source_29 = const_int_pos_2;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_29;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = const_str_digest_57ca7d081d85a156c6c788af0d7b001b;
            {
                PyObject *old = var_message;
                assert( old != NULL );
                var_message = tmp_assign_source_30;
                Py_INCREF( var_message );
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__get_densest );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_densest );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_densest" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_10;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_14 = par_A;
        CHECK_OBJECT( var_eligibleRows );
        tmp_args_element_name_15 = var_eligibleRows;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_i_remove;
            var_i_remove = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_11;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_delete );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_2 = par_A;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_i_remove );
        tmp_tuple_element_2 = var_i_remove;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 445;
        tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_32;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_12;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_16 = par_b;
        CHECK_OBJECT( var_i_remove );
        tmp_args_element_name_17 = var_i_remove;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_33 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_delete, call_args );
        }

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_33;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_18;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_svd );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 447;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_11 = tmp_mvar_value_13;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_18 = par_A;
        frame_efec3b0873c99eb9891a325d29853918->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_10, 0, 3 );
        if ( tmp_assign_source_35 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 447;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_11, 1, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 447;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_12, 2, 3 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 447;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_37;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 447;
                    goto try_except_handler_9;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 447;
            goto try_except_handler_9;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
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

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_38 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_U;
            assert( old != NULL );
            var_U = tmp_assign_source_38;
            Py_INCREF( var_U );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_39 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_s;
            assert( old != NULL );
            var_s = tmp_assign_source_39;
            Py_INCREF( var_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
        tmp_assign_source_40 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_Vh;
            assert( old != NULL );
            var_Vh = tmp_assign_source_40;
            Py_INCREF( var_Vh );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_A );
        tmp_source_name_9 = par_A;
        tmp_iter_arg_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 448;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
        if ( tmp_assign_source_43 == NULL )
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


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 448;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_43;
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

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 448;
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

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 448;
            goto try_except_handler_11;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_44 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_m;
            assert( old != NULL );
            var_m = tmp_assign_source_44;
            Py_INCREF( var_m );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_45 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_n;
            assert( old != NULL );
            var_n = tmp_assign_source_45;
            Py_INCREF( var_n );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_46;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_7 = var_m;
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_7 = var_n;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_3 = var_s;
        tmp_subscript_name_3 = const_int_neg_1;
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_46 = const_int_0;
        Py_INCREF( tmp_assign_source_46 );
        condexpr_end_2:;
        {
            PyObject *old = var_s_min;
            assert( old != NULL );
            var_s_min = tmp_assign_source_46;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_3 = par_A;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_3 = par_b;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_status;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
        if ( var_message == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 451;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_message;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efec3b0873c99eb9891a325d29853918 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_efec3b0873c99eb9891a325d29853918 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efec3b0873c99eb9891a325d29853918 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_efec3b0873c99eb9891a325d29853918, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_efec3b0873c99eb9891a325d29853918->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_efec3b0873c99eb9891a325d29853918, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_efec3b0873c99eb9891a325d29853918,
        type_description_1,
        par_A,
        par_b,
        var_status,
        var_message,
        var_U,
        var_s,
        var_Vh,
        var_eps,
        var_tol,
        var_m,
        var_n,
        var_s_min,
        var_v,
        var_eligibleRows,
        var_i_remove
    );


    // Release cached frame.
    if ( frame_efec3b0873c99eb9891a325d29853918 == cache_frame_efec3b0873c99eb9891a325d29853918 )
    {
        Py_DECREF( frame_efec3b0873c99eb9891a325d29853918 );
    }
    cache_frame_efec3b0873c99eb9891a325d29853918 = NULL;

    assertFrameObject( frame_efec3b0873c99eb9891a325d29853918 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_Vh );
    var_Vh = NULL;

    Py_XDECREF( var_eps );
    var_eps = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_s_min );
    var_s_min = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_eligibleRows );
    var_eligibleRows = NULL;

    Py_XDECREF( var_i_remove );
    var_i_remove = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_b );
    par_b = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_U );
    var_U = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_Vh );
    var_Vh = NULL;

    Py_XDECREF( var_eps );
    var_eps = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_s_min );
    var_s_min = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_eligibleRows );
    var_eligibleRows = NULL;

    Py_XDECREF( var_i_remove );
    var_i_remove = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_1__row_count(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_1__row_count,
        const_str_plain__row_count,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7e92d6e09c10b7158eb085220b8732c7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_9d760432111e0913d97a513be78a3ff4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_2__get_densest(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_2__get_densest,
        const_str_plain__get_densest,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3eed212459f999be2f5aced7c8957516,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_a10906f10aeed7b831feaf9bfc0b6047,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows,
        const_str_plain__remove_zero_rows,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_71bc195a3546799b28086aba86defe39,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_3db209a3dc99145bd1506a885c70475a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense,
        const_str_plain_bg_update_dense,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fc17c14e41830a62bdb29ca9b61440c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense,
        const_str_plain__remove_redundancy_dense,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c073a08a0a1db8ad98c5c25c5c769dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_638d3471ba85cc3f70980d4d6e225f39,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse,
        const_str_plain__remove_redundancy_sparse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d751c6f08e3dd853072a6c11e91aabe7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_a6732aad0edd29935ba3b157b8304482,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy,
        const_str_plain__remove_redundancy,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_efec3b0873c99eb9891a325d29853918,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_remove_redundancy,
        const_str_digest_db0fd0a7f4d94630403d92557ac42ddf,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_remove_redundancy =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._remove_redundancy",
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

MOD_INIT_DECL( scipy$optimize$_remove_redundancy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_remove_redundancy );
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
    puts("scipy.optimize._remove_redundancy: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._remove_redundancy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._remove_redundancy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_remove_redundancy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_remove_redundancy = Py_InitModule4(
        "scipy.optimize._remove_redundancy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_remove_redundancy = PyModule_Create( &mdef_scipy$optimize$_remove_redundancy );
#endif

    moduledict_scipy$optimize$_remove_redundancy = MODULE_DICT( module_scipy$optimize$_remove_redundancy );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_remove_redundancy,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_remove_redundancy,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_remove_redundancy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_remove_redundancy,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_remove_redundancy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b3117338a7d7f2c2bce08edeabb5b442, module_scipy$optimize$_remove_redundancy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_03387d31a4119474adbb9d7f79941026;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_271405c9355dbbb5f5f2cc7c670d818c;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_03387d31a4119474adbb9d7f79941026 = MAKE_MODULE_FRAME( codeobj_03387d31a4119474adbb9d7f79941026, module_scipy$optimize$_remove_redundancy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_03387d31a4119474adbb9d7f79941026 );
    assert( Py_REFCNT( frame_03387d31a4119474adbb9d7f79941026 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_03387d31a4119474adbb9d7f79941026->m_frame.f_lineno = 7;
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


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_remove_redundancy;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_03387d31a4119474adbb9d7f79941026->m_frame.f_lineno = 8;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_remove_redundancy;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_svd_tuple;
        tmp_level_name_2 = const_int_0;
        frame_03387d31a4119474adbb9d7f79941026->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_svd );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_scipy;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_remove_redundancy;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_03387d31a4119474adbb9d7f79941026->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_scipy, tmp_assign_source_10 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03387d31a4119474adbb9d7f79941026 );
#endif
    popFrameStack();

    assertFrameObject( frame_03387d31a4119474adbb9d7f79941026 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03387d31a4119474adbb9d7f79941026 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03387d31a4119474adbb9d7f79941026, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03387d31a4119474adbb9d7f79941026->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03387d31a4119474adbb9d7f79941026, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_1__row_count(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__row_count, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_2__get_densest(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__get_densest, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_3__remove_zero_rows(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_zero_rows, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_4_bg_update_dense(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain_bg_update_dense, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_5__remove_redundancy_dense(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_redundancy_dense, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_6__remove_redundancy_sparse(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_redundancy_sparse, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_remove_redundancy$$$function_7__remove_redundancy(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain__remove_redundancy, tmp_assign_source_17 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_remove_redundancy, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_remove_redundancy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
