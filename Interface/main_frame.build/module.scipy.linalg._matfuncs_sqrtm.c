/* Generated code for Python module 'scipy.linalg._matfuncs_sqrtm'
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

/* The "_module_scipy$linalg$_matfuncs_sqrtm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_matfuncs_sqrtm;
PyDictObject *moduledict_scipy$linalg$_matfuncs_sqrtm;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ZH;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_schur_str_plain_rsf2csf_tuple;
extern PyObject *const_str_plain_sqrtm;
extern PyObject *const_str_plain_fro;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_conjugate;
static PyObject *const_str_digest_76db8974f0e081ca6628ad161edda3b0;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_14fce830c9f72a6d5b0adab53676ddf8;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_f6f394d16cd484e205ecebc60ab4b9eb;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_blocksize;
static PyObject *const_str_digest_be2d11a56d67485fd900253d13f28480;
extern PyObject *const_str_plain_astype;
static PyObject *const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple;
static PyObject *const_tuple_str_digest_b3c49a6b63dbc111942c392d905d9fe3_tuple;
extern PyObject *const_str_plain_misc;
static PyObject *const_str_digest_b3c49a6b63dbc111942c392d905d9fe3;
static PyObject *const_str_digest_a774836c9cb5760981e21c7a20d22b13;
static PyObject *const_str_digest_1c68e5dbbbcee384126ae37e629437d3;
extern PyObject *const_str_plain_decomp_schur;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__asarray_validated;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_nan;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_ztrsyl_str_plain_dtrsyl_tuple;
extern PyObject *const_str_plain_Z;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_digest_2b11e74014fb2dfa3b348cc72cc7a28c;
static PyObject *const_str_plain_ztrsyl;
extern PyObject *const_str_plain__sqrtm_triu;
extern PyObject *const_str_plain_array_equal;
static PyObject *const_str_plain_failflag;
static PyObject *const_tuple_d3b582d34d57a106b5feb430791201a4_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_disp;
extern PyObject *const_str_plain_arg2;
extern PyObject *const_str_plain_triu;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_keep_it_real;
static PyObject *const_dict_6f53aa7c924977812d087eedfd2bd65a;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_int_0;
extern PyObject *const_tuple_int_pos_64_tuple;
static PyObject *const_str_plain_dtrsyl;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_schur;
static PyObject *const_str_digest_cd34746937a51c7e8ccc85b4839753c7;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_shape;
extern PyObject *const_tuple_type_complex_tuple;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_digest_a3b09b54549e239a8b4050f07bdc2da6;
extern PyObject *const_str_plain_isrealobj;
static PyObject *const_str_digest_535a7341b4877135b2927e9e9ed2fc34;
extern PyObject *const_tuple_str_plain__asarray_validated_tuple;
extern PyObject *const_str_plain_empty_like;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_rsf2csf;
static PyObject *const_tuple_str_digest_a774836c9cb5760981e21c7a20d22b13_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_dot;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_list_str_plain_sqrtm_list;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_T;
static PyObject *const_str_digest_73dd6aefdf67cee64b24a6eb79940f50;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_str_plain_SqrtmError;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_as_inexact;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_true_int_pos_64_tuple;
extern PyObject *const_str_plain_fill;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_76db8974f0e081ca6628ad161edda3b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506494 ], 36, 0 );
    const_str_digest_14fce830c9f72a6d5b0adab53676ddf8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506530 ], 37, 0 );
    const_str_digest_be2d11a56d67485fd900253d13f28480 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506567 ], 35, 0 );
    const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 1, const_str_plain_disp ); Py_INCREF( const_str_plain_disp );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 2, const_str_plain_blocksize ); Py_INCREF( const_str_plain_blocksize );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 3, const_str_plain_keep_it_real ); Py_INCREF( const_str_plain_keep_it_real );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 4, const_str_plain_T ); Py_INCREF( const_str_plain_T );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 5, const_str_plain_Z ); Py_INCREF( const_str_plain_Z );
    const_str_plain_failflag = UNSTREAM_STRING_ASCII( &constant_bin[ 4506602 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 6, const_str_plain_failflag ); Py_INCREF( const_str_plain_failflag );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 7, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 8, const_str_plain_ZH ); Py_INCREF( const_str_plain_ZH );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 9, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 10, const_str_plain_arg2 ); Py_INCREF( const_str_plain_arg2 );
    const_tuple_str_digest_b3c49a6b63dbc111942c392d905d9fe3_tuple = PyTuple_New( 1 );
    const_str_digest_b3c49a6b63dbc111942c392d905d9fe3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506610 ], 37, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b3c49a6b63dbc111942c392d905d9fe3_tuple, 0, const_str_digest_b3c49a6b63dbc111942c392d905d9fe3 ); Py_INCREF( const_str_digest_b3c49a6b63dbc111942c392d905d9fe3 );
    const_str_digest_a774836c9cb5760981e21c7a20d22b13 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506647 ], 29, 0 );
    const_str_digest_1c68e5dbbbcee384126ae37e629437d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4506676 ], 1188, 0 );
    const_tuple_str_plain_ztrsyl_str_plain_dtrsyl_tuple = PyTuple_New( 2 );
    const_str_plain_ztrsyl = UNSTREAM_STRING_ASCII( &constant_bin[ 4507864 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ztrsyl_str_plain_dtrsyl_tuple, 0, const_str_plain_ztrsyl ); Py_INCREF( const_str_plain_ztrsyl );
    const_str_plain_dtrsyl = UNSTREAM_STRING_ASCII( &constant_bin[ 4507870 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ztrsyl_str_plain_dtrsyl_tuple, 1, const_str_plain_dtrsyl ); Py_INCREF( const_str_plain_dtrsyl );
    const_tuple_d3b582d34d57a106b5feb430791201a4_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4507876 ], 209 );
    const_dict_6f53aa7c924977812d087eedfd2bd65a = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_6f53aa7c924977812d087eedfd2bd65a, const_str_plain_check_finite, Py_True );
    PyDict_SetItem( const_dict_6f53aa7c924977812d087eedfd2bd65a, const_str_plain_as_inexact, Py_True );
    assert( PyDict_Size( const_dict_6f53aa7c924977812d087eedfd2bd65a ) == 2 );
    const_str_digest_cd34746937a51c7e8ccc85b4839753c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4508085 ], 122, 0 );
    const_str_digest_535a7341b4877135b2927e9e9ed2fc34 = UNSTREAM_STRING_ASCII( &constant_bin[ 4508207 ], 732, 0 );
    const_tuple_str_digest_a774836c9cb5760981e21c7a20d22b13_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a774836c9cb5760981e21c7a20d22b13_tuple, 0, const_str_digest_a774836c9cb5760981e21c7a20d22b13 ); Py_INCREF( const_str_digest_a774836c9cb5760981e21c7a20d22b13 );
    const_list_str_plain_sqrtm_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_sqrtm_list, 0, const_str_plain_sqrtm ); Py_INCREF( const_str_plain_sqrtm );
    const_str_digest_73dd6aefdf67cee64b24a6eb79940f50 = UNSTREAM_STRING_ASCII( &constant_bin[ 4508939 ], 31, 0 );
    const_tuple_true_int_pos_64_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_true_int_pos_64_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_int_pos_64_tuple, 1, const_int_pos_64 ); Py_INCREF( const_int_pos_64 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$_matfuncs_sqrtm( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9cbda8a5f00164db9f7fd895a0881c3a;
static PyCodeObject *codeobj_edc5e4fa423b46a56791fe5268675718;
static PyCodeObject *codeobj_0cf6cf01f968ad671e9fc776152632f4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_73dd6aefdf67cee64b24a6eb79940f50 );
    codeobj_9cbda8a5f00164db9f7fd895a0881c3a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_14fce830c9f72a6d5b0adab53676ddf8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_edc5e4fa423b46a56791fe5268675718 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sqrtm_triu, 26, const_tuple_d3b582d34d57a106b5feb430791201a4_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0cf6cf01f968ad671e9fc776152632f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sqrtm, 119, const_tuple_f6380bfa6a07449f4099605823e2d8e6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_T = python_pars[ 0 ];
    PyObject *par_blocksize = python_pars[ 1 ];
    PyObject *var_T_diag = NULL;
    PyObject *var_keep_it_real = NULL;
    PyObject *var_R = NULL;
    PyObject *var_n = NULL;
    PyObject *var_nblocks = NULL;
    PyObject *var_bsmall = NULL;
    PyObject *var_nlarge = NULL;
    PyObject *var_blarge = NULL;
    PyObject *var_nsmall = NULL;
    PyObject *var_start_stop_pairs = NULL;
    PyObject *var_start = NULL;
    PyObject *var_count = NULL;
    PyObject *var_size = NULL;
    PyObject *var_i = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_j = NULL;
    PyObject *var_s = NULL;
    PyObject *var_denom = NULL;
    PyObject *var_num = NULL;
    PyObject *var_jstart = NULL;
    PyObject *var_jstop = NULL;
    PyObject *var_istart = NULL;
    PyObject *var_istop = NULL;
    PyObject *var_S = NULL;
    PyObject *var_Rii = NULL;
    PyObject *var_Rjj = NULL;
    PyObject *var_x = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_info = NULL;
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
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    struct Nuitka_FrameObject *frame_edc5e4fa423b46a56791fe5268675718;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
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
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    static struct Nuitka_FrameObject *cache_frame_edc5e4fa423b46a56791fe5268675718 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edc5e4fa423b46a56791fe5268675718, codeobj_edc5e4fa423b46a56791fe5268675718, module_scipy$linalg$_matfuncs_sqrtm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_edc5e4fa423b46a56791fe5268675718 = cache_frame_edc5e4fa423b46a56791fe5268675718;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edc5e4fa423b46a56791fe5268675718 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edc5e4fa423b46a56791fe5268675718 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_T );
        tmp_args_element_name_1 = par_T;
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_diag, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_T_diag == NULL );
        var_T_diag = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_T );
        tmp_args_element_name_2 = par_T;
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_and_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isrealobj, call_args );
        }

        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_T_diag );
        tmp_args_element_name_3 = var_T_diag;
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_min, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_and_right_value_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_keep_it_real == NULL );
        var_keep_it_real = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_keep_it_real );
        tmp_operand_name_1 = var_keep_it_real;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_T_diag );
            tmp_called_instance_4 = var_T_diag;
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 55;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_complex_tuple, 0 ) );

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_T_diag;
                assert( old != NULL );
                var_T_diag = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_diag );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_T_diag );
        tmp_args_element_name_5 = var_T_diag;
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_sqrt, call_args );
        }

        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_T );
        tmp_source_name_2 = par_T;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 59;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 59;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 59;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 59;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_n = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_n;
            assert( old != NULL );
            var_n = tmp_assign_source_9;
            Py_INCREF( var_n );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_7;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( var_n );
        tmp_left_name_1 = var_n;
        CHECK_OBJECT( par_blocksize );
        tmp_right_name_1 = par_blocksize;
        tmp_args_element_name_6 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_7 = const_int_pos_1;
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nblocks == NULL );
        var_nblocks = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_n );
        tmp_left_name_2 = var_n;
        CHECK_OBJECT( var_nblocks );
        tmp_right_name_2 = var_nblocks;
        tmp_iter_arg_2 = BUILTIN_DIVMOD( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 64;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 64;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 64;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 64;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        assert( var_bsmall == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_bsmall = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        assert( var_nlarge == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_nlarge = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_bsmall );
        tmp_left_name_3 = var_bsmall;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_blarge == NULL );
        var_blarge = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_nblocks );
        tmp_left_name_4 = var_nblocks;
        CHECK_OBJECT( var_nlarge );
        tmp_right_name_4 = var_nlarge;
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nsmall == NULL );
        var_nsmall = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_nsmall );
        tmp_left_name_6 = var_nsmall;
        CHECK_OBJECT( var_bsmall );
        tmp_right_name_5 = var_bsmall;
        tmp_left_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nlarge );
        tmp_left_name_7 = var_nlarge;
        CHECK_OBJECT( var_blarge );
        tmp_right_name_7 = var_blarge;
        tmp_right_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_compexpr_right_2 = var_n;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_2b11e74014fb2dfa3b348cc72cc7a28c;
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 68;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_Exception, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 68;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyList_New( 0 );
        assert( var_start_stop_pairs == NULL );
        var_start_stop_pairs = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_int_0;
        assert( var_start == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_start = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_nsmall );
        tmp_tuple_element_2 = var_nsmall;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_bsmall );
        tmp_tuple_element_2 = var_bsmall;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_iter_arg_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_nlarge );
        tmp_tuple_element_3 = var_nlarge;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_blarge );
        tmp_tuple_element_3 = var_blarge;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_1 );
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        assert( !(tmp_assign_source_20 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_21 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 73;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
        tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_23 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
        if ( tmp_assign_source_24 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 73;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 73;
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

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_count;
            var_count = tmp_assign_source_25;
            Py_INCREF( var_count );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_size;
            var_size = tmp_assign_source_26;
            Py_INCREF( var_size );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT( var_count );
        tmp_xrange_low_1 = var_count;
        tmp_iter_arg_5 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_27;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_28 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 74;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_29 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_29;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_start_stop_pairs );
        tmp_source_name_3 = var_start_stop_pairs;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_start );
        tmp_tuple_element_4 = var_start;
        tmp_args_element_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_start );
        tmp_left_name_8 = var_start;
        CHECK_OBJECT( var_size );
        tmp_right_name_8 = var_size;
        tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_4 );
        frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_start );
        tmp_left_name_9 = var_start;
        CHECK_OBJECT( var_size );
        tmp_right_name_9 = var_size;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_30 = tmp_left_name_9;
        var_start = tmp_assign_source_30;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT( var_start_stop_pairs );
        tmp_iter_arg_6 = var_start_stop_pairs;
        tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_3__for_iterator == NULL );
        tmp_for_loop_3__for_iterator = tmp_assign_source_31;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_32 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 79;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
        tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_7 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
        if ( tmp_assign_source_34 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_35;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 79;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 79;
            goto try_except_handler_12;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_36 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_start;
            assert( old != NULL );
            var_start = tmp_assign_source_36;
            Py_INCREF( var_start );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_37 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_stop;
            var_stop = tmp_assign_source_37;
            Py_INCREF( var_stop );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_1;
        CHECK_OBJECT( var_start );
        tmp_xrange_low_2 = var_start;
        CHECK_OBJECT( var_stop );
        tmp_xrange_high_1 = var_stop;
        tmp_iter_arg_8 = BUILTIN_XRANGE2( tmp_xrange_low_2, tmp_xrange_high_1 );
        if ( tmp_iter_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_8 );
        Py_DECREF( tmp_iter_arg_8 );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_38;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT( tmp_for_loop_4__for_iterator );
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_4 );
        if ( tmp_assign_source_39 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_4;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 80;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_for_loop_4__iter_value );
        tmp_assign_source_40 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_40;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_xrange_low_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_xrange_step_1;
        CHECK_OBJECT( var_j );
        tmp_left_name_10 = var_j;
        tmp_right_name_10 = const_int_pos_1;
        tmp_xrange_low_3 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_xrange_low_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT( var_start );
        tmp_left_name_11 = var_start;
        tmp_right_name_11 = const_int_pos_1;
        tmp_xrange_high_2 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_xrange_high_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_xrange_low_3 );

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_xrange_step_1 = const_int_neg_1;
        tmp_iter_arg_9 = BUILTIN_XRANGE3( tmp_xrange_low_3, tmp_xrange_high_2, tmp_xrange_step_1 );
        Py_DECREF( tmp_xrange_low_3 );
        Py_DECREF( tmp_xrange_high_2 );
        if ( tmp_iter_arg_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_9 );
        Py_DECREF( tmp_iter_arg_9 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_for_loop_5__for_iterator );
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_5 );
        if ( tmp_assign_source_42 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_5;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 81;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_for_loop_5__iter_value );
        tmp_assign_source_43 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_43;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = const_int_0;
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_44;
            Py_INCREF( var_s );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( var_j );
        tmp_left_name_12 = var_j;
        CHECK_OBJECT( var_i );
        tmp_right_name_12 = var_i;
        tmp_compexpr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
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
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_start_name_1;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_start_name_2;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_1 = var_R;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_5 = var_i;
            tmp_subscript_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( var_i );
            tmp_left_name_13 = var_i;
            tmp_right_name_13 = const_int_pos_1;
            tmp_start_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_13, tmp_right_name_13 );
            if ( tmp_start_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_1 );

                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_j );
            tmp_stop_name_1 = var_j;
            tmp_step_name_1 = Py_None;
            tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_start_name_1 );
            assert( !(tmp_tuple_element_5 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_5 );
            tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_2 = var_R;
            CHECK_OBJECT( var_i );
            tmp_left_name_14 = var_i;
            tmp_right_name_14 = const_int_pos_1;
            tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_14, tmp_right_name_14 );
            if ( tmp_start_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_j );
            tmp_stop_name_2 = var_j;
            tmp_step_name_2 = Py_None;
            tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_start_name_2 );
            assert( !(tmp_tuple_element_6 == NULL) );
            tmp_subscript_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_6 = var_j;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_6 );
            tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 84;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            {
                PyObject *old = var_s;
                assert( old != NULL );
                var_s = tmp_assign_source_45;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_left_name_15;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_right_name_15;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT( var_R );
        tmp_subscribed_name_3 = var_R;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_7 = var_i;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_i );
        tmp_tuple_element_7 = var_i;
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_7 );
        tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT( var_R );
        tmp_subscribed_name_4 = var_R;
        CHECK_OBJECT( var_j );
        tmp_tuple_element_8 = var_j;
        tmp_subscript_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 0, tmp_tuple_element_8 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_8 = var_j;
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_subscript_name_4, 1, tmp_tuple_element_8 );
        tmp_right_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscript_name_4 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_denom;
            var_denom = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_left_name_16;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_right_name_16;
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_5 = par_T;
        CHECK_OBJECT( var_i );
        tmp_tuple_element_9 = var_i;
        tmp_subscript_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_9 = var_j;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_9 );
        tmp_left_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT( var_s );
        tmp_right_name_16 = var_s;
        tmp_assign_source_47 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_num;
            var_num = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_denom );
        tmp_compexpr_left_4 = var_denom;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_17;
            PyObject *tmp_left_name_18;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_right_name_17;
            PyObject *tmp_right_name_18;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_tuple_element_11;
            CHECK_OBJECT( par_T );
            tmp_subscribed_name_6 = par_T;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_10 = var_i;
            tmp_subscript_name_6 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_10 = var_j;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_10 );
            tmp_left_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_s );
            tmp_right_name_17 = var_s;
            tmp_left_name_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_17 );
            Py_DECREF( tmp_left_name_18 );
            if ( tmp_left_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_denom );
            tmp_right_name_18 = var_denom;
            tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_17 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_R );
            tmp_ass_subscribed_1 = var_R;
            CHECK_OBJECT( var_i );
            tmp_tuple_element_11 = var_i;
            tmp_ass_subscript_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_11 );
            CHECK_OBJECT( var_j );
            tmp_tuple_element_11 = var_j;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_11 );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT( var_denom );
            tmp_compexpr_left_5 = var_denom;
            tmp_compexpr_right_5 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_num );
            tmp_compexpr_left_6 = var_num;
            tmp_compexpr_right_6 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_ass_subscript_2;
                PyObject *tmp_tuple_element_12;
                tmp_ass_subvalue_2 = const_int_0;
                CHECK_OBJECT( var_R );
                tmp_ass_subscribed_2 = var_R;
                CHECK_OBJECT( var_i );
                tmp_tuple_element_12 = var_i;
                tmp_ass_subscript_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_12 );
                PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_12 );
                CHECK_OBJECT( var_j );
                tmp_tuple_element_12 = var_j;
                Py_INCREF( tmp_tuple_element_12 );
                PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_12 );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subscript_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_SqrtmError );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SqrtmError );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SqrtmError" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 92;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }

                tmp_called_name_5 = tmp_mvar_value_6;
                frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 92;
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_digest_b3c49a6b63dbc111942c392d905d9fe3_tuple, 0 ) );

                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 92;
                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 92;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            branch_end_5:;
        }
        branch_end_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
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

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_10;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_xrange_low_4;
        CHECK_OBJECT( var_nblocks );
        tmp_xrange_low_4 = var_nblocks;
        tmp_iter_arg_10 = BUILTIN_XRANGE1( tmp_xrange_low_4 );
        if ( tmp_iter_arg_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_10 );
        Py_DECREF( tmp_iter_arg_10 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_6__for_iterator == NULL );
        tmp_for_loop_6__for_iterator = tmp_assign_source_48;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT( tmp_for_loop_6__for_iterator );
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_49 = ITERATOR_NEXT( tmp_next_source_6 );
        if ( tmp_assign_source_49 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_6;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 95;
                goto try_except_handler_15;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT( tmp_for_loop_6__iter_value );
        tmp_assign_source_50 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_50;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT( var_start_stop_pairs );
        tmp_subscribed_name_7 = var_start_stop_pairs;
        CHECK_OBJECT( var_j );
        tmp_subscript_name_7 = var_j;
        tmp_iter_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_iter_arg_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_11 );
        Py_DECREF( tmp_iter_arg_11 );
        if ( tmp_assign_source_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_51;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
        if ( tmp_assign_source_52 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 96;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
        if ( tmp_assign_source_53 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 96;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_53;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 96;
                    goto try_except_handler_17;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 96;
            goto try_except_handler_17;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_54 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_jstart;
            var_jstart = tmp_assign_source_54;
            Py_INCREF( var_jstart );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_55 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_jstop;
            var_jstop = tmp_assign_source_55;
            Py_INCREF( var_jstop );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_xrange_low_5;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_xrange_high_3;
        PyObject *tmp_xrange_step_2;
        CHECK_OBJECT( var_j );
        tmp_left_name_19 = var_j;
        tmp_right_name_19 = const_int_pos_1;
        tmp_xrange_low_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_xrange_low_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_xrange_high_3 = const_int_neg_1;
        tmp_xrange_step_2 = const_int_neg_1;
        tmp_iter_arg_12 = BUILTIN_XRANGE3( tmp_xrange_low_5, tmp_xrange_high_3, tmp_xrange_step_2 );
        Py_DECREF( tmp_xrange_low_5 );
        if ( tmp_iter_arg_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_assign_source_56 = MAKE_ITERATOR( tmp_iter_arg_12 );
        Py_DECREF( tmp_iter_arg_12 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_56;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_for_loop_7__for_iterator );
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_57 = ITERATOR_NEXT( tmp_next_source_7 );
        if ( tmp_assign_source_57 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_7;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 97;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_57;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_for_loop_7__iter_value );
        tmp_assign_source_58 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_58;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_start_stop_pairs );
        tmp_subscribed_name_8 = var_start_stop_pairs;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_8 = var_i;
        tmp_iter_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_iter_arg_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_13 );
        Py_DECREF( tmp_iter_arg_13 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_59;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
        if ( tmp_assign_source_60 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 98;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
        if ( tmp_assign_source_61 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 98;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_61;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooo";
                    exception_lineno = 98;
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

            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 98;
            goto try_except_handler_20;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_19;
    // End of try:
    try_end_16:;
    goto try_end_17;
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

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
        tmp_assign_source_62 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_istart;
            var_istart = tmp_assign_source_62;
            Py_INCREF( var_istart );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
        tmp_assign_source_63 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_63;
            Py_INCREF( var_istop );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( par_T );
        tmp_subscribed_name_9 = par_T;
        CHECK_OBJECT( var_istart );
        tmp_start_name_3 = var_istart;
        CHECK_OBJECT( var_istop );
        tmp_stop_name_3 = var_istop;
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_13 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_tuple_element_13 == NULL) );
        tmp_subscript_name_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_13 );
        CHECK_OBJECT( var_jstart );
        tmp_start_name_4 = var_jstart;
        CHECK_OBJECT( var_jstop );
        tmp_stop_name_4 = var_jstop;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_13 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        assert( !(tmp_tuple_element_13 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_13 );
        tmp_assign_source_64 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_S;
            var_S = tmp_assign_source_64;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        CHECK_OBJECT( var_j );
        tmp_left_name_20 = var_j;
        CHECK_OBJECT( var_i );
        tmp_right_name_20 = var_i;
        tmp_compexpr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
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
            PyObject *tmp_assign_source_65;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_start_name_5;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_step_name_5;
            PyObject *tmp_start_name_6;
            PyObject *tmp_stop_name_6;
            PyObject *tmp_step_name_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_start_name_7;
            PyObject *tmp_stop_name_7;
            PyObject *tmp_step_name_7;
            PyObject *tmp_start_name_8;
            PyObject *tmp_stop_name_8;
            PyObject *tmp_step_name_8;
            CHECK_OBJECT( var_S );
            tmp_left_name_21 = var_S;
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_10 = var_R;
            CHECK_OBJECT( var_istart );
            tmp_start_name_5 = var_istart;
            CHECK_OBJECT( var_istop );
            tmp_stop_name_5 = var_istop;
            tmp_step_name_5 = Py_None;
            tmp_tuple_element_14 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            assert( !(tmp_tuple_element_14 == NULL) );
            tmp_subscript_name_10 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_14 );
            CHECK_OBJECT( var_istop );
            tmp_start_name_6 = var_istop;
            CHECK_OBJECT( var_jstart );
            tmp_stop_name_6 = var_jstart;
            tmp_step_name_6 = Py_None;
            tmp_tuple_element_14 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
            assert( !(tmp_tuple_element_14 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_14 );
            tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
            Py_DECREF( tmp_subscript_name_10 );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dot );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            CHECK_OBJECT( var_R );
            tmp_subscribed_name_11 = var_R;
            CHECK_OBJECT( var_istop );
            tmp_start_name_7 = var_istop;
            CHECK_OBJECT( var_jstart );
            tmp_stop_name_7 = var_jstart;
            tmp_step_name_7 = Py_None;
            tmp_tuple_element_15 = MAKE_SLICEOBJ3( tmp_start_name_7, tmp_stop_name_7, tmp_step_name_7 );
            assert( !(tmp_tuple_element_15 == NULL) );
            tmp_subscript_name_11 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( var_jstart );
            tmp_start_name_8 = var_jstart;
            CHECK_OBJECT( var_jstop );
            tmp_stop_name_8 = var_jstop;
            tmp_step_name_8 = Py_None;
            tmp_tuple_element_15 = MAKE_SLICEOBJ3( tmp_start_name_8, tmp_stop_name_8, tmp_step_name_8 );
            assert( !(tmp_tuple_element_15 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 1, tmp_tuple_element_15 );
            tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            Py_DECREF( tmp_subscript_name_11 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 101;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 101;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_right_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_assign_source_65 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            {
                PyObject *old = var_S;
                assert( old != NULL );
                var_S = tmp_assign_source_65;
                Py_DECREF( old );
            }

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_start_name_9;
        PyObject *tmp_stop_name_9;
        PyObject *tmp_step_name_9;
        PyObject *tmp_start_name_10;
        PyObject *tmp_stop_name_10;
        PyObject *tmp_step_name_10;
        CHECK_OBJECT( var_R );
        tmp_subscribed_name_12 = var_R;
        CHECK_OBJECT( var_istart );
        tmp_start_name_9 = var_istart;
        CHECK_OBJECT( var_istop );
        tmp_stop_name_9 = var_istop;
        tmp_step_name_9 = Py_None;
        tmp_tuple_element_16 = MAKE_SLICEOBJ3( tmp_start_name_9, tmp_stop_name_9, tmp_step_name_9 );
        assert( !(tmp_tuple_element_16 == NULL) );
        tmp_subscript_name_12 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_12, 0, tmp_tuple_element_16 );
        CHECK_OBJECT( var_istart );
        tmp_start_name_10 = var_istart;
        CHECK_OBJECT( var_istop );
        tmp_stop_name_10 = var_istop;
        tmp_step_name_10 = Py_None;
        tmp_tuple_element_16 = MAKE_SLICEOBJ3( tmp_start_name_10, tmp_stop_name_10, tmp_step_name_10 );
        assert( !(tmp_tuple_element_16 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_12, 1, tmp_tuple_element_16 );
        tmp_assign_source_66 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
        Py_DECREF( tmp_subscript_name_12 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_Rii;
            var_Rii = tmp_assign_source_66;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_start_name_11;
        PyObject *tmp_stop_name_11;
        PyObject *tmp_step_name_11;
        PyObject *tmp_start_name_12;
        PyObject *tmp_stop_name_12;
        PyObject *tmp_step_name_12;
        CHECK_OBJECT( var_R );
        tmp_subscribed_name_13 = var_R;
        CHECK_OBJECT( var_jstart );
        tmp_start_name_11 = var_jstart;
        CHECK_OBJECT( var_jstop );
        tmp_stop_name_11 = var_jstop;
        tmp_step_name_11 = Py_None;
        tmp_tuple_element_17 = MAKE_SLICEOBJ3( tmp_start_name_11, tmp_stop_name_11, tmp_step_name_11 );
        assert( !(tmp_tuple_element_17 == NULL) );
        tmp_subscript_name_13 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 0, tmp_tuple_element_17 );
        CHECK_OBJECT( var_jstart );
        tmp_start_name_12 = var_jstart;
        CHECK_OBJECT( var_jstop );
        tmp_stop_name_12 = var_jstop;
        tmp_step_name_12 = Py_None;
        tmp_tuple_element_17 = MAKE_SLICEOBJ3( tmp_start_name_12, tmp_stop_name_12, tmp_step_name_12 );
        assert( !(tmp_tuple_element_17 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 1, tmp_tuple_element_17 );
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_Rjj;
            var_Rjj = tmp_assign_source_67;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_keep_it_real );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_keep_it_real );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_iter_arg_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_dtrsyl );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtrsyl );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dtrsyl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 110;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( var_Rii );
            tmp_args_element_name_11 = var_Rii;
            CHECK_OBJECT( var_Rjj );
            tmp_args_element_name_12 = var_Rjj;
            CHECK_OBJECT( var_S );
            tmp_args_element_name_13 = var_S;
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 110;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_iter_arg_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_14 );
            Py_DECREF( tmp_iter_arg_14 );
            if ( tmp_assign_source_68 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 110;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_21;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__source_iter;
                tmp_tuple_unpack_7__source_iter = tmp_assign_source_68;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_13, 0, 3 );
            if ( tmp_assign_source_69 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 110;
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_1;
                tmp_tuple_unpack_7__element_1 = tmp_assign_source_69;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_14, 1, 3 );
            if ( tmp_assign_source_70 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 110;
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_2;
                tmp_tuple_unpack_7__element_2 = tmp_assign_source_70;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
            tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_15, 2, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 110;
                goto try_except_handler_22;
            }
            {
                PyObject *old = tmp_tuple_unpack_7__element_3;
                tmp_tuple_unpack_7__element_3 = tmp_assign_source_71;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 110;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 110;
                goto try_except_handler_22;
            }
        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_21;
        // End of try:
        try_end_18:;
        goto try_end_19;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
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

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_18;
        // End of try:
        try_end_19:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
        Py_DECREF( tmp_tuple_unpack_7__source_iter );
        tmp_tuple_unpack_7__source_iter = NULL;

        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
            tmp_assign_source_72 = tmp_tuple_unpack_7__element_1;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_72;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_1 );
        tmp_tuple_unpack_7__element_1 = NULL;

        {
            PyObject *tmp_assign_source_73;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
            tmp_assign_source_73 = tmp_tuple_unpack_7__element_2;
            {
                PyObject *old = var_scale;
                var_scale = tmp_assign_source_73;
                Py_INCREF( var_scale );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_2 );
        tmp_tuple_unpack_7__element_2 = NULL;

        {
            PyObject *tmp_assign_source_74;
            CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
            tmp_assign_source_74 = tmp_tuple_unpack_7__element_3;
            {
                PyObject *old = var_info;
                var_info = tmp_assign_source_74;
                Py_INCREF( var_info );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_7__element_3 );
        tmp_tuple_unpack_7__element_3 = NULL;

        goto branch_end_7;
        branch_no_7:;
        // Tried code:
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_iter_arg_15;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_args_element_name_16;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_ztrsyl );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ztrsyl );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ztrsyl" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 112;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            CHECK_OBJECT( var_Rii );
            tmp_args_element_name_14 = var_Rii;
            CHECK_OBJECT( var_Rjj );
            tmp_args_element_name_15 = var_Rjj;
            CHECK_OBJECT( var_S );
            tmp_args_element_name_16 = var_S;
            frame_edc5e4fa423b46a56791fe5268675718->m_frame.f_lineno = 112;
            {
                PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
                tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
            }

            if ( tmp_iter_arg_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            tmp_assign_source_75 = MAKE_ITERATOR( tmp_iter_arg_15 );
            Py_DECREF( tmp_iter_arg_15 );
            if ( tmp_assign_source_75 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 112;
                type_description_1 = "ooooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__source_iter;
                tmp_tuple_unpack_8__source_iter = tmp_assign_source_75;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_76 = UNPACK_NEXT( tmp_unpack_16, 0, 3 );
            if ( tmp_assign_source_76 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_1;
                tmp_tuple_unpack_8__element_1 = tmp_assign_source_76;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_17, 1, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_2;
                tmp_tuple_unpack_8__element_2 = tmp_assign_source_77;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_18 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_18, 2, 3 );
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


                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_24;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_3;
                tmp_tuple_unpack_8__element_3 = tmp_assign_source_78;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
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

                        type_description_1 = "ooooooooooooooooooooooooooooooo";
                        exception_lineno = 112;
                        goto try_except_handler_24;
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

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_24;
            }
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_23;
        // End of try:
        try_end_20:;
        goto try_end_21;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
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

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_18;
        // End of try:
        try_end_21:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        {
            PyObject *tmp_assign_source_79;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
            tmp_assign_source_79 = tmp_tuple_unpack_8__element_1;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_79;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
        tmp_tuple_unpack_8__element_1 = NULL;

        {
            PyObject *tmp_assign_source_80;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
            tmp_assign_source_80 = tmp_tuple_unpack_8__element_2;
            {
                PyObject *old = var_scale;
                var_scale = tmp_assign_source_80;
                Py_INCREF( var_scale );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
        tmp_tuple_unpack_8__element_2 = NULL;

        {
            PyObject *tmp_assign_source_81;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_3 );
            tmp_assign_source_81 = tmp_tuple_unpack_8__element_3;
            {
                PyObject *old = var_info;
                var_info = tmp_assign_source_81;
                Py_INCREF( var_info );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
        tmp_tuple_unpack_8__element_3 = NULL;

        branch_end_7:;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_start_name_13;
        PyObject *tmp_stop_name_13;
        PyObject *tmp_step_name_13;
        PyObject *tmp_start_name_14;
        PyObject *tmp_stop_name_14;
        PyObject *tmp_step_name_14;
        CHECK_OBJECT( var_x );
        tmp_left_name_22 = var_x;
        CHECK_OBJECT( var_scale );
        tmp_right_name_22 = var_scale;
        tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT( var_R );
        tmp_ass_subscribed_3 = var_R;
        CHECK_OBJECT( var_istart );
        tmp_start_name_13 = var_istart;
        CHECK_OBJECT( var_istop );
        tmp_stop_name_13 = var_istop;
        tmp_step_name_13 = Py_None;
        tmp_tuple_element_18 = MAKE_SLICEOBJ3( tmp_start_name_13, tmp_stop_name_13, tmp_step_name_13 );
        assert( !(tmp_tuple_element_18 == NULL) );
        tmp_ass_subscript_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_18 );
        CHECK_OBJECT( var_jstart );
        tmp_start_name_14 = var_jstart;
        CHECK_OBJECT( var_jstop );
        tmp_stop_name_14 = var_jstop;
        tmp_step_name_14 = Py_None;
        tmp_tuple_element_18 = MAKE_SLICEOBJ3( tmp_start_name_14, tmp_stop_name_14, tmp_step_name_14 );
        assert( !(tmp_tuple_element_18 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_18 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_18;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
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
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_15;
    // End of try:
    try_end_22:;
    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
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
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edc5e4fa423b46a56791fe5268675718 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edc5e4fa423b46a56791fe5268675718 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edc5e4fa423b46a56791fe5268675718, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edc5e4fa423b46a56791fe5268675718->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edc5e4fa423b46a56791fe5268675718, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edc5e4fa423b46a56791fe5268675718,
        type_description_1,
        par_T,
        par_blocksize,
        var_T_diag,
        var_keep_it_real,
        var_R,
        var_n,
        var_nblocks,
        var_bsmall,
        var_nlarge,
        var_blarge,
        var_nsmall,
        var_start_stop_pairs,
        var_start,
        var_count,
        var_size,
        var_i,
        var_stop,
        var_j,
        var_s,
        var_denom,
        var_num,
        var_jstart,
        var_jstop,
        var_istart,
        var_istop,
        var_S,
        var_Rii,
        var_Rjj,
        var_x,
        var_scale,
        var_info
    );


    // Release cached frame.
    if ( frame_edc5e4fa423b46a56791fe5268675718 == cache_frame_edc5e4fa423b46a56791fe5268675718 )
    {
        Py_DECREF( frame_edc5e4fa423b46a56791fe5268675718 );
    }
    cache_frame_edc5e4fa423b46a56791fe5268675718 = NULL;

    assertFrameObject( frame_edc5e4fa423b46a56791fe5268675718 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    CHECK_OBJECT( var_R );
    tmp_return_value = var_R;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    CHECK_OBJECT( (PyObject *)var_T_diag );
    Py_DECREF( var_T_diag );
    var_T_diag = NULL;

    CHECK_OBJECT( (PyObject *)var_keep_it_real );
    Py_DECREF( var_keep_it_real );
    var_keep_it_real = NULL;

    CHECK_OBJECT( (PyObject *)var_R );
    Py_DECREF( var_R );
    var_R = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_nblocks );
    Py_DECREF( var_nblocks );
    var_nblocks = NULL;

    CHECK_OBJECT( (PyObject *)var_bsmall );
    Py_DECREF( var_bsmall );
    var_bsmall = NULL;

    CHECK_OBJECT( (PyObject *)var_nlarge );
    Py_DECREF( var_nlarge );
    var_nlarge = NULL;

    CHECK_OBJECT( (PyObject *)var_blarge );
    Py_DECREF( var_blarge );
    var_blarge = NULL;

    CHECK_OBJECT( (PyObject *)var_nsmall );
    Py_DECREF( var_nsmall );
    var_nsmall = NULL;

    CHECK_OBJECT( (PyObject *)var_start_stop_pairs );
    Py_DECREF( var_start_stop_pairs );
    var_start_stop_pairs = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_denom );
    var_denom = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_jstart );
    var_jstart = NULL;

    Py_XDECREF( var_jstop );
    var_jstop = NULL;

    Py_XDECREF( var_istart );
    var_istart = NULL;

    Py_XDECREF( var_istop );
    var_istop = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_Rii );
    var_Rii = NULL;

    Py_XDECREF( var_Rjj );
    var_Rjj = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_T );
    Py_DECREF( par_T );
    par_T = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    Py_XDECREF( var_T_diag );
    var_T_diag = NULL;

    Py_XDECREF( var_keep_it_real );
    var_keep_it_real = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_nblocks );
    var_nblocks = NULL;

    Py_XDECREF( var_bsmall );
    var_bsmall = NULL;

    Py_XDECREF( var_nlarge );
    var_nlarge = NULL;

    Py_XDECREF( var_blarge );
    var_blarge = NULL;

    Py_XDECREF( var_nsmall );
    var_nsmall = NULL;

    Py_XDECREF( var_start_stop_pairs );
    var_start_stop_pairs = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_count );
    var_count = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_denom );
    var_denom = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_jstart );
    var_jstart = NULL;

    Py_XDECREF( var_jstop );
    var_jstop = NULL;

    Py_XDECREF( var_istart );
    var_istart = NULL;

    Py_XDECREF( var_istop );
    var_istop = NULL;

    Py_XDECREF( var_S );
    var_S = NULL;

    Py_XDECREF( var_Rii );
    var_Rii = NULL;

    Py_XDECREF( var_Rjj );
    var_Rjj = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu );
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


static PyObject *impl_scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_disp = python_pars[ 1 ];
    PyObject *par_blocksize = python_pars[ 2 ];
    PyObject *var_keep_it_real = NULL;
    PyObject *var_T = NULL;
    PyObject *var_Z = NULL;
    nuitka_bool var_failflag = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_R = NULL;
    PyObject *var_ZH = NULL;
    PyObject *var_X = NULL;
    PyObject *var_arg2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0cf6cf01f968ad671e9fc776152632f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_0cf6cf01f968ad671e9fc776152632f4 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0cf6cf01f968ad671e9fc776152632f4, codeobj_0cf6cf01f968ad671e9fc776152632f4, module_scipy$linalg$_matfuncs_sqrtm, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0cf6cf01f968ad671e9fc776152632f4 = cache_frame_0cf6cf01f968ad671e9fc776152632f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0cf6cf01f968ad671e9fc776152632f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0cf6cf01f968ad671e9fc776152632f4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6f53aa7c924977812d087eedfd2bd65a );
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 163;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert( old != NULL );
            par_A = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_76db8974f0e081ca6628ad161edda3b0;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 165;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_blocksize );
        tmp_compexpr_left_2 = par_blocksize;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_be2d11a56d67485fd900253d13f28480;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 167;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 167;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 168;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isrealobj, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        assert( var_keep_it_real == NULL );
        var_keep_it_real = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_keep_it_real );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_keep_it_real );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_schur );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_schur );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "schur" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 170;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_2 = par_A;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "ooooooboooo";
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
            tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "ooooooboooo";
                exception_lineno = 170;
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
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "ooooooboooo";
                exception_lineno = 170;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                        type_description_1 = "ooooooboooo";
                        exception_lineno = 170;
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

                type_description_1 = "ooooooboooo";
                exception_lineno = 170;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
            assert( var_T == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_T = tmp_assign_source_6;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
            assert( var_Z == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_Z = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array_equal );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_T );
            tmp_args_element_name_3 = var_T;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_5;
            CHECK_OBJECT( var_T );
            tmp_args_element_name_5 = var_T;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 171;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_triu, call_args );
            }

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 171;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_rsf2csf );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rsf2csf );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "rsf2csf" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 172;
                    type_description_1 = "ooooooboooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_4 = tmp_mvar_value_6;
                CHECK_OBJECT( var_T );
                tmp_args_element_name_6 = var_T;
                CHECK_OBJECT( var_Z );
                tmp_args_element_name_7 = var_Z;
                frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 172;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 172;
                    type_description_1 = "ooooooboooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 172;
                    type_description_1 = "ooooooboooo";
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_2__source_iter == NULL );
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
                if ( tmp_assign_source_9 == NULL )
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


                    type_description_1 = "ooooooboooo";
                    exception_lineno = 172;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_1 == NULL );
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
                tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
                tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
                if ( tmp_assign_source_10 == NULL )
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


                    type_description_1 = "ooooooboooo";
                    exception_lineno = 172;
                    goto try_except_handler_5;
                }
                assert( tmp_tuple_unpack_2__element_2 == NULL );
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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

                            type_description_1 = "ooooooboooo";
                            exception_lineno = 172;
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

                    type_description_1 = "ooooooboooo";
                    exception_lineno = 172;
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
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
                tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
                {
                    PyObject *old = var_T;
                    assert( old != NULL );
                    var_T = tmp_assign_source_11;
                    Py_INCREF( var_T );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_1 );
            tmp_tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
                tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
                {
                    PyObject *old = var_Z;
                    assert( old != NULL );
                    var_Z = tmp_assign_source_12;
                    Py_INCREF( var_Z );
                    Py_DECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_2__element_2 );
            tmp_tuple_unpack_2__element_2 = NULL;

            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_schur );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_schur );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "schur" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 174;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_6;
            }

            tmp_called_name_5 = tmp_mvar_value_7;
            CHECK_OBJECT( par_A );
            tmp_tuple_element_2 = par_A;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_f6f394d16cd484e205ecebc60ab4b9eb );
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 174;
            tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_13;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
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


                type_description_1 = "ooooooboooo";
                exception_lineno = 174;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
            if ( tmp_assign_source_15 == NULL )
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


                type_description_1 = "ooooooboooo";
                exception_lineno = 174;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_15;
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

                        type_description_1 = "ooooooboooo";
                        exception_lineno = 174;
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

                type_description_1 = "ooooooboooo";
                exception_lineno = 174;
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
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_16 = tmp_tuple_unpack_3__element_1;
            assert( var_T == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_T = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_17 = tmp_tuple_unpack_3__element_2;
            assert( var_Z == NULL );
            Py_INCREF( tmp_assign_source_17 );
            var_Z = tmp_assign_source_17;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        branch_end_3:;
    }
    {
        nuitka_bool tmp_assign_source_18;
        tmp_assign_source_18 = NUITKA_BOOL_FALSE;
        var_failflag = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain__sqrtm_triu );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sqrtm_triu );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sqrtm_triu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }

        tmp_called_name_6 = tmp_mvar_value_8;
        if ( var_T == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "T" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }

        tmp_tuple_element_3 = var_T;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_dict_key_1 = const_str_plain_blocksize;
        CHECK_OBJECT( par_blocksize );
        tmp_dict_value_1 = par_blocksize;
        tmp_kw_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 177;
        tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        assert( var_R == NULL );
        var_R = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 178;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }

        tmp_source_name_4 = tmp_mvar_value_9;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_conjugate );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        if ( var_Z == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 178;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }

        tmp_args_element_name_8 = var_Z;
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        assert( var_ZH == NULL );
        var_ZH = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        if ( var_Z == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Z" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 179;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_4 = var_Z;
        CHECK_OBJECT( var_R );
        tmp_args_element_name_9 = var_R;
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT( var_ZH );
        tmp_args_element_name_10 = var_ZH;
        frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_8;
        }
        assert( var_X == NULL );
        var_X = tmp_assign_source_21;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_0cf6cf01f968ad671e9fc776152632f4, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_0cf6cf01f968ad671e9fc776152632f4, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_10;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_SqrtmError );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SqrtmError );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SqrtmError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 180;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_9;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_10;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_22;
            tmp_assign_source_22 = NUITKA_BOOL_TRUE;
            var_failflag = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 182;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }

            tmp_called_instance_5 = tmp_mvar_value_11;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_11 = par_A;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assign_source_23 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_empty_like, call_args );
            }

            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }
            assert( var_X == NULL );
            var_X = tmp_assign_source_23;
        }
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT( var_X );
            tmp_source_name_5 = var_X;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fill );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 183;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }

            tmp_source_name_6 = tmp_mvar_value_12;
            tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nan );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 183;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 183;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_9;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_5;
        branch_no_5:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 176;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0cf6cf01f968ad671e9fc776152632f4->m_frame) frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooboooo";
        goto try_except_handler_9;
        branch_end_5:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm );
    return NULL;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_disp );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_disp );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_7;
            if ( var_failflag == NUITKA_BOOL_UNASSIGNED )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "failflag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 186;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }

            tmp_condition_result_7 = var_failflag;
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
                PyObject *tmp_called_name_9;
                PyObject *tmp_call_result_2;
                tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_print );
                assert( tmp_called_name_9 != NULL );
                frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 187;
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_a774836c9cb5760981e21c7a20d22b13_tuple, 0 ) );

                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 187;
                    type_description_1 = "ooooooboooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_7:;
        }
        if ( var_X == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "X" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "ooooooboooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_X;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_6;
        branch_no_6:;
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_left_name_3;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_14;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }

            tmp_called_name_10 = tmp_mvar_value_13;
            if ( var_X == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "X" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }

            tmp_source_name_7 = var_X;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            if ( var_X == NULL )
            {
                Py_DECREF( tmp_called_name_11 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "X" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }

            tmp_args_element_name_14 = var_X;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 191;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( par_A );
            tmp_right_name_1 = par_A;
            tmp_args_element_name_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            tmp_args_element_name_15 = const_str_plain_fro;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 191;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_15 };
                tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            tmp_right_name_2 = const_int_pos_2;
            tmp_left_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_14 == NULL )
            {
                Py_DECREF( tmp_left_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }

            tmp_called_name_12 = tmp_mvar_value_14;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_16 = par_A;
            tmp_args_element_name_17 = const_str_plain_fro;
            frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = 191;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_10;
            }
            assert( var_arg2 == NULL );
            var_arg2 = tmp_assign_source_24;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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

        if ( exception_keeper_tb_9 == NULL )
        {
            exception_keeper_tb_9 = MAKE_TRACEBACK( frame_0cf6cf01f968ad671e9fc776152632f4, exception_keeper_lineno_9 );
        }
        else if ( exception_keeper_lineno_9 != 0 )
        {
            exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_0cf6cf01f968ad671e9fc776152632f4, exception_keeper_lineno_9 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
        PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_4 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "ooooooboooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_25;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_15;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 194;
                    type_description_1 = "ooooooboooo";
                    goto try_except_handler_11;
                }

                tmp_source_name_8 = tmp_mvar_value_15;
                tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inf );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "ooooooboooo";
                    goto try_except_handler_11;
                }
                assert( var_arg2 == NULL );
                var_arg2 = tmp_assign_source_25;
            }
            goto branch_end_8;
            branch_no_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 190;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_0cf6cf01f968ad671e9fc776152632f4->m_frame) frame_0cf6cf01f968ad671e9fc776152632f4->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooboooo";
            goto try_except_handler_11;
            branch_end_8:;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        try_end_10:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
        goto try_end_9;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm );
        return NULL;
        // End of try:
        try_end_9:;
        {
            PyObject *tmp_tuple_element_4;
            if ( var_X == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "X" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 196;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = var_X;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
            if ( var_arg2 == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arg2" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 196;
                type_description_1 = "ooooooboooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = var_arg2;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
            goto frame_return_exit_1;
        }
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cf6cf01f968ad671e9fc776152632f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cf6cf01f968ad671e9fc776152632f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cf6cf01f968ad671e9fc776152632f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0cf6cf01f968ad671e9fc776152632f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0cf6cf01f968ad671e9fc776152632f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0cf6cf01f968ad671e9fc776152632f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cf6cf01f968ad671e9fc776152632f4,
        type_description_1,
        par_A,
        par_disp,
        par_blocksize,
        var_keep_it_real,
        var_T,
        var_Z,
        (int)var_failflag,
        var_R,
        var_ZH,
        var_X,
        var_arg2
    );


    // Release cached frame.
    if ( frame_0cf6cf01f968ad671e9fc776152632f4 == cache_frame_0cf6cf01f968ad671e9fc776152632f4 )
    {
        Py_DECREF( frame_0cf6cf01f968ad671e9fc776152632f4 );
    }
    cache_frame_0cf6cf01f968ad671e9fc776152632f4 = NULL;

    assertFrameObject( frame_0cf6cf01f968ad671e9fc776152632f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    CHECK_OBJECT( (PyObject *)var_keep_it_real );
    Py_DECREF( var_keep_it_real );
    var_keep_it_real = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_ZH );
    var_ZH = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_arg2 );
    var_arg2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_blocksize );
    Py_DECREF( par_blocksize );
    par_blocksize = NULL;

    Py_XDECREF( var_keep_it_real );
    var_keep_it_real = NULL;

    Py_XDECREF( var_T );
    var_T = NULL;

    Py_XDECREF( var_Z );
    var_Z = NULL;

    Py_XDECREF( var_R );
    var_R = NULL;

    Py_XDECREF( var_ZH );
    var_ZH = NULL;

    Py_XDECREF( var_X );
    var_X = NULL;

    Py_XDECREF( var_arg2 );
    var_arg2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu,
        const_str_plain__sqrtm_triu,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_edc5e4fa423b46a56791fe5268675718,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_matfuncs_sqrtm,
        const_str_digest_535a7341b4877135b2927e9e9ed2fc34,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm,
        const_str_plain_sqrtm,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0cf6cf01f968ad671e9fc776152632f4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_matfuncs_sqrtm,
        const_str_digest_1c68e5dbbbcee384126ae37e629437d3,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$_matfuncs_sqrtm =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg._matfuncs_sqrtm",
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

MOD_INIT_DECL( scipy$linalg$_matfuncs_sqrtm )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$_matfuncs_sqrtm );
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
    puts("scipy.linalg._matfuncs_sqrtm: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._matfuncs_sqrtm: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._matfuncs_sqrtm: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$_matfuncs_sqrtm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$_matfuncs_sqrtm = Py_InitModule4(
        "scipy.linalg._matfuncs_sqrtm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$_matfuncs_sqrtm = PyModule_Create( &mdef_scipy$linalg$_matfuncs_sqrtm );
#endif

    moduledict_scipy$linalg$_matfuncs_sqrtm = MODULE_DICT( module_scipy$linalg$_matfuncs_sqrtm );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$_matfuncs_sqrtm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$_matfuncs_sqrtm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_matfuncs_sqrtm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_matfuncs_sqrtm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$_matfuncs_sqrtm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a3b09b54549e239a8b4050f07bdc2da6, module_scipy$linalg$_matfuncs_sqrtm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_9cbda8a5f00164db9f7fd895a0881c3a;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$linalg$_matfuncs_sqrtm_22 = NULL;
    PyObject *tmp_dictset_value;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_cd34746937a51c7e8ccc85b4839753c7;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_9cbda8a5f00164db9f7fd895a0881c3a = MAKE_MODULE_FRAME( codeobj_9cbda8a5f00164db9f7fd895a0881c3a, module_scipy$linalg$_matfuncs_sqrtm );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9cbda8a5f00164db9f7fd895a0881c3a );
    assert( Py_REFCNT( frame_9cbda8a5f00164db9f7fd895a0881c3a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 7;
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_assign_source_8 = LIST_COPY( const_list_str_plain_sqrtm_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 11;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_dbc049f94600503bfbd8944e5239d7ae;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain__asarray_validated_tuple;
        tmp_level_name_2 = const_int_0;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__asarray_validated );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain__asarray_validated, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_misc;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_norm_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 17;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm,
                const_str_plain_norm,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_norm );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_lapack;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_ztrsyl_str_plain_dtrsyl_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 18;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

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
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm,
                const_str_plain_ztrsyl,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ztrsyl );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_ztrsyl, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm,
                const_str_plain_dtrsyl,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_dtrsyl );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_dtrsyl, tmp_assign_source_14 );
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_decomp_schur;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_schur_str_plain_rsf2csf_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 19;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm,
                const_str_plain_schur,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_schur );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_schur, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$linalg$_matfuncs_sqrtm,
                const_str_plain_rsf2csf,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_rsf2csf );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_rsf2csf, tmp_assign_source_17 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 22;

            goto try_except_handler_4;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LinAlgError );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_assign_source_18 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
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


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
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


            exception_lineno = 22;

            goto try_except_handler_4;
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


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_3 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___prepare__ );
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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_4 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            tmp_tuple_element_2 = const_str_plain_SqrtmError;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 22;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_21;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_5 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_4;
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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_4;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_6 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_6 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_6 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 22;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 22;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 22;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_4;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_22;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$linalg$_matfuncs_sqrtm_22 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a3b09b54549e239a8b4050f07bdc2da6;
        tmp_res = PyObject_SetItem( locals_scipy$linalg$_matfuncs_sqrtm_22, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_SqrtmError;
        tmp_res = PyObject_SetItem( locals_scipy$linalg$_matfuncs_sqrtm_22, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_SqrtmError;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_scipy$linalg$_matfuncs_sqrtm_22;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame.f_lineno = 22;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 22;

                goto try_except_handler_6;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF( locals_scipy$linalg$_matfuncs_sqrtm_22 );
        locals_scipy$linalg$_matfuncs_sqrtm_22 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF( locals_scipy$linalg$_matfuncs_sqrtm_22 );
        locals_scipy$linalg$_matfuncs_sqrtm_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$linalg$_matfuncs_sqrtm );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_SqrtmError, tmp_assign_source_23 );
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cbda8a5f00164db9f7fd895a0881c3a );
#endif
    popFrameStack();

    assertFrameObject( frame_9cbda8a5f00164db9f7fd895a0881c3a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9cbda8a5f00164db9f7fd895a0881c3a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9cbda8a5f00164db9f7fd895a0881c3a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9cbda8a5f00164db9f7fd895a0881c3a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9cbda8a5f00164db9f7fd895a0881c3a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_64_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_1__sqrtm_triu( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain__sqrtm_triu, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_true_int_pos_64_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$linalg$_matfuncs_sqrtm$$$function_2_sqrtm( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain_sqrtm, tmp_assign_source_26 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_matfuncs_sqrtm, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$_matfuncs_sqrtm );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
