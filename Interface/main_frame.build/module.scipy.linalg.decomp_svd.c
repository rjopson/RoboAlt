/* Generated code for Python module 'scipy.linalg.decomp_svd'
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

/* The "_module_scipy$linalg$decomp_svd" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$decomp_svd;
PyDictObject *moduledict_scipy$linalg$decomp_svd;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_true_true_false_true_str_plain_gesdd_tuple;
static PyObject *const_str_plain_gesXd;
static PyObject *const_str_digest_c6114d7e2f1c214a679183d1f75a3b74;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_clip;
extern PyObject *const_float_minus_1_0;
static PyObject *const_str_digest_ee6c76274704a5a298384bdaf6114c01;
extern PyObject *const_str_plain_full_matrices;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain_subspace_angles;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_vh;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_null_space;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_mu_arcsin;
extern PyObject *const_str_plain_check_finite;
static PyObject *const_str_plain_gesdd;
extern PyObject *const_str_plain_rcond;
static PyObject *const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_misc;
static PyObject *const_str_digest_7af1a27a340aa99d81b83fcee7373899;
static PyObject *const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_plain_MorN;
extern PyObject *const_dict_e8bfcf313e93c8e8c56e2d69ca29191f;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_gesdd_str_plain_gesvd_tuple;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_f1f48286cda6ec4b19eefa17457b7442;
extern PyObject *const_str_plain__asarray_validated;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_digest_2ee35200c077062368ccd045d5df709c;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_digest_a3732a707b1e44f228055ec24f2f3b1d;
extern PyObject *const_str_digest_c88389693d9d476899c1c6e170568469;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_orth;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_gesvd;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_690e8b15565aa0ef00512b85f74f8e1b;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_svdvals;
extern PyObject *const_tuple_false_true_tuple;
extern PyObject *const_str_plain__compute_lwork;
static PyObject *const_str_plain_QA;
static PyObject *const_str_digest_7086568a64655f738277e2bc22da24ce;
static PyObject *const_str_digest_0c39d200ded31c2581c2a7fc2ed92d44;
static PyObject *const_str_digest_3664baf8871dbde0bdf66682f4e2f0d7;
extern PyObject *const_str_plain_mask;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_QB;
extern PyObject *const_str_plain_a1;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_conj;
extern PyObject *const_str_plain_svd;
static PyObject *const_str_plain__lwork;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_theta;
extern PyObject *const_str_plain_lwork;
extern PyObject *const_str_plain_decomp;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_dc38c1649ed68a0a0b6c8845a5cd5b19;
extern PyObject *const_str_plain_Q;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_68b82079c84c58b116b458d6c6746f3e;
static PyObject *const_str_digest_7f8704c818be45245120955da9cdd1ca;
static PyObject *const_str_digest_3a770c25905ae180e882f73cb105a7e5;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_lapack_driver;
static PyObject *const_str_digest_1da054f02cadce95dba5dfdab7f3725a;
extern PyObject *const_str_plain_LinAlgError;
static PyObject *const_str_plain_QA_T_QB;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_digest_de0c6847662d5cb3d481efc9ac014953;
static PyObject *const_list_e3ec01cae17e20ef51e974728c92b399_list;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_B;
extern PyObject *const_dict_ec6cc0116ef299a274b2baadbcdeac09;
extern PyObject *const_str_plain_part;
static PyObject *const_str_plain_diagsvd;
extern PyObject *const_str_plain_shape;
extern PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_dict_879d90f7995f6ab655dbe7fad38230a5;
static PyObject *const_str_plain_gesXd_lwork;
extern PyObject *const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple;
static PyObject *const_dict_6ffe2e279d27f6752f88d3a0393da779;
static PyObject *const_str_digest_08f115f9d458a23fa4374a70b0ba665e;
extern PyObject *const_tuple_str_plain__asarray_validated_tuple;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_funcs;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_typ;
static PyObject *const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple;
extern PyObject *const_str_plain_sigma;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_str_plain__compute_lwork_tuple;
extern PyObject *const_str_plain_M;
static PyObject *const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple;
extern PyObject *const_str_plain_amax;
extern PyObject *const_str_plain_compute_uv;
static PyObject *const_str_digest_31ef2994e27c08249d1704bd7c3402b6;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_arcsin;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_u;
static PyObject *const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_3f13bd237055d51350db4cf763e03c7d;
extern PyObject *const_str_plain_info;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain__datacopied;
static PyObject *const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple;
extern PyObject *const_str_plain_arccos;
extern PyObject *const_tuple_str_digest_a3732a707b1e44f228055ec24f2f3b1d_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_true_true_false_true_str_plain_gesdd_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_str_plain_gesdd_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_str_plain_gesdd_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_str_plain_gesdd_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_str_plain_gesdd_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_str_plain_gesdd = UNSTREAM_STRING_ASCII( &constant_bin[ 3335947 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_true_true_false_true_str_plain_gesdd_tuple, 4, const_str_plain_gesdd ); Py_INCREF( const_str_plain_gesdd );
    const_str_plain_gesXd = UNSTREAM_STRING_ASCII( &constant_bin[ 4632832 ], 5, 1 );
    const_str_digest_c6114d7e2f1c214a679183d1f75a3b74 = UNSTREAM_STRING_ASCII( &constant_bin[ 4632837 ], 23, 0 );
    const_str_digest_ee6c76274704a5a298384bdaf6114c01 = UNSTREAM_STRING_ASCII( &constant_bin[ 4632860 ], 871, 0 );
    const_str_plain_subspace_angles = UNSTREAM_STRING_ASCII( &constant_bin[ 4462815 ], 15, 1 );
    const_str_plain_mu_arcsin = UNSTREAM_STRING_ASCII( &constant_bin[ 4633731 ], 9, 1 );
    const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 1, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 2, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    const_str_digest_7af1a27a340aa99d81b83fcee7373899 = UNSTREAM_STRING_ASCII( &constant_bin[ 4633740 ], 26, 0 );
    const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 2, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 3, const_str_plain_part ); Py_INCREF( const_str_plain_part );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 4, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    const_str_plain_MorN = UNSTREAM_STRING_ASCII( &constant_bin[ 4633766 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 5, const_str_plain_MorN ); Py_INCREF( const_str_plain_MorN );
    const_tuple_str_plain_gesdd_str_plain_gesvd_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gesdd_str_plain_gesvd_tuple, 0, const_str_plain_gesdd ); Py_INCREF( const_str_plain_gesdd );
    const_str_plain_gesvd = UNSTREAM_STRING_ASCII( &constant_bin[ 4633770 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_gesdd_str_plain_gesvd_tuple, 1, const_str_plain_gesvd ); Py_INCREF( const_str_plain_gesvd );
    const_str_digest_f1f48286cda6ec4b19eefa17457b7442 = UNSTREAM_STRING_ASCII( &constant_bin[ 4633775 ], 50, 0 );
    const_str_digest_690e8b15565aa0ef00512b85f74f8e1b = UNSTREAM_STRING_ASCII( &constant_bin[ 4633825 ], 28, 0 );
    const_str_plain_QA = UNSTREAM_STRING_ASCII( &constant_bin[ 1294088 ], 2, 1 );
    const_str_digest_7086568a64655f738277e2bc22da24ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4633853 ], 27, 0 );
    const_str_digest_0c39d200ded31c2581c2a7fc2ed92d44 = UNSTREAM_STRING_ASCII( &constant_bin[ 4633880 ], 1642, 0 );
    const_str_digest_3664baf8871dbde0bdf66682f4e2f0d7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4635522 ], 3041, 0 );
    const_str_plain_QB = UNSTREAM_STRING_ASCII( &constant_bin[ 76253 ], 2, 1 );
    const_str_plain__lwork = UNSTREAM_STRING_ASCII( &constant_bin[ 4467632 ], 6, 1 );
    const_str_digest_dc38c1649ed68a0a0b6c8845a5cd5b19 = UNSTREAM_STRING_ASCII( &constant_bin[ 4638563 ], 32, 0 );
    const_str_digest_68b82079c84c58b116b458d6c6746f3e = UNSTREAM_STRING_ASCII( &constant_bin[ 4638595 ], 31, 0 );
    const_str_digest_7f8704c818be45245120955da9cdd1ca = UNSTREAM_STRING_ASCII( &constant_bin[ 4638626 ], 56, 0 );
    const_str_digest_3a770c25905ae180e882f73cb105a7e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 4638682 ], 908, 0 );
    const_str_digest_1da054f02cadce95dba5dfdab7f3725a = UNSTREAM_STRING_ASCII( &constant_bin[ 91719 ], 2, 0 );
    const_str_plain_QA_T_QB = UNSTREAM_STRING_ASCII( &constant_bin[ 4639590 ], 7, 1 );
    const_str_digest_de0c6847662d5cb3d481efc9ac014953 = UNSTREAM_STRING_ASCII( &constant_bin[ 4639597 ], 1257, 0 );
    const_list_e3ec01cae17e20ef51e974728c92b399_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 0, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 1, const_str_plain_svdvals ); Py_INCREF( const_str_plain_svdvals );
    const_str_plain_diagsvd = UNSTREAM_STRING_ASCII( &constant_bin[ 4463919 ], 7, 1 );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 2, const_str_plain_diagsvd ); Py_INCREF( const_str_plain_diagsvd );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 3, const_str_plain_orth ); Py_INCREF( const_str_plain_orth );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 4, const_str_plain_subspace_angles ); Py_INCREF( const_str_plain_subspace_angles );
    PyList_SET_ITEM( const_list_e3ec01cae17e20ef51e974728c92b399_list, 5, const_str_plain_null_space ); Py_INCREF( const_str_plain_null_space );
    const_str_plain_gesXd_lwork = UNSTREAM_STRING_ASCII( &constant_bin[ 4640854 ], 11, 1 );
    const_dict_6ffe2e279d27f6752f88d3a0393da779 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_6ffe2e279d27f6752f88d3a0393da779, const_str_plain_full_matrices, Py_True );
    assert( PyDict_Size( const_dict_6ffe2e279d27f6752f88d3a0393da779 ) == 1 );
    const_str_digest_08f115f9d458a23fa4374a70b0ba665e = UNSTREAM_STRING_ASCII( &constant_bin[ 4640865 ], 30, 0 );
    const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 2, const_str_plain_QA ); Py_INCREF( const_str_plain_QA );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 3, const_str_plain_QB ); Py_INCREF( const_str_plain_QB );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 4, const_str_plain_QA_T_QB ); Py_INCREF( const_str_plain_QA_T_QB );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 5, const_str_plain_sigma ); Py_INCREF( const_str_plain_sigma );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 6, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 7, const_str_plain_mu_arcsin ); Py_INCREF( const_str_plain_mu_arcsin );
    PyTuple_SET_ITEM( const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 8, const_str_plain_theta ); Py_INCREF( const_str_plain_theta );
    const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 1, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 2, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 4, const_str_plain_vh ); Py_INCREF( const_str_plain_vh );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 5, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 6, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 7, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 8, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 9, const_str_plain_Q ); Py_INCREF( const_str_plain_Q );
    const_str_digest_31ef2994e27c08249d1704bd7c3402b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4640895 ], 49, 0 );
    const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 0, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 1, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 2, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 3, const_str_plain_dot ); Py_INCREF( const_str_plain_dot );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 4, const_str_plain_arccos ); Py_INCREF( const_str_plain_arccos );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 5, const_str_plain_arcsin ); Py_INCREF( const_str_plain_arcsin );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 6, const_str_plain_where ); Py_INCREF( const_str_plain_where );
    PyTuple_SET_ITEM( const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple, 7, const_str_plain_clip ); Py_INCREF( const_str_plain_clip );
    const_str_digest_3f13bd237055d51350db4cf763e03c7d = UNSTREAM_STRING_ASCII( &constant_bin[ 4640944 ], 2549, 0 );
    const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 1, const_str_plain_full_matrices ); Py_INCREF( const_str_plain_full_matrices );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 2, const_str_plain_compute_uv ); Py_INCREF( const_str_plain_compute_uv );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 3, const_str_plain_overwrite_a ); Py_INCREF( const_str_plain_overwrite_a );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 4, const_str_plain_check_finite ); Py_INCREF( const_str_plain_check_finite );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 5, const_str_plain_lapack_driver ); Py_INCREF( const_str_plain_lapack_driver );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 6, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 7, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 8, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 9, const_str_plain_funcs ); Py_INCREF( const_str_plain_funcs );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 10, const_str_plain_gesXd ); Py_INCREF( const_str_plain_gesXd );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 11, const_str_plain_gesXd_lwork ); Py_INCREF( const_str_plain_gesXd_lwork );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 12, const_str_plain_lwork ); Py_INCREF( const_str_plain_lwork );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 13, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 14, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 15, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 16, const_str_plain_info ); Py_INCREF( const_str_plain_info );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$decomp_svd( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6f48e2dd38b3ff24504a3acac01268ac;
static PyCodeObject *codeobj_d46afc81ecff68aca4c9946f544c2f4c;
static PyCodeObject *codeobj_4bcbda3f9b34a14be4f884350c585b6c;
static PyCodeObject *codeobj_5c79e53b3d500c564950a3ad70260b86;
static PyCodeObject *codeobj_4c9feb1d80d425841b5bd6a614f32ec6;
static PyCodeObject *codeobj_0b95a2aa1e513efb3f942c14c93fd36d;
static PyCodeObject *codeobj_80021443e03f5c6fa7e1625d93f26d44;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7af1a27a340aa99d81b83fcee7373899 );
    codeobj_6f48e2dd38b3ff24504a3acac01268ac = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc38c1649ed68a0a0b6c8845a5cd5b19, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d46afc81ecff68aca4c9946f544c2f4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diagsvd, 235, const_tuple_c1521c86faa2c26fbc194dd43841bfa6_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4bcbda3f9b34a14be4f884350c585b6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_null_space, 333, const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c79e53b3d500c564950a3ad70260b86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_orth, 286, const_tuple_f74a5c57dce7aa93571441f5c8df4f6a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c9feb1d80d425841b5bd6a614f32ec6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_subspace_angles, 394, const_tuple_8e788edb96b139ee8cd8ae71a2b82462_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0b95a2aa1e513efb3f942c14c93fd36d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_svd, 16, const_tuple_14ab7abc0fcae36cd5c68ccd16c24baf_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80021443e03f5c6fa7e1625d93f26d44 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_svdvals, 142, const_tuple_str_plain_a_str_plain_overwrite_a_str_plain_check_finite_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_1_svd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_2_svdvals( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_3_diagsvd(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_4_orth( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_5_null_space( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_6_subspace_angles(  );


// The module function definitions.
static PyObject *impl_scipy$linalg$decomp_svd$$$function_1_svd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_full_matrices = python_pars[ 1 ];
    PyObject *par_compute_uv = python_pars[ 2 ];
    PyObject *par_overwrite_a = python_pars[ 3 ];
    PyObject *par_check_finite = python_pars[ 4 ];
    PyObject *par_lapack_driver = python_pars[ 5 ];
    PyObject *var_a1 = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_funcs = NULL;
    PyObject *var_gesXd = NULL;
    PyObject *var_gesXd_lwork = NULL;
    PyObject *var_lwork = NULL;
    PyObject *var_u = NULL;
    PyObject *var_s = NULL;
    PyObject *var_v = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0b95a2aa1e513efb3f942c14c93fd36d;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b95a2aa1e513efb3f942c14c93fd36d = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b95a2aa1e513efb3f942c14c93fd36d, codeobj_0b95a2aa1e513efb3f942c14c93fd36d, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b95a2aa1e513efb3f942c14c93fd36d = cache_frame_0b95a2aa1e513efb3f942c14c93fd36d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b95a2aa1e513efb3f942c14c93fd36d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b95a2aa1e513efb3f942c14c93fd36d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__asarray_validated );

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

            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_check_finite;
        CHECK_OBJECT( par_check_finite );
        tmp_dict_value_1 = par_check_finite;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_a1 == NULL );
        var_a1 = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_a1 );
        tmp_source_name_1 = var_a1;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_2ee35200c077062368ccd045d5df709c;
            frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 111;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 111;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_a1 );
        tmp_source_name_2 = var_a1;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 112;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 112;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 112;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_m = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_n = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_overwrite_a );
        tmp_or_left_value_1 = par_overwrite_a;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__datacopied );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__datacopied );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_datacopied" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_a1 );
        tmp_args_element_name_1 = var_a1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_assign_source_7 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_overwrite_a;
            assert( old != NULL );
            par_overwrite_a = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_lapack_driver );
        tmp_isinstance_inst_1 = par_lapack_driver;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_string_types );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_3;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
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
            tmp_make_exception_arg_2 = const_str_digest_08f115f9d458a23fa4374a70b0ba665e;
            frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 116;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_lapack_driver );
        tmp_compexpr_left_2 = par_lapack_driver;
        tmp_compexpr_right_2 = const_tuple_str_plain_gesdd_str_plain_gesvd_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_2;
            tmp_left_name_1 = const_str_digest_f1f48286cda6ec4b19eefa17457b7442;
            CHECK_OBJECT( par_lapack_driver );
            tmp_tuple_element_2 = par_lapack_driver;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
            tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 118;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 118;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_lapack_driver );
        tmp_tuple_element_3 = par_lapack_driver;
        tmp_assign_source_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_lapack_driver );
        tmp_left_name_2 = par_lapack_driver;
        tmp_right_name_2 = const_str_plain__lwork;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_8 );

            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_assign_source_8, 1, tmp_tuple_element_3 );
        assert( var_funcs == NULL );
        var_funcs = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_lapack_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_funcs );
        tmp_args_element_name_3 = var_funcs;
        CHECK_OBJECT( var_a1 );
        tmp_tuple_element_4 = var_a1;
        tmp_args_element_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_4 );
        frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 121;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 121;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 121;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 121;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 121;
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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert( var_gesXd == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_gesXd = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert( var_gesXd_lwork == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_gesXd_lwork = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__compute_lwork );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_lwork );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_lwork" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_gesXd_lwork );
        tmp_tuple_element_5 = var_gesXd_lwork;
        tmp_args_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_a1 );
        tmp_source_name_3 = var_a1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( var_a1 );
        tmp_source_name_4 = var_a1;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_5 );
        tmp_dict_key_2 = const_str_plain_compute_uv;
        CHECK_OBJECT( par_compute_uv );
        tmp_dict_value_2 = par_compute_uv;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_3 = const_str_plain_full_matrices;
        CHECK_OBJECT( par_full_matrices );
        tmp_dict_value_3 = par_full_matrices;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 124;
        tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lwork == NULL );
        var_lwork = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT( var_gesXd );
        tmp_called_name_5 = var_gesXd;
        CHECK_OBJECT( var_a1 );
        tmp_tuple_element_6 = var_a1;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
        tmp_dict_key_4 = const_str_plain_compute_uv;
        CHECK_OBJECT( par_compute_uv );
        tmp_dict_value_4 = par_compute_uv;
        tmp_kw_name_3 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_lwork;
        CHECK_OBJECT( var_lwork );
        tmp_dict_value_5 = var_lwork;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_full_matrices;
        CHECK_OBJECT( par_full_matrices );
        tmp_dict_value_6 = par_full_matrices;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_overwrite_a;
        CHECK_OBJECT( par_overwrite_a );
        tmp_dict_value_7 = par_overwrite_a;
        tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 128;
        tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_5, 0, 4 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_6, 1, 4 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_7, 2, 4 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_8, 3, 4 );
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


            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 128;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_4 == NULL );
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_19;
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

                    type_description_1 = "ooooooooooooooooo";
                    exception_lineno = 128;
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

            type_description_1 = "ooooooooooooooooo";
            exception_lineno = 128;
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
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_u = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_s = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_3;
        assert( var_v == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_v = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_4;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_info = tmp_assign_source_23;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_3 = var_info;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 132;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_6;
            frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 132;
            tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_a3732a707b1e44f228055ec24f2f3b1d_tuple, 0 ) );

            if ( tmp_raise_type_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_4;
            exception_lineno = 132;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_4 = var_info;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_operand_name_2;
            tmp_left_name_3 = const_str_digest_31ef2994e27c08249d1704bd7c3402b6;
            CHECK_OBJECT( var_info );
            tmp_operand_name_2 = var_info;
            tmp_right_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_make_exception_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame.f_lineno = 134;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_4 );
            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 134;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_compute_uv );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_compute_uv );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooooooooooo";
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
            PyObject *tmp_tuple_element_7;
            CHECK_OBJECT( var_u );
            tmp_tuple_element_7 = var_u;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_s );
            tmp_tuple_element_7 = var_s;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_7 );
            CHECK_OBJECT( var_v );
            tmp_tuple_element_7 = var_v;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_7 );
            goto frame_return_exit_1;
        }
        goto branch_end_6;
        branch_no_6:;
        CHECK_OBJECT( var_s );
        tmp_return_value = var_s;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b95a2aa1e513efb3f942c14c93fd36d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b95a2aa1e513efb3f942c14c93fd36d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b95a2aa1e513efb3f942c14c93fd36d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b95a2aa1e513efb3f942c14c93fd36d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b95a2aa1e513efb3f942c14c93fd36d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b95a2aa1e513efb3f942c14c93fd36d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b95a2aa1e513efb3f942c14c93fd36d,
        type_description_1,
        par_a,
        par_full_matrices,
        par_compute_uv,
        par_overwrite_a,
        par_check_finite,
        par_lapack_driver,
        var_a1,
        var_m,
        var_n,
        var_funcs,
        var_gesXd,
        var_gesXd_lwork,
        var_lwork,
        var_u,
        var_s,
        var_v,
        var_info
    );


    // Release cached frame.
    if ( frame_0b95a2aa1e513efb3f942c14c93fd36d == cache_frame_0b95a2aa1e513efb3f942c14c93fd36d )
    {
        Py_DECREF( frame_0b95a2aa1e513efb3f942c14c93fd36d );
    }
    cache_frame_0b95a2aa1e513efb3f942c14c93fd36d = NULL;

    assertFrameObject( frame_0b95a2aa1e513efb3f942c14c93fd36d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_1_svd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_full_matrices );
    Py_DECREF( par_full_matrices );
    par_full_matrices = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_uv );
    Py_DECREF( par_compute_uv );
    par_compute_uv = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)par_lapack_driver );
    Py_DECREF( par_lapack_driver );
    par_lapack_driver = NULL;

    CHECK_OBJECT( (PyObject *)var_a1 );
    Py_DECREF( var_a1 );
    var_a1 = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_funcs );
    Py_DECREF( var_funcs );
    var_funcs = NULL;

    CHECK_OBJECT( (PyObject *)var_gesXd );
    Py_DECREF( var_gesXd );
    var_gesXd = NULL;

    CHECK_OBJECT( (PyObject *)var_gesXd_lwork );
    Py_DECREF( var_gesXd_lwork );
    var_gesXd_lwork = NULL;

    CHECK_OBJECT( (PyObject *)var_lwork );
    Py_DECREF( var_lwork );
    var_lwork = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_full_matrices );
    Py_DECREF( par_full_matrices );
    par_full_matrices = NULL;

    CHECK_OBJECT( (PyObject *)par_compute_uv );
    Py_DECREF( par_compute_uv );
    par_compute_uv = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    CHECK_OBJECT( (PyObject *)par_lapack_driver );
    Py_DECREF( par_lapack_driver );
    par_lapack_driver = NULL;

    Py_XDECREF( var_a1 );
    var_a1 = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_funcs );
    var_funcs = NULL;

    Py_XDECREF( var_gesXd );
    var_gesXd = NULL;

    Py_XDECREF( var_gesXd_lwork );
    var_gesXd_lwork = NULL;

    Py_XDECREF( var_lwork );
    var_lwork = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_1_svd );
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


static PyObject *impl_scipy$linalg$decomp_svd$$$function_2_svdvals( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_overwrite_a = python_pars[ 1 ];
    PyObject *par_check_finite = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_80021443e03f5c6fa7e1625d93f26d44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_80021443e03f5c6fa7e1625d93f26d44 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_80021443e03f5c6fa7e1625d93f26d44, codeobj_80021443e03f5c6fa7e1625d93f26d44, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_80021443e03f5c6fa7e1625d93f26d44 = cache_frame_80021443e03f5c6fa7e1625d93f26d44;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_80021443e03f5c6fa7e1625d93f26d44 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_80021443e03f5c6fa7e1625d93f26d44 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__asarray_validated );

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

            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_check_finite;
        CHECK_OBJECT( par_check_finite );
        tmp_dict_value_1 = par_check_finite;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_80021443e03f5c6fa7e1625d93f26d44->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_a );
        tmp_source_name_1 = par_a;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svd );

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

                exception_lineno = 227;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( par_a );
            tmp_tuple_element_2 = par_a;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_dict_key_2 = const_str_plain_compute_uv;
            tmp_dict_value_2 = const_int_0;
            tmp_kw_name_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_overwrite_a;
            CHECK_OBJECT( par_overwrite_a );
            tmp_dict_value_3 = par_overwrite_a;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_check_finite;
            tmp_dict_value_4 = Py_False;
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            frame_80021443e03f5c6fa7e1625d93f26d44->m_frame.f_lineno = 227;
            tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_a );
            tmp_source_name_2 = par_a;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            assert( !(tmp_res == -1) );
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
                tmp_make_exception_arg_1 = const_str_digest_2ee35200c077062368ccd045d5df709c;
                frame_80021443e03f5c6fa7e1625d93f26d44->m_frame.f_lineno = 230;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 230;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 232;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_3;
                frame_80021443e03f5c6fa7e1625d93f26d44->m_frame.f_lineno = 232;
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 232;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80021443e03f5c6fa7e1625d93f26d44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_80021443e03f5c6fa7e1625d93f26d44 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80021443e03f5c6fa7e1625d93f26d44 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80021443e03f5c6fa7e1625d93f26d44, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80021443e03f5c6fa7e1625d93f26d44->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80021443e03f5c6fa7e1625d93f26d44, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_80021443e03f5c6fa7e1625d93f26d44,
        type_description_1,
        par_a,
        par_overwrite_a,
        par_check_finite
    );


    // Release cached frame.
    if ( frame_80021443e03f5c6fa7e1625d93f26d44 == cache_frame_80021443e03f5c6fa7e1625d93f26d44 )
    {
        Py_DECREF( frame_80021443e03f5c6fa7e1625d93f26d44 );
    }
    cache_frame_80021443e03f5c6fa7e1625d93f26d44 = NULL;

    assertFrameObject( frame_80021443e03f5c6fa7e1625d93f26d44 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_2_svdvals );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_overwrite_a );
    Py_DECREF( par_overwrite_a );
    par_overwrite_a = NULL;

    CHECK_OBJECT( (PyObject *)par_check_finite );
    Py_DECREF( par_check_finite );
    par_check_finite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_2_svdvals );
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


static PyObject *impl_scipy$linalg$decomp_svd$$$function_3_diagsvd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_M = python_pars[ 1 ];
    PyObject *par_N = python_pars[ 2 ];
    PyObject *var_part = NULL;
    PyObject *var_typ = NULL;
    PyObject *var_MorN = NULL;
    struct Nuitka_FrameObject *frame_d46afc81ecff68aca4c9946f544c2f4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d46afc81ecff68aca4c9946f544c2f4c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d46afc81ecff68aca4c9946f544c2f4c, codeobj_d46afc81ecff68aca4c9946f544c2f4c, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d46afc81ecff68aca4c9946f544c2f4c = cache_frame_d46afc81ecff68aca4c9946f544c2f4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d46afc81ecff68aca4c9946f544c2f4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d46afc81ecff68aca4c9946f544c2f4c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_diag );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "diag" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 273;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_d46afc81ecff68aca4c9946f544c2f4c->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_part == NULL );
        var_part = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_part );
        tmp_source_name_2 = var_part;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_typ == NULL );
        var_typ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_s );
        tmp_len_arg_1 = par_s;
        tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_MorN == NULL );
        var_MorN = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_MorN );
        tmp_compexpr_left_1 = var_MorN;
        CHECK_OBJECT( par_M );
        tmp_compexpr_right_1 = par_M;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooooo";
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_r_ );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_r_ );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "r_" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 277;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_2;
            tmp_tuple_element_1 = const_str_digest_1da054f02cadce95dba5dfdab7f3725a;
            tmp_subscript_name_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_part );
            tmp_tuple_element_1 = var_part;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_1 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_zeros );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_subscript_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 277;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_M );
            tmp_tuple_element_2 = par_M;
            tmp_args_element_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_N );
            tmp_left_name_1 = par_N;
            CHECK_OBJECT( par_M );
            tmp_right_name_1 = par_M;
            tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 277;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_typ );
            tmp_args_element_name_3 = var_typ;
            frame_d46afc81ecff68aca4c9946f544c2f4c->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_subscript_name_1 );

                exception_lineno = 277;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_subscript_name_1, 2, tmp_tuple_element_1 );
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 277;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_MorN );
            tmp_compexpr_left_2 = var_MorN;
            CHECK_OBJECT( par_N );
            tmp_compexpr_right_2 = par_N;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 278;
                type_description_1 = "oooooo";
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
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_r_ );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_r_ );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "r_" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 279;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_2 = tmp_mvar_value_4;
                CHECK_OBJECT( var_part );
                tmp_tuple_element_3 = var_part;
                tmp_subscript_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_3 );
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_zeros );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
                }

                if ( tmp_mvar_value_5 == NULL )
                {
                    Py_DECREF( tmp_subscript_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "zeros" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 279;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( par_M );
                tmp_left_name_2 = par_M;
                CHECK_OBJECT( par_N );
                tmp_right_name_2 = par_N;
                tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscript_name_2 );

                    exception_lineno = 279;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_4 );
                CHECK_OBJECT( par_N );
                tmp_tuple_element_4 = par_N;
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_4 );
                CHECK_OBJECT( var_typ );
                tmp_args_element_name_5 = var_typ;
                frame_d46afc81ecff68aca4c9946f544c2f4c->m_frame.f_lineno = 279;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscript_name_2 );

                    exception_lineno = 279;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_3 );
                tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 279;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_7086568a64655f738277e2bc22da24ce;
                frame_d46afc81ecff68aca4c9946f544c2f4c->m_frame.f_lineno = 281;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 281;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d46afc81ecff68aca4c9946f544c2f4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d46afc81ecff68aca4c9946f544c2f4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d46afc81ecff68aca4c9946f544c2f4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d46afc81ecff68aca4c9946f544c2f4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d46afc81ecff68aca4c9946f544c2f4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d46afc81ecff68aca4c9946f544c2f4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d46afc81ecff68aca4c9946f544c2f4c,
        type_description_1,
        par_s,
        par_M,
        par_N,
        var_part,
        var_typ,
        var_MorN
    );


    // Release cached frame.
    if ( frame_d46afc81ecff68aca4c9946f544c2f4c == cache_frame_d46afc81ecff68aca4c9946f544c2f4c )
    {
        Py_DECREF( frame_d46afc81ecff68aca4c9946f544c2f4c );
    }
    cache_frame_d46afc81ecff68aca4c9946f544c2f4c = NULL;

    assertFrameObject( frame_d46afc81ecff68aca4c9946f544c2f4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_3_diagsvd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    CHECK_OBJECT( (PyObject *)var_part );
    Py_DECREF( var_part );
    var_part = NULL;

    CHECK_OBJECT( (PyObject *)var_typ );
    Py_DECREF( var_typ );
    var_typ = NULL;

    CHECK_OBJECT( (PyObject *)var_MorN );
    Py_DECREF( var_MorN );
    var_MorN = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_N );
    Py_DECREF( par_N );
    par_N = NULL;

    Py_XDECREF( var_part );
    var_part = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_MorN );
    var_MorN = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_3_diagsvd );
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


static PyObject *impl_scipy$linalg$decomp_svd$$$function_4_orth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_rcond = python_pars[ 1 ];
    PyObject *var_u = NULL;
    PyObject *var_s = NULL;
    PyObject *var_vh = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_num = NULL;
    PyObject *var_Q = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5c79e53b3d500c564950a3ad70260b86;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_5c79e53b3d500c564950a3ad70260b86 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c79e53b3d500c564950a3ad70260b86, codeobj_5c79e53b3d500c564950a3ad70260b86, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c79e53b3d500c564950a3ad70260b86 = cache_frame_5c79e53b3d500c564950a3ad70260b86;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c79e53b3d500c564950a3ad70260b86 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c79e53b3d500c564950a3ad70260b86 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_879d90f7995f6ab655dbe7fad38230a5 );
        frame_5c79e53b3d500c564950a3ad70260b86->m_frame.f_lineno = 323;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "oooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 323;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 323;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 323;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 323;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooo";
            exception_lineno = 323;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_u = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_s = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_vh == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_vh = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_u );
        tmp_source_name_1 = var_u;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_vh );
        tmp_source_name_2 = var_vh;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 324;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 324;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 324;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 324;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_M = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_N = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_rcond );
        tmp_compexpr_left_1 = par_rcond;
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_s );
            tmp_source_name_5 = var_s;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_5c79e53b3d500c564950a3ad70260b86->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eps );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( var_M );
            tmp_args_element_name_2 = var_M;
            CHECK_OBJECT( var_N );
            tmp_args_element_name_3 = var_N;
            frame_5c79e53b3d500c564950a3ad70260b86->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_rcond;
                assert( old != NULL );
                par_rcond = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_4 = var_s;
        frame_5c79e53b3d500c564950a3ad70260b86->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_amax, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rcond );
        tmp_right_name_2 = par_rcond;
        tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_s );
        tmp_compexpr_left_2 = var_s;
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_2 = var_tol;
        tmp_tuple_element_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 328;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_5c79e53b3d500c564950a3ad70260b86->m_frame.f_lineno = 328;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_num == NULL );
        var_num = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_3 = var_u;
        tmp_tuple_element_4 = const_slice_none_none_none;
        tmp_subscript_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_4 );
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_num );
        tmp_stop_name_1 = var_num;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_4 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_4 );
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Q == NULL );
        var_Q = tmp_assign_source_16;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c79e53b3d500c564950a3ad70260b86 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c79e53b3d500c564950a3ad70260b86 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c79e53b3d500c564950a3ad70260b86, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c79e53b3d500c564950a3ad70260b86->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c79e53b3d500c564950a3ad70260b86, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c79e53b3d500c564950a3ad70260b86,
        type_description_1,
        par_A,
        par_rcond,
        var_u,
        var_s,
        var_vh,
        var_M,
        var_N,
        var_tol,
        var_num,
        var_Q
    );


    // Release cached frame.
    if ( frame_5c79e53b3d500c564950a3ad70260b86 == cache_frame_5c79e53b3d500c564950a3ad70260b86 )
    {
        Py_DECREF( frame_5c79e53b3d500c564950a3ad70260b86 );
    }
    cache_frame_5c79e53b3d500c564950a3ad70260b86 = NULL;

    assertFrameObject( frame_5c79e53b3d500c564950a3ad70260b86 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Q );
    tmp_return_value = var_Q;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_4_orth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_vh );
    Py_DECREF( var_vh );
    var_vh = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_tol );
    Py_DECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_num );
    Py_DECREF( var_num );
    var_num = NULL;

    CHECK_OBJECT( (PyObject *)var_Q );
    Py_DECREF( var_Q );
    var_Q = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_vh );
    var_vh = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_4_orth );
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


static PyObject *impl_scipy$linalg$decomp_svd$$$function_5_null_space( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_rcond = python_pars[ 1 ];
    PyObject *var_u = NULL;
    PyObject *var_s = NULL;
    PyObject *var_vh = NULL;
    PyObject *var_M = NULL;
    PyObject *var_N = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_num = NULL;
    PyObject *var_Q = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4bcbda3f9b34a14be4f884350c585b6c;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_4bcbda3f9b34a14be4f884350c585b6c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bcbda3f9b34a14be4f884350c585b6c, codeobj_4bcbda3f9b34a14be4f884350c585b6c, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bcbda3f9b34a14be4f884350c585b6c = cache_frame_4bcbda3f9b34a14be4f884350c585b6c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bcbda3f9b34a14be4f884350c585b6c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bcbda3f9b34a14be4f884350c585b6c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svd );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ffe2e279d27f6752f88d3a0393da779 );
        frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 384;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "oooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 384;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 384;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 384;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 384;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooo";
            exception_lineno = 384;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_u = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_s = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert( var_vh == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_vh = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_u );
        tmp_source_name_1 = var_u;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_vh );
        tmp_source_name_2 = var_vh;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 385;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_subscript_name_2 = const_int_pos_1;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_iter_arg_2 );

            exception_lineno = 385;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 385;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


            type_description_1 = "oooooooooo";
            exception_lineno = 385;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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
        assert( var_M == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_M = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
        assert( var_N == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_N = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_rcond );
        tmp_compexpr_left_1 = par_rcond;
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_finfo );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_s );
            tmp_source_name_5 = var_s;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 387;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_eps );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_3 != NULL );
            CHECK_OBJECT( var_M );
            tmp_args_element_name_2 = var_M;
            CHECK_OBJECT( var_N );
            tmp_args_element_name_3 = var_N;
            frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 387;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_rcond;
                assert( old != NULL );
                par_rcond = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 388;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_4 = var_s;
        frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_amax, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rcond );
        tmp_right_name_2 = par_rcond;
        tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numpy" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sum );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_s );
        tmp_compexpr_left_2 = var_s;
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_2 = var_tol;
        tmp_tuple_element_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 389;
        tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_num == NULL );
        var_num = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( var_vh );
        tmp_subscribed_name_3 = var_vh;
        CHECK_OBJECT( var_num );
        tmp_start_name_1 = var_num;
        tmp_stop_name_1 = Py_None;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_4 == NULL) );
        tmp_subscript_name_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_4 );
        tmp_tuple_element_4 = const_slice_none_none_none;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_4 );
        tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame.f_lineno = 390;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Q == NULL );
        var_Q = tmp_assign_source_16;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bcbda3f9b34a14be4f884350c585b6c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bcbda3f9b34a14be4f884350c585b6c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bcbda3f9b34a14be4f884350c585b6c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bcbda3f9b34a14be4f884350c585b6c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bcbda3f9b34a14be4f884350c585b6c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bcbda3f9b34a14be4f884350c585b6c,
        type_description_1,
        par_A,
        par_rcond,
        var_u,
        var_s,
        var_vh,
        var_M,
        var_N,
        var_tol,
        var_num,
        var_Q
    );


    // Release cached frame.
    if ( frame_4bcbda3f9b34a14be4f884350c585b6c == cache_frame_4bcbda3f9b34a14be4f884350c585b6c )
    {
        Py_DECREF( frame_4bcbda3f9b34a14be4f884350c585b6c );
    }
    cache_frame_4bcbda3f9b34a14be4f884350c585b6c = NULL;

    assertFrameObject( frame_4bcbda3f9b34a14be4f884350c585b6c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_Q );
    tmp_return_value = var_Q;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_5_null_space );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_vh );
    Py_DECREF( var_vh );
    var_vh = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_tol );
    Py_DECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_num );
    Py_DECREF( var_num );
    var_num = NULL;

    CHECK_OBJECT( (PyObject *)var_Q );
    Py_DECREF( var_Q );
    var_Q = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_vh );
    var_vh = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_5_null_space );
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


static PyObject *impl_scipy$linalg$decomp_svd$$$function_6_subspace_angles( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *var_QA = NULL;
    PyObject *var_QB = NULL;
    PyObject *var_QA_T_QB = NULL;
    PyObject *var_sigma = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_mu_arcsin = NULL;
    PyObject *var_theta = NULL;
    struct Nuitka_FrameObject *frame_4c9feb1d80d425841b5bd6a614f32ec6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4c9feb1d80d425841b5bd6a614f32ec6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c9feb1d80d425841b5bd6a614f32ec6, codeobj_4c9feb1d80d425841b5bd6a614f32ec6, module_scipy$linalg$decomp_svd, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4c9feb1d80d425841b5bd6a614f32ec6 = cache_frame_4c9feb1d80d425841b5bd6a614f32ec6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c9feb1d80d425841b5bd6a614f32ec6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c9feb1d80d425841b5bd6a614f32ec6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__asarray_validated );

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

            exception_lineno = 459;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 459;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "ooooooooo";
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


            exception_lineno = 460;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_2;
            tmp_left_name_1 = const_str_digest_68b82079c84c58b116b458d6c6746f3e;
            CHECK_OBJECT( par_A );
            tmp_source_name_2 = par_A;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 461;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_orth );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orth );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orth" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 462;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_1 = par_A;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_QA == NULL );
        var_QA = tmp_assign_source_2;
    }
    CHECK_OBJECT( par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_B );
        tmp_tuple_element_3 = par_B;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 465;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert( old != NULL );
            par_B = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_B );
        tmp_source_name_3 = par_B;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_len_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
        Py_DECREF( tmp_len_arg_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_4;
            tmp_left_name_2 = const_str_digest_68b82079c84c58b116b458d6c6746f3e;
            CHECK_OBJECT( par_B );
            tmp_source_name_4 = par_B;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_4 );
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 467;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 467;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT( par_B );
        tmp_len_arg_3 = par_B;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 468;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_QA );
        tmp_len_arg_4 = var_QA;
        tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_4 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 468;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_subscript_name_2;
            tmp_left_name_3 = const_str_digest_7f8704c818be45245120955da9cdd1ca;
            CHECK_OBJECT( var_QA );
            tmp_source_name_5 = var_QA;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_B );
            tmp_source_name_6 = par_B;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_3 );

                exception_lineno = 470;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_int_0;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            Py_DECREF( tmp_subscribed_name_2 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_3 );

                exception_lineno = 470;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_5 );
            tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 469;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 469;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_orth );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orth );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "orth" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 471;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_B );
        tmp_args_element_name_2 = par_B;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 471;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 471;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_QB == NULL );
        var_QB = tmp_assign_source_4;
    }
    CHECK_OBJECT( par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_dot );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dot" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        CHECK_OBJECT( var_QA );
        tmp_source_name_7 = var_QA;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_T );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_QB );
        tmp_args_element_name_4 = var_QB;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 475;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_QA_T_QB == NULL );
        var_QA_T_QB = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svdvals );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svdvals );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svdvals" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( var_QA_T_QB );
        tmp_args_element_name_5 = var_QA_T_QB;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 476;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sigma == NULL );
        var_sigma = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_8;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_QA );
        tmp_source_name_8 = var_QA;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_QB );
        tmp_source_name_9 = var_QB;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_pos_1;
        tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 1 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 479;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( var_QB );
            tmp_left_name_4 = var_QB;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_dot );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dot" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 480;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_7;
            CHECK_OBJECT( var_QA );
            tmp_args_element_name_6 = var_QA;
            CHECK_OBJECT( var_QA_T_QB );
            tmp_args_element_name_7 = var_QA_T_QB;
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 480;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( par_B == NULL );
            par_B = tmp_assign_source_7;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( var_QA );
            tmp_left_name_5 = var_QA;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_dot );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dot" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 482;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_8;
            CHECK_OBJECT( var_QB );
            tmp_args_element_name_8 = var_QB;
            CHECK_OBJECT( var_QA_T_QB );
            tmp_source_name_10 = var_QA_T_QB;
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 482;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 482;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 482;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 482;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( par_B == NULL );
            par_B = tmp_assign_source_8;
        }
        branch_end_4:;
    }
    CHECK_OBJECT( var_QA );
    Py_DECREF( var_QA );
    var_QA = NULL;

    CHECK_OBJECT( var_QB );
    Py_DECREF( var_QB );
    var_QB = NULL;

    CHECK_OBJECT( var_QA_T_QB );
    Py_DECREF( var_QA_T_QB );
    var_QA_T_QB = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_sigma );
        tmp_left_name_6 = var_sigma;
        tmp_right_name_6 = const_int_pos_2;
        tmp_compexpr_left_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_float_0_5;
        tmp_assign_source_9 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_mask );
        tmp_called_instance_1 = var_mask;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 487;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_any );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 487;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_10;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_arcsin );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arcsin );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arcsin" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_9 = tmp_mvar_value_9;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_clip );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_clip );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "clip" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_10 = tmp_mvar_value_10;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svdvals );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svdvals );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svdvals" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_11 = tmp_mvar_value_11;
            CHECK_OBJECT( par_B );
            tmp_tuple_element_6 = par_B;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_ec6cc0116ef299a274b2baadbcdeac09 );
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 488;
            tmp_args_element_name_11 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_12 = const_float_minus_1_0;
            tmp_args_element_name_13 = const_float_1_0;
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 488;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
                tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 488;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_mu_arcsin == NULL );
            var_mu_arcsin = tmp_assign_source_10;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = const_float_0_0;
            assert( var_mu_arcsin == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_mu_arcsin = tmp_assign_source_11;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_where );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_where );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "where" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_12;
        CHECK_OBJECT( var_mask );
        tmp_args_element_name_14 = var_mask;
        CHECK_OBJECT( var_mu_arcsin );
        tmp_args_element_name_15 = var_mu_arcsin;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_arccos );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arccos );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "arccos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_13 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_clip );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_clip );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "clip" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_14 = tmp_mvar_value_14;
        CHECK_OBJECT( var_sigma );
        tmp_subscribed_name_5 = var_sigma;
        tmp_subscript_name_5 = const_slice_none_none_int_neg_1;
        tmp_args_element_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = const_float_minus_1_0;
        tmp_args_element_name_20 = const_float_1_0;
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_theta == NULL );
        var_theta = tmp_assign_source_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c9feb1d80d425841b5bd6a614f32ec6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c9feb1d80d425841b5bd6a614f32ec6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c9feb1d80d425841b5bd6a614f32ec6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c9feb1d80d425841b5bd6a614f32ec6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c9feb1d80d425841b5bd6a614f32ec6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c9feb1d80d425841b5bd6a614f32ec6,
        type_description_1,
        par_A,
        par_B,
        var_QA,
        var_QB,
        var_QA_T_QB,
        var_sigma,
        var_mask,
        var_mu_arcsin,
        var_theta
    );


    // Release cached frame.
    if ( frame_4c9feb1d80d425841b5bd6a614f32ec6 == cache_frame_4c9feb1d80d425841b5bd6a614f32ec6 )
    {
        Py_DECREF( frame_4c9feb1d80d425841b5bd6a614f32ec6 );
    }
    cache_frame_4c9feb1d80d425841b5bd6a614f32ec6 = NULL;

    assertFrameObject( frame_4c9feb1d80d425841b5bd6a614f32ec6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_theta );
    tmp_return_value = var_theta;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_6_subspace_angles );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)var_sigma );
    Py_DECREF( var_sigma );
    var_sigma = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_mu_arcsin );
    Py_DECREF( var_mu_arcsin );
    var_mu_arcsin = NULL;

    CHECK_OBJECT( (PyObject *)var_theta );
    Py_DECREF( var_theta );
    var_theta = NULL;

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

    Py_XDECREF( par_A );
    par_A = NULL;

    Py_XDECREF( par_B );
    par_B = NULL;

    Py_XDECREF( var_QA );
    var_QA = NULL;

    Py_XDECREF( var_QB );
    var_QB = NULL;

    Py_XDECREF( var_QA_T_QB );
    var_QA_T_QB = NULL;

    Py_XDECREF( var_sigma );
    var_sigma = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_mu_arcsin );
    var_mu_arcsin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$decomp_svd$$$function_6_subspace_angles );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_1_svd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_1_svd,
        const_str_plain_svd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b95a2aa1e513efb3f942c14c93fd36d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_3664baf8871dbde0bdf66682f4e2f0d7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_2_svdvals( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_2_svdvals,
        const_str_plain_svdvals,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_80021443e03f5c6fa7e1625d93f26d44,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_3f13bd237055d51350db4cf763e03c7d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_3_diagsvd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_3_diagsvd,
        const_str_plain_diagsvd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d46afc81ecff68aca4c9946f544c2f4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_3a770c25905ae180e882f73cb105a7e5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_4_orth( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_4_orth,
        const_str_plain_orth,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5c79e53b3d500c564950a3ad70260b86,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_ee6c76274704a5a298384bdaf6114c01,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_5_null_space( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_5_null_space,
        const_str_plain_null_space,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4bcbda3f9b34a14be4f884350c585b6c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_de0c6847662d5cb3d481efc9ac014953,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_6_subspace_angles(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$decomp_svd$$$function_6_subspace_angles,
        const_str_plain_subspace_angles,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c9feb1d80d425841b5bd6a614f32ec6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$decomp_svd,
        const_str_digest_0c39d200ded31c2581c2a7fc2ed92d44,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$decomp_svd =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.decomp_svd",
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

MOD_INIT_DECL( scipy$linalg$decomp_svd )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$decomp_svd );
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
    puts("scipy.linalg.decomp_svd: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg.decomp_svd: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg.decomp_svd: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$decomp_svd" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$decomp_svd = Py_InitModule4(
        "scipy.linalg.decomp_svd",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$decomp_svd = PyModule_Create( &mdef_scipy$linalg$decomp_svd );
#endif

    moduledict_scipy$linalg$decomp_svd = MODULE_DICT( module_scipy$linalg$decomp_svd );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$decomp_svd,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$decomp_svd,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$decomp_svd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$decomp_svd,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$decomp_svd );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_c6114d7e2f1c214a679183d1f75a3b74, module_scipy$linalg$decomp_svd );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_6f48e2dd38b3ff24504a3acac01268ac;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_690e8b15565aa0ef00512b85f74f8e1b;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_6f48e2dd38b3ff24504a3acac01268ac = MAKE_MODULE_FRAME( codeobj_6f48e2dd38b3ff24504a3acac01268ac, module_scipy$linalg$decomp_svd );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6f48e2dd38b3ff24504a3acac01268ac );
    assert( Py_REFCNT( frame_6f48e2dd38b3ff24504a3acac01268ac ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 2;
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_1439ebbfa84214b5c1ec89d214ee9ef5_tuple;
        tmp_level_name_2 = const_int_0;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_zeros );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_r_ );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_diag );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_dot );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_dot, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_arccos );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_arccos, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_arcsin );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_arcsin, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_where );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_clip );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_clip, tmp_assign_source_17 );
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_misc;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_LinAlgError_str_plain__datacopied_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 8;
        tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$linalg$decomp_svd,
                const_str_plain_LinAlgError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_LinAlgError );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$linalg$decomp_svd,
                const_str_plain__datacopied,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain__datacopied );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__datacopied, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_lapack;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_get_lapack_funcs_str_plain__compute_lwork_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 9;
        tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$linalg$decomp_svd,
                const_str_plain_get_lapack_funcs,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_get_lapack_funcs );
        }

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$linalg$decomp_svd,
                const_str_plain__compute_lwork,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain__compute_lwork );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__compute_lwork, tmp_assign_source_23 );
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_decomp;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain__asarray_validated_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 10;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$linalg$decomp_svd,
                const_str_plain__asarray_validated,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain__asarray_validated );
        }

        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain__asarray_validated, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_c88389693d9d476899c1c6e170568469;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$linalg$decomp_svd;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_string_types_tuple;
        tmp_level_name_6 = const_int_0;
        frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame.f_lineno = 11;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_string_types );
        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_25 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f48e2dd38b3ff24504a3acac01268ac );
#endif
    popFrameStack();

    assertFrameObject( frame_6f48e2dd38b3ff24504a3acac01268ac );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f48e2dd38b3ff24504a3acac01268ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f48e2dd38b3ff24504a3acac01268ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f48e2dd38b3ff24504a3acac01268ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f48e2dd38b3ff24504a3acac01268ac, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = LIST_COPY( const_list_e3ec01cae17e20ef51e974728c92b399_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_true_false_true_str_plain_gesdd_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_1_svd( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_2_svdvals( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_svdvals, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_3_diagsvd(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_diagsvd, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_4_orth( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_orth, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_5_null_space( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_null_space, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$linalg$decomp_svd$$$function_6_subspace_angles(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain_subspace_angles, tmp_assign_source_32 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$decomp_svd, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$decomp_svd );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
