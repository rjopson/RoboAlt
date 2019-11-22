/* Generated code for Python module 'scipy.linalg._solvers'
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

/* The "_module_scipy$linalg$_solvers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_solvers;
PyDictObject *moduledict_scipy$linalg$_solvers;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_cd695e80259c2a00539c549ff5134ed9;
static PyObject *const_tuple_str_plain_trsyl_tuple;
extern PyObject *const_str_plain_bilinear;
static PyObject *const_str_plain_trsyl;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_separate;
static PyObject *const_str_plain_solve_discrete_lyapunov;
static PyObject *const_str_digest_6e4892165c0cac11dd30505169602b06;
extern PyObject *const_dict_0f2519a6c952cc568952beb42c1e9b1d;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_digest_6c8722767aa19d803f52ef190f3258fd_tuple;
extern PyObject *const_str_plain_permute;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_ordqz;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_f38329af3401f532cd81d4a7393afec1;
extern PyObject *const_str_plain_scale;
static PyObject *const_str_digest_2c8de43bb05431410b3a11b5ceb203f2;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_587e51a691b02a05886f3cc94adcd7f4;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_overwrite_a;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_check_finite;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_qr;
extern PyObject *const_str_plain_real;
static PyObject *const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple;
static PyObject *const_str_plain_aq;
extern PyObject *const_str_plain_q;
static PyObject *const_str_plain_solve_discrete_are;
static PyObject *const_dict_d2a30f042eac0f73ec829c8cc46f9a28;
static PyObject *const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple;
static PyObject *const_tuple_ee11fc820d18af6597b54476edc8947f_tuple;
static PyObject *const_str_digest_e2ce71503502f8098f6d2cd772a63cbe;
static PyObject *const_str_plain_eq_type;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_plain_solve_lyapunov;
extern PyObject *const_str_plain_decomp_schur;
extern PyObject *const_dict_e8bfcf313e93c8e8c56e2d69ca29191f;
static PyObject *const_str_digest_1a474e79ac9dd9c492f406cf1d42e361;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_get_lapack_funcs_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__asarray_validated;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain_reciprocal;
static PyObject *const_str_plain_generalized_case;
extern PyObject *const_str_plain_log2;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_38a4a3ad819bc9dbd61d1f840bf3971a;
extern PyObject *const_float_0_1;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_equal;
static PyObject *const_str_plain_dare;
static PyObject *const_tuple_str_plain_care_tuple;
static PyObject *const_str_digest_8f57d69039a4183d2dca7d7467e052b4;
static PyObject *const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple;
extern PyObject *const_str_plain_lu;
extern PyObject *const_str_plain_n;
static PyObject *const_str_plain_aH;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_8ee44e0691290b8ceb00f6961ebde18c;
extern PyObject *const_str_plain_solve_triangular;
static PyObject *const_tuple_str_plain_dare_str_plain_care_tuple;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
static PyObject *const_tuple_str_digest_f38329af3401f532cd81d4a7393afec1_tuple;
static PyObject *const_str_plain_solve_sylvester;
extern PyObject *const_dict_e494340e6c507b9628629e654e7b7e8e;
static PyObject *const_dict_dfe4a449d2cbc905ad1e22605de3853c;
extern PyObject *const_tuple_str_plain_lu_tuple;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_decomp_qr;
static PyObject *const_str_digest_19514f98e6287542f97a1b32b758f2a6;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_cond;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_digest_7889f260919a68ea6c087e3b4a5e306b;
extern PyObject *const_tuple_float_1_0_tuple;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_conj;
extern PyObject *const_str_plain_svd;
static PyObject *const_str_digest_ee184f1cb13ea44511dde026ce3941e4;
extern PyObject *const_str_plain_kron;
extern PyObject *const_str_plain_special_matrices;
static PyObject *const_tuple_str_plain_kron_str_plain_block_diag_tuple;
extern PyObject *const_str_plain_r;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_lapack;
static PyObject *const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple;
static PyObject *const_str_digest_4b043e880610e8feb86da5e60221aa3c;
extern PyObject *const_str_plain_mat;
static PyObject *const_str_digest_8d8f6a8781ca6d2310b06a2ce1b6ccae;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_decomp;
static PyObject *const_str_digest_d5ebeebd5ee720936170a2110a7f3348;
extern PyObject *const_str_plain_overwrite_b;
static PyObject *const_tuple_8379444f1f01a2c8bffa1063977e906d_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_tuple_str_digest_833eff5324a602dadc9aba1b344e5ac2_tuple;
static PyObject *const_str_digest_77ad93a3403616bd38d11dcca7b48ff6;
static PyObject *const_tuple_fb0e05b8c09aa1b51d90d65d1673754e_tuple;
static PyObject *const_tuple_str_plain_schur_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_vstack;
static PyObject *const_str_digest_f5df6f12d58666d44a940d2aa604a101;
extern PyObject *const_str_plain_LinAlgError;
extern PyObject *const_str_plain_atleast_2d;
extern PyObject *const_int_0;
static PyObject *const_str_digest_833eff5324a602dadc9aba1b344e5ac2;
static PyObject *const_str_digest_e4d801630895db64c9f09f1f43690bd0;
extern PyObject *const_str_plain_diag_indices_from;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_complex;
static PyObject *const_tuple_float_1000_0_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_direct;
static PyObject *const_str_digest_daaa077528a10f7eaad1bb1aa02381b9;
extern PyObject *const_float_1000_0;
extern PyObject *const_str_plain_schur;
static PyObject *const_str_digest_faa7d47290d296a836f9fe46b89a23a3;
extern PyObject *const_str_plain_matrix_balance;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_ind;
static PyObject *const_str_plain_aHI_inv;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_94933442f0a1221ff03a4c577fb74e9d;
extern PyObject *const_str_plain_meth;
static PyObject *const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple;
extern PyObject *const_str_plain__decomp_qz;
extern PyObject *const_str_plain_ones_like;
static PyObject *const_str_plain__solve_discrete_lyapunov_bilinear;
static PyObject *const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple;
extern PyObject *const_str_plain_decomp_lu;
static PyObject *const_str_digest_e99ca50dc46638e6465cfee11c16ea91;
static PyObject *const_str_plain_care;
extern PyObject *const_tuple_str_plain__asarray_validated_tuple;
static PyObject *const_dict_ae1991590e888167b616f9be039d1845;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_solve_continuous_are;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_allclose;
static PyObject *const_str_digest_e081f6d23cdc7f7f323f0755d8f18b02;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_none_none_true_tuple;
static PyObject *const_str_digest_8f98b3ac6773cb759d5925c873c52040;
static PyObject *const_str_digest_be75ee0c8722a7ed46a3e5eb6e1f70e8;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_r_or_c;
static PyObject *const_tuple_str_plain_qr_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_lhp;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain_dtype_string;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
extern PyObject *const_str_plain_iscomplexobj;
static PyObject *const_str_plain_aqr;
extern PyObject *const_str_plain_lhs;
extern PyObject *const_str_plain_compute_uv;
static PyObject *const_tuple_str_plain_ordqz_tuple;
static PyObject *const_str_digest_6c8722767aa19d803f52ef190f3258fd;
static PyObject *const_str_plain_min_sv;
static PyObject *const_str_digest_6bec11cefd148bf5f84b2e636b3b221d;
static PyObject *const_str_plain_solve_continuous_lyapunov;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain__are_validate_args;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_unit_diagonal;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_basic;
extern PyObject *const_str_plain_spacing;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_round;
static PyObject *const_dict_06e191f0e66b8127c249458e30dade7b;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_block_diag;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_plain__solve_discrete_lyapunov_direct;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_info;
static PyObject *const_str_digest_c2982081149410375cfad9ac462a8671;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_tranb;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_iuc;
static PyObject *const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_cd695e80259c2a00539c549ff5134ed9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4516401 ], 51, 0 );
    const_tuple_str_plain_trsyl_tuple = PyTuple_New( 1 );
    const_str_plain_trsyl = UNSTREAM_STRING_ASCII( &constant_bin[ 4507865 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trsyl_tuple, 0, const_str_plain_trsyl ); Py_INCREF( const_str_plain_trsyl );
    const_str_plain_solve_discrete_lyapunov = UNSTREAM_STRING_ASCII( &constant_bin[ 4466204 ], 23, 1 );
    const_str_digest_6e4892165c0cac11dd30505169602b06 = UNSTREAM_STRING_ASCII( &constant_bin[ 4516452 ], 1398, 0 );
    const_tuple_str_digest_6c8722767aa19d803f52ef190f3258fd_tuple = PyTuple_New( 1 );
    const_str_digest_6c8722767aa19d803f52ef190f3258fd = UNSTREAM_STRING_ASCII( &constant_bin[ 4517850 ], 33, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6c8722767aa19d803f52ef190f3258fd_tuple, 0, const_str_digest_6c8722767aa19d803f52ef190f3258fd ); Py_INCREF( const_str_digest_6c8722767aa19d803f52ef190f3258fd );
    const_str_digest_f38329af3401f532cd81d4a7393afec1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4517883 ], 76, 0 );
    const_str_digest_2c8de43bb05431410b3a11b5ceb203f2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4517959 ], 51, 0 );
    const_str_digest_587e51a691b02a05886f3cc94adcd7f4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4518010 ], 1168, 0 );
    const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple, 0, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyTuple_SET_ITEM( const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple, 1, const_str_plain_LinAlgError ); Py_INCREF( const_str_plain_LinAlgError );
    PyTuple_SET_ITEM( const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple, 2, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple, 3, const_str_plain_cond ); Py_INCREF( const_str_plain_cond );
    PyTuple_SET_ITEM( const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple, 4, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    const_str_plain_aq = UNSTREAM_STRING_ASCII( &constant_bin[ 57740 ], 2, 1 );
    const_str_plain_solve_discrete_are = UNSTREAM_STRING_ASCII( &constant_bin[ 4466055 ], 18, 1 );
    const_dict_d2a30f042eac0f73ec829c8cc46f9a28 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d2a30f042eac0f73ec829c8cc46f9a28, const_str_plain_output, const_str_plain_real );
    assert( PyDict_Size( const_dict_d2a30f042eac0f73ec829c8cc46f9a28 ) == 1 );
    const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple, 2, const_str_plain_lhs ); Py_INCREF( const_str_plain_lhs );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_ee11fc820d18af6597b54476edc8947f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 2, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 3, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    PyTuple_SET_ITEM( const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_e2ce71503502f8098f6d2cd772a63cbe = UNSTREAM_STRING_ASCII( &constant_bin[ 4519178 ], 59, 0 );
    const_str_plain_eq_type = UNSTREAM_STRING_ASCII( &constant_bin[ 4518801 ], 7, 1 );
    const_str_plain_solve_lyapunov = UNSTREAM_STRING_ASCII( &constant_bin[ 4519237 ], 14, 1 );
    const_str_digest_1a474e79ac9dd9c492f406cf1d42e361 = UNSTREAM_STRING_ASCII( &constant_bin[ 4519251 ], 30, 0 );
    const_str_plain_generalized_case = UNSTREAM_STRING_ASCII( &constant_bin[ 4519281 ], 16, 1 );
    const_str_digest_38a4a3ad819bc9dbd61d1f840bf3971a = UNSTREAM_STRING_ASCII( &constant_bin[ 4519297 ], 196, 0 );
    const_str_plain_dare = UNSTREAM_STRING_ASCII( &constant_bin[ 4518858 ], 4, 1 );
    const_tuple_str_plain_care_tuple = PyTuple_New( 1 );
    const_str_plain_care = UNSTREAM_STRING_ASCII( &constant_bin[ 934942 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_care_tuple, 0, const_str_plain_care ); Py_INCREF( const_str_plain_care );
    const_str_digest_8f57d69039a4183d2dca7d7467e052b4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4519259 ], 21, 0 );
    const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 6, const_str_plain_eq_type ); Py_INCREF( const_str_plain_eq_type );
    const_str_plain_r_or_c = UNSTREAM_STRING_ASCII( &constant_bin[ 4473455 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 7, const_str_plain_r_or_c ); Py_INCREF( const_str_plain_r_or_c );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 8, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 9, const_str_plain_mat ); Py_INCREF( const_str_plain_mat );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 10, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 11, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_min_sv = UNSTREAM_STRING_ASCII( &constant_bin[ 4519493 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 12, const_str_plain_min_sv ); Py_INCREF( const_str_plain_min_sv );
    PyTuple_SET_ITEM( const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 13, const_str_plain_generalized_case ); Py_INCREF( const_str_plain_generalized_case );
    const_str_plain_aH = UNSTREAM_STRING_ASCII( &constant_bin[ 111119 ], 2, 1 );
    const_str_digest_8ee44e0691290b8ceb00f6961ebde18c = UNSTREAM_STRING_ASCII( &constant_bin[ 4519499 ], 221, 0 );
    const_tuple_str_plain_dare_str_plain_care_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dare_str_plain_care_tuple, 0, const_str_plain_dare ); Py_INCREF( const_str_plain_dare );
    PyTuple_SET_ITEM( const_tuple_str_plain_dare_str_plain_care_tuple, 1, const_str_plain_care ); Py_INCREF( const_str_plain_care );
    const_tuple_str_digest_f38329af3401f532cd81d4a7393afec1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f38329af3401f532cd81d4a7393afec1_tuple, 0, const_str_digest_f38329af3401f532cd81d4a7393afec1 ); Py_INCREF( const_str_digest_f38329af3401f532cd81d4a7393afec1 );
    const_str_plain_solve_sylvester = UNSTREAM_STRING_ASCII( &constant_bin[ 4465919 ], 15, 1 );
    const_dict_dfe4a449d2cbc905ad1e22605de3853c = _PyDict_NewPresized( 1 );
    const_str_plain_tranb = UNSTREAM_STRING_ASCII( &constant_bin[ 4519720 ], 5, 1 );
    PyDict_SetItem( const_dict_dfe4a449d2cbc905ad1e22605de3853c, const_str_plain_tranb, const_str_plain_C );
    assert( PyDict_Size( const_dict_dfe4a449d2cbc905ad1e22605de3853c ) == 1 );
    const_str_digest_19514f98e6287542f97a1b32b758f2a6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4519725 ], 33, 0 );
    const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 2, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 3, const_str_plain_aH ); Py_INCREF( const_str_plain_aH );
    const_str_plain_aHI_inv = UNSTREAM_STRING_ASCII( &constant_bin[ 4519758 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 4, const_str_plain_aHI_inv ); Py_INCREF( const_str_plain_aHI_inv );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 5, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 6, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_str_digest_7889f260919a68ea6c087e3b4a5e306b = UNSTREAM_STRING_ASCII( &constant_bin[ 4519765 ], 31, 0 );
    const_str_digest_ee184f1cb13ea44511dde026ce3941e4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4519796 ], 27, 0 );
    const_tuple_str_plain_kron_str_plain_block_diag_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kron_str_plain_block_diag_tuple, 0, const_str_plain_kron ); Py_INCREF( const_str_plain_kron );
    PyTuple_SET_ITEM( const_tuple_str_plain_kron_str_plain_block_diag_tuple, 1, const_str_plain_block_diag ); Py_INCREF( const_str_plain_block_diag );
    const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 4, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 5, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 6, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 7, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 8, const_str_plain_trsyl ); Py_INCREF( const_str_plain_trsyl );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 9, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 10, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 11, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_str_digest_4b043e880610e8feb86da5e60221aa3c = UNSTREAM_STRING_ASCII( &constant_bin[ 4519823 ], 2345, 0 );
    const_str_digest_8d8f6a8781ca6d2310b06a2ce1b6ccae = UNSTREAM_STRING_ASCII( &constant_bin[ 4522168 ], 33, 0 );
    const_str_digest_d5ebeebd5ee720936170a2110a7f3348 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522201 ], 40, 0 );
    const_tuple_8379444f1f01a2c8bffa1063977e906d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4522241 ], 151 );
    const_tuple_str_digest_833eff5324a602dadc9aba1b344e5ac2_tuple = PyTuple_New( 1 );
    const_str_digest_833eff5324a602dadc9aba1b344e5ac2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522392 ], 81, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_833eff5324a602dadc9aba1b344e5ac2_tuple, 0, const_str_digest_833eff5324a602dadc9aba1b344e5ac2 ); Py_INCREF( const_str_digest_833eff5324a602dadc9aba1b344e5ac2 );
    const_str_digest_77ad93a3403616bd38d11dcca7b48ff6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522473 ], 40, 0 );
    const_tuple_fb0e05b8c09aa1b51d90d65d1673754e_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4522513 ], 160 );
    const_tuple_str_plain_schur_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_schur_tuple, 0, const_str_plain_schur ); Py_INCREF( const_str_plain_schur );
    const_str_digest_f5df6f12d58666d44a940d2aa604a101 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522673 ], 42, 0 );
    const_str_digest_e4d801630895db64c9f09f1f43690bd0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522715 ], 130, 0 );
    const_tuple_float_1000_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_1000_0_tuple, 0, const_float_1000_0 ); Py_INCREF( const_float_1000_0 );
    const_str_plain_direct = UNSTREAM_STRING_ASCII( &constant_bin[ 3944 ], 6, 1 );
    const_str_digest_daaa077528a10f7eaad1bb1aa02381b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522845 ], 81, 0 );
    const_str_digest_faa7d47290d296a836f9fe46b89a23a3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4522926 ], 42, 0 );
    const_str_digest_94933442f0a1221ff03a4c577fb74e9d = UNSTREAM_STRING_ASCII( &constant_bin[ 4522968 ], 26, 0 );
    const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple, 0, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple, 1, const_str_plain_solve_triangular ); Py_INCREF( const_str_plain_solve_triangular );
    PyTuple_SET_ITEM( const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple, 2, const_str_plain_matrix_balance ); Py_INCREF( const_str_plain_matrix_balance );
    const_str_plain__solve_discrete_lyapunov_bilinear = UNSTREAM_STRING_ASCII( &constant_bin[ 4522994 ], 33, 1 );
    const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 2, const_str_plain_r_or_c ); Py_INCREF( const_str_plain_r_or_c );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 3, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 4, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 6, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 7, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 8, const_str_plain_trsyl ); Py_INCREF( const_str_plain_trsyl );
    const_str_plain_dtype_string = UNSTREAM_STRING_ASCII( &constant_bin[ 4523027 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 9, const_str_plain_dtype_string ); Py_INCREF( const_str_plain_dtype_string );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 10, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 11, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 12, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_str_digest_e99ca50dc46638e6465cfee11c16ea91 = UNSTREAM_STRING_ASCII( &constant_bin[ 4523039 ], 1202, 0 );
    const_dict_ae1991590e888167b616f9be039d1845 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_ae1991590e888167b616f9be039d1845, const_str_plain_separate, const_int_pos_1 );
    PyDict_SetItem( const_dict_ae1991590e888167b616f9be039d1845, const_str_plain_permute, const_int_0 );
    assert( PyDict_Size( const_dict_ae1991590e888167b616f9be039d1845 ) == 2 );
    const_str_plain_solve_continuous_are = UNSTREAM_STRING_ASCII( &constant_bin[ 4465976 ], 20, 1 );
    const_str_digest_e081f6d23cdc7f7f323f0755d8f18b02 = UNSTREAM_STRING_ASCII( &constant_bin[ 4524241 ], 42, 0 );
    const_str_digest_8f98b3ac6773cb759d5925c873c52040 = UNSTREAM_STRING_ASCII( &constant_bin[ 4524283 ], 24, 0 );
    const_str_digest_be75ee0c8722a7ed46a3e5eb6e1f70e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4524307 ], 3826, 0 );
    const_tuple_str_plain_qr_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_qr_tuple, 0, const_str_plain_qr ); Py_INCREF( const_str_plain_qr );
    const_str_plain_aqr = UNSTREAM_STRING_ASCII( &constant_bin[ 4528133 ], 3, 1 );
    const_tuple_str_plain_ordqz_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ordqz_tuple, 0, const_str_plain_ordqz ); Py_INCREF( const_str_plain_ordqz );
    const_str_digest_6bec11cefd148bf5f84b2e636b3b221d = UNSTREAM_STRING_ASCII( &constant_bin[ 4528136 ], 134, 0 );
    const_str_plain_solve_continuous_lyapunov = UNSTREAM_STRING_ASCII( &constant_bin[ 4466130 ], 25, 1 );
    const_str_plain__are_validate_args = UNSTREAM_STRING_ASCII( &constant_bin[ 4528270 ], 18, 1 );
    const_dict_06e191f0e66b8127c249458e30dade7b = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_06e191f0e66b8127c249458e30dade7b, const_str_plain_unit_diagonal, Py_True );
    assert( PyDict_Size( const_dict_06e191f0e66b8127c249458e30dade7b ) == 1 );
    const_str_plain__solve_discrete_lyapunov_direct = UNSTREAM_STRING_ASCII( &constant_bin[ 4528288 ], 31, 1 );
    const_str_digest_c2982081149410375cfad9ac462a8671 = UNSTREAM_STRING_ASCII( &constant_bin[ 4528319 ], 3916, 0 );
    const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 0, const_str_plain_solve_sylvester ); Py_INCREF( const_str_plain_solve_sylvester );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 1, const_str_plain_solve_continuous_lyapunov ); Py_INCREF( const_str_plain_solve_continuous_lyapunov );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 2, const_str_plain_solve_discrete_lyapunov ); Py_INCREF( const_str_plain_solve_discrete_lyapunov );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 3, const_str_plain_solve_lyapunov ); Py_INCREF( const_str_plain_solve_lyapunov );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 4, const_str_plain_solve_continuous_are ); Py_INCREF( const_str_plain_solve_continuous_are );
    PyList_SET_ITEM( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list, 5, const_str_plain_solve_discrete_are ); Py_INCREF( const_str_plain_solve_discrete_are );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$linalg$_solvers( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_70d856c624ea0714f9fc2a08638d99c8;
static PyCodeObject *codeobj_03aac1d19cf9b3300c743c61e1cea8cf;
static PyCodeObject *codeobj_56e21a0113fff8f32e06cfe57d1a8a9f;
static PyCodeObject *codeobj_801c0c413a61f1b653d4d9833b61d2b5;
static PyCodeObject *codeobj_05fba39617e6a39a2b8101e82b9e54b2;
static PyCodeObject *codeobj_0a9d5853f649d83688bce834121003b7;
static PyCodeObject *codeobj_a9d726d8893bf62df049aa12d46b1a70;
static PyCodeObject *codeobj_b7dd50f9ab07889f12658e3fcc765ad5;
static PyCodeObject *codeobj_b6f75f6a5865b15ac0775a913d45d92e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8f98b3ac6773cb759d5925c873c52040 );
    codeobj_70d856c624ea0714f9fc2a08638d99c8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1a474e79ac9dd9c492f406cf1d42e361, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_03aac1d19cf9b3300c743c61e1cea8cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__are_validate_args, 739, const_tuple_e3d27aa3501f69a30a9403783af6f97e_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_56e21a0113fff8f32e06cfe57d1a8a9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__solve_discrete_lyapunov_bilinear, 221, const_tuple_efafbd68a66eee23b004286dffe61fd3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_801c0c413a61f1b653d4d9833b61d2b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__solve_discrete_lyapunov_direct, 206, const_tuple_str_plain_a_str_plain_q_str_plain_lhs_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_05fba39617e6a39a2b8101e82b9e54b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_continuous_are, 327, const_tuple_8379444f1f01a2c8bffa1063977e906d_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a9d5853f649d83688bce834121003b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_continuous_lyapunov, 110, const_tuple_6fa6fcefe4aff5e52509758396176c47_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a9d726d8893bf62df049aa12d46b1a70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_discrete_are, 531, const_tuple_fb0e05b8c09aa1b51d90d65d1673754e_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b7dd50f9ab07889f12658e3fcc765ad5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_discrete_lyapunov, 236, const_tuple_ee11fc820d18af6597b54476edc8947f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6f75f6a5865b15ac0775a913d45d92e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve_sylvester, 32, const_tuple_7e1ec0420545d3bc398cf606486fd000_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_1_solve_sylvester(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear(  );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_6_solve_continuous_are( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_7_solve_discrete_are( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_8__are_validate_args( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$linalg$_solvers$$$function_1_solve_sylvester( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *var_r = NULL;
    PyObject *var_u = NULL;
    PyObject *var_s = NULL;
    PyObject *var_v = NULL;
    PyObject *var_f = NULL;
    PyObject *var_trsyl = NULL;
    PyObject *var_y = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_info = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b6f75f6a5865b15ac0775a913d45d92e;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b6f75f6a5865b15ac0775a913d45d92e = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6f75f6a5865b15ac0775a913d45d92e, codeobj_b6f75f6a5865b15ac0775a913d45d92e, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b6f75f6a5865b15ac0775a913d45d92e = cache_frame_b6f75f6a5865b15ac0775a913d45d92e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6f75f6a5865b15ac0775a913d45d92e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6f75f6a5865b15ac0775a913d45d92e ) == 2 ); // Frame stack

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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_schur );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_schur );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "schur" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_d2a30f042eac0f73ec829c8cc46f9a28 );
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 86;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "oooooooooooo";
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 86;
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 86;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 86;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 86;
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
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_r = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_u = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_schur );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_schur );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "schur" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_b );
        tmp_called_instance_2 = par_b;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 89;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 89;
        tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_d2a30f042eac0f73ec829c8cc46f9a28 );
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 89;
        tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 89;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 89;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 89;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 89;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_s = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
        assert( var_v == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_v = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_u );
        tmp_called_instance_4 = var_u;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 92;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_conj );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 92;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_args_element_name_3 = par_q;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_args_element_name_4 = var_v;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_4 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_lapack_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 95;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_5 = tmp_mvar_value_5;
        tmp_args_element_name_5 = const_tuple_str_plain_trsyl_tuple;
        CHECK_OBJECT( var_r );
        tmp_tuple_element_3 = var_r;
        tmp_args_element_name_6 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_s );
        tmp_tuple_element_3 = var_s;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_3 );
        CHECK_OBJECT( var_f );
        tmp_tuple_element_3 = var_f;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 2, tmp_tuple_element_3 );
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_5, 0, 1 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 95;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 95;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooo";
            exception_lineno = 95;
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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;
        assert( var_trsyl == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_trsyl = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_trsyl );
        tmp_compexpr_left_1 = var_trsyl;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_daaa077528a10f7eaad1bb1aa02381b9;
            frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 97;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 97;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        CHECK_OBJECT( var_trsyl );
        tmp_called_name_6 = var_trsyl;
        CHECK_OBJECT( var_r );
        tmp_tuple_element_4 = var_r;
        tmp_args_name_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_s );
        tmp_tuple_element_4 = var_s;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_f );
        tmp_tuple_element_4 = var_f;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 2, tmp_tuple_element_4 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_dfe4a449d2cbc905ad1e22605de3853c );
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 99;
        tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_6, 0, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_7, 1, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_2 == NULL );
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_8, 2, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 99;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_3 == NULL );
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_18;
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

                    type_description_1 = "oooooooooooo";
                    exception_lineno = 99;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 99;
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
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_19 = tmp_tuple_unpack_4__element_1;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_y = tmp_assign_source_19;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_20 = tmp_tuple_unpack_4__element_2;
        assert( var_scale == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_scale = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
        tmp_assign_source_21 = tmp_tuple_unpack_4__element_3;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_info = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_scale );
        tmp_left_name_1 = var_scale;
        CHECK_OBJECT( var_y );
        tmp_right_name_1 = var_y;
        tmp_assign_source_22 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            assert( old != NULL );
            var_y = tmp_assign_source_22;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_2 = var_info;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 103;
            type_description_1 = "oooooooooooo";
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_operand_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError );

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

                exception_lineno = 104;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_7 = tmp_mvar_value_6;
            tmp_left_name_2 = const_str_digest_d5ebeebd5ee720936170a2110a7f3348;
            CHECK_OBJECT( var_info );
            tmp_operand_name_1 = var_info;
            tmp_tuple_element_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
            tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;
                type_description_1 = "oooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 104;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_u );
        tmp_args_element_name_9 = var_u;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_10 = var_y;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_called_instance_7 = var_v;
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 107;
        tmp_called_instance_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_conj );
        if ( tmp_called_instance_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 107;
        tmp_args_element_name_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_6 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 107;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f75f6a5865b15ac0775a913d45d92e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f75f6a5865b15ac0775a913d45d92e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6f75f6a5865b15ac0775a913d45d92e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6f75f6a5865b15ac0775a913d45d92e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6f75f6a5865b15ac0775a913d45d92e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6f75f6a5865b15ac0775a913d45d92e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6f75f6a5865b15ac0775a913d45d92e,
        type_description_1,
        par_a,
        par_b,
        par_q,
        var_r,
        var_u,
        var_s,
        var_v,
        var_f,
        var_trsyl,
        var_y,
        var_scale,
        var_info
    );


    // Release cached frame.
    if ( frame_b6f75f6a5865b15ac0775a913d45d92e == cache_frame_b6f75f6a5865b15ac0775a913d45d92e )
    {
        Py_DECREF( frame_b6f75f6a5865b15ac0775a913d45d92e );
    }
    cache_frame_b6f75f6a5865b15ac0775a913d45d92e = NULL;

    assertFrameObject( frame_b6f75f6a5865b15ac0775a913d45d92e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_1_solve_sylvester );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_trsyl );
    Py_DECREF( var_trsyl );
    var_trsyl = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_trsyl );
    var_trsyl = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_1_solve_sylvester );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *var_r_or_c = NULL;
    PyObject *var_ind = NULL;
    PyObject *var__ = NULL;
    PyObject *var_r = NULL;
    PyObject *var_u = NULL;
    PyObject *var_f = NULL;
    PyObject *var_trsyl = NULL;
    PyObject *var_dtype_string = NULL;
    PyObject *var_y = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_info = NULL;
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
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0a9d5853f649d83688bce834121003b7;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0a9d5853f649d83688bce834121003b7 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a9d5853f649d83688bce834121003b7, codeobj_0a9d5853f649d83688bce834121003b7, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a9d5853f649d83688bce834121003b7 = cache_frame_0a9d5853f649d83688bce834121003b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a9d5853f649d83688bce834121003b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a9d5853f649d83688bce834121003b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 159;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_2d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 159;
        tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 159;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 160;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_atleast_2d );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_q );
        tmp_tuple_element_2 = par_q;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 160;
        tmp_args_element_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 160;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = (PyObject *)&PyFloat_Type;
        assert( var_r_or_c == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_r_or_c = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_name_5 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_3 = par_a;
        tmp_args_element_name_3 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_3 = par_q;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_3 );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 164;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 164;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 164;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 164;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 164;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_9;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_10;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var__ );
        tmp_args_element_name_4 = var__;
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_iscomplexobj, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 165;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = (PyObject *)&PyComplex_Type;
            {
                PyObject *old = var_r_or_c;
                var_r_or_c = tmp_assign_source_11;
                Py_INCREF( var_r_or_c );
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_equal );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var__ );
        tmp_source_name_4 = var__;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_operand_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_source_name_5 = const_str_digest_ee184f1cb13ea44511dde026ce3941e4;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_format );
            assert( !(tmp_called_name_6 == NULL) );
            tmp_subscribed_name_1 = const_str_plain_aq;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_1 = var_ind;
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 169;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 169;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_a );
        tmp_source_name_6 = par_a;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_source_name_7 = par_q;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 172;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_e081f6d23cdc7f7f323f0755d8f18b02;
            frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 173;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_schur );

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

            exception_lineno = 176;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_4 = par_a;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_d2a30f042eac0f73ec829c8cc46f9a28 );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 176;
        tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 176;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 176;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 176;
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

            type_description_1 = "ooooooooooooo";
            exception_lineno = 176;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert( var_r == NULL );
        Py_INCREF( tmp_assign_source_15 );
        var_r = tmp_assign_source_15;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_16 );
        var_u = tmp_assign_source_16;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_u );
        tmp_called_instance_2 = var_u;
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 179;
        tmp_source_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_T );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dot );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_called_instance_3 = par_q;
        CHECK_OBJECT( var_u );
        tmp_args_element_name_7 = var_u;
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_f == NULL );
        var_f = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_lapack_funcs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_8;
        tmp_args_element_name_8 = const_str_plain_trsyl;
        CHECK_OBJECT( var_r );
        tmp_tuple_element_5 = var_r;
        tmp_args_element_name_9 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_f );
        tmp_tuple_element_5 = var_f;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_5 );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_trsyl == NULL );
        var_trsyl = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if ( var_r_or_c == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_or_c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_r_or_c;
        tmp_compexpr_right_2 = (PyObject *)&PyFloat_Type;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_19 = const_str_plain_T;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_19 = const_str_plain_C;
        condexpr_end_1:;
        assert( var_dtype_string == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_dtype_string = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( var_trsyl );
        tmp_called_name_10 = var_trsyl;
        CHECK_OBJECT( var_r );
        tmp_tuple_element_6 = var_r;
        tmp_args_name_4 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_r );
        tmp_tuple_element_6 = var_r;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_f );
        tmp_tuple_element_6 = var_f;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
        tmp_dict_key_1 = const_str_plain_tranb;
        CHECK_OBJECT( var_dtype_string );
        tmp_dict_value_1 = var_dtype_string;
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 185;
        tmp_iter_arg_4 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 0, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_6, 1, 3 );
        if ( tmp_assign_source_22 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_2 == NULL );
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_7, 2, 3 );
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_3__element_3 == NULL );
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_23;
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

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 185;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooo";
            exception_lineno = 185;
            goto try_except_handler_8;
        }
    }
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    goto try_end_7;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_1;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_24 );
        var_y = tmp_assign_source_24;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
        assert( var_scale == NULL );
        Py_INCREF( tmp_assign_source_25 );
        var_scale = tmp_assign_source_25;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_3;
        assert( var_info == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_info = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_info );
        tmp_compexpr_left_3 = var_info;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_operand_name_2;
            tmp_source_name_10 = const_str_digest_e4d801630895db64c9f09f1f43690bd0;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
            assert( !(tmp_called_name_11 == NULL) );
            CHECK_OBJECT( var_info );
            tmp_operand_name_2 = var_info;
            tmp_args_element_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_11 );

                exception_lineno = 191;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 188;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_info );
            tmp_compexpr_left_4 = var_info;
            tmp_compexpr_right_4 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_name_12;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_9;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_11;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_mvar_value_10;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_warnings );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 193;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_9;
                tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_warn );
                if ( tmp_called_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_11 = const_str_digest_6bec11cefd148bf5f84b2e636b3b221d;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
                }

                if ( tmp_mvar_value_10 == NULL )
                {
                    Py_DECREF( tmp_called_name_12 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RuntimeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 196;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_12 = tmp_mvar_value_10;
                frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 193;
                {
                    PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
                }

                Py_DECREF( tmp_called_name_12 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_y );
        tmp_left_name_1 = var_y;
        CHECK_OBJECT( var_scale );
        tmp_right_name_1 = var_scale;
        tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 197;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = tmp_left_name_1;
        var_y = tmp_assign_source_27;

    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_source_name_13;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( var_u );
        tmp_called_instance_4 = var_u;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_13 = var_y;
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_source_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_u );
        tmp_called_instance_5 = var_u;
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 199;
        tmp_source_name_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_conj );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 199;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 199;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0a9d5853f649d83688bce834121003b7->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a9d5853f649d83688bce834121003b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a9d5853f649d83688bce834121003b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a9d5853f649d83688bce834121003b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a9d5853f649d83688bce834121003b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a9d5853f649d83688bce834121003b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a9d5853f649d83688bce834121003b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a9d5853f649d83688bce834121003b7,
        type_description_1,
        par_a,
        par_q,
        var_r_or_c,
        var_ind,
        var__,
        var_r,
        var_u,
        var_f,
        var_trsyl,
        var_dtype_string,
        var_y,
        var_scale,
        var_info
    );


    // Release cached frame.
    if ( frame_0a9d5853f649d83688bce834121003b7 == cache_frame_0a9d5853f649d83688bce834121003b7 )
    {
        Py_DECREF( frame_0a9d5853f649d83688bce834121003b7 );
    }
    cache_frame_0a9d5853f649d83688bce834121003b7 = NULL;

    assertFrameObject( frame_0a9d5853f649d83688bce834121003b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_trsyl );
    Py_DECREF( var_trsyl );
    var_trsyl = NULL;

    CHECK_OBJECT( (PyObject *)var_dtype_string );
    Py_DECREF( var_dtype_string );
    var_dtype_string = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_trsyl );
    var_trsyl = NULL;

    Py_XDECREF( var_dtype_string );
    var_dtype_string = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *var_lhs = NULL;
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_801c0c413a61f1b653d4d9833b61d2b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_801c0c413a61f1b653d4d9833b61d2b5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_801c0c413a61f1b653d4d9833b61d2b5, codeobj_801c0c413a61f1b653d4d9833b61d2b5, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_801c0c413a61f1b653d4d9833b61d2b5 = cache_frame_801c0c413a61f1b653d4d9833b61d2b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_801c0c413a61f1b653d4d9833b61d2b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_801c0c413a61f1b653d4d9833b61d2b5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_kron );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_kron );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "kron" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_a );
        tmp_called_instance_1 = par_a;
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 214;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_conj );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_lhs == NULL );
        var_lhs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eye );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lhs );
        tmp_source_name_2 = var_lhs;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_lhs );
        tmp_right_name_1 = var_lhs;
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_lhs;
            assert( old != NULL );
            var_lhs = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_lhs );
        tmp_args_element_name_4 = var_lhs;
        CHECK_OBJECT( par_q );
        tmp_called_instance_2 = par_q;
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 216;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_flatten );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reshape );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_x );
        tmp_args_element_name_6 = var_x;
        CHECK_OBJECT( par_q );
        tmp_source_name_4 = par_q;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_801c0c413a61f1b653d4d9833b61d2b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_801c0c413a61f1b653d4d9833b61d2b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_801c0c413a61f1b653d4d9833b61d2b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_801c0c413a61f1b653d4d9833b61d2b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_801c0c413a61f1b653d4d9833b61d2b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_801c0c413a61f1b653d4d9833b61d2b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_801c0c413a61f1b653d4d9833b61d2b5,
        type_description_1,
        par_a,
        par_q,
        var_lhs,
        var_x
    );


    // Release cached frame.
    if ( frame_801c0c413a61f1b653d4d9833b61d2b5 == cache_frame_801c0c413a61f1b653d4d9833b61d2b5 )
    {
        Py_DECREF( frame_801c0c413a61f1b653d4d9833b61d2b5 );
    }
    cache_frame_801c0c413a61f1b653d4d9833b61d2b5 = NULL;

    assertFrameObject( frame_801c0c413a61f1b653d4d9833b61d2b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_lhs );
    Py_DECREF( var_lhs );
    var_lhs = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *var_eye = NULL;
    PyObject *var_aH = NULL;
    PyObject *var_aHI_inv = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_56e21a0113fff8f32e06cfe57d1a8a9f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_56e21a0113fff8f32e06cfe57d1a8a9f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56e21a0113fff8f32e06cfe57d1a8a9f, codeobj_56e21a0113fff8f32e06cfe57d1a8a9f, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56e21a0113fff8f32e06cfe57d1a8a9f = cache_frame_56e21a0113fff8f32e06cfe57d1a8a9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56e21a0113fff8f32e06cfe57d1a8a9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56e21a0113fff8f32e06cfe57d1a8a9f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_eye );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_source_name_2 = par_a;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_eye == NULL );
        var_eye = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_a );
        tmp_called_instance_2 = par_a;
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 229;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 229;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_aH == NULL );
        var_aH = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_inv );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inv );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_aH );
        tmp_left_name_1 = var_aH;
        CHECK_OBJECT( var_eye );
        tmp_right_name_1 = var_eye;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_aHI_inv == NULL );
        var_aHI_inv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aH );
        tmp_left_name_2 = var_aH;
        CHECK_OBJECT( var_eye );
        tmp_right_name_2 = var_eye;
        tmp_args_element_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aHI_inv );
        tmp_args_element_name_4 = var_aHI_inv;
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b == NULL );
        var_b = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_left_name_3 = const_int_pos_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dot );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_inv );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inv );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inv" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_a );
        tmp_left_name_4 = par_a;
        CHECK_OBJECT( var_eye );
        tmp_right_name_4 = var_eye;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_args_element_name_8 = par_q;
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
            tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_aHI_inv );
        tmp_args_element_name_9 = var_aHI_inv;
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 232;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_9 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_c == NULL );
        var_c = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_operand_name_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_lyapunov );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_lyapunov );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_lyapunov" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_7;
        CHECK_OBJECT( var_b );
        tmp_called_instance_4 = var_b;
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 233;
        tmp_called_instance_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_conj );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 233;
        tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_transpose );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_c );
        tmp_operand_name_1 = var_c;
        tmp_args_element_name_11 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e21a0113fff8f32e06cfe57d1a8a9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e21a0113fff8f32e06cfe57d1a8a9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56e21a0113fff8f32e06cfe57d1a8a9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56e21a0113fff8f32e06cfe57d1a8a9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56e21a0113fff8f32e06cfe57d1a8a9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56e21a0113fff8f32e06cfe57d1a8a9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56e21a0113fff8f32e06cfe57d1a8a9f,
        type_description_1,
        par_a,
        par_q,
        var_eye,
        var_aH,
        var_aHI_inv,
        var_b,
        var_c
    );


    // Release cached frame.
    if ( frame_56e21a0113fff8f32e06cfe57d1a8a9f == cache_frame_56e21a0113fff8f32e06cfe57d1a8a9f )
    {
        Py_DECREF( frame_56e21a0113fff8f32e06cfe57d1a8a9f );
    }
    cache_frame_56e21a0113fff8f32e06cfe57d1a8a9f = NULL;

    assertFrameObject( frame_56e21a0113fff8f32e06cfe57d1a8a9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_eye );
    Py_DECREF( var_eye );
    var_eye = NULL;

    CHECK_OBJECT( (PyObject *)var_aH );
    Py_DECREF( var_aH );
    var_aH = NULL;

    CHECK_OBJECT( (PyObject *)var_aHI_inv );
    Py_DECREF( var_aHI_inv );
    var_aHI_inv = NULL;

    CHECK_OBJECT( (PyObject *)var_b );
    Py_DECREF( var_b );
    var_b = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_eye );
    var_eye = NULL;

    Py_XDECREF( var_aH );
    var_aH = NULL;

    Py_XDECREF( var_aHI_inv );
    var_aHI_inv = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *par_method = python_pars[ 2 ];
    PyObject *var_meth = NULL;
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_b7dd50f9ab07889f12658e3fcc765ad5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b7dd50f9ab07889f12658e3fcc765ad5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b7dd50f9ab07889f12658e3fcc765ad5, codeobj_b7dd50f9ab07889f12658e3fcc765ad5, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b7dd50f9ab07889f12658e3fcc765ad5 = cache_frame_b7dd50f9ab07889f12658e3fcc765ad5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b7dd50f9ab07889f12658e3fcc765ad5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b7dd50f9ab07889f12658e3fcc765ad5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 306;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 307;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_2 = par_q;
        frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 307;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_method );
        tmp_compexpr_left_1 = par_method;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_a );
            tmp_source_name_1 = par_a;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_10;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = const_str_plain_bilinear;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_3;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_str_plain_direct;
                {
                    PyObject *old = par_method;
                    assert( old != NULL );
                    par_method = tmp_assign_source_4;
                    Py_INCREF( par_method );
                    Py_DECREF( old );
                }

            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        if ( par_method == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_method;
        frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 315;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_meth == NULL );
        var_meth = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_meth );
        tmp_compexpr_left_3 = var_meth;
        tmp_compexpr_right_3 = const_str_plain_direct;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_direct );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_direct );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_solve_discrete_lyapunov_direct" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 318;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_a );
            tmp_args_element_name_3 = par_a;
            CHECK_OBJECT( par_q );
            tmp_args_element_name_4 = par_q;
            frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 318;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_x == NULL );
            var_x = tmp_assign_source_6;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var_meth );
            tmp_compexpr_left_4 = var_meth;
            tmp_compexpr_right_4 = const_str_plain_bilinear;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_bilinear );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_bilinear );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_solve_discrete_lyapunov_bilinear" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_4;
                CHECK_OBJECT( par_a );
                tmp_args_element_name_5 = par_a;
                CHECK_OBJECT( par_q );
                tmp_args_element_name_6 = par_q;
                frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 320;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_x == NULL );
                var_x = tmp_assign_source_7;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_left_name_1 = const_str_digest_b21697a8dbf086a46d9ca589af9912aa;
                if ( par_method == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 322;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_right_name_1 = par_method;
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 322;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame.f_lineno = 322;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 322;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    if ( var_x == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_x;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dd50f9ab07889f12658e3fcc765ad5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dd50f9ab07889f12658e3fcc765ad5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7dd50f9ab07889f12658e3fcc765ad5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7dd50f9ab07889f12658e3fcc765ad5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7dd50f9ab07889f12658e3fcc765ad5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7dd50f9ab07889f12658e3fcc765ad5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b7dd50f9ab07889f12658e3fcc765ad5,
        type_description_1,
        par_a,
        par_q,
        par_method,
        var_meth,
        var_x
    );


    // Release cached frame.
    if ( frame_b7dd50f9ab07889f12658e3fcc765ad5 == cache_frame_b7dd50f9ab07889f12658e3fcc765ad5 )
    {
        Py_DECREF( frame_b7dd50f9ab07889f12658e3fcc765ad5 );
    }
    cache_frame_b7dd50f9ab07889f12658e3fcc765ad5 = NULL;

    assertFrameObject( frame_b7dd50f9ab07889f12658e3fcc765ad5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_meth );
    Py_DECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_6_solve_continuous_are( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_r = python_pars[ 3 ];
    PyObject *par_e = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_balanced = python_pars[ 6 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_r_or_c = NULL;
    PyObject *var_gen_are = NULL;
    PyObject *var_H = NULL;
    PyObject *var_J = NULL;
    PyObject *var_M = NULL;
    PyObject *var__ = NULL;
    PyObject *var_sca = NULL;
    PyObject *var_elwisescale = NULL;
    PyObject *var_out_str = NULL;
    PyObject *var_u = NULL;
    PyObject *var_u00 = NULL;
    PyObject *var_u10 = NULL;
    PyObject *var_up = NULL;
    PyObject *var_ul = NULL;
    PyObject *var_uu = NULL;
    PyObject *var_x = NULL;
    PyObject *var_u_sym = NULL;
    PyObject *var_n_u_sym = NULL;
    PyObject *var_sym_threshold = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__element_4 = NULL;
    PyObject *tmp_tuple_unpack_5__element_5 = NULL;
    PyObject *tmp_tuple_unpack_5__element_6 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_05fba39617e6a39a2b8101e82b9e54b2;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_05fba39617e6a39a2b8101e82b9e54b2 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_05fba39617e6a39a2b8101e82b9e54b2, codeobj_05fba39617e6a39a2b8101e82b9e54b2, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_05fba39617e6a39a2b8101e82b9e54b2 = cache_frame_05fba39617e6a39a2b8101e82b9e54b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_05fba39617e6a39a2b8101e82b9e54b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_05fba39617e6a39a2b8101e82b9e54b2 ) == 2 ); // Frame stack

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
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__are_validate_args );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__are_validate_args );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_are_validate_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_3 = par_q;
        CHECK_OBJECT( par_r );
        tmp_args_element_name_4 = par_r;
        CHECK_OBJECT( par_e );
        tmp_args_element_name_5 = par_e;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_6 = par_s;
        tmp_args_element_name_7 = const_str_plain_care;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "oooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_6, 5, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_6 == NULL );
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_7, 6, 10 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_7 == NULL );
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_8, 7, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_8 == NULL );
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_9, 8, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_9 == NULL );
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_10, 9, 10 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_10 == NULL );
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 446;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 10)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 446;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_12;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_13;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_14;
            Py_INCREF( par_q );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_r;
            assert( old != NULL );
            par_r = tmp_assign_source_15;
            Py_INCREF( par_r );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_e;
            assert( old != NULL );
            par_e = tmp_assign_source_16;
            Py_INCREF( par_e );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_6 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_17;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_7 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_7;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_m = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_8 );
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_8;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_n = tmp_assign_source_19;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_9 );
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_9;
        assert( var_r_or_c == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_r_or_c = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_10 );
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_10;
        assert( var_gen_are == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_gen_are = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_1 = var_m;
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_right_name_2 = var_n;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_left_name_4 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_3 = var_m;
        tmp_left_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_right_name_4 = var_n;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_r_or_c );
        tmp_dict_value_1 = var_r_or_c;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 449;
        tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H == NULL );
        var_H = tmp_assign_source_22;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_a );
        tmp_ass_subvalue_1 = par_a;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_1 = var_H;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_1 = var_m;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_3 == NULL) );
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_3 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_2 = var_m;
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_tuple_element_3 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_3 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 450;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_start_name_4;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_step_name_4;
        tmp_ass_subvalue_2 = const_float_0_0;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_2 = var_H;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_3 = var_m;
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_tuple_element_4 == NULL) );
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_4 );
        CHECK_OBJECT( var_m );
        tmp_start_name_4 = var_m;
        tmp_left_name_5 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_5 = var_m;
        tmp_stop_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_stop_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_2 );

            exception_lineno = 451;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_stop_name_4 );
        assert( !(tmp_tuple_element_4 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_4 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 451;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_start_name_5;
        PyObject *tmp_stop_name_5;
        PyObject *tmp_step_name_5;
        PyObject *tmp_start_name_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_stop_name_6;
        PyObject *tmp_step_name_6;
        CHECK_OBJECT( par_b );
        tmp_ass_subvalue_3 = par_b;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_3 = var_H;
        tmp_start_name_5 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_5 = var_m;
        tmp_step_name_5 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
        assert( !(tmp_tuple_element_5 == NULL) );
        tmp_ass_subscript_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_5 );
        tmp_left_name_6 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_6 = var_m;
        tmp_start_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_start_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_3 );

            exception_lineno = 452;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_6 = Py_None;
        tmp_step_name_6 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
        Py_DECREF( tmp_start_name_6 );
        assert( !(tmp_tuple_element_5 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_5 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_name_7;
        PyObject *tmp_stop_name_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_step_name_7;
        PyObject *tmp_start_name_8;
        PyObject *tmp_stop_name_8;
        PyObject *tmp_step_name_8;
        CHECK_OBJECT( par_q );
        tmp_operand_name_1 = par_q;
        tmp_ass_subvalue_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_4 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_7 = var_m;
        tmp_left_name_7 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_7 = var_m;
        tmp_stop_name_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_stop_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_4 );

            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_7 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_7, tmp_stop_name_7, tmp_step_name_7 );
        Py_DECREF( tmp_stop_name_7 );
        assert( !(tmp_tuple_element_6 == NULL) );
        tmp_ass_subscript_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_6 );
        tmp_start_name_8 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_8 = var_m;
        tmp_step_name_8 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_8, tmp_stop_name_8, tmp_step_name_8 );
        assert( !(tmp_tuple_element_6 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_6 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_name_9;
        PyObject *tmp_stop_name_9;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_step_name_9;
        PyObject *tmp_start_name_10;
        PyObject *tmp_stop_name_10;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_step_name_10;
        CHECK_OBJECT( par_a );
        tmp_called_instance_1 = par_a;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 454;
        tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_conj );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_5 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_9 = var_m;
        tmp_left_name_8 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_8 = var_m;
        tmp_stop_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_stop_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_5 );

            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_9 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_9, tmp_stop_name_9, tmp_step_name_9 );
        Py_DECREF( tmp_stop_name_9 );
        assert( !(tmp_tuple_element_7 == NULL) );
        tmp_ass_subscript_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( var_m );
        tmp_start_name_10 = var_m;
        tmp_left_name_9 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_9 = var_m;
        tmp_stop_name_10 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_stop_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );

            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_10 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_10, tmp_stop_name_10, tmp_step_name_10 );
        Py_DECREF( tmp_stop_name_10 );
        assert( !(tmp_tuple_element_7 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_7 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_start_name_11;
        PyObject *tmp_stop_name_11;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_step_name_11;
        PyObject *tmp_start_name_12;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_stop_name_12;
        PyObject *tmp_step_name_12;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_1 = par_s;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_ass_subvalue_6 = const_float_0_0;
        Py_INCREF( tmp_ass_subvalue_6 );
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_s );
        tmp_operand_name_3 = par_s;
        tmp_ass_subvalue_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_6 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_11 = var_m;
        tmp_left_name_10 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_10 = var_m;
        tmp_stop_name_11 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_stop_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_6 );

            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_11 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_11, tmp_stop_name_11, tmp_step_name_11 );
        Py_DECREF( tmp_stop_name_11 );
        assert( !(tmp_tuple_element_8 == NULL) );
        tmp_ass_subscript_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 0, tmp_tuple_element_8 );
        tmp_left_name_11 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_11 = var_m;
        tmp_start_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_start_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subscript_6 );

            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_12 = Py_None;
        tmp_step_name_12 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_12, tmp_stop_name_12, tmp_step_name_12 );
        Py_DECREF( tmp_start_name_12 );
        assert( !(tmp_tuple_element_8 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 1, tmp_tuple_element_8 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subscript_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_start_name_13;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_stop_name_13;
        PyObject *tmp_step_name_13;
        PyObject *tmp_start_name_14;
        PyObject *tmp_stop_name_14;
        PyObject *tmp_step_name_14;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_2 = par_s;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_ass_subvalue_7 = const_float_0_0;
        Py_INCREF( tmp_ass_subvalue_7 );
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( par_s );
        tmp_called_instance_2 = par_s;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 456;
        tmp_source_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_ass_subvalue_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_7 = var_H;
        tmp_left_name_12 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_12 = var_m;
        tmp_start_name_13 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_start_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_7 );

            exception_lineno = 456;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_13 = Py_None;
        tmp_step_name_13 = Py_None;
        tmp_tuple_element_9 = MAKE_SLICEOBJ3( tmp_start_name_13, tmp_stop_name_13, tmp_step_name_13 );
        Py_DECREF( tmp_start_name_13 );
        assert( !(tmp_tuple_element_9 == NULL) );
        tmp_ass_subscript_7 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_7, 0, tmp_tuple_element_9 );
        tmp_start_name_14 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_14 = var_m;
        tmp_step_name_14 = Py_None;
        tmp_tuple_element_9 = MAKE_SLICEOBJ3( tmp_start_name_14, tmp_stop_name_14, tmp_step_name_14 );
        assert( !(tmp_tuple_element_9 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_7, 1, tmp_tuple_element_9 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subscript_7 );
        Py_DECREF( tmp_ass_subvalue_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_source_name_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_start_name_15;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_stop_name_15;
        PyObject *tmp_step_name_15;
        PyObject *tmp_start_name_16;
        PyObject *tmp_stop_name_16;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_step_name_16;
        CHECK_OBJECT( par_b );
        tmp_called_instance_3 = par_b;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 457;
        tmp_source_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_conj );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_ass_subvalue_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_8 = var_H;
        tmp_left_name_13 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_13 = var_m;
        tmp_start_name_15 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_start_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_8 );

            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_15 = Py_None;
        tmp_step_name_15 = Py_None;
        tmp_tuple_element_10 = MAKE_SLICEOBJ3( tmp_start_name_15, tmp_stop_name_15, tmp_step_name_15 );
        Py_DECREF( tmp_start_name_15 );
        assert( !(tmp_tuple_element_10 == NULL) );
        tmp_ass_subscript_8 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_8, 0, tmp_tuple_element_10 );
        CHECK_OBJECT( var_m );
        tmp_start_name_16 = var_m;
        tmp_left_name_14 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_14 = var_m;
        tmp_stop_name_16 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_stop_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_8 );
            Py_DECREF( tmp_ass_subscript_8 );

            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_16 = Py_None;
        tmp_tuple_element_10 = MAKE_SLICEOBJ3( tmp_start_name_16, tmp_stop_name_16, tmp_step_name_16 );
        Py_DECREF( tmp_stop_name_16 );
        assert( !(tmp_tuple_element_10 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_8, 1, tmp_tuple_element_10 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
        Py_DECREF( tmp_ass_subscript_8 );
        Py_DECREF( tmp_ass_subvalue_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 457;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_start_name_17;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_stop_name_17;
        PyObject *tmp_step_name_17;
        PyObject *tmp_start_name_18;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_stop_name_18;
        PyObject *tmp_step_name_18;
        CHECK_OBJECT( par_r );
        tmp_ass_subvalue_9 = par_r;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_9 = var_H;
        tmp_left_name_15 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_15 = var_m;
        tmp_start_name_17 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_start_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_17 = Py_None;
        tmp_step_name_17 = Py_None;
        tmp_tuple_element_11 = MAKE_SLICEOBJ3( tmp_start_name_17, tmp_stop_name_17, tmp_step_name_17 );
        Py_DECREF( tmp_start_name_17 );
        assert( !(tmp_tuple_element_11 == NULL) );
        tmp_ass_subscript_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_9, 0, tmp_tuple_element_11 );
        tmp_left_name_16 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_16 = var_m;
        tmp_start_name_18 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_start_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_9 );

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_18 = Py_None;
        tmp_step_name_18 = Py_None;
        tmp_tuple_element_11 = MAKE_SLICEOBJ3( tmp_start_name_18, tmp_stop_name_18, tmp_step_name_18 );
        Py_DECREF( tmp_start_name_18 );
        assert( !(tmp_tuple_element_11 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_9, 1, tmp_tuple_element_11 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
        Py_DECREF( tmp_ass_subscript_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_gen_are );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_gen_are );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_3 = par_e;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_block_diag );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_block_diag );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "block_diag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( par_e );
            tmp_args_element_name_8 = par_e;
            CHECK_OBJECT( par_e );
            tmp_called_instance_4 = par_e;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 461;
            tmp_source_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_conj );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_args_element_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_args_element_name_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_4;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros_like );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_tuple_element_12 = par_r;
            tmp_args_name_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_12 );
            tmp_dict_key_2 = const_str_plain_dtype;
            CHECK_OBJECT( var_r_or_c );
            tmp_dict_value_2 = var_r_or_c;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 461;
            tmp_args_element_name_10 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_9 );

                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 461;
            {
                PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
                tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 461;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_23;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_block_diag );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_block_diag );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "block_diag" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_6;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eye );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_17 = const_int_pos_2;
            CHECK_OBJECT( var_m );
            tmp_right_name_17 = var_m;
            tmp_args_element_name_12 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_17, tmp_right_name_17 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 463;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_args_element_name_11 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros_like );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_11 );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_tuple_element_13 = par_r;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_13 );
            tmp_dict_key_3 = const_str_plain_dtype;
            CHECK_OBJECT( var_r_or_c );
            tmp_dict_value_3 = var_r_or_c;
            tmp_kw_name_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 463;
            tmp_args_element_name_13 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_11 );

                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 463;
            {
                PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_13 };
                tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 463;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_J == NULL );
            var_J = tmp_assign_source_24;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_balanced );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_balanced );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_18;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_right_name_18;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_8;
            CHECK_OBJECT( var_H );
            tmp_args_element_name_14 = var_H;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 468;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_left_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abs, call_args );
            }

            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_left_name_18 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_9;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_15 = var_J;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 468;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_right_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abs, call_args );
            }

            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_25;
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_16;
            tmp_ass_subvalue_10 = const_float_0_0;
            CHECK_OBJECT( var_M );
            tmp_ass_subscribed_10 = var_M;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 469;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_10;
            CHECK_OBJECT( var_M );
            tmp_args_element_name_16 = var_M;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 469;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_ass_subscript_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_diag_indices_from, call_args );
            }

            if ( tmp_ass_subscript_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
            Py_DECREF( tmp_ass_subscript_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_4;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_matrix_balance );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix_balance );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "matrix_balance" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 470;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_8 = tmp_mvar_value_11;
            CHECK_OBJECT( var_M );
            tmp_tuple_element_14 = var_M;
            tmp_args_name_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_14 );
            tmp_kw_name_4 = PyDict_Copy( const_dict_ae1991590e888167b616f9be039d1845 );
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 470;
            tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_26;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_28;
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

                        type_description_1 = "oooooooooooooooooooooooooooo";
                        exception_lineno = 470;
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

                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
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
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_29 = tmp_tuple_unpack_2__element_1;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_29 );
            var__ = tmp_assign_source_29;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_iter_arg_3 = tmp_tuple_unpack_2__element_2;
            tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_30;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_32;
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

                        type_description_1 = "oooooooooooooooooooooooooooo";
                        exception_lineno = 470;
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

                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 470;
                goto try_except_handler_7;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
        goto try_end_5;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

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
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_33 = tmp_tuple_unpack_3__element_1;
            assert( var_sca == NULL );
            Py_INCREF( tmp_assign_source_33 );
            var_sca = tmp_assign_source_33;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_34 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_34;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_args_element_name_19;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_12;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_allclose );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_sca );
            tmp_args_element_name_17 = var_sca;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_called_name_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_8 = tmp_mvar_value_13;
            CHECK_OBJECT( var_sca );
            tmp_args_element_name_19 = var_sca;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = { tmp_args_element_name_19 };
                tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_ones_like, call_args );
            }

            if ( tmp_args_element_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_18 );
            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_element_name_20;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 475;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_9 = tmp_mvar_value_14;
                CHECK_OBJECT( var_sca );
                tmp_args_element_name_20 = var_sca;
                frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 475;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20 };
                    tmp_assign_source_35 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_log2, call_args );
                }

                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 475;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_sca;
                    assert( old != NULL );
                    var_sca = tmp_assign_source_35;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_element_name_21;
                PyObject *tmp_left_name_19;
                PyObject *tmp_left_name_20;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_19;
                PyObject *tmp_stop_name_19;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_19;
                PyObject *tmp_step_name_19;
                PyObject *tmp_right_name_20;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_20;
                PyObject *tmp_stop_name_20;
                PyObject *tmp_step_name_20;
                PyObject *tmp_right_name_21;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_15;
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_round );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_1 = var_sca;
                CHECK_OBJECT( var_m );
                tmp_start_name_19 = var_m;
                tmp_left_name_21 = const_int_pos_2;
                CHECK_OBJECT( var_m );
                tmp_right_name_19 = var_m;
                tmp_stop_name_19 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_21, tmp_right_name_19 );
                if ( tmp_stop_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_19 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_19, tmp_stop_name_19, tmp_step_name_19 );
                Py_DECREF( tmp_stop_name_19 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_left_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_left_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_2 = var_sca;
                tmp_start_name_20 = Py_None;
                CHECK_OBJECT( var_m );
                tmp_stop_name_20 = var_m;
                tmp_step_name_20 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_20, tmp_stop_name_20, tmp_step_name_20 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_right_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_right_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_left_name_20 );

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
                Py_DECREF( tmp_left_name_20 );
                Py_DECREF( tmp_right_name_20 );
                if ( tmp_left_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_21 = const_int_pos_2;
                tmp_args_element_name_21 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_19, tmp_right_name_21 );
                Py_DECREF( tmp_left_name_19 );
                if ( tmp_args_element_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 477;
                {
                    PyObject *call_args[] = { tmp_args_element_name_21 };
                    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_element_name_21 );
                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 477;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_36;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_16;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_operand_name_5;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_start_name_21;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_23;
                PyObject *tmp_stop_name_21;
                PyObject *tmp_step_name_21;
                tmp_left_name_22 = const_int_pos_2;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_16 == NULL ))
                {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_16 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_16;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_r_ );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s );
                tmp_tuple_element_15 = par_s;
                tmp_subscript_name_3 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_15 );
                PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_15 );
                CHECK_OBJECT( par_s );
                tmp_operand_name_5 = par_s;
                tmp_tuple_element_15 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_15 );
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_4 = var_sca;
                tmp_left_name_23 = const_int_pos_2;
                CHECK_OBJECT( var_m );
                tmp_right_name_23 = var_m;
                tmp_start_name_21 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_23, tmp_right_name_23 );
                if ( tmp_start_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_21 = Py_None;
                tmp_step_name_21 = Py_None;
                tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_21, tmp_stop_name_21, tmp_step_name_21 );
                Py_DECREF( tmp_start_name_21 );
                assert( !(tmp_subscript_name_4 == NULL) );
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_3, 2, tmp_tuple_element_15 );
                tmp_right_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_right_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_37 = POWER_OPERATION( tmp_left_name_22, tmp_right_name_22 );
                Py_DECREF( tmp_right_name_22 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 478;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_sca;
                    assert( old != NULL );
                    var_sca = tmp_assign_source_37;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_left_name_24;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_24;
                PyObject *tmp_called_instance_10;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_args_element_name_22;
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_5 = var_sca;
                tmp_subscript_name_5 = const_tuple_slice_none_none_none_none_tuple;
                tmp_left_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_left_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_left_name_24 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_10 = tmp_mvar_value_17;
                CHECK_OBJECT( var_sca );
                tmp_args_element_name_22 = var_sca;
                frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 480;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22 };
                    tmp_right_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_reciprocal, call_args );
                }

                if ( tmp_right_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_24 );

                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_38 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
                Py_DECREF( tmp_left_name_24 );
                Py_DECREF( tmp_right_name_24 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 480;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_elwisescale == NULL );
                var_elwisescale = tmp_assign_source_38;
            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_left_name_25;
                PyObject *tmp_right_name_25;
                CHECK_OBJECT( var_H );
                tmp_left_name_25 = var_H;
                CHECK_OBJECT( var_elwisescale );
                tmp_right_name_25 = var_elwisescale;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_25, tmp_right_name_25 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 481;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_39 = tmp_left_name_25;
                var_H = tmp_assign_source_39;

            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_left_name_26;
                PyObject *tmp_right_name_26;
                CHECK_OBJECT( var_J );
                tmp_left_name_26 = var_J;
                CHECK_OBJECT( var_elwisescale );
                tmp_right_name_26 = var_elwisescale;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_26, tmp_right_name_26 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 482;
                    type_description_1 = "oooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_40 = tmp_left_name_26;
                var_J = tmp_assign_source_40;

            }
            branch_no_3:;
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_start_name_22;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_stop_name_22;
        PyObject *tmp_step_name_22;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_qr );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_11 = tmp_mvar_value_18;
        if ( var_H == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_subscribed_name_6 = var_H;
        tmp_tuple_element_16 = const_slice_none_none_none;
        tmp_subscript_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_16 );
        CHECK_OBJECT( var_n );
        tmp_operand_name_6 = var_n;
        tmp_start_name_22 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_6 );
        if ( tmp_start_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_6 );

            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_stop_name_22 = Py_None;
        tmp_step_name_22 = Py_None;
        tmp_tuple_element_16 = MAKE_SLICEOBJ3( tmp_start_name_22, tmp_stop_name_22, tmp_step_name_22 );
        Py_DECREF( tmp_start_name_22 );
        assert( !(tmp_tuple_element_16 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_16 );
        tmp_args_element_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_args_element_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = { tmp_args_element_name_23 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_23 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_15, 0, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 485;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_16, 1, 2 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 485;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_2 == NULL );
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_43;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 485;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 485;
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
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_44 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_44;
            Py_INCREF( par_q );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_45 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = par_r;
            assert( old != NULL );
            par_r = tmp_assign_source_45;
            Py_INCREF( par_r );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_12;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_start_name_23;
        PyObject *tmp_stop_name_23;
        PyObject *tmp_step_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_start_name_24;
        PyObject *tmp_stop_name_24;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_step_name_24;
        CHECK_OBJECT( par_q );
        tmp_subscribed_name_7 = par_q;
        tmp_tuple_element_17 = const_slice_none_none_none;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_17 );
        CHECK_OBJECT( var_n );
        tmp_start_name_23 = var_n;
        tmp_stop_name_23 = Py_None;
        tmp_step_name_23 = Py_None;
        tmp_tuple_element_17 = MAKE_SLICEOBJ3( tmp_start_name_23, tmp_stop_name_23, tmp_step_name_23 );
        assert( !(tmp_tuple_element_17 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_17 );
        tmp_called_instance_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_called_instance_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 486;
        tmp_source_name_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_11 );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_called_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_H == NULL )
        {
            Py_DECREF( tmp_called_name_12 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_8 = var_H;
        tmp_tuple_element_18 = const_slice_none_none_none;
        tmp_subscript_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_18 );
        tmp_start_name_24 = Py_None;
        tmp_left_name_27 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_27 = var_m;
        tmp_stop_name_24 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_stop_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_subscript_name_8 );

            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_24 = Py_None;
        tmp_tuple_element_18 = MAKE_SLICEOBJ3( tmp_start_name_24, tmp_stop_name_24, tmp_step_name_24 );
        Py_DECREF( tmp_stop_name_24 );
        assert( !(tmp_tuple_element_18 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_18 );
        tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_12 );

            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = { tmp_args_element_name_24 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 486;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_H;
            var_H = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_start_name_25;
        PyObject *tmp_stop_name_25;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        PyObject *tmp_step_name_25;
        PyObject *tmp_start_name_26;
        PyObject *tmp_stop_name_26;
        PyObject *tmp_step_name_26;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_start_name_27;
        PyObject *tmp_stop_name_27;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        PyObject *tmp_step_name_27;
        PyObject *tmp_start_name_28;
        PyObject *tmp_stop_name_28;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_30;
        PyObject *tmp_step_name_28;
        CHECK_OBJECT( par_q );
        tmp_subscribed_name_9 = par_q;
        tmp_start_name_25 = Py_None;
        tmp_left_name_28 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_28 = var_m;
        tmp_stop_name_25 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_28, tmp_right_name_28 );
        if ( tmp_stop_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_25 = Py_None;
        tmp_tuple_element_19 = MAKE_SLICEOBJ3( tmp_start_name_25, tmp_stop_name_25, tmp_step_name_25 );
        Py_DECREF( tmp_stop_name_25 );
        assert( !(tmp_tuple_element_19 == NULL) );
        tmp_subscript_name_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_19 );
        CHECK_OBJECT( var_n );
        tmp_start_name_26 = var_n;
        tmp_stop_name_26 = Py_None;
        tmp_step_name_26 = Py_None;
        tmp_tuple_element_19 = MAKE_SLICEOBJ3( tmp_start_name_26, tmp_stop_name_26, tmp_step_name_26 );
        assert( !(tmp_tuple_element_19 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_19 );
        tmp_called_instance_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_called_instance_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 487;
        tmp_source_name_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_12 );
        if ( tmp_source_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_T );
        Py_DECREF( tmp_source_name_15 );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dot );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_called_name_13 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_10 = var_J;
        tmp_start_name_27 = Py_None;
        tmp_left_name_29 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_29 = var_m;
        tmp_stop_name_27 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        if ( tmp_stop_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_27 = Py_None;
        tmp_tuple_element_20 = MAKE_SLICEOBJ3( tmp_start_name_27, tmp_stop_name_27, tmp_step_name_27 );
        Py_DECREF( tmp_stop_name_27 );
        assert( !(tmp_tuple_element_20 == NULL) );
        tmp_subscript_name_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_20 );
        tmp_start_name_28 = Py_None;
        tmp_left_name_30 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_30 = var_m;
        tmp_stop_name_28 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_30, tmp_right_name_30 );
        if ( tmp_stop_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_subscript_name_10 );

            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_28 = Py_None;
        tmp_tuple_element_20 = MAKE_SLICEOBJ3( tmp_start_name_28, tmp_stop_name_28, tmp_step_name_28 );
        Py_DECREF( tmp_stop_name_28 );
        assert( !(tmp_tuple_element_20 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_20 );
        tmp_args_element_name_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_args_element_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_25 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_J;
            var_J = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_r_or_c );
        tmp_compexpr_left_4 = var_r_or_c;
        tmp_compexpr_right_4 = (PyObject *)&PyFloat_Type;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 490;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_48 = const_str_plain_real;
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_48 = const_str_plain_complex;
        condexpr_end_3:;
        assert( var_out_str == NULL );
        Py_INCREF( tmp_assign_source_48 );
        var_out_str = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_ordqz );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ordqz );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ordqz" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 492;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_14 = tmp_mvar_value_19;
        CHECK_OBJECT( var_H );
        tmp_tuple_element_21 = var_H;
        tmp_args_name_5 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_21 );
        CHECK_OBJECT( var_J );
        tmp_tuple_element_21 = var_J;
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_21 );
        tmp_dict_key_4 = const_str_plain_sort;
        tmp_dict_value_4 = const_str_plain_lhp;
        tmp_kw_name_5 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_overwrite_a;
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_overwrite_b;
        tmp_dict_value_6 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_check_finite;
        tmp_dict_value_7 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_8 = const_str_plain_output;
        CHECK_OBJECT( var_out_str );
        tmp_dict_value_8 = var_out_str;
        tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 492;
        tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_5, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 492;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_5__source_iter == NULL );
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_17 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_17, 0, 6 );
        if ( tmp_assign_source_50 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_1 == NULL );
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_18 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_18, 1, 6 );
        if ( tmp_assign_source_51 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_2 == NULL );
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_19 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_19, 2, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_3 == NULL );
        tmp_tuple_unpack_5__element_3 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_20 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_20, 3, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_4 == NULL );
        tmp_tuple_unpack_5__element_4 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_21 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_21, 4, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_5 == NULL );
        tmp_tuple_unpack_5__element_5 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_22 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_22, 5, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_6 == NULL );
        tmp_tuple_unpack_5__element_6 = tmp_assign_source_55;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 492;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 492;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_3 );
    tmp_tuple_unpack_5__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_4 );
    tmp_tuple_unpack_5__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_5 );
    tmp_tuple_unpack_5__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_6 );
    tmp_tuple_unpack_5__element_6 = NULL;

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
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_56 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_56;
            Py_INCREF( var__ );
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
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_57;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
        tmp_assign_source_58 = tmp_tuple_unpack_5__element_3;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_58;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_3 );
    tmp_tuple_unpack_5__element_3 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_4 );
        tmp_assign_source_59 = tmp_tuple_unpack_5__element_4;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_59;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_4 );
    tmp_tuple_unpack_5__element_4 = NULL;

    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_5 );
        tmp_assign_source_60 = tmp_tuple_unpack_5__element_5;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_60;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_5 );
    tmp_tuple_unpack_5__element_5 = NULL;

    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_6 );
        tmp_assign_source_61 = tmp_tuple_unpack_5__element_6;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_61 );
        var_u = tmp_assign_source_61;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_6 );
    tmp_tuple_unpack_5__element_6 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_5 = par_e;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_7 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_26;
            PyObject *tmp_called_name_16;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_21;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_17;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_start_name_29;
            PyObject *tmp_stop_name_29;
            PyObject *tmp_step_name_29;
            PyObject *tmp_start_name_30;
            PyObject *tmp_stop_name_30;
            PyObject *tmp_step_name_30;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_start_name_31;
            PyObject *tmp_stop_name_31;
            PyObject *tmp_step_name_31;
            PyObject *tmp_start_name_32;
            PyObject *tmp_stop_name_32;
            PyObject *tmp_step_name_32;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_qr );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_called_name_15 = tmp_mvar_value_20;
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_21 == NULL ))
            {
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_21 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_source_name_16 = tmp_mvar_value_21;
            tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_vstack );
            if ( tmp_called_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT( par_e );
            tmp_source_name_17 = par_e;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dot );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT( var_u );
            tmp_subscribed_name_11 = var_u;
            tmp_start_name_29 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_29 = var_m;
            tmp_step_name_29 = Py_None;
            tmp_tuple_element_23 = MAKE_SLICEOBJ3( tmp_start_name_29, tmp_stop_name_29, tmp_step_name_29 );
            assert( !(tmp_tuple_element_23 == NULL) );
            tmp_subscript_name_11 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 0, tmp_tuple_element_23 );
            tmp_start_name_30 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_30 = var_m;
            tmp_step_name_30 = Py_None;
            tmp_tuple_element_23 = MAKE_SLICEOBJ3( tmp_start_name_30, tmp_stop_name_30, tmp_step_name_30 );
            assert( !(tmp_tuple_element_23 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 1, tmp_tuple_element_23 );
            tmp_args_element_name_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            Py_DECREF( tmp_subscript_name_11 );
            if ( tmp_args_element_name_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 498;
            {
                PyObject *call_args[] = { tmp_args_element_name_28 };
                tmp_tuple_element_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_28 );
            if ( tmp_tuple_element_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_args_element_name_27 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_27, 0, tmp_tuple_element_22 );
            CHECK_OBJECT( var_u );
            tmp_subscribed_name_12 = var_u;
            CHECK_OBJECT( var_m );
            tmp_start_name_31 = var_m;
            tmp_stop_name_31 = Py_None;
            tmp_step_name_31 = Py_None;
            tmp_tuple_element_24 = MAKE_SLICEOBJ3( tmp_start_name_31, tmp_stop_name_31, tmp_step_name_31 );
            assert( !(tmp_tuple_element_24 == NULL) );
            tmp_subscript_name_12 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 0, tmp_tuple_element_24 );
            tmp_start_name_32 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_32 = var_m;
            tmp_step_name_32 = Py_None;
            tmp_tuple_element_24 = MAKE_SLICEOBJ3( tmp_start_name_32, tmp_stop_name_32, tmp_step_name_32 );
            assert( !(tmp_tuple_element_24 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 1, tmp_tuple_element_24 );
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            Py_DECREF( tmp_subscript_name_12 );
            if ( tmp_tuple_element_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_16 );
                Py_DECREF( tmp_args_element_name_27 );

                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_27, 1, tmp_tuple_element_22 );
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 498;
            {
                PyObject *call_args[] = { tmp_args_element_name_27 };
                tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_called_name_16 );
            Py_DECREF( tmp_args_element_name_27 );
            if ( tmp_args_element_name_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 498;
            {
                PyObject *call_args[] = { tmp_args_element_name_26 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_args_element_name_26 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_6__source_iter == NULL );
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_62;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_23 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_23, 0, 2 );
            if ( tmp_assign_source_63 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 498;
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_6__element_1 == NULL );
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_63;
        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_24 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_24, 1, 2 );
            if ( tmp_assign_source_64 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 498;
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_6__element_2 == NULL );
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_64;
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

                        type_description_1 = "oooooooooooooooooooooooooooo";
                        exception_lineno = 498;
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

                type_description_1 = "oooooooooooooooooooooooooooo";
                exception_lineno = 498;
                goto try_except_handler_13;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        try_end_11:;
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

        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_1;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
            tmp_assign_source_65 = tmp_tuple_unpack_6__element_1;
            {
                PyObject *old = var_u;
                assert( old != NULL );
                var_u = tmp_assign_source_65;
                Py_INCREF( var_u );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_66;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
            tmp_assign_source_66 = tmp_tuple_unpack_6__element_2;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_66;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_start_name_33;
        PyObject *tmp_stop_name_33;
        PyObject *tmp_step_name_33;
        PyObject *tmp_start_name_34;
        PyObject *tmp_stop_name_34;
        PyObject *tmp_step_name_34;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_13 = var_u;
        tmp_start_name_33 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_33 = var_m;
        tmp_step_name_33 = Py_None;
        tmp_tuple_element_25 = MAKE_SLICEOBJ3( tmp_start_name_33, tmp_stop_name_33, tmp_step_name_33 );
        assert( !(tmp_tuple_element_25 == NULL) );
        tmp_subscript_name_13 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 0, tmp_tuple_element_25 );
        tmp_start_name_34 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_34 = var_m;
        tmp_step_name_34 = Py_None;
        tmp_tuple_element_25 = MAKE_SLICEOBJ3( tmp_start_name_34, tmp_stop_name_34, tmp_step_name_34 );
        assert( !(tmp_tuple_element_25 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 1, tmp_tuple_element_25 );
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 499;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u00 == NULL );
        var_u00 = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_start_name_35;
        PyObject *tmp_stop_name_35;
        PyObject *tmp_step_name_35;
        PyObject *tmp_start_name_36;
        PyObject *tmp_stop_name_36;
        PyObject *tmp_step_name_36;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_14 = var_u;
        CHECK_OBJECT( var_m );
        tmp_start_name_35 = var_m;
        tmp_stop_name_35 = Py_None;
        tmp_step_name_35 = Py_None;
        tmp_tuple_element_26 = MAKE_SLICEOBJ3( tmp_start_name_35, tmp_stop_name_35, tmp_step_name_35 );
        assert( !(tmp_tuple_element_26 == NULL) );
        tmp_subscript_name_14 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 0, tmp_tuple_element_26 );
        tmp_start_name_36 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_36 = var_m;
        tmp_step_name_36 = Py_None;
        tmp_tuple_element_26 = MAKE_SLICEOBJ3( tmp_start_name_36, tmp_stop_name_36, tmp_step_name_36 );
        assert( !(tmp_tuple_element_26 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 1, tmp_tuple_element_26 );
        tmp_assign_source_68 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        Py_DECREF( tmp_subscript_name_14 );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 500;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u10 == NULL );
        var_u10 = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_29;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_lu );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_name_18 = tmp_mvar_value_22;
        CHECK_OBJECT( var_u00 );
        tmp_args_element_name_29 = var_u00;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = { tmp_args_element_name_29 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_69 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_69 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_69;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_25 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_25, 0, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 503;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_26 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_26, 1, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 503;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_27 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT( tmp_unpack_27, 2, 3 );
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


            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 503;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_3 == NULL );
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_72;
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

                    type_description_1 = "oooooooooooooooooooooooooooo";
                    exception_lineno = 503;
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

            type_description_1 = "oooooooooooooooooooooooooooo";
            exception_lineno = 503;
            goto try_except_handler_15;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    goto try_end_14;
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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_73 = tmp_tuple_unpack_7__element_1;
        assert( var_up == NULL );
        Py_INCREF( tmp_assign_source_73 );
        var_up = tmp_assign_source_73;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_74 = tmp_tuple_unpack_7__element_2;
        assert( var_ul == NULL );
        Py_INCREF( tmp_assign_source_74 );
        var_ul = tmp_assign_source_74;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
        tmp_assign_source_75 = tmp_tuple_unpack_7__element_3;
        assert( var_uu == NULL );
        Py_INCREF( tmp_assign_source_75 );
        var_uu = tmp_assign_source_75;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_31;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_mvar_value_24;
        tmp_left_name_31 = const_int_pos_1;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_cond );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cond );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cond" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_23;
        CHECK_OBJECT( var_uu );
        tmp_args_element_name_30 = var_uu;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = { tmp_args_element_name_30 };
            tmp_right_name_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
        }

        if ( tmp_right_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_6 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_31, tmp_right_name_31 );
        Py_DECREF( tmp_right_name_31 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = tmp_mvar_value_24;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 504;
        tmp_compexpr_right_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1_0_tuple, 0 ) );

        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 504;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_20;
            PyObject *tmp_mvar_value_25;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_25 == NULL ))
            {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_25 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 505;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_20 = tmp_mvar_value_25;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 505;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, &PyTuple_GET_ITEM( const_tuple_str_digest_6c8722767aa19d803f52ef190f3258fd_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 505;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 505;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_18;
        PyObject *tmp_source_name_19;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_source_name_20;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_name_23;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_source_name_21;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_source_name_22;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_source_name_23;
        PyObject *tmp_called_instance_18;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_26;
        CHECK_OBJECT( var_ul );
        tmp_called_instance_15 = var_ul;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 508;
        tmp_source_name_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_conj );
        if ( tmp_source_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
        Py_DECREF( tmp_source_name_20 );
        if ( tmp_tuple_element_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_27 );
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_27 == NULL )
        {
            Py_DECREF( tmp_args_name_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_23 = tmp_mvar_value_27;
        CHECK_OBJECT( var_uu );
        tmp_called_instance_16 = var_uu;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 509;
        tmp_source_name_21 = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_conj );
        if ( tmp_source_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_T );
        Py_DECREF( tmp_source_name_21 );
        if ( tmp_tuple_element_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_7 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_28 );
        CHECK_OBJECT( var_u10 );
        tmp_called_instance_17 = var_u10;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 510;
        tmp_source_name_22 = CALL_METHOD_NO_ARGS( tmp_called_instance_17, const_str_plain_conj );
        if ( tmp_source_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_args_name_7 );

            exception_lineno = 510;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_T );
        Py_DECREF( tmp_source_name_22 );
        if ( tmp_tuple_element_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );
            Py_DECREF( tmp_args_name_7 );

            exception_lineno = 510;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_28 );
        tmp_kw_name_6 = PyDict_Copy( const_dict_0f2519a6c952cc568952beb42c1e9b1d );
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 509;
        tmp_tuple_element_27 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_7, tmp_kw_name_6 );
        Py_DECREF( tmp_args_name_7 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_tuple_element_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 509;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_27 );
        tmp_kw_name_7 = PyDict_Copy( const_dict_06e191f0e66b8127c249458e30dade7b );
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 508;
        tmp_called_instance_14 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_6, tmp_kw_name_7 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_7 );
        if ( tmp_called_instance_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 508;
        tmp_source_name_19 = CALL_METHOD_NO_ARGS( tmp_called_instance_14, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_14 );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_T );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_dot );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_up );
        tmp_called_instance_18 = var_up;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 513;
        tmp_source_name_23 = CALL_METHOD_NO_ARGS( tmp_called_instance_18, const_str_plain_conj );
        if ( tmp_source_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_21 );

            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_T );
        Py_DECREF( tmp_source_name_23 );
        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_21 );

            exception_lineno = 513;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 508;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_assign_source_76 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_76;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_balanced );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_balanced );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_left_name_32;
            PyObject *tmp_right_name_32;
            PyObject *tmp_left_name_33;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_start_name_37;
            PyObject *tmp_stop_name_37;
            PyObject *tmp_step_name_37;
            PyObject *tmp_right_name_33;
            PyObject *tmp_subscribed_name_16;
            PyObject *tmp_subscript_name_16;
            PyObject *tmp_start_name_38;
            PyObject *tmp_stop_name_38;
            PyObject *tmp_step_name_38;
            CHECK_OBJECT( var_x );
            tmp_left_name_32 = var_x;
            if ( var_sca == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sca" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_15 = var_sca;
            tmp_start_name_37 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_37 = var_m;
            tmp_step_name_37 = Py_None;
            tmp_tuple_element_29 = MAKE_SLICEOBJ3( tmp_start_name_37, tmp_stop_name_37, tmp_step_name_37 );
            assert( !(tmp_tuple_element_29 == NULL) );
            tmp_subscript_name_15 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_15, 0, tmp_tuple_element_29 );
            tmp_tuple_element_29 = Py_None;
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_subscript_name_15, 1, tmp_tuple_element_29 );
            tmp_left_name_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
            Py_DECREF( tmp_subscript_name_15 );
            if ( tmp_left_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_sca == NULL )
            {
                Py_DECREF( tmp_left_name_33 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sca" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_16 = var_sca;
            tmp_start_name_38 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_38 = var_m;
            tmp_step_name_38 = Py_None;
            tmp_subscript_name_16 = MAKE_SLICEOBJ3( tmp_start_name_38, tmp_stop_name_38, tmp_step_name_38 );
            assert( !(tmp_subscript_name_16 == NULL) );
            tmp_right_name_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
            Py_DECREF( tmp_subscript_name_16 );
            if ( tmp_right_name_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_33 );

                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_32 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
            Py_DECREF( tmp_left_name_33 );
            Py_DECREF( tmp_right_name_33 );
            if ( tmp_right_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_32, tmp_right_name_32 );
            Py_DECREF( tmp_right_name_32 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 515;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_77 = tmp_left_name_32;
            var_x = tmp_assign_source_77;

        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_source_name_24;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT( var_u00 );
        tmp_called_instance_20 = var_u00;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 519;
        tmp_source_name_24 = CALL_METHOD_NO_ARGS( tmp_called_instance_20, const_str_plain_conj );
        if ( tmp_source_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_T );
        Py_DECREF( tmp_source_name_24 );
        if ( tmp_called_instance_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_u10 );
        tmp_args_element_name_32 = var_u10;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_assign_source_78 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_19 );
        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 519;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u_sym == NULL );
        var_u_sym = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 520;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_28;
        CHECK_OBJECT( var_u_sym );
        tmp_args_element_name_33 = var_u_sym;
        tmp_args_element_name_34 = const_int_pos_1;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
        }

        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 520;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_u_sym == NULL );
        var_n_u_sym = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_left_name_34;
        PyObject *tmp_right_name_34;
        PyObject *tmp_source_name_25;
        PyObject *tmp_called_instance_21;
        CHECK_OBJECT( var_u_sym );
        tmp_left_name_34 = var_u_sym;
        CHECK_OBJECT( var_u_sym );
        tmp_called_instance_21 = var_u_sym;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 521;
        tmp_source_name_25 = CALL_METHOD_NO_ARGS( tmp_called_instance_21, const_str_plain_conj );
        if ( tmp_source_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_T );
        Py_DECREF( tmp_source_name_25 );
        if ( tmp_right_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_34 );
        Py_DECREF( tmp_right_name_34 );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u_sym;
            assert( old != NULL );
            var_u_sym = tmp_assign_source_80;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_name_25;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_35;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_26 = tmp_mvar_value_29;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_max );
        if ( tmp_called_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_30 == NULL )
        {
            Py_DECREF( tmp_called_name_25 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_22 = tmp_mvar_value_30;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 522;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1000_0_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_25 );

            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_35, 0, tmp_list_element_1 );
        tmp_left_name_35 = const_float_0_1;
        CHECK_OBJECT( var_n_u_sym );
        tmp_right_name_35 = var_n_u_sym;
        tmp_list_element_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_35, tmp_right_name_35 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_25 );
            Py_DECREF( tmp_args_element_name_35 );

            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_35, 1, tmp_list_element_1 );
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 522;
        {
            PyObject *call_args[] = { tmp_args_element_name_35 };
            tmp_assign_source_81 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
        }

        Py_DECREF( tmp_called_name_25 );
        Py_DECREF( tmp_args_element_name_35 );
        if ( tmp_assign_source_81 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sym_threshold == NULL );
        var_sym_threshold = tmp_assign_source_81;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_26;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_26 = tmp_mvar_value_31;
        CHECK_OBJECT( var_u_sym );
        tmp_args_element_name_36 = var_u_sym;
        tmp_args_element_name_37 = const_int_pos_1;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = { tmp_args_element_name_36, tmp_args_element_name_37 };
            tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_26, call_args );
        }

        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sym_threshold );
        tmp_compexpr_right_7 = var_sym_threshold;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 524;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_27;
            PyObject *tmp_mvar_value_32;
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_32 == NULL ))
            {
                tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_32 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 525;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_27 = tmp_mvar_value_32;
            frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 525;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_str_digest_833eff5324a602dadc9aba1b344e5ac2_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 525;
                type_description_1 = "oooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 525;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_right_name_36;
        PyObject *tmp_source_name_27;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_right_name_37;
        CHECK_OBJECT( var_x );
        tmp_left_name_37 = var_x;
        CHECK_OBJECT( var_x );
        tmp_called_instance_23 = var_x;
        frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame.f_lineno = 528;
        tmp_source_name_27 = CALL_METHOD_NO_ARGS( tmp_called_instance_23, const_str_plain_conj );
        if ( tmp_source_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_T );
        Py_DECREF( tmp_source_name_27 );
        if ( tmp_right_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_37, tmp_right_name_36 );
        Py_DECREF( tmp_right_name_36 );
        if ( tmp_left_name_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_37 = const_int_pos_2;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_36, tmp_right_name_37 );
        Py_DECREF( tmp_left_name_36 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05fba39617e6a39a2b8101e82b9e54b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05fba39617e6a39a2b8101e82b9e54b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_05fba39617e6a39a2b8101e82b9e54b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05fba39617e6a39a2b8101e82b9e54b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05fba39617e6a39a2b8101e82b9e54b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05fba39617e6a39a2b8101e82b9e54b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05fba39617e6a39a2b8101e82b9e54b2,
        type_description_1,
        par_a,
        par_b,
        par_q,
        par_r,
        par_e,
        par_s,
        par_balanced,
        var_m,
        var_n,
        var_r_or_c,
        var_gen_are,
        var_H,
        var_J,
        var_M,
        var__,
        var_sca,
        var_elwisescale,
        var_out_str,
        var_u,
        var_u00,
        var_u10,
        var_up,
        var_ul,
        var_uu,
        var_x,
        var_u_sym,
        var_n_u_sym,
        var_sym_threshold
    );


    // Release cached frame.
    if ( frame_05fba39617e6a39a2b8101e82b9e54b2 == cache_frame_05fba39617e6a39a2b8101e82b9e54b2 )
    {
        Py_DECREF( frame_05fba39617e6a39a2b8101e82b9e54b2 );
    }
    cache_frame_05fba39617e6a39a2b8101e82b9e54b2 = NULL;

    assertFrameObject( frame_05fba39617e6a39a2b8101e82b9e54b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_6_solve_continuous_are );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_balanced );
    Py_DECREF( par_balanced );
    par_balanced = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_r_or_c );
    Py_DECREF( var_r_or_c );
    var_r_or_c = NULL;

    CHECK_OBJECT( (PyObject *)var_gen_are );
    Py_DECREF( var_gen_are );
    var_gen_are = NULL;

    CHECK_OBJECT( (PyObject *)var_H );
    Py_DECREF( var_H );
    var_H = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sca );
    var_sca = NULL;

    Py_XDECREF( var_elwisescale );
    var_elwisescale = NULL;

    CHECK_OBJECT( (PyObject *)var_out_str );
    Py_DECREF( var_out_str );
    var_out_str = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_u00 );
    Py_DECREF( var_u00 );
    var_u00 = NULL;

    CHECK_OBJECT( (PyObject *)var_u10 );
    Py_DECREF( var_u10 );
    var_u10 = NULL;

    CHECK_OBJECT( (PyObject *)var_up );
    Py_DECREF( var_up );
    var_up = NULL;

    CHECK_OBJECT( (PyObject *)var_ul );
    Py_DECREF( var_ul );
    var_ul = NULL;

    CHECK_OBJECT( (PyObject *)var_uu );
    Py_DECREF( var_uu );
    var_uu = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_u_sym );
    Py_DECREF( var_u_sym );
    var_u_sym = NULL;

    CHECK_OBJECT( (PyObject *)var_n_u_sym );
    Py_DECREF( var_n_u_sym );
    var_n_u_sym = NULL;

    CHECK_OBJECT( (PyObject *)var_sym_threshold );
    Py_DECREF( var_sym_threshold );
    var_sym_threshold = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_balanced );
    Py_DECREF( par_balanced );
    par_balanced = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_gen_are );
    var_gen_are = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sca );
    var_sca = NULL;

    Py_XDECREF( var_elwisescale );
    var_elwisescale = NULL;

    Py_XDECREF( var_out_str );
    var_out_str = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_u00 );
    var_u00 = NULL;

    Py_XDECREF( var_u10 );
    var_u10 = NULL;

    Py_XDECREF( var_up );
    var_up = NULL;

    Py_XDECREF( var_ul );
    var_ul = NULL;

    Py_XDECREF( var_uu );
    var_uu = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_u_sym );
    var_u_sym = NULL;

    Py_XDECREF( var_n_u_sym );
    var_n_u_sym = NULL;

    Py_XDECREF( var_sym_threshold );
    var_sym_threshold = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_6_solve_continuous_are );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_7_solve_discrete_are( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_r = python_pars[ 3 ];
    PyObject *par_e = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_balanced = python_pars[ 6 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_r_or_c = NULL;
    PyObject *var_gen_are = NULL;
    PyObject *var_H = NULL;
    PyObject *var_J = NULL;
    PyObject *var_M = NULL;
    PyObject *var__ = NULL;
    PyObject *var_sca = NULL;
    PyObject *var_elwisescale = NULL;
    PyObject *var_q_of_qr = NULL;
    PyObject *var_out_str = NULL;
    PyObject *var_u = NULL;
    PyObject *var_u00 = NULL;
    PyObject *var_u10 = NULL;
    PyObject *var_up = NULL;
    PyObject *var_ul = NULL;
    PyObject *var_uu = NULL;
    PyObject *var_x = NULL;
    PyObject *var_u_sym = NULL;
    PyObject *var_n_u_sym = NULL;
    PyObject *var_sym_threshold = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
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
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__element_4 = NULL;
    PyObject *tmp_tuple_unpack_5__element_5 = NULL;
    PyObject *tmp_tuple_unpack_5__element_6 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a9d726d8893bf62df049aa12d46b1a70;
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
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a9d726d8893bf62df049aa12d46b1a70 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9d726d8893bf62df049aa12d46b1a70, codeobj_a9d726d8893bf62df049aa12d46b1a70, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a9d726d8893bf62df049aa12d46b1a70 = cache_frame_a9d726d8893bf62df049aa12d46b1a70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9d726d8893bf62df049aa12d46b1a70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9d726d8893bf62df049aa12d46b1a70 ) == 2 ); // Frame stack

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
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__are_validate_args );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__are_validate_args );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_are_validate_args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 652;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_2 = par_b;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_3 = par_q;
        CHECK_OBJECT( par_r );
        tmp_args_element_name_4 = par_r;
        CHECK_OBJECT( par_e );
        tmp_args_element_name_5 = par_e;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_6 = par_s;
        tmp_args_element_name_7 = const_str_plain_dare;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 652;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 652;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 652;
            type_description_1 = "ooooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
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
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
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
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_5, 4, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_6, 5, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_6 == NULL );
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_7, 6, 10 );
        if ( tmp_assign_source_8 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_7 == NULL );
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_8, 7, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_8 == NULL );
        tmp_tuple_unpack_1__element_8 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_9, 8, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_9 == NULL );
        tmp_tuple_unpack_1__element_9 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_10, 9, 10 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_10 == NULL );
        tmp_tuple_unpack_1__element_10 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 652;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 10)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 652;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

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
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_a;
            assert( old != NULL );
            par_a = tmp_assign_source_12;
            Py_INCREF( par_a );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_13;
            Py_INCREF( par_b );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_14;
            Py_INCREF( par_q );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = par_r;
            assert( old != NULL );
            par_r = tmp_assign_source_15;
            Py_INCREF( par_r );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_16 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = par_e;
            assert( old != NULL );
            par_e = tmp_assign_source_16;
            Py_INCREF( par_e );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_6 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_6;
        {
            PyObject *old = par_s;
            assert( old != NULL );
            par_s = tmp_assign_source_17;
            Py_INCREF( par_s );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_7 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_7;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_m = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_8 );
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_8;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_n = tmp_assign_source_19;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_9 );
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_9;
        assert( var_r_or_c == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_r_or_c = tmp_assign_source_20;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_10 );
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_10;
        assert( var_gen_are == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_gen_are = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_1 = var_m;
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_right_name_2 = var_n;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_left_name_4 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_3 = var_m;
        tmp_left_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n );
        tmp_right_name_4 = var_n;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_dtype;
        CHECK_OBJECT( var_r_or_c );
        tmp_dict_value_1 = var_r_or_c;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 656;
        tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 656;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_H == NULL );
        var_H = tmp_assign_source_22;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_step_name_1;
        PyObject *tmp_start_name_2;
        PyObject *tmp_stop_name_2;
        PyObject *tmp_step_name_2;
        CHECK_OBJECT( par_a );
        tmp_ass_subvalue_1 = par_a;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_1 = var_H;
        tmp_start_name_1 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_1 = var_m;
        tmp_step_name_1 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        assert( !(tmp_tuple_element_3 == NULL) );
        tmp_ass_subscript_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_3 );
        tmp_start_name_2 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_2 = var_m;
        tmp_step_name_2 = Py_None;
        tmp_tuple_element_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
        assert( !(tmp_tuple_element_3 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_3 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 657;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_step_name_3;
        PyObject *tmp_start_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_stop_name_4;
        PyObject *tmp_step_name_4;
        CHECK_OBJECT( par_b );
        tmp_ass_subvalue_2 = par_b;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_2 = var_H;
        tmp_start_name_3 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_3 = var_m;
        tmp_step_name_3 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        assert( !(tmp_tuple_element_4 == NULL) );
        tmp_ass_subscript_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_4 );
        tmp_left_name_5 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_5 = var_m;
        tmp_start_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_start_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_2 );

            exception_lineno = 658;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_4 = Py_None;
        tmp_step_name_4 = Py_None;
        tmp_tuple_element_4 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
        Py_DECREF( tmp_start_name_4 );
        assert( !(tmp_tuple_element_4 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_4 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 658;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_start_name_5;
        PyObject *tmp_stop_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_step_name_5;
        PyObject *tmp_start_name_6;
        PyObject *tmp_stop_name_6;
        PyObject *tmp_step_name_6;
        CHECK_OBJECT( par_q );
        tmp_operand_name_1 = par_q;
        tmp_ass_subvalue_3 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_3 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_5 = var_m;
        tmp_left_name_6 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_6 = var_m;
        tmp_stop_name_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_stop_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_3 );

            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_5 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
        Py_DECREF( tmp_stop_name_5 );
        assert( !(tmp_tuple_element_5 == NULL) );
        tmp_ass_subscript_3 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_5 );
        tmp_start_name_6 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_6 = var_m;
        tmp_step_name_6 = Py_None;
        tmp_tuple_element_5 = MAKE_SLICEOBJ3( tmp_start_name_6, tmp_stop_name_6, tmp_step_name_6 );
        assert( !(tmp_tuple_element_5 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_5 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 659;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_start_name_7;
        PyObject *tmp_stop_name_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_step_name_7;
        PyObject *tmp_start_name_8;
        PyObject *tmp_stop_name_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_step_name_8;
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_1 = par_e;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_8 = var_m;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 660;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_ass_subvalue_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_eye, call_args );
        }

        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_e );
        tmp_called_instance_2 = par_e;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 660;
        tmp_source_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conj );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_4 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_7 = var_m;
        tmp_left_name_7 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_7 = var_m;
        tmp_stop_name_7 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_stop_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_4 );

            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_7 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_7, tmp_stop_name_7, tmp_step_name_7 );
        Py_DECREF( tmp_stop_name_7 );
        assert( !(tmp_tuple_element_6 == NULL) );
        tmp_ass_subscript_4 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_m );
        tmp_start_name_8 = var_m;
        tmp_left_name_8 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_8 = var_m;
        tmp_stop_name_8 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_stop_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_4 );
            Py_DECREF( tmp_ass_subscript_4 );

            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_8 = Py_None;
        tmp_tuple_element_6 = MAKE_SLICEOBJ3( tmp_start_name_8, tmp_stop_name_8, tmp_step_name_8 );
        Py_DECREF( tmp_stop_name_8 );
        assert( !(tmp_tuple_element_6 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_4, 1, tmp_tuple_element_6 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subscript_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 660;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_start_name_9;
        PyObject *tmp_stop_name_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_step_name_9;
        PyObject *tmp_start_name_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_stop_name_10;
        PyObject *tmp_step_name_10;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_2 = par_s;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_ass_subvalue_5 = const_float_0_0;
        Py_INCREF( tmp_ass_subvalue_5 );
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT( par_s );
        tmp_operand_name_2 = par_s;
        tmp_ass_subvalue_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_5 = var_H;
        CHECK_OBJECT( var_m );
        tmp_start_name_9 = var_m;
        tmp_left_name_9 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_9 = var_m;
        tmp_stop_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_stop_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_5 );

            exception_lineno = 661;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_9 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_9, tmp_stop_name_9, tmp_step_name_9 );
        Py_DECREF( tmp_stop_name_9 );
        assert( !(tmp_tuple_element_7 == NULL) );
        tmp_ass_subscript_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_7 );
        tmp_left_name_10 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_10 = var_m;
        tmp_start_name_10 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_start_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_5 );
            Py_DECREF( tmp_ass_subscript_5 );

            exception_lineno = 661;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_10 = Py_None;
        tmp_step_name_10 = Py_None;
        tmp_tuple_element_7 = MAKE_SLICEOBJ3( tmp_start_name_10, tmp_stop_name_10, tmp_step_name_10 );
        Py_DECREF( tmp_start_name_10 );
        assert( !(tmp_tuple_element_7 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_7 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 661;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_start_name_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_stop_name_11;
        PyObject *tmp_step_name_11;
        PyObject *tmp_start_name_12;
        PyObject *tmp_stop_name_12;
        PyObject *tmp_step_name_12;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_3 = par_s;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_ass_subvalue_6 = const_float_0_0;
        Py_INCREF( tmp_ass_subvalue_6 );
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( par_s );
        tmp_called_instance_3 = par_s;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 662;
        tmp_source_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_conj );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_3:;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_6 = var_H;
        tmp_left_name_11 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_11 = var_m;
        tmp_start_name_11 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_start_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_6 );

            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_11 = Py_None;
        tmp_step_name_11 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_11, tmp_stop_name_11, tmp_step_name_11 );
        Py_DECREF( tmp_start_name_11 );
        assert( !(tmp_tuple_element_8 == NULL) );
        tmp_ass_subscript_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 0, tmp_tuple_element_8 );
        tmp_start_name_12 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_12 = var_m;
        tmp_step_name_12 = Py_None;
        tmp_tuple_element_8 = MAKE_SLICEOBJ3( tmp_start_name_12, tmp_stop_name_12, tmp_step_name_12 );
        assert( !(tmp_tuple_element_8 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_6, 1, tmp_tuple_element_8 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subscript_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 662;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_start_name_13;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_stop_name_13;
        PyObject *tmp_step_name_13;
        PyObject *tmp_start_name_14;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_stop_name_14;
        PyObject *tmp_step_name_14;
        CHECK_OBJECT( par_r );
        tmp_ass_subvalue_7 = par_r;
        CHECK_OBJECT( var_H );
        tmp_ass_subscribed_7 = var_H;
        tmp_left_name_12 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_12 = var_m;
        tmp_start_name_13 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_start_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 663;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_13 = Py_None;
        tmp_step_name_13 = Py_None;
        tmp_tuple_element_9 = MAKE_SLICEOBJ3( tmp_start_name_13, tmp_stop_name_13, tmp_step_name_13 );
        Py_DECREF( tmp_start_name_13 );
        assert( !(tmp_tuple_element_9 == NULL) );
        tmp_ass_subscript_7 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_7, 0, tmp_tuple_element_9 );
        tmp_left_name_13 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_13 = var_m;
        tmp_start_name_14 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_start_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscript_7 );

            exception_lineno = 663;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_14 = Py_None;
        tmp_step_name_14 = Py_None;
        tmp_tuple_element_9 = MAKE_SLICEOBJ3( tmp_start_name_14, tmp_stop_name_14, tmp_step_name_14 );
        Py_DECREF( tmp_start_name_14 );
        assert( !(tmp_tuple_element_9 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_7, 1, tmp_tuple_element_9 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subscript_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 663;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros_like );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_H );
        tmp_tuple_element_10 = var_H;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_10 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_10 );
        tmp_dict_key_2 = const_str_plain_dtype;
        CHECK_OBJECT( var_r_or_c );
        tmp_dict_value_2 = var_r_or_c;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 665;
        tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 665;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_J == NULL );
        var_J = tmp_assign_source_23;
    }
    {
        PyObject *tmp_ass_subvalue_8;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_start_name_15;
        PyObject *tmp_stop_name_15;
        PyObject *tmp_step_name_15;
        PyObject *tmp_start_name_16;
        PyObject *tmp_stop_name_16;
        PyObject *tmp_step_name_16;
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_4 = par_e;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_9 = var_m;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_ass_subvalue_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_eye, call_args );
        }

        if ( tmp_ass_subvalue_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        CHECK_OBJECT( par_e );
        tmp_ass_subvalue_8 = par_e;
        Py_INCREF( tmp_ass_subvalue_8 );
        condexpr_end_4:;
        CHECK_OBJECT( var_J );
        tmp_ass_subscribed_8 = var_J;
        tmp_start_name_15 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_15 = var_m;
        tmp_step_name_15 = Py_None;
        tmp_tuple_element_11 = MAKE_SLICEOBJ3( tmp_start_name_15, tmp_stop_name_15, tmp_step_name_15 );
        assert( !(tmp_tuple_element_11 == NULL) );
        tmp_ass_subscript_8 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_8, 0, tmp_tuple_element_11 );
        tmp_start_name_16 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_16 = var_m;
        tmp_step_name_16 = Py_None;
        tmp_tuple_element_11 = MAKE_SLICEOBJ3( tmp_start_name_16, tmp_stop_name_16, tmp_step_name_16 );
        assert( !(tmp_tuple_element_11 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_8, 1, tmp_tuple_element_11 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
        Py_DECREF( tmp_ass_subscript_8 );
        Py_DECREF( tmp_ass_subvalue_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 666;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_source_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_start_name_17;
        PyObject *tmp_stop_name_17;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_step_name_17;
        PyObject *tmp_start_name_18;
        PyObject *tmp_stop_name_18;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_step_name_18;
        CHECK_OBJECT( par_a );
        tmp_called_instance_5 = par_a;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 667;
        tmp_source_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_conj );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 667;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_ass_subvalue_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 667;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_J );
        tmp_ass_subscribed_9 = var_J;
        CHECK_OBJECT( var_m );
        tmp_start_name_17 = var_m;
        tmp_left_name_14 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_14 = var_m;
        tmp_stop_name_17 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_stop_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_9 );

            exception_lineno = 667;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_17 = Py_None;
        tmp_tuple_element_12 = MAKE_SLICEOBJ3( tmp_start_name_17, tmp_stop_name_17, tmp_step_name_17 );
        Py_DECREF( tmp_stop_name_17 );
        assert( !(tmp_tuple_element_12 == NULL) );
        tmp_ass_subscript_9 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_9, 0, tmp_tuple_element_12 );
        CHECK_OBJECT( var_m );
        tmp_start_name_18 = var_m;
        tmp_left_name_15 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_15 = var_m;
        tmp_stop_name_18 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        if ( tmp_stop_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_9 );
            Py_DECREF( tmp_ass_subscript_9 );

            exception_lineno = 667;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_18 = Py_None;
        tmp_tuple_element_12 = MAKE_SLICEOBJ3( tmp_start_name_18, tmp_stop_name_18, tmp_step_name_18 );
        Py_DECREF( tmp_stop_name_18 );
        assert( !(tmp_tuple_element_12 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_9, 1, tmp_tuple_element_12 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
        Py_DECREF( tmp_ass_subscript_9 );
        Py_DECREF( tmp_ass_subvalue_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 667;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_start_name_19;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_stop_name_19;
        PyObject *tmp_step_name_19;
        PyObject *tmp_start_name_20;
        PyObject *tmp_stop_name_20;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_step_name_20;
        CHECK_OBJECT( par_b );
        tmp_called_instance_6 = par_b;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 668;
        tmp_source_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_conj );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_T );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_ass_subvalue_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_J );
        tmp_ass_subscribed_10 = var_J;
        tmp_left_name_16 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_16 = var_m;
        tmp_start_name_19 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_start_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_10 );

            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_name_19 = Py_None;
        tmp_step_name_19 = Py_None;
        tmp_tuple_element_13 = MAKE_SLICEOBJ3( tmp_start_name_19, tmp_stop_name_19, tmp_step_name_19 );
        Py_DECREF( tmp_start_name_19 );
        assert( !(tmp_tuple_element_13 == NULL) );
        tmp_ass_subscript_10 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_10, 0, tmp_tuple_element_13 );
        CHECK_OBJECT( var_m );
        tmp_start_name_20 = var_m;
        tmp_left_name_17 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_17 = var_m;
        tmp_stop_name_20 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_stop_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_10 );
            Py_DECREF( tmp_ass_subscript_10 );

            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_20 = Py_None;
        tmp_tuple_element_13 = MAKE_SLICEOBJ3( tmp_start_name_20, tmp_stop_name_20, tmp_step_name_20 );
        Py_DECREF( tmp_stop_name_20 );
        assert( !(tmp_tuple_element_13 == NULL) );
        PyTuple_SET_ITEM( tmp_ass_subscript_10, 1, tmp_tuple_element_13 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10 );
        Py_DECREF( tmp_ass_subscript_10 );
        Py_DECREF( tmp_ass_subvalue_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_balanced );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_balanced );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 670;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_left_name_18;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_right_name_18;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 673;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_7 = tmp_mvar_value_6;
            CHECK_OBJECT( var_H );
            tmp_args_element_name_10 = var_H;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 673;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_left_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_abs, call_args );
            }

            if ( tmp_left_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 673;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_left_name_18 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 673;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_8 = tmp_mvar_value_7;
            CHECK_OBJECT( var_J );
            tmp_args_element_name_11 = var_J;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 673;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_right_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abs, call_args );
            }

            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_18 );

                exception_lineno = 673;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 673;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_24;
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_12;
            tmp_ass_subvalue_11 = const_float_0_0;
            CHECK_OBJECT( var_M );
            tmp_ass_subscribed_11 = var_M;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 674;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_9 = tmp_mvar_value_8;
            CHECK_OBJECT( var_M );
            tmp_args_element_name_12 = var_M;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 674;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_ass_subscript_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_diag_indices_from, call_args );
            }

            if ( tmp_ass_subscript_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 674;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
            Py_DECREF( tmp_ass_subscript_11 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 674;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_matrix_balance );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix_balance );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "matrix_balance" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 675;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_4 = tmp_mvar_value_9;
            CHECK_OBJECT( var_M );
            tmp_tuple_element_14 = var_M;
            tmp_args_name_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_14 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_ae1991590e888167b616f9be039d1845 );
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 675;
            tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_11 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_11, 0, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_12, 1, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_27;
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

                        type_description_1 = "ooooooooooooooooooooooooooooo";
                        exception_lineno = 675;
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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
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
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_28 = tmp_tuple_unpack_2__element_1;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_28 );
            var__ = tmp_assign_source_28;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_iter_arg_3 = tmp_tuple_unpack_2__element_2;
            tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 675;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
            if ( tmp_assign_source_30 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;
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

                        type_description_1 = "ooooooooooooooooooooooooooooo";
                        exception_lineno = 675;
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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 675;
                goto try_except_handler_7;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
        Py_DECREF( tmp_tuple_unpack_3__source_iter );
        tmp_tuple_unpack_3__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
        goto try_end_5;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        try_end_5:;
        goto try_end_6;
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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

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
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_32 = tmp_tuple_unpack_3__element_1;
            assert( var_sca == NULL );
            Py_INCREF( tmp_assign_source_32 );
            var_sca = tmp_assign_source_32;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_33 = tmp_tuple_unpack_3__element_2;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_33;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_10;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_allclose );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_sca );
            tmp_args_element_name_13 = var_sca;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_10 = tmp_mvar_value_11;
            CHECK_OBJECT( var_sca );
            tmp_args_element_name_15 = var_sca;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 677;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_args_element_name_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_ones_like, call_args );
            }

            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 677;
            {
                PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 677;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_called_instance_11;
                PyObject *tmp_mvar_value_12;
                PyObject *tmp_args_element_name_16;
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 680;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_11 = tmp_mvar_value_12;
                CHECK_OBJECT( var_sca );
                tmp_args_element_name_16 = var_sca;
                frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 680;
                {
                    PyObject *call_args[] = { tmp_args_element_name_16 };
                    tmp_assign_source_34 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_log2, call_args );
                }

                if ( tmp_assign_source_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 680;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_sca;
                    assert( old != NULL );
                    var_sca = tmp_assign_source_34;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_13;
                PyObject *tmp_args_element_name_17;
                PyObject *tmp_left_name_19;
                PyObject *tmp_left_name_20;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_start_name_21;
                PyObject *tmp_stop_name_21;
                PyObject *tmp_left_name_21;
                PyObject *tmp_right_name_19;
                PyObject *tmp_step_name_21;
                PyObject *tmp_right_name_20;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_22;
                PyObject *tmp_stop_name_22;
                PyObject *tmp_step_name_22;
                PyObject *tmp_right_name_21;
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_13 == NULL ))
                {
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_13 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_8 = tmp_mvar_value_13;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_round );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_1 = var_sca;
                CHECK_OBJECT( var_m );
                tmp_start_name_21 = var_m;
                tmp_left_name_21 = const_int_pos_2;
                CHECK_OBJECT( var_m );
                tmp_right_name_19 = var_m;
                tmp_stop_name_21 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_21, tmp_right_name_19 );
                if ( tmp_stop_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_21 = Py_None;
                tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_21, tmp_stop_name_21, tmp_step_name_21 );
                Py_DECREF( tmp_stop_name_21 );
                assert( !(tmp_subscript_name_1 == NULL) );
                tmp_left_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                Py_DECREF( tmp_subscript_name_1 );
                if ( tmp_left_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_2 = var_sca;
                tmp_start_name_22 = Py_None;
                CHECK_OBJECT( var_m );
                tmp_stop_name_22 = var_m;
                tmp_step_name_22 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_22, tmp_stop_name_22, tmp_step_name_22 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_right_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_right_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_left_name_20 );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_20 );
                Py_DECREF( tmp_left_name_20 );
                Py_DECREF( tmp_right_name_20 );
                if ( tmp_left_name_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_21 = const_int_pos_2;
                tmp_args_element_name_17 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_19, tmp_right_name_21 );
                Py_DECREF( tmp_left_name_19 );
                if ( tmp_args_element_name_17 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 682;
                {
                    PyObject *call_args[] = { tmp_args_element_name_17 };
                    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_element_name_17 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 682;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_35;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_left_name_22;
                PyObject *tmp_right_name_22;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_operand_name_5;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_start_name_23;
                PyObject *tmp_left_name_23;
                PyObject *tmp_right_name_23;
                PyObject *tmp_stop_name_23;
                PyObject *tmp_step_name_23;
                tmp_left_name_22 = const_int_pos_2;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_9 = tmp_mvar_value_14;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_r_ );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_s );
                tmp_tuple_element_15 = par_s;
                tmp_subscript_name_3 = PyTuple_New( 3 );
                Py_INCREF( tmp_tuple_element_15 );
                PyTuple_SET_ITEM( tmp_subscript_name_3, 0, tmp_tuple_element_15 );
                CHECK_OBJECT( par_s );
                tmp_operand_name_5 = par_s;
                tmp_tuple_element_15 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_3, 1, tmp_tuple_element_15 );
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_4 = var_sca;
                tmp_left_name_23 = const_int_pos_2;
                CHECK_OBJECT( var_m );
                tmp_right_name_23 = var_m;
                tmp_start_name_23 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_23, tmp_right_name_23 );
                if ( tmp_start_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_23 = Py_None;
                tmp_step_name_23 = Py_None;
                tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_23, tmp_stop_name_23, tmp_step_name_23 );
                Py_DECREF( tmp_start_name_23 );
                assert( !(tmp_subscript_name_4 == NULL) );
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                Py_DECREF( tmp_subscript_name_4 );
                if ( tmp_tuple_element_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_subscribed_name_3 );
                    Py_DECREF( tmp_subscript_name_3 );

                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_subscript_name_3, 2, tmp_tuple_element_15 );
                tmp_right_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                Py_DECREF( tmp_subscribed_name_3 );
                Py_DECREF( tmp_subscript_name_3 );
                if ( tmp_right_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_36 = POWER_OPERATION( tmp_left_name_22, tmp_right_name_22 );
                Py_DECREF( tmp_right_name_22 );
                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 683;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_sca;
                    assert( old != NULL );
                    var_sca = tmp_assign_source_36;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_left_name_24;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_24;
                PyObject *tmp_called_instance_12;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_element_name_18;
                CHECK_OBJECT( var_sca );
                tmp_subscribed_name_5 = var_sca;
                tmp_subscript_name_5 = const_tuple_slice_none_none_none_none_tuple;
                tmp_left_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_left_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 685;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_left_name_24 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 685;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_12 = tmp_mvar_value_15;
                CHECK_OBJECT( var_sca );
                tmp_args_element_name_18 = var_sca;
                frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 685;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18 };
                    tmp_right_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_reciprocal, call_args );
                }

                if ( tmp_right_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_24 );

                    exception_lineno = 685;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_37 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
                Py_DECREF( tmp_left_name_24 );
                Py_DECREF( tmp_right_name_24 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 685;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_elwisescale == NULL );
                var_elwisescale = tmp_assign_source_37;
            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_left_name_25;
                PyObject *tmp_right_name_25;
                CHECK_OBJECT( var_H );
                tmp_left_name_25 = var_H;
                CHECK_OBJECT( var_elwisescale );
                tmp_right_name_25 = var_elwisescale;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_25, tmp_right_name_25 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 686;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_38 = tmp_left_name_25;
                var_H = tmp_assign_source_38;

            }
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_left_name_26;
                PyObject *tmp_right_name_26;
                CHECK_OBJECT( var_J );
                tmp_left_name_26 = var_J;
                CHECK_OBJECT( var_elwisescale );
                tmp_right_name_26 = var_elwisescale;
                tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_26, tmp_right_name_26 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 687;
                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_39 = tmp_left_name_26;
                var_J = tmp_assign_source_39;

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_start_name_24;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_stop_name_24;
        PyObject *tmp_step_name_24;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_qr );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_name_7 = tmp_mvar_value_16;
        if ( var_H == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_subscribed_name_6 = var_H;
        tmp_tuple_element_16 = const_slice_none_none_none;
        tmp_subscript_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_16 );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_16 );
        CHECK_OBJECT( var_n );
        tmp_operand_name_6 = var_n;
        tmp_start_name_24 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_6 );
        if ( tmp_start_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_name_6 );

            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_stop_name_24 = Py_None;
        tmp_step_name_24 = Py_None;
        tmp_tuple_element_16 = MAKE_SLICEOBJ3( tmp_start_name_24, tmp_stop_name_24, tmp_step_name_24 );
        Py_DECREF( tmp_start_name_24 );
        assert( !(tmp_tuple_element_16 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_16 );
        tmp_args_element_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        Py_DECREF( tmp_subscript_name_6 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 690;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 690;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_tuple_unpack_4__source_iter == NULL );
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_15, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 690;
            goto try_except_handler_9;
        }
        assert( tmp_tuple_unpack_4__element_1 == NULL );
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_16 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_16, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 690;
            goto try_except_handler_9;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 690;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 690;
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
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_43 = tmp_tuple_unpack_4__element_1;
        assert( var_q_of_qr == NULL );
        Py_INCREF( tmp_assign_source_43 );
        var_q_of_qr = tmp_assign_source_43;
    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_44 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_44;
            Py_INCREF( var__ );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_start_name_25;
        PyObject *tmp_stop_name_25;
        PyObject *tmp_step_name_25;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_start_name_26;
        PyObject *tmp_stop_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_27;
        PyObject *tmp_step_name_26;
        CHECK_OBJECT( var_q_of_qr );
        tmp_subscribed_name_7 = var_q_of_qr;
        tmp_tuple_element_17 = const_slice_none_none_none;
        tmp_subscript_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_17 );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_17 );
        CHECK_OBJECT( var_n );
        tmp_start_name_25 = var_n;
        tmp_stop_name_25 = Py_None;
        tmp_step_name_25 = Py_None;
        tmp_tuple_element_17 = MAKE_SLICEOBJ3( tmp_start_name_25, tmp_stop_name_25, tmp_step_name_25 );
        assert( !(tmp_tuple_element_17 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_17 );
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        Py_DECREF( tmp_subscript_name_7 );
        if ( tmp_called_instance_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 691;
        tmp_source_name_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_13 );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_source_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dot );
        Py_DECREF( tmp_source_name_10 );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_H == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "H" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_8 = var_H;
        tmp_tuple_element_18 = const_slice_none_none_none;
        tmp_subscript_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_18 );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 0, tmp_tuple_element_18 );
        tmp_start_name_26 = Py_None;
        tmp_left_name_27 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_27 = var_m;
        tmp_stop_name_26 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_27, tmp_right_name_27 );
        if ( tmp_stop_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_subscript_name_8 );

            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_26 = Py_None;
        tmp_tuple_element_18 = MAKE_SLICEOBJ3( tmp_start_name_26, tmp_stop_name_26, tmp_step_name_26 );
        Py_DECREF( tmp_stop_name_26 );
        assert( !(tmp_tuple_element_18 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_8, 1, tmp_tuple_element_18 );
        tmp_args_element_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        Py_DECREF( tmp_subscript_name_8 );
        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 691;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 691;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_H;
            var_H = tmp_assign_source_45;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_start_name_27;
        PyObject *tmp_stop_name_27;
        PyObject *tmp_step_name_27;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_start_name_28;
        PyObject *tmp_stop_name_28;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        PyObject *tmp_step_name_28;
        CHECK_OBJECT( var_q_of_qr );
        tmp_subscribed_name_9 = var_q_of_qr;
        tmp_tuple_element_19 = const_slice_none_none_none;
        tmp_subscript_name_9 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_19 );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 0, tmp_tuple_element_19 );
        CHECK_OBJECT( var_n );
        tmp_start_name_27 = var_n;
        tmp_stop_name_27 = Py_None;
        tmp_step_name_27 = Py_None;
        tmp_tuple_element_19 = MAKE_SLICEOBJ3( tmp_start_name_27, tmp_stop_name_27, tmp_step_name_27 );
        assert( !(tmp_tuple_element_19 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_9, 1, tmp_tuple_element_19 );
        tmp_called_instance_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        Py_DECREF( tmp_subscript_name_9 );
        if ( tmp_called_instance_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 692;
        tmp_source_name_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_14, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_14 );
        if ( tmp_source_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
        Py_DECREF( tmp_source_name_13 );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_J == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "J" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_10 = var_J;
        tmp_tuple_element_20 = const_slice_none_none_none;
        tmp_subscript_name_10 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_20 );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 0, tmp_tuple_element_20 );
        tmp_start_name_28 = Py_None;
        tmp_left_name_28 = const_int_pos_2;
        CHECK_OBJECT( var_m );
        tmp_right_name_28 = var_m;
        tmp_stop_name_28 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_28, tmp_right_name_28 );
        if ( tmp_stop_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_subscript_name_10 );

            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_28 = Py_None;
        tmp_tuple_element_20 = MAKE_SLICEOBJ3( tmp_start_name_28, tmp_stop_name_28, tmp_step_name_28 );
        Py_DECREF( tmp_stop_name_28 );
        assert( !(tmp_tuple_element_20 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_10, 1, tmp_tuple_element_20 );
        tmp_args_element_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        Py_DECREF( tmp_subscript_name_10 );
        if ( tmp_args_element_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 692;
        {
            PyObject *call_args[] = { tmp_args_element_name_21 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_21 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 692;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_J;
            var_J = tmp_assign_source_46;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_47;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_r_or_c );
        tmp_compexpr_left_5 = var_r_or_c;
        tmp_compexpr_right_5 = (PyObject *)&PyFloat_Type;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 695;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        tmp_assign_source_47 = const_str_plain_real;
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_47 = const_str_plain_complex;
        condexpr_end_5:;
        assert( var_out_str == NULL );
        Py_INCREF( tmp_assign_source_47 );
        var_out_str = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_ordqz );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ordqz );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ordqz" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_10 = tmp_mvar_value_17;
        CHECK_OBJECT( var_H );
        tmp_tuple_element_21 = var_H;
        tmp_args_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_21 );
        CHECK_OBJECT( var_J );
        tmp_tuple_element_21 = var_J;
        Py_INCREF( tmp_tuple_element_21 );
        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_21 );
        tmp_dict_key_3 = const_str_plain_sort;
        tmp_dict_value_3 = const_str_plain_iuc;
        tmp_kw_name_4 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_4 = const_str_plain_overwrite_a;
        tmp_dict_value_4 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_5 = const_str_plain_overwrite_b;
        tmp_dict_value_5 = Py_True;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_6 = const_str_plain_check_finite;
        tmp_dict_value_6 = Py_False;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_7 = const_str_plain_output;
        CHECK_OBJECT( var_out_str );
        tmp_dict_value_7 = var_out_str;
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 697;
        tmp_iter_arg_5 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 697;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_tuple_unpack_5__source_iter == NULL );
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_17 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_17, 0, 6 );
        if ( tmp_assign_source_49 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_1 == NULL );
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_18 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_18, 1, 6 );
        if ( tmp_assign_source_50 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_2 == NULL );
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_19 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_19, 2, 6 );
        if ( tmp_assign_source_51 == NULL )
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_3 == NULL );
        tmp_tuple_unpack_5__element_3 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_20 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_20, 3, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_4 == NULL );
        tmp_tuple_unpack_5__element_4 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_21 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_21, 4, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_5 == NULL );
        tmp_tuple_unpack_5__element_5 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
        tmp_unpack_22 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_22, 5, 6 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
            goto try_except_handler_11;
        }
        assert( tmp_tuple_unpack_5__element_6 == NULL );
        tmp_tuple_unpack_5__element_6 = tmp_assign_source_54;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 697;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 697;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_3 );
    tmp_tuple_unpack_5__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_4 );
    tmp_tuple_unpack_5__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_5 );
    tmp_tuple_unpack_5__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_6 );
    tmp_tuple_unpack_5__element_6 = NULL;

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
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
        tmp_assign_source_55 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_55;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
        tmp_assign_source_56 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_56;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
        tmp_assign_source_57 = tmp_tuple_unpack_5__element_3;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_57;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_3 );
    tmp_tuple_unpack_5__element_3 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_4 );
        tmp_assign_source_58 = tmp_tuple_unpack_5__element_4;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_58;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_4 );
    tmp_tuple_unpack_5__element_4 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_5 );
        tmp_assign_source_59 = tmp_tuple_unpack_5__element_5;
        {
            PyObject *old = var__;
            assert( old != NULL );
            var__ = tmp_assign_source_59;
            Py_INCREF( var__ );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_5__element_5 );
    tmp_tuple_unpack_5__element_5 = NULL;

    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_tuple_unpack_5__element_6 );
        tmp_assign_source_60 = tmp_tuple_unpack_5__element_6;
        assert( var_u == NULL );
        Py_INCREF( tmp_assign_source_60 );
        var_u = tmp_assign_source_60;
    }
    Py_XDECREF( tmp_tuple_unpack_5__element_6 );
    tmp_tuple_unpack_5__element_6 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_6 = par_e;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
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
            PyObject *tmp_assign_source_61;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_args_element_name_23;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_element_name_24;
            PyObject *tmp_subscribed_name_11;
            PyObject *tmp_subscript_name_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_start_name_29;
            PyObject *tmp_stop_name_29;
            PyObject *tmp_step_name_29;
            PyObject *tmp_start_name_30;
            PyObject *tmp_stop_name_30;
            PyObject *tmp_step_name_30;
            PyObject *tmp_subscribed_name_12;
            PyObject *tmp_subscript_name_12;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_start_name_31;
            PyObject *tmp_stop_name_31;
            PyObject *tmp_step_name_31;
            PyObject *tmp_start_name_32;
            PyObject *tmp_stop_name_32;
            PyObject *tmp_step_name_32;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_qr );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_qr );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "qr" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_called_name_11 = tmp_mvar_value_18;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_source_name_14 = tmp_mvar_value_19;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_vstack );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT( par_e );
            tmp_source_name_15 = par_e;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dot );
            if ( tmp_called_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT( var_u );
            tmp_subscribed_name_11 = var_u;
            tmp_start_name_29 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_29 = var_m;
            tmp_step_name_29 = Py_None;
            tmp_tuple_element_23 = MAKE_SLICEOBJ3( tmp_start_name_29, tmp_stop_name_29, tmp_step_name_29 );
            assert( !(tmp_tuple_element_23 == NULL) );
            tmp_subscript_name_11 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 0, tmp_tuple_element_23 );
            tmp_start_name_30 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_30 = var_m;
            tmp_step_name_30 = Py_None;
            tmp_tuple_element_23 = MAKE_SLICEOBJ3( tmp_start_name_30, tmp_stop_name_30, tmp_step_name_30 );
            assert( !(tmp_tuple_element_23 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_11, 1, tmp_tuple_element_23 );
            tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
            Py_DECREF( tmp_subscript_name_11 );
            if ( tmp_args_element_name_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_called_name_13 );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 705;
            {
                PyObject *call_args[] = { tmp_args_element_name_24 };
                tmp_tuple_element_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
            }

            Py_DECREF( tmp_called_name_13 );
            Py_DECREF( tmp_args_element_name_24 );
            if ( tmp_tuple_element_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_args_element_name_23 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_23, 0, tmp_tuple_element_22 );
            CHECK_OBJECT( var_u );
            tmp_subscribed_name_12 = var_u;
            CHECK_OBJECT( var_m );
            tmp_start_name_31 = var_m;
            tmp_stop_name_31 = Py_None;
            tmp_step_name_31 = Py_None;
            tmp_tuple_element_24 = MAKE_SLICEOBJ3( tmp_start_name_31, tmp_stop_name_31, tmp_step_name_31 );
            assert( !(tmp_tuple_element_24 == NULL) );
            tmp_subscript_name_12 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 0, tmp_tuple_element_24 );
            tmp_start_name_32 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_32 = var_m;
            tmp_step_name_32 = Py_None;
            tmp_tuple_element_24 = MAKE_SLICEOBJ3( tmp_start_name_32, tmp_stop_name_32, tmp_step_name_32 );
            assert( !(tmp_tuple_element_24 == NULL) );
            PyTuple_SET_ITEM( tmp_subscript_name_12, 1, tmp_tuple_element_24 );
            tmp_tuple_element_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
            Py_DECREF( tmp_subscript_name_12 );
            if ( tmp_tuple_element_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_element_name_23 );

                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_23, 1, tmp_tuple_element_22 );
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 705;
            {
                PyObject *call_args[] = { tmp_args_element_name_23 };
                tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
            }

            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_element_name_23 );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 705;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
            }

            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_assign_source_61 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 705;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            assert( tmp_tuple_unpack_6__source_iter == NULL );
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_61;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_23 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_62 = UNPACK_NEXT( tmp_unpack_23, 0, 2 );
            if ( tmp_assign_source_62 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 705;
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_6__element_1 == NULL );
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_24 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_24, 1, 2 );
            if ( tmp_assign_source_63 == NULL )
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


                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 705;
                goto try_except_handler_13;
            }
            assert( tmp_tuple_unpack_6__element_2 == NULL );
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_63;
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

                        type_description_1 = "ooooooooooooooooooooooooooooo";
                        exception_lineno = 705;
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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 705;
                goto try_except_handler_13;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        try_end_11:;
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

        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_1;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
            tmp_assign_source_64 = tmp_tuple_unpack_6__element_1;
            {
                PyObject *old = var_u;
                assert( old != NULL );
                var_u = tmp_assign_source_64;
                Py_INCREF( var_u );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
            tmp_assign_source_65 = tmp_tuple_unpack_6__element_2;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_65;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_start_name_33;
        PyObject *tmp_stop_name_33;
        PyObject *tmp_step_name_33;
        PyObject *tmp_start_name_34;
        PyObject *tmp_stop_name_34;
        PyObject *tmp_step_name_34;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_13 = var_u;
        tmp_start_name_33 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_33 = var_m;
        tmp_step_name_33 = Py_None;
        tmp_tuple_element_25 = MAKE_SLICEOBJ3( tmp_start_name_33, tmp_stop_name_33, tmp_step_name_33 );
        assert( !(tmp_tuple_element_25 == NULL) );
        tmp_subscript_name_13 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 0, tmp_tuple_element_25 );
        tmp_start_name_34 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_34 = var_m;
        tmp_step_name_34 = Py_None;
        tmp_tuple_element_25 = MAKE_SLICEOBJ3( tmp_start_name_34, tmp_stop_name_34, tmp_step_name_34 );
        assert( !(tmp_tuple_element_25 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_13, 1, tmp_tuple_element_25 );
        tmp_assign_source_66 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
        Py_DECREF( tmp_subscript_name_13 );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 706;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u00 == NULL );
        var_u00 = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_start_name_35;
        PyObject *tmp_stop_name_35;
        PyObject *tmp_step_name_35;
        PyObject *tmp_start_name_36;
        PyObject *tmp_stop_name_36;
        PyObject *tmp_step_name_36;
        CHECK_OBJECT( var_u );
        tmp_subscribed_name_14 = var_u;
        CHECK_OBJECT( var_m );
        tmp_start_name_35 = var_m;
        tmp_stop_name_35 = Py_None;
        tmp_step_name_35 = Py_None;
        tmp_tuple_element_26 = MAKE_SLICEOBJ3( tmp_start_name_35, tmp_stop_name_35, tmp_step_name_35 );
        assert( !(tmp_tuple_element_26 == NULL) );
        tmp_subscript_name_14 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 0, tmp_tuple_element_26 );
        tmp_start_name_36 = Py_None;
        CHECK_OBJECT( var_m );
        tmp_stop_name_36 = var_m;
        tmp_step_name_36 = Py_None;
        tmp_tuple_element_26 = MAKE_SLICEOBJ3( tmp_start_name_36, tmp_stop_name_36, tmp_step_name_36 );
        assert( !(tmp_tuple_element_26 == NULL) );
        PyTuple_SET_ITEM( tmp_subscript_name_14, 1, tmp_tuple_element_26 );
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
        Py_DECREF( tmp_subscript_name_14 );
        if ( tmp_assign_source_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 707;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u10 == NULL );
        var_u10 = tmp_assign_source_67;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_lu );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lu );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lu" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_name_14 = tmp_mvar_value_20;
        CHECK_OBJECT( var_u00 );
        tmp_args_element_name_25 = var_u00;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 710;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_7__source_iter == NULL );
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_25 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_25, 0, 3 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 710;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_1 == NULL );
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_26 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_26, 1, 3 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 710;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_2 == NULL );
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_27 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_27, 2, 3 );
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


            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 710;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_7__element_3 == NULL );
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_71;
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

                    type_description_1 = "ooooooooooooooooooooooooooooo";
                    exception_lineno = 710;
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

            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 710;
            goto try_except_handler_15;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_13:;
    goto try_end_14;
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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_72 = tmp_tuple_unpack_7__element_1;
        assert( var_up == NULL );
        Py_INCREF( tmp_assign_source_72 );
        var_up = tmp_assign_source_72;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_73 = tmp_tuple_unpack_7__element_2;
        assert( var_ul == NULL );
        Py_INCREF( tmp_assign_source_73 );
        var_ul = tmp_assign_source_73;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
        tmp_assign_source_74 = tmp_tuple_unpack_7__element_3;
        assert( var_uu == NULL );
        Py_INCREF( tmp_assign_source_74 );
        var_uu = tmp_assign_source_74;
    }
    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_29;
        PyObject *tmp_called_name_15;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_mvar_value_22;
        tmp_left_name_29 = const_int_pos_1;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_cond );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cond );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cond" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_15 = tmp_mvar_value_21;
        CHECK_OBJECT( var_uu );
        tmp_args_element_name_26 = var_uu;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 712;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_right_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_7 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = tmp_mvar_value_22;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 712;
        tmp_compexpr_right_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1_0_tuple, 0 ) );

        if ( tmp_compexpr_right_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_7 );

            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 712;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_23;
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_23 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 713;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_16 = tmp_mvar_value_23;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 713;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_6c8722767aa19d803f52ef190f3258fd_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 713;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 713;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_17;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_called_name_18;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_source_name_18;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_called_name_19;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_source_name_19;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_source_name_20;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_kw_name_5;
        PyObject *tmp_kw_name_6;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_source_name_21;
        PyObject *tmp_called_instance_20;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_18 = tmp_mvar_value_24;
        CHECK_OBJECT( var_ul );
        tmp_called_instance_17 = var_ul;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 716;
        tmp_source_name_18 = CALL_METHOD_NO_ARGS( tmp_called_instance_17, const_str_plain_conj );
        if ( tmp_source_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_T );
        Py_DECREF( tmp_source_name_18 );
        if ( tmp_tuple_element_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_27 );
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_triangular );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_triangular );
        }

        if ( tmp_mvar_value_25 == NULL )
        {
            Py_DECREF( tmp_args_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_triangular" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_19 = tmp_mvar_value_25;
        CHECK_OBJECT( var_uu );
        tmp_called_instance_18 = var_uu;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 717;
        tmp_source_name_19 = CALL_METHOD_NO_ARGS( tmp_called_instance_18, const_str_plain_conj );
        if ( tmp_source_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_T );
        Py_DECREF( tmp_source_name_19 );
        if ( tmp_tuple_element_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_6 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_28 );
        CHECK_OBJECT( var_u10 );
        tmp_called_instance_19 = var_u10;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 718;
        tmp_source_name_20 = CALL_METHOD_NO_ARGS( tmp_called_instance_19, const_str_plain_conj );
        if ( tmp_source_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 718;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
        Py_DECREF( tmp_source_name_20 );
        if ( tmp_tuple_element_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_args_name_6 );

            exception_lineno = 718;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_28 );
        tmp_kw_name_5 = PyDict_Copy( const_dict_0f2519a6c952cc568952beb42c1e9b1d );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 717;
        tmp_tuple_element_27 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_6, tmp_kw_name_5 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_5 );
        if ( tmp_tuple_element_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_5 );

            exception_lineno = 717;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_27 );
        tmp_kw_name_6 = PyDict_Copy( const_dict_06e191f0e66b8127c249458e30dade7b );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 716;
        tmp_called_instance_16 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_5, tmp_kw_name_6 );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_6 );
        if ( tmp_called_instance_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 716;
        tmp_source_name_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_conj );
        Py_DECREF( tmp_called_instance_16 );
        if ( tmp_source_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_T );
        Py_DECREF( tmp_source_name_17 );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dot );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_called_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_up );
        tmp_called_instance_20 = var_up;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 721;
        tmp_source_name_21 = CALL_METHOD_NO_ARGS( tmp_called_instance_20, const_str_plain_conj );
        if ( tmp_source_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );

            exception_lineno = 721;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_T );
        Py_DECREF( tmp_source_name_21 );
        if ( tmp_args_element_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_17 );

            exception_lineno = 721;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 716;
        {
            PyObject *call_args[] = { tmp_args_element_name_27 };
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_27 );
        if ( tmp_assign_source_75 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 716;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_balanced );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_balanced );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 722;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_left_name_30;
            PyObject *tmp_right_name_30;
            PyObject *tmp_left_name_31;
            PyObject *tmp_subscribed_name_15;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_start_name_37;
            PyObject *tmp_stop_name_37;
            PyObject *tmp_step_name_37;
            PyObject *tmp_right_name_31;
            PyObject *tmp_subscribed_name_16;
            PyObject *tmp_subscript_name_16;
            PyObject *tmp_start_name_38;
            PyObject *tmp_stop_name_38;
            PyObject *tmp_step_name_38;
            CHECK_OBJECT( var_x );
            tmp_left_name_30 = var_x;
            if ( var_sca == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sca" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_15 = var_sca;
            tmp_start_name_37 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_37 = var_m;
            tmp_step_name_37 = Py_None;
            tmp_tuple_element_29 = MAKE_SLICEOBJ3( tmp_start_name_37, tmp_stop_name_37, tmp_step_name_37 );
            assert( !(tmp_tuple_element_29 == NULL) );
            tmp_subscript_name_15 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_subscript_name_15, 0, tmp_tuple_element_29 );
            tmp_tuple_element_29 = Py_None;
            Py_INCREF( tmp_tuple_element_29 );
            PyTuple_SET_ITEM( tmp_subscript_name_15, 1, tmp_tuple_element_29 );
            tmp_left_name_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
            Py_DECREF( tmp_subscript_name_15 );
            if ( tmp_left_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if ( var_sca == NULL )
            {
                Py_DECREF( tmp_left_name_31 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sca" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_16 = var_sca;
            tmp_start_name_38 = Py_None;
            CHECK_OBJECT( var_m );
            tmp_stop_name_38 = var_m;
            tmp_step_name_38 = Py_None;
            tmp_subscript_name_16 = MAKE_SLICEOBJ3( tmp_start_name_38, tmp_stop_name_38, tmp_step_name_38 );
            assert( !(tmp_subscript_name_16 == NULL) );
            tmp_right_name_31 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
            Py_DECREF( tmp_subscript_name_16 );
            if ( tmp_right_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_31 );

                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_30 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_31 );
            Py_DECREF( tmp_left_name_31 );
            Py_DECREF( tmp_right_name_31 );
            if ( tmp_right_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_30, tmp_right_name_30 );
            Py_DECREF( tmp_right_name_30 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 723;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_76 = tmp_left_name_30;
            var_x = tmp_assign_source_76;

        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_source_name_22;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_name_28;
        CHECK_OBJECT( var_u00 );
        tmp_called_instance_22 = var_u00;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 727;
        tmp_source_name_22 = CALL_METHOD_NO_ARGS( tmp_called_instance_22, const_str_plain_conj );
        if ( tmp_source_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_T );
        Py_DECREF( tmp_source_name_22 );
        if ( tmp_called_instance_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_u10 );
        tmp_args_element_name_28 = var_u10;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 727;
        {
            PyObject *call_args[] = { tmp_args_element_name_28 };
            tmp_assign_source_77 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_21 );
        if ( tmp_assign_source_77 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 727;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u_sym == NULL );
        var_u_sym = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_name_20;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 728;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_20 = tmp_mvar_value_26;
        CHECK_OBJECT( var_u_sym );
        tmp_args_element_name_29 = var_u_sym;
        tmp_args_element_name_30 = const_int_pos_1;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 728;
        {
            PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
        }

        if ( tmp_assign_source_78 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 728;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_u_sym == NULL );
        var_n_u_sym = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_32;
        PyObject *tmp_source_name_23;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT( var_u_sym );
        tmp_left_name_32 = var_u_sym;
        CHECK_OBJECT( var_u_sym );
        tmp_called_instance_23 = var_u_sym;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 729;
        tmp_source_name_23 = CALL_METHOD_NO_ARGS( tmp_called_instance_23, const_str_plain_conj );
        if ( tmp_source_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_T );
        Py_DECREF( tmp_source_name_23 );
        if ( tmp_right_name_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_79 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
        Py_DECREF( tmp_right_name_32 );
        if ( tmp_assign_source_79 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 729;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u_sym;
            assert( old != NULL );
            var_u_sym = tmp_assign_source_79;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_left_name_33;
        PyObject *tmp_right_name_33;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_27;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_max );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_28 == NULL )
        {
            Py_DECREF( tmp_called_name_21 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_24 = tmp_mvar_value_28;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 730;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1000_0_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_21 );

            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_31 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_31, 0, tmp_list_element_1 );
        tmp_left_name_33 = const_float_0_1;
        CHECK_OBJECT( var_n_u_sym );
        tmp_right_name_33 = var_n_u_sym;
        tmp_list_element_1 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_33, tmp_right_name_33 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_21 );
            Py_DECREF( tmp_args_element_name_31 );

            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_31, 1, tmp_list_element_1 );
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 730;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_assign_source_80 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 730;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sym_threshold == NULL );
        var_sym_threshold = tmp_assign_source_80;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_name_22;
        PyObject *tmp_mvar_value_29;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_args_element_name_33;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_22 = tmp_mvar_value_29;
        CHECK_OBJECT( var_u_sym );
        tmp_args_element_name_32 = var_u_sym;
        tmp_args_element_name_33 = const_int_pos_1;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 732;
        {
            PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
            tmp_compexpr_left_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
        }

        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sym_threshold );
        tmp_compexpr_right_8 = var_sym_threshold;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 732;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_23;
            PyObject *tmp_mvar_value_30;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_30 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 733;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_23 = tmp_mvar_value_30;
            frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 733;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_str_digest_f38329af3401f532cd81d4a7393afec1_tuple, 0 ) );

            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 733;
                type_description_1 = "ooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 733;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_left_name_34;
        PyObject *tmp_left_name_35;
        PyObject *tmp_right_name_34;
        PyObject *tmp_source_name_25;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_right_name_35;
        CHECK_OBJECT( var_x );
        tmp_left_name_35 = var_x;
        CHECK_OBJECT( var_x );
        tmp_called_instance_25 = var_x;
        frame_a9d726d8893bf62df049aa12d46b1a70->m_frame.f_lineno = 736;
        tmp_source_name_25 = CALL_METHOD_NO_ARGS( tmp_called_instance_25, const_str_plain_conj );
        if ( tmp_source_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_T );
        Py_DECREF( tmp_source_name_25 );
        if ( tmp_right_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_35, tmp_right_name_34 );
        Py_DECREF( tmp_right_name_34 );
        if ( tmp_left_name_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_35 = const_int_pos_2;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_34, tmp_right_name_35 );
        Py_DECREF( tmp_left_name_34 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 736;
            type_description_1 = "ooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9d726d8893bf62df049aa12d46b1a70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9d726d8893bf62df049aa12d46b1a70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9d726d8893bf62df049aa12d46b1a70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9d726d8893bf62df049aa12d46b1a70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9d726d8893bf62df049aa12d46b1a70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9d726d8893bf62df049aa12d46b1a70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9d726d8893bf62df049aa12d46b1a70,
        type_description_1,
        par_a,
        par_b,
        par_q,
        par_r,
        par_e,
        par_s,
        par_balanced,
        var_m,
        var_n,
        var_r_or_c,
        var_gen_are,
        var_H,
        var_J,
        var_M,
        var__,
        var_sca,
        var_elwisescale,
        var_q_of_qr,
        var_out_str,
        var_u,
        var_u00,
        var_u10,
        var_up,
        var_ul,
        var_uu,
        var_x,
        var_u_sym,
        var_n_u_sym,
        var_sym_threshold
    );


    // Release cached frame.
    if ( frame_a9d726d8893bf62df049aa12d46b1a70 == cache_frame_a9d726d8893bf62df049aa12d46b1a70 )
    {
        Py_DECREF( frame_a9d726d8893bf62df049aa12d46b1a70 );
    }
    cache_frame_a9d726d8893bf62df049aa12d46b1a70 = NULL;

    assertFrameObject( frame_a9d726d8893bf62df049aa12d46b1a70 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_7_solve_discrete_are );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_balanced );
    Py_DECREF( par_balanced );
    par_balanced = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_r_or_c );
    Py_DECREF( var_r_or_c );
    var_r_or_c = NULL;

    CHECK_OBJECT( (PyObject *)var_gen_are );
    Py_DECREF( var_gen_are );
    var_gen_are = NULL;

    CHECK_OBJECT( (PyObject *)var_H );
    Py_DECREF( var_H );
    var_H = NULL;

    CHECK_OBJECT( (PyObject *)var_J );
    Py_DECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var__ );
    Py_DECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sca );
    var_sca = NULL;

    Py_XDECREF( var_elwisescale );
    var_elwisescale = NULL;

    CHECK_OBJECT( (PyObject *)var_q_of_qr );
    Py_DECREF( var_q_of_qr );
    var_q_of_qr = NULL;

    CHECK_OBJECT( (PyObject *)var_out_str );
    Py_DECREF( var_out_str );
    var_out_str = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

    CHECK_OBJECT( (PyObject *)var_u00 );
    Py_DECREF( var_u00 );
    var_u00 = NULL;

    CHECK_OBJECT( (PyObject *)var_u10 );
    Py_DECREF( var_u10 );
    var_u10 = NULL;

    CHECK_OBJECT( (PyObject *)var_up );
    Py_DECREF( var_up );
    var_up = NULL;

    CHECK_OBJECT( (PyObject *)var_ul );
    Py_DECREF( var_ul );
    var_ul = NULL;

    CHECK_OBJECT( (PyObject *)var_uu );
    Py_DECREF( var_uu );
    var_uu = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_u_sym );
    Py_DECREF( var_u_sym );
    var_u_sym = NULL;

    CHECK_OBJECT( (PyObject *)var_n_u_sym );
    Py_DECREF( var_n_u_sym );
    var_n_u_sym = NULL;

    CHECK_OBJECT( (PyObject *)var_sym_threshold );
    Py_DECREF( var_sym_threshold );
    var_sym_threshold = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_balanced );
    Py_DECREF( par_balanced );
    par_balanced = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_gen_are );
    var_gen_are = NULL;

    Py_XDECREF( var_H );
    var_H = NULL;

    Py_XDECREF( var_J );
    var_J = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sca );
    var_sca = NULL;

    Py_XDECREF( var_elwisescale );
    var_elwisescale = NULL;

    Py_XDECREF( var_q_of_qr );
    var_q_of_qr = NULL;

    Py_XDECREF( var_out_str );
    var_out_str = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_u00 );
    var_u00 = NULL;

    Py_XDECREF( var_u10 );
    var_u10 = NULL;

    Py_XDECREF( var_up );
    var_up = NULL;

    Py_XDECREF( var_ul );
    var_ul = NULL;

    Py_XDECREF( var_uu );
    var_uu = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_u_sym );
    var_u_sym = NULL;

    Py_XDECREF( var_n_u_sym );
    var_n_u_sym = NULL;

    Py_XDECREF( var_sym_threshold );
    var_sym_threshold = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_7_solve_discrete_are );
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


static PyObject *impl_scipy$linalg$_solvers$$$function_8__are_validate_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_r = python_pars[ 3 ];
    PyObject *par_e = python_pars[ 4 ];
    PyObject *par_s = python_pars[ 5 ];
    PyObject *par_eq_type = python_pars[ 6 ];
    PyObject *var_r_or_c = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_mat = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_min_sv = NULL;
    PyObject *var_generalized_case = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_03aac1d19cf9b3300c743c61e1cea8cf;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_03aac1d19cf9b3300c743c61e1cea8cf = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03aac1d19cf9b3300c743c61e1cea8cf, codeobj_03aac1d19cf9b3300c743c61e1cea8cf, module_scipy$linalg$_solvers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03aac1d19cf9b3300c743c61e1cea8cf = cache_frame_03aac1d19cf9b3300c743c61e1cea8cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03aac1d19cf9b3300c743c61e1cea8cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03aac1d19cf9b3300c743c61e1cea8cf ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_eq_type );
        tmp_called_instance_1 = par_eq_type;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 778;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 778;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_str_plain_dare_str_plain_care_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 778;
            type_description_1 = "oooooooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_e2ce71503502f8098f6d2cd772a63cbe;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 779;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 779;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 782;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_2d );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 782;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_1 = par_a;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 782;
        tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 782;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 782;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 782;
            type_description_1 = "oooooooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 783;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_atleast_2d );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 783;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 783;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( par_b );
        tmp_tuple_element_2 = par_b;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 783;
        tmp_args_element_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 783;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 783;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 783;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert( old != NULL );
            par_b = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 784;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_atleast_2d );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 784;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_6;
        CHECK_OBJECT( par_q );
        tmp_tuple_element_3 = par_q;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 784;
        tmp_args_element_name_3 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 784;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 784;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 784;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_q;
            assert( old != NULL );
            par_q = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 785;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_atleast_2d );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 785;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_8;
        CHECK_OBJECT( par_r );
        tmp_tuple_element_4 = par_r;
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_kw_name_4 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 785;
        tmp_args_element_name_4 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 785;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 785;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 785;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_r;
            assert( old != NULL );
            par_r = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        int tmp_truth_name_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 789;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_9;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_5 = par_b;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 789;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_iscomplexobj, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 789;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 789;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_5 = (PyObject *)&PyComplex_Type;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_5 = (PyObject *)&PyFloat_Type;
        condexpr_end_1:;
        assert( var_r_or_c == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_r_or_c = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_5;
        tmp_called_name_9 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_5 = par_a;
        tmp_args_element_name_6 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_5 = par_q;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( par_r );
        tmp_tuple_element_5 = par_r;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 2, tmp_tuple_element_5 );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 791;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                exception_lineno = 791;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 791;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 791;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 791;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 791;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_11;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_mat;
            var_mat = tmp_assign_source_12;
            Py_INCREF( var_mat );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        int tmp_truth_name_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 792;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = tmp_mvar_value_10;
        CHECK_OBJECT( var_mat );
        tmp_args_element_name_7 = var_mat;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 792;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_iscomplexobj, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 792;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 792;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = (PyObject *)&PyComplex_Type;
            {
                PyObject *old = var_r_or_c;
                var_r_or_c = tmp_assign_source_13;
                Py_INCREF( var_r_or_c );
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_source_name_6;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 795;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_11;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_equal );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_mat );
        tmp_source_name_6 = var_mat;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 795;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_operand_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 795;
            type_description_1 = "oooooooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            tmp_source_name_7 = const_str_digest_ee184f1cb13ea44511dde026ce3941e4;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
            assert( !(tmp_called_name_10 == NULL) );
            tmp_subscribed_name_1 = const_str_plain_aqr;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_1 = var_ind;
            tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 796;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 796;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 796;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_2;
            }
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 796;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 796;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        branch_no_3:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 791;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_b );
        tmp_source_name_8 = par_b;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 799;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 799;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 799;
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

            type_description_1 = "oooooooooooooo";
            exception_lineno = 799;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_17 );
        var_m = tmp_assign_source_17;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_18 );
        var_n = tmp_assign_source_18;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_9;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_2 = var_m;
        CHECK_OBJECT( par_a );
        tmp_source_name_9 = par_a;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 800;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 800;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 800;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_2c8de43bb05431410b3a11b5ceb203f2;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 801;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 801;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_10;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_m );
        tmp_compexpr_left_3 = var_m;
        CHECK_OBJECT( par_q );
        tmp_source_name_10 = par_q;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_int_0;
        tmp_compexpr_right_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 802;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_e081f6d23cdc7f7f323f0755d8f18b02;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 803;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 803;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_11;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_4 = var_n;
        CHECK_OBJECT( par_r );
        tmp_source_name_11 = par_r;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_int_0;
        tmp_compexpr_right_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 804;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            tmp_make_exception_arg_5 = const_str_digest_cd695e80259c2a00539c549ff5134ed9;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 805;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 805;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_tuple_element_6;
        tmp_called_name_11 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT( par_q );
        tmp_tuple_element_6 = par_q;
        tmp_args_element_name_9 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( par_r );
        tmp_tuple_element_6 = par_r;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_6 );
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 808;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 808;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 808;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_20;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_5 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 808;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
        if ( tmp_assign_source_22 == NULL )
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 808;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
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


            type_description_1 = "oooooooooooooo";
            exception_lineno = 808;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 808;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooo";
            exception_lineno = 808;
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
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

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_ind;
            var_ind = tmp_assign_source_24;
            Py_INCREF( var_ind );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_mat;
            var_mat = tmp_assign_source_25;
            Py_INCREF( var_mat );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_name_13;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_12 = tmp_mvar_value_12;
        CHECK_OBJECT( var_mat );
        tmp_left_name_1 = var_mat;
        CHECK_OBJECT( var_mat );
        tmp_called_instance_4 = var_mat;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 809;
        tmp_source_name_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_conj );
        if ( tmp_source_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_T );
        Py_DECREF( tmp_source_name_12 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_11 = const_int_pos_1;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 809;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_compexpr_left_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_source_name_13 = tmp_mvar_value_13;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_spacing );
        if ( tmp_called_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_5 );
            Py_DECREF( tmp_called_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_14 = tmp_mvar_value_14;
        CHECK_OBJECT( var_mat );
        tmp_args_element_name_13 = var_mat;
        tmp_args_element_name_14 = const_int_pos_1;
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 809;
        {
            PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
        }

        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );
            Py_DECREF( tmp_called_name_13 );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 809;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_2 = const_int_pos_100;
        tmp_compexpr_right_5 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_5 );

            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 809;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_make_exception_arg_6;
            PyObject *tmp_called_name_15;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            tmp_source_name_14 = const_str_digest_77ad93a3403616bd38d11dcca7b48ff6;
            tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_format );
            assert( !(tmp_called_name_15 == NULL) );
            tmp_subscribed_name_5 = const_str_plain_qr;
            CHECK_OBJECT( var_ind );
            tmp_subscript_name_5 = var_ind;
            tmp_args_element_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_15 );

                exception_lineno = 811;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_7;
            }
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 810;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_make_exception_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
            }

            Py_DECREF( tmp_called_name_15 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_make_exception_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 810;
                type_description_1 = "oooooooooooooo";
                goto try_except_handler_7;
            }
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 810;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_6 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_6 );
            assert( !(tmp_raise_type_6 == NULL) );
            exception_type = tmp_raise_type_6;
            exception_lineno = 810;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        branch_no_7:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 808;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_eq_type );
        tmp_compexpr_left_6 = par_eq_type;
        tmp_compexpr_right_6 = const_str_plain_care;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 814;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_subscript_name_6;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_svd );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 815;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_16 = tmp_mvar_value_15;
            CHECK_OBJECT( par_r );
            tmp_tuple_element_7 = par_r;
            tmp_args_name_5 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
            tmp_kw_name_5 = PyDict_Copy( const_dict_e494340e6c507b9628629e654e7b7e8e );
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 815;
            tmp_subscribed_name_6 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_subscribed_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_6 = const_int_neg_1;
            tmp_assign_source_26 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, -1 );
            Py_DECREF( tmp_subscribed_name_6 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 815;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_min_sv == NULL );
            var_min_sv = tmp_assign_source_26;
        }
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_left_name_3;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_17;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_args_element_name_17;
            CHECK_OBJECT( var_min_sv );
            tmp_compexpr_left_7 = var_min_sv;
            tmp_compexpr_right_7 = const_float_0_0;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
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
            CHECK_OBJECT( var_min_sv );
            tmp_compexpr_left_8 = var_min_sv;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_16;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 816;
            tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1_0_tuple, 0 ) );

            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
            }

            if ( tmp_mvar_value_17 == NULL )
            {
                Py_DECREF( tmp_left_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_17 = tmp_mvar_value_17;
            CHECK_OBJECT( par_r );
            tmp_args_element_name_16 = par_r;
            tmp_args_element_name_17 = const_int_pos_1;
            frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 816;
            {
                PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
            }

            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_compexpr_right_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 816;
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_10 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_10 = tmp_or_left_value_1;
            or_end_1:;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_7;
                tmp_make_exception_arg_7 = const_str_digest_8d8f6a8781ca6d2310b06a2ce1b6ccae;
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 817;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_7 };
                    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_7 == NULL) );
                exception_type = tmp_raise_type_7;
                exception_lineno = 817;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        branch_no_8:;
    }
    {
        PyObject *tmp_assign_source_27;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( par_e );
        tmp_compexpr_left_9 = par_e;
        tmp_compexpr_right_9 = Py_None;
        tmp_or_left_value_2 = ( tmp_compexpr_left_9 != tmp_compexpr_right_9 ) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( par_s );
        tmp_compexpr_left_10 = par_s;
        tmp_compexpr_right_10 = Py_None;
        tmp_or_right_value_2 = ( tmp_compexpr_left_10 != tmp_compexpr_right_10 ) ? Py_True : Py_False;
        tmp_assign_source_27 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_27 = tmp_or_left_value_2;
        or_end_2:;
        assert( var_generalized_case == NULL );
        Py_INCREF( tmp_assign_source_27 );
        var_generalized_case = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_generalized_case );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_generalized_case );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 823;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT( par_e );
            tmp_compexpr_left_11 = par_e;
            tmp_compexpr_right_11 = Py_None;
            tmp_condition_result_12 = ( tmp_compexpr_left_11 != tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_called_name_18;
                PyObject *tmp_source_name_15;
                PyObject *tmp_mvar_value_18;
                PyObject *tmp_args_element_name_18;
                PyObject *tmp_called_name_19;
                PyObject *tmp_mvar_value_19;
                PyObject *tmp_args_name_6;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_kw_name_6;
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_18 == NULL ))
                {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_18 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 825;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_15 = tmp_mvar_value_18;
                tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_atleast_2d );
                if ( tmp_called_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 825;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_called_name_18 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 825;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_19 = tmp_mvar_value_19;
                CHECK_OBJECT( par_e );
                tmp_tuple_element_8 = par_e;
                tmp_args_name_6 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_8 );
                PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
                tmp_kw_name_6 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 825;
                tmp_args_element_name_18 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_6, tmp_kw_name_6 );
                Py_DECREF( tmp_args_name_6 );
                Py_DECREF( tmp_kw_name_6 );
                if ( tmp_args_element_name_18 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_18 );

                    exception_lineno = 825;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 825;
                {
                    PyObject *call_args[] = { tmp_args_element_name_18 };
                    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
                }

                Py_DECREF( tmp_called_name_18 );
                Py_DECREF( tmp_args_element_name_18 );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 825;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_e;
                    assert( old != NULL );
                    par_e = tmp_assign_source_28;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_source_name_16;
                PyObject *tmp_mvar_value_20;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_source_name_17;
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_20 == NULL ))
                {
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_20 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 826;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_16 = tmp_mvar_value_20;
                tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_equal );
                if ( tmp_dircall_arg1_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 826;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_e );
                tmp_source_name_17 = par_e;
                tmp_dircall_arg2_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
                if ( tmp_dircall_arg2_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg1_2 );

                    exception_lineno = 826;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
                    tmp_operand_name_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
                }
                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 826;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 826;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_12;
                }
                else
                {
                    goto branch_no_12;
                }
                branch_yes_12:;
                {
                    PyObject *tmp_raise_type_8;
                    PyObject *tmp_make_exception_arg_8;
                    tmp_make_exception_arg_8 = const_str_digest_94933442f0a1221ff03a4c577fb74e9d;
                    frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 827;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_8 };
                        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_8 == NULL) );
                    exception_type = tmp_raise_type_8;
                    exception_lineno = 827;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_12:;
            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_compexpr_left_12;
                PyObject *tmp_compexpr_right_12;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_source_name_18;
                PyObject *tmp_subscript_name_7;
                CHECK_OBJECT( var_m );
                tmp_compexpr_left_12 = var_m;
                CHECK_OBJECT( par_e );
                tmp_source_name_18 = par_e;
                tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_shape );
                if ( tmp_subscribed_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 828;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_7 = const_int_0;
                tmp_compexpr_right_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
                Py_DECREF( tmp_subscribed_name_7 );
                if ( tmp_compexpr_right_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 828;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
                Py_DECREF( tmp_compexpr_right_12 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 828;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_13;
                }
                else
                {
                    goto branch_no_13;
                }
                branch_yes_13:;
                {
                    PyObject *tmp_raise_type_9;
                    PyObject *tmp_make_exception_arg_9;
                    tmp_make_exception_arg_9 = const_str_digest_faa7d47290d296a836f9fe46b89a23a3;
                    frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 829;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_9 };
                        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_9 == NULL) );
                    exception_type = tmp_raise_type_9;
                    exception_lineno = 829;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_13:;
            }
            {
                PyObject *tmp_assign_source_29;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_called_name_20;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_name_7;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_kw_name_7;
                PyObject *tmp_subscript_name_8;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_svd );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_svd );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "svd" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 832;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_20 = tmp_mvar_value_21;
                CHECK_OBJECT( par_e );
                tmp_tuple_element_9 = par_e;
                tmp_args_name_7 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_9 );
                PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
                tmp_kw_name_7 = PyDict_Copy( const_dict_e494340e6c507b9628629e654e7b7e8e );
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 832;
                tmp_subscribed_name_8 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_7, tmp_kw_name_7 );
                Py_DECREF( tmp_args_name_7 );
                Py_DECREF( tmp_kw_name_7 );
                if ( tmp_subscribed_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 832;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_8 = const_int_neg_1;
                tmp_assign_source_29 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, -1 );
                Py_DECREF( tmp_subscribed_name_8 );
                if ( tmp_assign_source_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 832;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_min_sv;
                    var_min_sv = tmp_assign_source_29;
                    Py_XDECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_15;
                int tmp_or_left_truth_3;
                nuitka_bool tmp_or_left_value_3;
                nuitka_bool tmp_or_right_value_3;
                PyObject *tmp_compexpr_left_13;
                PyObject *tmp_compexpr_right_13;
                PyObject *tmp_compexpr_left_14;
                PyObject *tmp_compexpr_right_14;
                PyObject *tmp_left_name_4;
                PyObject *tmp_called_instance_6;
                PyObject *tmp_mvar_value_22;
                PyObject *tmp_right_name_4;
                PyObject *tmp_called_name_21;
                PyObject *tmp_mvar_value_23;
                PyObject *tmp_args_element_name_19;
                PyObject *tmp_args_element_name_20;
                CHECK_OBJECT( var_min_sv );
                tmp_compexpr_left_13 = var_min_sv;
                tmp_compexpr_right_13 = const_float_0_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_or_left_truth_3 == 1 )
                {
                    goto or_left_3;
                }
                else
                {
                    goto or_right_3;
                }
                or_right_3:;
                CHECK_OBJECT( var_min_sv );
                tmp_compexpr_left_14 = var_min_sv;
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_6 = tmp_mvar_value_22;
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 833;
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_spacing, &PyTuple_GET_ITEM( const_tuple_float_1_0_tuple, 0 ) );

                if ( tmp_left_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm );

                if (unlikely( tmp_mvar_value_23 == NULL ))
                {
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
                }

                if ( tmp_mvar_value_23 == NULL )
                {
                    Py_DECREF( tmp_left_name_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "norm" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_21 = tmp_mvar_value_23;
                CHECK_OBJECT( par_e );
                tmp_args_element_name_19 = par_e;
                tmp_args_element_name_20 = const_int_pos_1;
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 833;
                {
                    PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
                    tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
                }

                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_4 );

                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_left_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_compexpr_right_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
                Py_DECREF( tmp_compexpr_right_14 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 833;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_15 = tmp_or_right_value_3;
                goto or_end_3;
                or_left_3:;
                tmp_condition_result_15 = tmp_or_left_value_3;
                or_end_3:;
                if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_14;
                }
                else
                {
                    goto branch_no_14;
                }
                branch_yes_14:;
                {
                    PyObject *tmp_raise_type_10;
                    PyObject *tmp_make_exception_arg_10;
                    tmp_make_exception_arg_10 = const_str_digest_19514f98e6287542f97a1b32b758f2a6;
                    frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 834;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_10 };
                        tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_10 == NULL) );
                    exception_type = tmp_raise_type_10;
                    exception_lineno = 834;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_14:;
            }
            {
                nuitka_bool tmp_condition_result_16;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_mvar_value_24;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_21;
                int tmp_truth_name_4;
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_24 == NULL ))
                {
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_24 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 835;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_7 = tmp_mvar_value_24;
                CHECK_OBJECT( par_e );
                tmp_args_element_name_21 = par_e;
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 835;
                {
                    PyObject *call_args[] = { tmp_args_element_name_21 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_iscomplexobj, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 835;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_3 );
                if ( tmp_truth_name_4 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_3 );

                    exception_lineno = 835;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_16 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_3 );
                if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_15;
                }
                else
                {
                    goto branch_no_15;
                }
                branch_yes_15:;
                {
                    PyObject *tmp_assign_source_30;
                    tmp_assign_source_30 = (PyObject *)&PyComplex_Type;
                    {
                        PyObject *old = var_r_or_c;
                        var_r_or_c = tmp_assign_source_30;
                        Py_INCREF( var_r_or_c );
                        Py_XDECREF( old );
                    }

                }
                branch_no_15:;
            }
            branch_no_11:;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            CHECK_OBJECT( par_s );
            tmp_compexpr_left_15 = par_s;
            tmp_compexpr_right_15 = Py_None;
            tmp_condition_result_17 = ( tmp_compexpr_left_15 != tmp_compexpr_right_15 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_16;
            }
            else
            {
                goto branch_no_16;
            }
            branch_yes_16:;
            {
                PyObject *tmp_assign_source_31;
                PyObject *tmp_called_name_22;
                PyObject *tmp_source_name_19;
                PyObject *tmp_mvar_value_25;
                PyObject *tmp_args_element_name_22;
                PyObject *tmp_called_name_23;
                PyObject *tmp_mvar_value_26;
                PyObject *tmp_args_name_8;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_kw_name_8;
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_25 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 838;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_19 = tmp_mvar_value_25;
                tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_atleast_2d );
                if ( tmp_called_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 838;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated );

                if (unlikely( tmp_mvar_value_26 == NULL ))
                {
                    tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__asarray_validated );
                }

                if ( tmp_mvar_value_26 == NULL )
                {
                    Py_DECREF( tmp_called_name_22 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_asarray_validated" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 838;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_23 = tmp_mvar_value_26;
                CHECK_OBJECT( par_s );
                tmp_tuple_element_10 = par_s;
                tmp_args_name_8 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_10 );
                PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
                tmp_kw_name_8 = PyDict_Copy( const_dict_e8bfcf313e93c8e8c56e2d69ca29191f );
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 838;
                tmp_args_element_name_22 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_8, tmp_kw_name_8 );
                Py_DECREF( tmp_args_name_8 );
                Py_DECREF( tmp_kw_name_8 );
                if ( tmp_args_element_name_22 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_22 );

                    exception_lineno = 838;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 838;
                {
                    PyObject *call_args[] = { tmp_args_element_name_22 };
                    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
                }

                Py_DECREF( tmp_called_name_22 );
                Py_DECREF( tmp_args_element_name_22 );
                if ( tmp_assign_source_31 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 838;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_s;
                    assert( old != NULL );
                    par_s = tmp_assign_source_31;
                    Py_DECREF( old );
                }

            }
            {
                nuitka_bool tmp_condition_result_18;
                PyObject *tmp_compexpr_left_16;
                PyObject *tmp_compexpr_right_16;
                PyObject *tmp_source_name_20;
                PyObject *tmp_source_name_21;
                CHECK_OBJECT( par_s );
                tmp_source_name_20 = par_s;
                tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_shape );
                if ( tmp_compexpr_left_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 839;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_b );
                tmp_source_name_21 = par_b;
                tmp_compexpr_right_16 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_shape );
                if ( tmp_compexpr_right_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_16 );

                    exception_lineno = 839;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
                Py_DECREF( tmp_compexpr_left_16 );
                Py_DECREF( tmp_compexpr_right_16 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 839;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_17;
                }
                else
                {
                    goto branch_no_17;
                }
                branch_yes_17:;
                {
                    PyObject *tmp_raise_type_11;
                    PyObject *tmp_make_exception_arg_11;
                    tmp_make_exception_arg_11 = const_str_digest_f5df6f12d58666d44a940d2aa604a101;
                    frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 840;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_11 };
                        tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_11 == NULL) );
                    exception_type = tmp_raise_type_11;
                    exception_lineno = 840;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_17:;
            }
            {
                nuitka_bool tmp_condition_result_19;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_mvar_value_27;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_23;
                int tmp_truth_name_5;
                tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_27 == NULL ))
                {
                    tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_27 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 841;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = tmp_mvar_value_27;
                CHECK_OBJECT( par_s );
                tmp_args_element_name_23 = par_s;
                frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame.f_lineno = 841;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_iscomplexobj, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 841;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_4 );
                if ( tmp_truth_name_5 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_4 );

                    exception_lineno = 841;
                    type_description_1 = "oooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_19 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_4 );
                if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_18;
                }
                else
                {
                    goto branch_no_18;
                }
                branch_yes_18:;
                {
                    PyObject *tmp_assign_source_32;
                    tmp_assign_source_32 = (PyObject *)&PyComplex_Type;
                    {
                        PyObject *old = var_r_or_c;
                        var_r_or_c = tmp_assign_source_32;
                        Py_INCREF( var_r_or_c );
                        Py_XDECREF( old );
                    }

                }
                branch_no_18:;
            }
            branch_no_16:;
        }
        branch_no_10:;
    }
    {
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT( par_a );
        tmp_tuple_element_11 = par_a;
        tmp_return_value = PyTuple_New( 10 );
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_11 );
        CHECK_OBJECT( par_b );
        tmp_tuple_element_11 = par_b;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_11 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_11 = par_q;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_11 );
        CHECK_OBJECT( par_r );
        tmp_tuple_element_11 = par_r;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_11 );
        if ( par_e == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 844;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = par_e;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_11 );
        if ( par_s == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 844;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = par_s;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_11 );
        CHECK_OBJECT( var_m );
        tmp_tuple_element_11 = var_m;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_11 );
        CHECK_OBJECT( var_n );
        tmp_tuple_element_11 = var_n;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 7, tmp_tuple_element_11 );
        if ( var_r_or_c == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_or_c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 844;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_11 = var_r_or_c;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 8, tmp_tuple_element_11 );
        CHECK_OBJECT( var_generalized_case );
        tmp_tuple_element_11 = var_generalized_case;
        Py_INCREF( tmp_tuple_element_11 );
        PyTuple_SET_ITEM( tmp_return_value, 9, tmp_tuple_element_11 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03aac1d19cf9b3300c743c61e1cea8cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03aac1d19cf9b3300c743c61e1cea8cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03aac1d19cf9b3300c743c61e1cea8cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03aac1d19cf9b3300c743c61e1cea8cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03aac1d19cf9b3300c743c61e1cea8cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03aac1d19cf9b3300c743c61e1cea8cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03aac1d19cf9b3300c743c61e1cea8cf,
        type_description_1,
        par_a,
        par_b,
        par_q,
        par_r,
        par_e,
        par_s,
        par_eq_type,
        var_r_or_c,
        var_ind,
        var_mat,
        var_m,
        var_n,
        var_min_sv,
        var_generalized_case
    );


    // Release cached frame.
    if ( frame_03aac1d19cf9b3300c743c61e1cea8cf == cache_frame_03aac1d19cf9b3300c743c61e1cea8cf )
    {
        Py_DECREF( frame_03aac1d19cf9b3300c743c61e1cea8cf );
    }
    cache_frame_03aac1d19cf9b3300c743c61e1cea8cf = NULL;

    assertFrameObject( frame_03aac1d19cf9b3300c743c61e1cea8cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_8__are_validate_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_eq_type );
    Py_DECREF( par_eq_type );
    par_eq_type = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_min_sv );
    var_min_sv = NULL;

    CHECK_OBJECT( (PyObject *)var_generalized_case );
    Py_DECREF( var_generalized_case );
    var_generalized_case = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_e );
    par_e = NULL;

    Py_XDECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_eq_type );
    Py_DECREF( par_eq_type );
    par_eq_type = NULL;

    Py_XDECREF( var_r_or_c );
    var_r_or_c = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_min_sv );
    var_min_sv = NULL;

    Py_XDECREF( var_generalized_case );
    var_generalized_case = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$linalg$_solvers$$$function_8__are_validate_args );
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



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_1_solve_sylvester(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_1_solve_sylvester,
        const_str_plain_solve_sylvester,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b6f75f6a5865b15ac0775a913d45d92e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_6e4892165c0cac11dd30505169602b06,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov,
        const_str_plain_solve_continuous_lyapunov,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a9d5853f649d83688bce834121003b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_e99ca50dc46638e6465cfee11c16ea91,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct,
        const_str_plain__solve_discrete_lyapunov_direct,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_801c0c413a61f1b653d4d9833b61d2b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_38a4a3ad819bc9dbd61d1f840bf3971a,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear,
        const_str_plain__solve_discrete_lyapunov_bilinear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56e21a0113fff8f32e06cfe57d1a8a9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_8ee44e0691290b8ceb00f6961ebde18c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov,
        const_str_plain_solve_discrete_lyapunov,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b7dd50f9ab07889f12658e3fcc765ad5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_4b043e880610e8feb86da5e60221aa3c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_6_solve_continuous_are( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_6_solve_continuous_are,
        const_str_plain_solve_continuous_are,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_05fba39617e6a39a2b8101e82b9e54b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_be75ee0c8722a7ed46a3e5eb6e1f70e8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_7_solve_discrete_are( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_7_solve_discrete_are,
        const_str_plain_solve_discrete_are,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9d726d8893bf62df049aa12d46b1a70,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_c2982081149410375cfad9ac462a8671,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_solvers$$$function_8__are_validate_args( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_solvers$$$function_8__are_validate_args,
        const_str_plain__are_validate_args,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_03aac1d19cf9b3300c743c61e1cea8cf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_solvers,
        const_str_digest_587e51a691b02a05886f3cc94adcd7f4,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$_solvers =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg._solvers",
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

MOD_INIT_DECL( scipy$linalg$_solvers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$_solvers );
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
    puts("scipy.linalg._solvers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._solvers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.linalg._solvers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$linalg$_solvers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$_solvers = Py_InitModule4(
        "scipy.linalg._solvers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$linalg$_solvers = PyModule_Create( &mdef_scipy$linalg$_solvers );
#endif

    moduledict_scipy$linalg$_solvers = MODULE_DICT( module_scipy$linalg$_solvers );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$linalg$_solvers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$linalg$_solvers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_solvers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_solvers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$linalg$_solvers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_8f57d69039a4183d2dca7d7467e052b4, module_scipy$linalg$_solvers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_70d856c624ea0714f9fc2a08638d99c8;
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
        tmp_assign_source_1 = const_str_digest_7889f260919a68ea6c087e3b4a5e306b;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_70d856c624ea0714f9fc2a08638d99c8 = MAKE_MODULE_FRAME( codeobj_70d856c624ea0714f9fc2a08638d99c8, module_scipy$linalg$_solvers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_70d856c624ea0714f9fc2a08638d99c8 );
    assert( Py_REFCNT( frame_70d856c624ea0714f9fc2a08638d99c8 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 11;
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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 13;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numpy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 14;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_9b62246b8f3333d2c7e6ac7b0167ffd0_tuple;
        tmp_level_name_3 = const_int_0;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 15;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_inv );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LinAlgError );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_norm );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_cond );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_cond, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_svd );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_15 );
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_basic;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_edcd469a1c64cb3fdbd6c7ac268913ed_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 17;
        tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_9 ) )
        {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_solve,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_solve );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_solve_triangular,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_solve_triangular );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_triangular, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if ( PyModule_Check( tmp_import_name_from_11 ) )
        {
           tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_matrix_balance,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_matrix_balance );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_matrix_balance, tmp_assign_source_19 );
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_lapack;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_get_lapack_funcs_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 18;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_12 ) )
        {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_get_lapack_funcs,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_get_lapack_funcs );
        }

        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_decomp_schur;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_schur_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 19;
        tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_13 ) )
        {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_schur,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_schur );
        }

        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_schur, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_decomp_lu;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_lu_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 20;
        tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_14 ) )
        {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_lu,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_lu );
        }

        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_lu, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_decomp_qr;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_qr_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 21;
        tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_15 ) )
        {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_qr,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_qr );
        }

        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_qr, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain__decomp_qz;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_ordqz_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 22;
        tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_16 ) )
        {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_ordqz,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ordqz );
        }

        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_ordqz, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_decomp;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain__asarray_validated_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 23;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_17 ) )
        {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain__asarray_validated,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain__asarray_validated );
        }

        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__asarray_validated, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_special_matrices;
        tmp_globals_name_11 = (PyObject *)moduledict_scipy$linalg$_solvers;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_kron_str_plain_block_diag_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_70d856c624ea0714f9fc2a08638d99c8->m_frame.f_lineno = 24;
        tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_18 ) )
        {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_kron,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_kron );
        }

        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_kron, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if ( PyModule_Check( tmp_import_name_from_19 ) )
        {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_scipy$linalg$_solvers,
                const_str_plain_block_diag,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_block_diag );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_block_diag, tmp_assign_source_28 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70d856c624ea0714f9fc2a08638d99c8 );
#endif
    popFrameStack();

    assertFrameObject( frame_70d856c624ea0714f9fc2a08638d99c8 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70d856c624ea0714f9fc2a08638d99c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70d856c624ea0714f9fc2a08638d99c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70d856c624ea0714f9fc2a08638d99c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70d856c624ea0714f9fc2a08638d99c8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = LIST_COPY( const_list_c5b4531e7eeecfbb2377fb3bcb21ed29_list );
        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_1_solve_sylvester(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_sylvester, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_2_solve_continuous_lyapunov(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_continuous_lyapunov, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_continuous_lyapunov );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_continuous_lyapunov );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_assign_source_32 = tmp_mvar_value_3;
        UPDATE_STRING_DICT0( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_lyapunov, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_3__solve_discrete_lyapunov_direct(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_direct, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_4__solve_discrete_lyapunov_bilinear(  );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__solve_discrete_lyapunov_bilinear, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_5_solve_discrete_lyapunov( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_discrete_lyapunov, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_true_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_36 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_6_solve_continuous_are( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_continuous_are, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_none_true_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_37 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_7_solve_discrete_are( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain_solve_discrete_are, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_str_plain_care_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_38 = MAKE_FUNCTION_scipy$linalg$_solvers$$$function_8__are_validate_args( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain__are_validate_args, tmp_assign_source_38 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$_solvers, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$_solvers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
