/* Generated code for Python module 'scipy.optimize._linprog_ip'
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

/* The "_module_scipy$optimize$_linprog_ip" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$optimize$_linprog_ip;
PyDictObject *moduledict_scipy$optimize$_linprog_ip;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61;
static PyObject *const_str_digest_b25163d262b2e608fd92a07f5857ee47;
static PyObject *const_str_plain__ip_hsd;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_r1;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain__postsolve;
static PyObject *const_str_plain_NATURAL;
static PyObject *const_str_plain_i_z;
extern PyObject *const_str_plain_eta;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_r2;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_digest_51c25179badd9e591b1b6f136bc6bc43;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OptimizeResult;
static PyObject *const_str_digest_b16a19e95770741ecd4ced334106b088;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_kappa;
static PyObject *const_str_digest_2e762fc5f9921f3801bc9035afb963ce;
static PyObject *const_str_digest_acf6dc820c3326ca1fb1eb7aaf0c90bc;
static PyObject *const_str_plain_r_g;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_has_umfpack;
static PyObject *const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple;
extern PyObject *const_str_plain_fmt;
static PyObject *const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_rho_g;
static PyObject *const_str_plain_d_x;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_str_plain__postsolve_tuple;
extern PyObject *const_str_plain_permc_spec;
static PyObject *const_str_digest_0f50e41170e0897b6840bf38de7c1fd3;
extern PyObject *const_str_plain__linprog_ip;
extern PyObject *const_str_plain_cho_factor;
extern PyObject *const_int_pos_5;
static PyObject *const_dict_95f2fb06c20fdff3289065c53213fa93;
static PyObject *const_str_plain_rho_p;
extern PyObject *const_str_plain_messages;
static PyObject *const_str_digest_bb8a80dd4b23ceab55b323a06f1130f6;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_plain_d_z;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_L;
static PyObject *const_str_plain_d_y;
extern PyObject *const_str_plain_sp;
extern PyObject *const_str_plain_transpose;
static PyObject *const_str_digest_96b3f131ae45a522908dd9930490865c;
static PyObject *const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple;
extern PyObject *const_str_plain_z0;
extern PyObject *const_tuple_str_plain_LinAlgError_tuple;
extern PyObject *const_float_0_1;
static PyObject *const_str_digest_63f971632eda6f35602c1e6b25e1fe5c;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_diags;
extern PyObject *const_str_plain_slack;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_d_kappa;
extern PyObject *const_str_plain_phase;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain__indicators;
static PyObject *const_str_digest_df5a52113e232030c0d37af053b9ce08;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_str_digest_38ff53700658cabaea622d812db146cd;
extern PyObject *const_dict_de639e5406c83de902c3c5cbde7c2788;
static PyObject *const_str_digest_1c5ab8c80a45b7d92c1e490083ee358f;
static PyObject *const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_y0;
extern PyObject *const_str_plain_min;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_ebc86f55add0095217042fee821a5309;
extern PyObject *const_str_chr_45;
static PyObject *const_str_digest_e94bdabcdd054b4f9b974e5a3aab8176;
extern PyObject *const_str_plain_g;
static PyObject *const_str_plain_d_tau;
static PyObject *const_str_digest_abc10d89afaa68b60bfdb8fba44c787d;
static PyObject *const_str_plain_tau0;
extern PyObject *const_str_plain_isnan;
static PyObject *const_str_plain__get_message;
extern PyObject *const_str_plain_con;
extern PyObject *const_str_plain_csc;
extern PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
extern PyObject *const_str_plain_x0;
static PyObject *const_str_digest_41f020564758e80f307684be79fef96e;
extern PyObject *const_str_plain_alpha;
extern PyObject *const_str_plain_OptimizeWarning;
extern PyObject *const_str_plain_message;
extern PyObject *const_float_1eminus_08;
extern PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_tuple;
static PyObject *const_tuple_ad0f1ed5668b6962c38bf9f17c925da0_tuple;
static PyObject *const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple;
static PyObject *const_str_plain__get_delta;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_a288c7b7246ac1602ed9c8db367974e2;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_numbers;
extern PyObject *const_str_plain_norm;
static PyObject *const_str_digest_d3d6b8785606b0b75cdcdf4417344020;
static PyObject *const_str_digest_312275eae3698278d6bdd056095ea2e9;
static PyObject *const_tuple_str_plain_status_str_plain_messages_tuple;
static PyObject *const_str_plain_rho_d;
extern PyObject *const_str_plain_r;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_nit;
static PyObject *const_str_digest_e67e1230c0b5ba3a2ba4afcba0b61d60;
extern PyObject *const_str_plain_cholesky;
static PyObject *const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple;
extern PyObject *const_str_plain__check_unknown_options;
static PyObject *const_str_digest_3c3d3c54921a531314b5e5cbc9c28b11;
extern PyObject *const_str_plain__display_iter;
extern PyObject *const_str_plain_complete;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_mu;
static PyObject *const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple;
static PyObject *const_str_digest_98ecf4f68caa24ac5880c9c1823ad36b;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_sps;
static PyObject *const_tuple_e49f5da0c9fc2d7026db15c409ea88a9_tuple;
static PyObject *const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple;
static PyObject *const_str_digest_4eee7172f254e91ff9a57510d336b319;
static PyObject *const_str_plain_r_d;
static PyObject *const_str_digest_ae5a44bfbf5043d316052b45a1df4fd4;
static PyObject *const_tuple_str_plain_cholesky_tuple;
static PyObject *const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple;
extern PyObject *const_str_plain_LinAlgError;
static PyObject *const_str_plain_cholmod;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_digest_de8bfbbb5a80e72a7a223b0376d86808;
extern PyObject *const_str_plain_splu;
static PyObject *const_str_plain_has_cholmod;
static PyObject *const_str_digest_274390281ee8f903a5e1f366b68ddab1;
extern PyObject *const_int_pos_1000;
static PyObject *const_str_digest_3b2656850c515aa0969118f5af02ed36;
static PyObject *const_tuple_str_plain_r_str_plain_M_tuple;
static PyObject *const_list_47976af26f536b004407e4d2f35897ff_list;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_b7b1eea3f789c24aaf98d3f720167206;
static PyObject *const_str_plain_alpha_x;
static PyObject *const_str_plain_COLAMD;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_tuple_int_pos_1_tuple_tuple;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_sparse;
static PyObject *const_tuple_0f50967bb475414fafb1fb12ae8921e3_tuple;
static PyObject *const_str_digest_4c733bf8a5b6e564a19f289fbca61559;
static PyObject *const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple;
extern PyObject *const_tuple_int_neg_1_int_pos_1_tuple;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_alpha0;
extern PyObject *const_str_plain_lstsq;
static PyObject *const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple;
static PyObject *const_str_digest_e1621240fc79efdc0d678f34207fb565;
static PyObject *const_str_digest_545fc1b37bacdaee684e3e6a1d6511ef;
extern PyObject *const_str_plain_optimize;
static PyObject *const_tuple_str_plain_g_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_digest_60a2b8ac8bdc53113df526e4af94b9c4;
static PyObject *const_str_digest_7c28b2ce26449e864767bd77950f8770;
static PyObject *const_str_plain_scikits;
static PyObject *const_str_digest_1173f4fe83aa66858bc8e362cbb9f1a4;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_dot;
static PyObject *const_str_plain__get_step;
extern PyObject *const_str_plain_tau;
static PyObject *const_str_plain_MMD_ATA;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_z;
static PyObject *const_str_digest_1a3cac742b7ec6c4ef7cbd4078dfa8ba;
static PyObject *const_str_plain_r_p;
extern PyObject *const_str_plain_factorized;
static PyObject *const_str_plain_i_x;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_becc746910d26d24b351689b348450da;
extern PyObject *const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
extern PyObject *const_str_plain_y;
static PyObject *const_str_digest_42a1f79652b52bfb37e8d9899b02c680;
static PyObject *const_str_plain_rho_mu;
static PyObject *const_tuple_false_false_true_false_tuple;
static PyObject *const_str_digest_b74fed43a3f8218e5a0c9c62281cae61;
extern PyObject *const_str_plain_M;
static PyObject *const_str_digest_856a5730a93cca61c3b943bd990c5b2c;
static PyObject *const_str_plain_MMD_AT_PLUS_A;
static PyObject *const_str_plain_alpha_kappa;
static PyObject *const_str_plain__get_blind_start;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_cho_solve;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_digest_9b568abd0afabc6e6ad6748919c47246;
static PyObject *const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple;
static PyObject *const_str_plain_alpha_tau;
extern PyObject *const_str_plain__linprog_util;
static PyObject *const_str_plain__sym_solve;
extern PyObject *const_str_plain_Number;
static PyObject *const_str_plain_sym_pos;
static PyObject *const_tuple_ef82a1afa35f407ffab1c6c44826f9ba_tuple;
extern PyObject *const_tuple_str_plain_warn_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_mean;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain__do_step;
extern PyObject *const_tuple_str_plain_a_tuple;
static PyObject *const_str_digest_e2b1c7d7e55b78f71e44d24cefa675ad;
static PyObject *const_float_0_99995;
static PyObject *const_str_digest_c4cf0f8f33bab7cf2398cd9c59bbf459;
extern PyObject *const_str_plain_u;
static PyObject *const_str_plain_kappa0;
static PyObject *const_str_digest_0c84b7b64a742212579c9c8110df2724;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
static PyObject *const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_Dinv;
static PyObject *const_str_plain__get_solver;
static PyObject *const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_0489646193fba12ee93feaf94304553a_tuple;
static PyObject *const_str_digest_eedae80dc8dd756d91482825f8d8138a;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_alpha_z;
static PyObject *const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple;
static PyObject *const_str_digest_033a776d7da133352911e07b565603a8;
static PyObject *const_tuple_str_plain_r_str_plain_L_tuple;
extern PyObject *const_str_plain_success;
extern PyObject *const_str_plain_lsqr;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b25163d262b2e608fd92a07f5857ee47 = UNSTREAM_STRING_ASCII( &constant_bin[ 4808145 ], 26, 0 );
    const_str_plain__ip_hsd = UNSTREAM_STRING_ASCII( &constant_bin[ 4808171 ], 7, 1 );
    const_str_plain_NATURAL = UNSTREAM_STRING_ASCII( &constant_bin[ 4808178 ], 7, 1 );
    const_str_plain_i_z = UNSTREAM_STRING_ASCII( &constant_bin[ 2125320 ], 3, 1 );
    const_str_digest_51c25179badd9e591b1b6f136bc6bc43 = UNSTREAM_STRING_ASCII( &constant_bin[ 4808185 ], 3046, 0 );
    const_str_digest_b16a19e95770741ecd4ced334106b088 = UNSTREAM_STRING_ASCII( &constant_bin[ 4811231 ], 6150, 0 );
    const_str_digest_2e762fc5f9921f3801bc9035afb963ce = UNSTREAM_STRING_ASCII( &constant_bin[ 4817381 ], 19, 0 );
    const_str_digest_acf6dc820c3326ca1fb1eb7aaf0c90bc = UNSTREAM_STRING_ASCII( &constant_bin[ 4817400 ], 335, 0 );
    const_str_plain_r_g = UNSTREAM_STRING_ASCII( &constant_bin[ 19941 ], 3, 1 );
    const_str_plain_has_umfpack = UNSTREAM_STRING_ASCII( &constant_bin[ 4817735 ], 11, 1 );
    const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple, 0, const_str_plain_OptimizeWarning ); Py_INCREF( const_str_plain_OptimizeWarning );
    PyTuple_SET_ITEM( const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple, 1, const_str_plain_OptimizeResult ); Py_INCREF( const_str_plain_OptimizeResult );
    PyTuple_SET_ITEM( const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple, 2, const_str_plain__check_unknown_options ); Py_INCREF( const_str_plain__check_unknown_options );
    const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple, 3, Py_True ); Py_INCREF( Py_True );
    const_str_plain_MMD_AT_PLUS_A = UNSTREAM_STRING_ASCII( &constant_bin[ 4810073 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple, 4, const_str_plain_MMD_AT_PLUS_A ); Py_INCREF( const_str_plain_MMD_AT_PLUS_A );
    const_str_plain_rho_g = UNSTREAM_STRING_ASCII( &constant_bin[ 4817746 ], 5, 1 );
    const_str_plain_d_x = UNSTREAM_STRING_ASCII( &constant_bin[ 968578 ], 3, 1 );
    const_str_digest_0f50e41170e0897b6840bf38de7c1fd3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4817751 ], 395, 0 );
    const_dict_95f2fb06c20fdff3289065c53213fa93 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_95f2fb06c20fdff3289065c53213fa93, const_str_plain_header, Py_True );
    assert( PyDict_Size( const_dict_95f2fb06c20fdff3289065c53213fa93 ) == 1 );
    const_str_plain_rho_p = UNSTREAM_STRING_ASCII( &constant_bin[ 4818146 ], 5, 1 );
    const_str_digest_bb8a80dd4b23ceab55b323a06f1130f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 4818151 ], 10841, 0 );
    const_str_plain_d_z = UNSTREAM_STRING_ASCII( &constant_bin[ 2614874 ], 3, 1 );
    const_str_plain_d_y = UNSTREAM_STRING_ASCII( &constant_bin[ 1067551 ], 3, 1 );
    const_str_digest_96b3f131ae45a522908dd9930490865c = UNSTREAM_STRING_ASCII( &constant_bin[ 4828992 ], 335, 0 );
    const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 0, const_str_plain_rho_p ); Py_INCREF( const_str_plain_rho_p );
    const_str_plain_rho_d = UNSTREAM_STRING_ASCII( &constant_bin[ 4829327 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 1, const_str_plain_rho_d ); Py_INCREF( const_str_plain_rho_d );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 2, const_str_plain_rho_g ); Py_INCREF( const_str_plain_rho_g );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 3, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    const_str_plain_rho_mu = UNSTREAM_STRING_ASCII( &constant_bin[ 4829332 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 4, const_str_plain_rho_mu ); Py_INCREF( const_str_plain_rho_mu );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 5, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 6, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 7, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    const_str_digest_63f971632eda6f35602c1e6b25e1fe5c = UNSTREAM_STRING_ASCII( &constant_bin[ 4829338 ], 118, 0 );
    const_str_plain_d_kappa = UNSTREAM_STRING_ASCII( &constant_bin[ 4829456 ], 7, 1 );
    const_str_plain__indicators = UNSTREAM_STRING_ASCII( &constant_bin[ 4829463 ], 11, 1 );
    const_str_digest_df5a52113e232030c0d37af053b9ce08 = UNSTREAM_STRING_ASCII( &constant_bin[ 4829474 ], 533, 0 );
    const_str_digest_38ff53700658cabaea622d812db146cd = UNSTREAM_STRING_ASCII( &constant_bin[ 4830007 ], 80, 0 );
    const_str_digest_1c5ab8c80a45b7d92c1e490083ee358f = UNSTREAM_STRING_ASCII( &constant_bin[ 4830087 ], 20, 0 );
    const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 1, const_str_plain_d_x ); Py_INCREF( const_str_plain_d_x );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 3, const_str_plain_d_z ); Py_INCREF( const_str_plain_d_z );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 4, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    const_str_plain_d_tau = UNSTREAM_STRING_ASCII( &constant_bin[ 4830107 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 5, const_str_plain_d_tau ); Py_INCREF( const_str_plain_d_tau );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 6, const_str_plain_kappa ); Py_INCREF( const_str_plain_kappa );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 7, const_str_plain_d_kappa ); Py_INCREF( const_str_plain_d_kappa );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 8, const_str_plain_alpha0 ); Py_INCREF( const_str_plain_alpha0 );
    const_str_plain_i_x = UNSTREAM_STRING_ASCII( &constant_bin[ 2146018 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 9, const_str_plain_i_x ); Py_INCREF( const_str_plain_i_x );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 10, const_str_plain_i_z ); Py_INCREF( const_str_plain_i_z );
    const_str_plain_alpha_x = UNSTREAM_STRING_ASCII( &constant_bin[ 4830112 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 11, const_str_plain_alpha_x ); Py_INCREF( const_str_plain_alpha_x );
    const_str_plain_alpha_tau = UNSTREAM_STRING_ASCII( &constant_bin[ 4830119 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 12, const_str_plain_alpha_tau ); Py_INCREF( const_str_plain_alpha_tau );
    const_str_plain_alpha_z = UNSTREAM_STRING_ASCII( &constant_bin[ 4573425 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 13, const_str_plain_alpha_z ); Py_INCREF( const_str_plain_alpha_z );
    const_str_plain_alpha_kappa = UNSTREAM_STRING_ASCII( &constant_bin[ 4830128 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 14, const_str_plain_alpha_kappa ); Py_INCREF( const_str_plain_alpha_kappa );
    PyTuple_SET_ITEM( const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 15, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    const_str_digest_ebc86f55add0095217042fee821a5309 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830139 ], 220, 0 );
    const_str_digest_e94bdabcdd054b4f9b974e5a3aab8176 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830359 ], 29, 0 );
    const_str_digest_abc10d89afaa68b60bfdb8fba44c787d = UNSTREAM_STRING_ASCII( &constant_bin[ 4830388 ], 19, 0 );
    const_str_plain_tau0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830407 ], 4, 1 );
    const_str_plain__get_message = UNSTREAM_STRING_ASCII( &constant_bin[ 4830411 ], 12, 1 );
    const_str_digest_41f020564758e80f307684be79fef96e = UNSTREAM_STRING_ASCII( &constant_bin[ 4830423 ], 24, 0 );
    const_tuple_ad0f1ed5668b6962c38bf9f17c925da0_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4830447 ], 312 );
    const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple = PyTuple_New( 8 );
    const_str_plain_Dinv = UNSTREAM_STRING_ASCII( &constant_bin[ 4830759 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 0, const_str_plain_Dinv ); Py_INCREF( const_str_plain_Dinv );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 1, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 2, const_str_plain_r1 ); Py_INCREF( const_str_plain_r1 );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 3, const_str_plain_r2 ); Py_INCREF( const_str_plain_r2 );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 4, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 6, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 7, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    const_str_plain__get_delta = UNSTREAM_STRING_ASCII( &constant_bin[ 4830763 ], 10, 1 );
    const_str_digest_a288c7b7246ac1602ed9c8db367974e2 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830773 ], 28, 0 );
    const_str_digest_d3d6b8785606b0b75cdcdf4417344020 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830801 ], 145, 0 );
    const_str_digest_312275eae3698278d6bdd056095ea2e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 4830946 ], 63, 0 );
    const_tuple_str_plain_status_str_plain_messages_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_status_str_plain_messages_tuple, 0, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    PyTuple_SET_ITEM( const_tuple_str_plain_status_str_plain_messages_tuple, 1, const_str_plain_messages ); Py_INCREF( const_str_plain_messages );
    const_str_digest_e67e1230c0b5ba3a2ba4afcba0b61d60 = UNSTREAM_STRING_ASCII( &constant_bin[ 4831009 ], 1636, 0 );
    const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 2, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 4, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_digest_3c3d3c54921a531314b5e5cbc9c28b11 = UNSTREAM_STRING_ASCII( &constant_bin[ 4832645 ], 25, 0 );
    const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 3, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 4, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple, 6, const_str_plain_MMD_AT_PLUS_A ); Py_INCREF( const_str_plain_MMD_AT_PLUS_A );
    const_str_digest_98ecf4f68caa24ac5880c9c1823ad36b = UNSTREAM_STRING_ASCII( &constant_bin[ 4832670 ], 770, 0 );
    const_tuple_e49f5da0c9fc2d7026db15c409ea88a9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4833440 ], 185 );
    const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 0, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 1, const_str_plain_sparse ); Py_INCREF( const_str_plain_sparse );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 2, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    const_str_plain_sym_pos = UNSTREAM_STRING_ASCII( &constant_bin[ 4541238 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 3, const_str_plain_sym_pos ); Py_INCREF( const_str_plain_sym_pos );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 4, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 5, const_str_plain_permc_spec ); Py_INCREF( const_str_plain_permc_spec );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 6, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 7, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    const_str_digest_4eee7172f254e91ff9a57510d336b319 = UNSTREAM_STRING_ASCII( &constant_bin[ 4833625 ], 218, 0 );
    const_str_plain_r_d = UNSTREAM_STRING_ASCII( &constant_bin[ 1243 ], 3, 1 );
    const_str_digest_ae5a44bfbf5043d316052b45a1df4fd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4833843 ], 19, 0 );
    const_tuple_str_plain_cholesky_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cholesky_tuple, 0, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 0, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 3, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 4, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 5, const_str_plain_z0 ); Py_INCREF( const_str_plain_z0 );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 6, const_str_plain_tau0 ); Py_INCREF( const_str_plain_tau0 );
    const_str_plain_kappa0 = UNSTREAM_STRING_ASCII( &constant_bin[ 4833862 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 7, const_str_plain_kappa0 ); Py_INCREF( const_str_plain_kappa0 );
    const_str_plain_cholmod = UNSTREAM_STRING_ASCII( &constant_bin[ 4825112 ], 7, 1 );
    const_str_plain_has_cholmod = UNSTREAM_STRING_ASCII( &constant_bin[ 4833868 ], 11, 1 );
    const_str_digest_274390281ee8f903a5e1f366b68ddab1 = UNSTREAM_STRING_ASCII( &constant_bin[ 4833879 ], 24, 0 );
    const_str_digest_3b2656850c515aa0969118f5af02ed36 = UNSTREAM_STRING_ASCII( &constant_bin[ 4833903 ], 60, 0 );
    const_tuple_str_plain_r_str_plain_M_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_M_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_M_tuple, 1, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_list_47976af26f536b004407e4d2f35897ff_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_47976af26f536b004407e4d2f35897ff_list, 0, const_str_digest_b7b1eea3f789c24aaf98d3f720167206 ); Py_INCREF( const_str_digest_b7b1eea3f789c24aaf98d3f720167206 );
    PyList_SET_ITEM( const_list_47976af26f536b004407e4d2f35897ff_list, 1, const_str_digest_312275eae3698278d6bdd056095ea2e9 ); Py_INCREF( const_str_digest_312275eae3698278d6bdd056095ea2e9 );
    const_str_digest_1a3cac742b7ec6c4ef7cbd4078dfa8ba = UNSTREAM_STRING_ASCII( &constant_bin[ 4833963 ], 84, 0 );
    PyList_SET_ITEM( const_list_47976af26f536b004407e4d2f35897ff_list, 2, const_str_digest_1a3cac742b7ec6c4ef7cbd4078dfa8ba ); Py_INCREF( const_str_digest_1a3cac742b7ec6c4ef7cbd4078dfa8ba );
    const_str_digest_eedae80dc8dd756d91482825f8d8138a = UNSTREAM_STRING_ASCII( &constant_bin[ 4834047 ], 83, 0 );
    PyList_SET_ITEM( const_list_47976af26f536b004407e4d2f35897ff_list, 3, const_str_digest_eedae80dc8dd756d91482825f8d8138a ); Py_INCREF( const_str_digest_eedae80dc8dd756d91482825f8d8138a );
    const_str_digest_4c733bf8a5b6e564a19f289fbca61559 = UNSTREAM_STRING_ASCII( &constant_bin[ 4834130 ], 286, 0 );
    PyList_SET_ITEM( const_list_47976af26f536b004407e4d2f35897ff_list, 4, const_str_digest_4c733bf8a5b6e564a19f289fbca61559 ); Py_INCREF( const_str_digest_4c733bf8a5b6e564a19f289fbca61559 );
    const_str_plain_COLAMD = UNSTREAM_STRING_ASCII( &constant_bin[ 4810582 ], 6, 1 );
    const_tuple_0f50967bb475414fafb1fb12ae8921e3_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4834416 ], 261 );
    const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple, 1, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple, 3, const_str_plain_kappa ); Py_INCREF( const_str_plain_kappa );
    const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple, 1, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple, 3, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    const_str_digest_e1621240fc79efdc0d678f34207fb565 = UNSTREAM_STRING_ASCII( &constant_bin[ 4834677 ], 69, 0 );
    const_str_digest_545fc1b37bacdaee684e3e6a1d6511ef = UNSTREAM_STRING_ASCII( &constant_bin[ 4834746 ], 334, 0 );
    const_tuple_str_plain_g_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_g_tuple, 0, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_digest_7c28b2ce26449e864767bd77950f8770 = UNSTREAM_STRING_ASCII( &constant_bin[ 4835080 ], 860, 0 );
    const_str_plain_scikits = UNSTREAM_STRING_ASCII( &constant_bin[ 4835940 ], 7, 1 );
    const_str_digest_1173f4fe83aa66858bc8e362cbb9f1a4 = UNSTREAM_STRING_ASCII( &constant_bin[ 4835947 ], 35, 0 );
    const_str_plain__get_step = UNSTREAM_STRING_ASCII( &constant_bin[ 4835982 ], 9, 1 );
    const_str_plain_MMD_ATA = UNSTREAM_STRING_ASCII( &constant_bin[ 4810428 ], 7, 1 );
    const_str_plain_r_p = UNSTREAM_STRING_ASCII( &constant_bin[ 3268 ], 3, 1 );
    const_str_digest_becc746910d26d24b351689b348450da = UNSTREAM_STRING_ASCII( &constant_bin[ 4835955 ], 26, 0 );
    const_str_digest_42a1f79652b52bfb37e8d9899b02c680 = UNSTREAM_STRING_ASCII( &constant_bin[ 4835991 ], 344, 0 );
    const_tuple_false_false_true_false_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_false_true_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_false_true_false_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_false_true_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    const_str_digest_b74fed43a3f8218e5a0c9c62281cae61 = UNSTREAM_STRING_ASCII( &constant_bin[ 4836335 ], 99, 0 );
    const_str_digest_856a5730a93cca61c3b943bd990c5b2c = UNSTREAM_STRING_ASCII( &constant_bin[ 4836434 ], 19, 0 );
    const_str_plain__get_blind_start = UNSTREAM_STRING_ASCII( &constant_bin[ 4836453 ], 16, 1 );
    const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 3, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 4, const_str_plain_kappa ); Py_INCREF( const_str_plain_kappa );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 5, const_str_plain_d_x ); Py_INCREF( const_str_plain_d_x );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 6, const_str_plain_d_y ); Py_INCREF( const_str_plain_d_y );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 7, const_str_plain_d_z ); Py_INCREF( const_str_plain_d_z );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 8, const_str_plain_d_tau ); Py_INCREF( const_str_plain_d_tau );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 9, const_str_plain_d_kappa ); Py_INCREF( const_str_plain_d_kappa );
    PyTuple_SET_ITEM( const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 10, const_str_plain_alpha ); Py_INCREF( const_str_plain_alpha );
    const_str_plain__sym_solve = UNSTREAM_STRING_ASCII( &constant_bin[ 4836469 ], 10, 1 );
    const_tuple_ef82a1afa35f407ffab1c6c44826f9ba_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 4836479 ], 152 );
    const_str_plain__do_step = UNSTREAM_STRING_ASCII( &constant_bin[ 4836631 ], 8, 1 );
    const_str_digest_e2b1c7d7e55b78f71e44d24cefa675ad = UNSTREAM_STRING_ASCII( &constant_bin[ 4836639 ], 23, 0 );
    const_float_0_99995 = UNSTREAM_FLOAT( &constant_bin[ 4836662 ] );
    const_str_digest_c4cf0f8f33bab7cf2398cd9c59bbf459 = UNSTREAM_STRING_ASCII( &constant_bin[ 4836670 ], 24, 0 );
    const_str_digest_0c84b7b64a742212579c9c8110df2724 = UNSTREAM_STRING_ASCII( &constant_bin[ 4836694 ], 16, 0 );
    const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 0, const_str_digest_2e762fc5f9921f3801bc9035afb963ce ); Py_INCREF( const_str_digest_2e762fc5f9921f3801bc9035afb963ce );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 1, const_str_digest_abc10d89afaa68b60bfdb8fba44c787d ); Py_INCREF( const_str_digest_abc10d89afaa68b60bfdb8fba44c787d );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 2, const_str_digest_856a5730a93cca61c3b943bd990c5b2c ); Py_INCREF( const_str_digest_856a5730a93cca61c3b943bd990c5b2c );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 3, const_str_digest_0c84b7b64a742212579c9c8110df2724 ); Py_INCREF( const_str_digest_0c84b7b64a742212579c9c8110df2724 );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 4, const_str_digest_ae5a44bfbf5043d316052b45a1df4fd4 ); Py_INCREF( const_str_digest_ae5a44bfbf5043d316052b45a1df4fd4 );
    PyTuple_SET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 5, const_str_digest_de8bfbbb5a80e72a7a223b0376d86808 ); Py_INCREF( const_str_digest_de8bfbbb5a80e72a7a223b0376d86808 );
    const_str_plain__get_solver = UNSTREAM_STRING_ASCII( &constant_bin[ 4808145 ], 11, 1 );
    const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple, 1, const_str_plain_sym_pos ); Py_INCREF( const_str_plain_sym_pos );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple, 2, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    const_tuple_0489646193fba12ee93feaf94304553a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0489646193fba12ee93feaf94304553a_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_0489646193fba12ee93feaf94304553a_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_0489646193fba12ee93feaf94304553a_tuple, 2, const_str_plain_kappa ); Py_INCREF( const_str_plain_kappa );
    PyTuple_SET_ITEM( const_tuple_0489646193fba12ee93feaf94304553a_tuple, 3, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_0489646193fba12ee93feaf94304553a_tuple, 4, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple, 0, const_str_plain_NATURAL ); Py_INCREF( const_str_plain_NATURAL );
    PyTuple_SET_ITEM( const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple, 1, const_str_plain_MMD_ATA ); Py_INCREF( const_str_plain_MMD_ATA );
    PyTuple_SET_ITEM( const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple, 2, const_str_plain_MMD_AT_PLUS_A ); Py_INCREF( const_str_plain_MMD_AT_PLUS_A );
    PyTuple_SET_ITEM( const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple, 3, const_str_plain_COLAMD ); Py_INCREF( const_str_plain_COLAMD );
    const_str_digest_033a776d7da133352911e07b565603a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 4836710 ], 341, 0 );
    const_tuple_str_plain_r_str_plain_L_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_L_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_L_tuple, 1, const_str_plain_L ); Py_INCREF( const_str_plain_L );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$optimize$_linprog_ip( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f7f6d44379aefcfe8227106df2d0b66b;
static PyCodeObject *codeobj_cf9d0d002fe8a6fa0a577d3053ef4776;
static PyCodeObject *codeobj_89b2468ae038758a1f84deb0db9eef47;
static PyCodeObject *codeobj_b751d87af4bc6bf6e166a586722963ab;
static PyCodeObject *codeobj_909b34ebd570f06ae4ac3372ed29d101;
static PyCodeObject *codeobj_037dd71a358093e759e485fe1d0151f5;
static PyCodeObject *codeobj_9aaac410a21f703eadf8326c5a989761;
static PyCodeObject *codeobj_cdfd33cc7792c8497343f916f8559535;
static PyCodeObject *codeobj_a206cf138519e4e42a2d309b6cff675d;
static PyCodeObject *codeobj_36201c1b1cab33e2e1968269b69e718e;
static PyCodeObject *codeobj_6d8c7348756bfd788ea5de34005ca67b;
static PyCodeObject *codeobj_eaeb57f80163bed14356ad4768f33166;
static PyCodeObject *codeobj_f6af70920351afa82a05839e0f150296;
static PyCodeObject *codeobj_9a46d5c3fed2257781c852aaa732740b;
static PyCodeObject *codeobj_0f795bb465d87c1003fe62fad1e5f479;
static PyCodeObject *codeobj_b4e7bf2a684e2cb5f3f28c3294e3a1a2;
static PyCodeObject *codeobj_725702b777715891450e1f2f3e78e9ae;
static PyCodeObject *codeobj_130d08ad62cc862166184645689c804a;
static PyCodeObject *codeobj_e3d16fc5534cac9fe12c5c9a0b94bc3b;
static PyCodeObject *codeobj_0c73aaf694eed03fc8b9c14463d11fa0;
static PyCodeObject *codeobj_452c087c986d786dba6661acfd5a5451;
static PyCodeObject *codeobj_3a3436162db12f0a73c2644ac3ceae40;
static PyCodeObject *codeobj_0f8fe32c9b52578bdb8acb324eaeb7a6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e94bdabcdd054b4f9b974e5a3aab8176 );
    codeobj_f7f6d44379aefcfe8227106df2d0b66b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1173f4fe83aa66858bc8e362cbb9f1a4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cf9d0d002fe8a6fa0a577d3053ef4776 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__display_iter, 521, const_tuple_8c9ecffd5390ddd4a99b58dec1a5e794_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_89b2468ae038758a1f84deb0db9eef47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__do_step, 431, const_tuple_816efdaebf7d75b46e4c73fc67752785_tuple, 11, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b751d87af4bc6bf6e166a586722963ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_blind_start, 451, const_tuple_d348ffd1c24a1a17035d6266762b6e99_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_909b34ebd570f06ae4ac3372ed29d101 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_delta, 122, const_tuple_0f50967bb475414fafb1fb12ae8921e3_tuple, 17, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_037dd71a358093e759e485fe1d0151f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_message, 394, const_tuple_str_plain_status_str_plain_messages_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9aaac410a21f703eadf8326c5a989761 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_solver, 42, const_tuple_4fbc20a22199eb173e5365d2c5a11f72_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cdfd33cc7792c8497343f916f8559535 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_step, 368, const_tuple_c1fdba69ce7dcc0ede713bdb28d48e1b_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a206cf138519e4e42a2d309b6cff675d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__indicators, 472, const_tuple_ef82a1afa35f407ffab1c6c44826f9ba_tuple, 9, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36201c1b1cab33e2e1968269b69e718e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ip_hsd, 569, const_tuple_ad0f1ed5668b6962c38bf9f17c925da0_tuple, 18, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6d8c7348756bfd788ea5de34005ca67b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__linprog_ip, 838, const_tuple_e49f5da0c9fc2d7026db15c409ea88a9_tuple, 18, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_eaeb57f80163bed14356ad4768f33166 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sym_solve, 348, const_tuple_93abcab5a45be8f609ddf7e5762add24_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6af70920351afa82a05839e0f150296 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eta, 752, const_tuple_str_plain_g_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a46d5c3fed2257781c852aaa732740b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_eta, 761, const_tuple_str_plain_g_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f795bb465d87c1003fe62fad1e5f479 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mu, 500, const_tuple_str_plain_x_str_plain_tau_str_plain_z_str_plain_kappa_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4e7bf2a684e2cb5f3f28c3294e3a1a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_norm, 505, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_725702b777715891450e1f2f3e78e9ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain_r_d, 493, const_tuple_bbfdc6fe1d0c437b3dadef129f66b3ee_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_130d08ad62cc862166184645689c804a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_r_g, 496, const_tuple_0489646193fba12ee93feaf94304553a_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e3d16fc5534cac9fe12c5c9a0b94bc3b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_r_p, 490, const_tuple_str_plain_x_str_plain_tau_str_plain_b_str_plain_A_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0c73aaf694eed03fc8b9c14463d11fa0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 87, const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_452c087c986d786dba6661acfd5a5451 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 99, const_tuple_str_plain_r_str_plain_M_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_3a3436162db12f0a73c2644ac3ceae40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 104, const_tuple_str_plain_r_str_plain_L_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0f8fe32c9b52578bdb8acb324eaeb7a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_solve, 109, const_tuple_str_plain_r_str_plain_sym_pos_str_plain_M_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_17_complex_call_helper_pos_keywords_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_11__linprog_ip( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_2__get_delta( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_3__sym_solve(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_4__get_step(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_5__get_message(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_6__do_step(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_7__get_blind_start(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm(  );


static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_9__display_iter( PyObject *defaults );


// The module function definitions.
static PyObject *impl_scipy$optimize$_linprog_ip$$$function_1__get_solver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_M = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_sparse = python_pars[ 1 ];
    PyObject *par_lstsq = python_pars[ 2 ];
    PyObject *par_sym_pos = python_pars[ 3 ];
    PyObject *par_cholesky = python_pars[ 4 ];
    PyObject *par_permc_spec = python_pars[ 5 ];
    PyObject *var_solve = NULL;
    struct Nuitka_CellObject *var_L = PyCell_EMPTY();
    struct Nuitka_FrameObject *frame_9aaac410a21f703eadf8326c5a989761;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9aaac410a21f703eadf8326c5a989761 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9aaac410a21f703eadf8326c5a989761, codeobj_9aaac410a21f703eadf8326c5a989761, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9aaac410a21f703eadf8326c5a989761 = cache_frame_9aaac410a21f703eadf8326c5a989761;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9aaac410a21f703eadf8326c5a989761 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9aaac410a21f703eadf8326c5a989761 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_sparse );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_sparse );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "cooooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            int tmp_truth_name_2;
            CHECK_OBJECT( par_lstsq );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_lstsq );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 86;
                type_description_1 = "cooooooc";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_1;
                PyObject *tmp_defaults_1;
                tmp_defaults_1 = const_tuple_false_tuple;
                Py_INCREF( tmp_defaults_1 );
                tmp_assign_source_1 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve( tmp_defaults_1 );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_M;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


                assert( var_solve == NULL );
                var_solve = tmp_assign_source_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                int tmp_truth_name_3;
                CHECK_OBJECT( par_cholesky );
                tmp_truth_name_3 = CHECK_IF_TRUE( par_cholesky );
                if ( tmp_truth_name_3 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 89;
                    type_description_1 = "cooooooc";
                    goto try_except_handler_2;
                }
                tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_mvar_value_1;
                    PyObject *tmp_args_element_name_1;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_cholmod );

                    if (unlikely( tmp_mvar_value_1 == NULL ))
                    {
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cholmod );
                    }

                    if ( tmp_mvar_value_1 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cholmod" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 90;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }

                    tmp_called_name_1 = tmp_mvar_value_1;
                    CHECK_OBJECT( PyCell_GET( par_M ) );
                    tmp_args_element_name_1 = PyCell_GET( par_M );
                    frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = 90;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 90;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }
                    assert( var_solve == NULL );
                    var_solve = tmp_assign_source_2;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    int tmp_and_left_truth_1;
                    nuitka_bool tmp_and_left_value_1;
                    nuitka_bool tmp_and_right_value_1;
                    PyObject *tmp_mvar_value_2;
                    int tmp_truth_name_4;
                    int tmp_truth_name_5;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_umfpack );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_umfpack );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "has_umfpack" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 92;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }

                    tmp_truth_name_4 = CHECK_IF_TRUE( tmp_mvar_value_2 );
                    if ( tmp_truth_name_4 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 92;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }
                    tmp_and_left_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    CHECK_OBJECT( par_sym_pos );
                    tmp_truth_name_5 = CHECK_IF_TRUE( par_sym_pos );
                    if ( tmp_truth_name_5 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 92;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }
                    tmp_and_right_value_1 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_condition_result_4 = tmp_and_right_value_1;
                    goto and_end_1;
                    and_left_1:;
                    tmp_condition_result_4 = tmp_and_left_value_1;
                    and_end_1:;
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
                        PyObject *tmp_assign_source_3;
                        PyObject *tmp_called_instance_1;
                        PyObject *tmp_source_name_1;
                        PyObject *tmp_mvar_value_3;
                        PyObject *tmp_args_element_name_2;
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps );

                        if (unlikely( tmp_mvar_value_3 == NULL ))
                        {
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
                        }

                        if ( tmp_mvar_value_3 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 93;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }

                        tmp_source_name_1 = tmp_mvar_value_3;
                        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_linalg );
                        if ( tmp_called_instance_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 93;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( PyCell_GET( par_M ) );
                        tmp_args_element_name_2 = PyCell_GET( par_M );
                        frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = 93;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_2 };
                            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_factorized, call_args );
                        }

                        Py_DECREF( tmp_called_instance_1 );
                        if ( tmp_assign_source_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 93;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        assert( var_solve == NULL );
                        var_solve = tmp_assign_source_3;
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_assign_source_4;
                        PyObject *tmp_source_name_2;
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_source_name_3;
                        PyObject *tmp_source_name_4;
                        PyObject *tmp_mvar_value_4;
                        PyObject *tmp_args_name_1;
                        PyObject *tmp_tuple_element_1;
                        PyObject *tmp_kw_name_1;
                        PyObject *tmp_dict_key_1;
                        PyObject *tmp_dict_value_1;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps );

                        if (unlikely( tmp_mvar_value_4 == NULL ))
                        {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
                        }

                        if ( tmp_mvar_value_4 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 95;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }

                        tmp_source_name_4 = tmp_mvar_value_4;
                        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_linalg );
                        if ( tmp_source_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_splu );
                        Py_DECREF( tmp_source_name_3 );
                        if ( tmp_called_name_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        CHECK_OBJECT( PyCell_GET( par_M ) );
                        tmp_tuple_element_1 = PyCell_GET( par_M );
                        tmp_args_name_1 = PyTuple_New( 1 );
                        Py_INCREF( tmp_tuple_element_1 );
                        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                        tmp_dict_key_1 = const_str_plain_permc_spec;
                        CHECK_OBJECT( par_permc_spec );
                        tmp_dict_value_1 = par_permc_spec;
                        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                        assert( !(tmp_res != 0) );
                        frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = 95;
                        tmp_source_name_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_name_1 );
                        Py_DECREF( tmp_kw_name_1 );
                        if ( tmp_source_name_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_solve );
                        Py_DECREF( tmp_source_name_2 );
                        if ( tmp_assign_source_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 95;
                            type_description_1 = "cooooooc";
                            goto try_except_handler_2;
                        }
                        assert( var_solve == NULL );
                        var_solve = tmp_assign_source_4;
                    }
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_truth_name_6;
            CHECK_OBJECT( par_lstsq );
            tmp_truth_name_6 = CHECK_IF_TRUE( par_lstsq );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "cooooooc";
                goto try_except_handler_2;
            }
            tmp_condition_result_5 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = par_M;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] );


                assert( var_solve == NULL );
                var_solve = tmp_assign_source_5;
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_6;
                int tmp_truth_name_7;
                CHECK_OBJECT( par_cholesky );
                tmp_truth_name_7 = CHECK_IF_TRUE( par_cholesky );
                if ( tmp_truth_name_7 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 101;
                    type_description_1 = "cooooooc";
                    goto try_except_handler_2;
                }
                tmp_condition_result_6 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_6;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_mvar_value_5;
                    PyObject *tmp_args_element_name_3;
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sp );

                    if (unlikely( tmp_mvar_value_5 == NULL ))
                    {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
                    }

                    if ( tmp_mvar_value_5 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sp" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 102;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }

                    tmp_source_name_5 = tmp_mvar_value_5;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_linalg );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( PyCell_GET( par_M ) );
                    tmp_args_element_name_3 = PyCell_GET( par_M );
                    frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = 102;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_3 };
                        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_cho_factor, call_args );
                    }

                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_assign_source_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 102;
                        type_description_1 = "cooooooc";
                        goto try_except_handler_2;
                    }
                    assert( PyCell_GET( var_L ) == NULL );
                    PyCell_SET( var_L, tmp_assign_source_6 );

                }
                {
                    PyObject *tmp_assign_source_7;
                    tmp_assign_source_7 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve(  );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = var_L;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );


                    assert( var_solve == NULL );
                    var_solve = tmp_assign_source_7;
                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_8;
                    PyObject *tmp_defaults_2;
                    PyObject *tmp_tuple_element_2;
                    CHECK_OBJECT( par_sym_pos );
                    tmp_tuple_element_2 = par_sym_pos;
                    tmp_defaults_2 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_2 );
                    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
                    tmp_assign_source_8 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve( tmp_defaults_2 );

                    ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] = par_M;
                    Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_8)->m_closure[0] );


                    assert( var_solve == NULL );
                    var_solve = tmp_assign_source_8;
                }
                branch_end_6:;
            }
            branch_end_5:;
        }
        branch_end_1:;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9aaac410a21f703eadf8326c5a989761, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9aaac410a21f703eadf8326c5a989761, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyboardInterrupt;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "cooooooc";
            goto try_except_handler_3;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 116;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9aaac410a21f703eadf8326c5a989761->m_frame) frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cooooooc";
        goto try_except_handler_3;
        goto branch_end_7;
        branch_no_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_Exception;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "cooooooc";
                goto try_except_handler_3;
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_3;
            goto branch_end_8;
            branch_no_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 84;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_9aaac410a21f703eadf8326c5a989761->m_frame) frame_9aaac410a21f703eadf8326c5a989761->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "cooooooc";
            goto try_except_handler_3;
            branch_end_8:;
        }
        branch_end_7:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    if ( var_solve == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "solve" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "cooooooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_solve;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aaac410a21f703eadf8326c5a989761 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aaac410a21f703eadf8326c5a989761 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9aaac410a21f703eadf8326c5a989761 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9aaac410a21f703eadf8326c5a989761, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9aaac410a21f703eadf8326c5a989761->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9aaac410a21f703eadf8326c5a989761, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9aaac410a21f703eadf8326c5a989761,
        type_description_1,
        par_M,
        par_sparse,
        par_lstsq,
        par_sym_pos,
        par_cholesky,
        par_permc_spec,
        var_solve,
        var_L
    );


    // Release cached frame.
    if ( frame_9aaac410a21f703eadf8326c5a989761 == cache_frame_9aaac410a21f703eadf8326c5a989761 )
    {
        Py_DECREF( frame_9aaac410a21f703eadf8326c5a989761 );
    }
    cache_frame_9aaac410a21f703eadf8326c5a989761 = NULL;

    assertFrameObject( frame_9aaac410a21f703eadf8326c5a989761 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_cholesky );
    Py_DECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    Py_XDECREF( var_solve );
    var_solve = NULL;

    CHECK_OBJECT( (PyObject *)var_L );
    Py_DECREF( var_L );
    var_L = NULL;

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

    CHECK_OBJECT( (PyObject *)par_M );
    Py_DECREF( par_M );
    par_M = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_cholesky );
    Py_DECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    Py_XDECREF( var_solve );
    var_solve = NULL;

    CHECK_OBJECT( (PyObject *)var_L );
    Py_DECREF( var_L );
    var_L = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    PyObject *par_sym_pos = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0c73aaf694eed03fc8b9c14463d11fa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c73aaf694eed03fc8b9c14463d11fa0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c73aaf694eed03fc8b9c14463d11fa0, codeobj_0c73aaf694eed03fc8b9c14463d11fa0, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0c73aaf694eed03fc8b9c14463d11fa0 = cache_frame_0c73aaf694eed03fc8b9c14463d11fa0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c73aaf694eed03fc8b9c14463d11fa0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c73aaf694eed03fc8b9c14463d11fa0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lsqr );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "M" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_r );
        tmp_args_element_name_2 = par_r;
        frame_0c73aaf694eed03fc8b9c14463d11fa0->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c73aaf694eed03fc8b9c14463d11fa0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c73aaf694eed03fc8b9c14463d11fa0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c73aaf694eed03fc8b9c14463d11fa0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c73aaf694eed03fc8b9c14463d11fa0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c73aaf694eed03fc8b9c14463d11fa0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c73aaf694eed03fc8b9c14463d11fa0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c73aaf694eed03fc8b9c14463d11fa0,
        type_description_1,
        par_r,
        par_sym_pos,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_0c73aaf694eed03fc8b9c14463d11fa0 == cache_frame_0c73aaf694eed03fc8b9c14463d11fa0 )
    {
        Py_DECREF( frame_0c73aaf694eed03fc8b9c14463d11fa0 );
    }
    cache_frame_0c73aaf694eed03fc8b9c14463d11fa0 = NULL;

    assertFrameObject( frame_0c73aaf694eed03fc8b9c14463d11fa0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_452c087c986d786dba6661acfd5a5451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_452c087c986d786dba6661acfd5a5451 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_452c087c986d786dba6661acfd5a5451, codeobj_452c087c986d786dba6661acfd5a5451, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *) );
    frame_452c087c986d786dba6661acfd5a5451 = cache_frame_452c087c986d786dba6661acfd5a5451;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_452c087c986d786dba6661acfd5a5451 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_452c087c986d786dba6661acfd5a5451 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sp );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lstsq );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "M" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_r );
        tmp_args_element_name_2 = par_r;
        frame_452c087c986d786dba6661acfd5a5451->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_452c087c986d786dba6661acfd5a5451 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_452c087c986d786dba6661acfd5a5451 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_452c087c986d786dba6661acfd5a5451 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_452c087c986d786dba6661acfd5a5451, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_452c087c986d786dba6661acfd5a5451->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_452c087c986d786dba6661acfd5a5451, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_452c087c986d786dba6661acfd5a5451,
        type_description_1,
        par_r,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_452c087c986d786dba6661acfd5a5451 == cache_frame_452c087c986d786dba6661acfd5a5451 )
    {
        Py_DECREF( frame_452c087c986d786dba6661acfd5a5451 );
    }
    cache_frame_452c087c986d786dba6661acfd5a5451 = NULL;

    assertFrameObject( frame_452c087c986d786dba6661acfd5a5451 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3a3436162db12f0a73c2644ac3ceae40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3a3436162db12f0a73c2644ac3ceae40 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a3436162db12f0a73c2644ac3ceae40, codeobj_3a3436162db12f0a73c2644ac3ceae40, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *) );
    frame_3a3436162db12f0a73c2644ac3ceae40 = cache_frame_3a3436162db12f0a73c2644ac3ceae40;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a3436162db12f0a73c2644ac3ceae40 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a3436162db12f0a73c2644ac3ceae40 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sp );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cho_solve );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "L" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_r );
        tmp_args_element_name_2 = par_r;
        frame_3a3436162db12f0a73c2644ac3ceae40->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 105;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a3436162db12f0a73c2644ac3ceae40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a3436162db12f0a73c2644ac3ceae40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a3436162db12f0a73c2644ac3ceae40 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a3436162db12f0a73c2644ac3ceae40, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a3436162db12f0a73c2644ac3ceae40->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a3436162db12f0a73c2644ac3ceae40, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a3436162db12f0a73c2644ac3ceae40,
        type_description_1,
        par_r,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_3a3436162db12f0a73c2644ac3ceae40 == cache_frame_3a3436162db12f0a73c2644ac3ceae40 )
    {
        Py_DECREF( frame_3a3436162db12f0a73c2644ac3ceae40 );
    }
    cache_frame_3a3436162db12f0a73c2644ac3ceae40 = NULL;

    assertFrameObject( frame_3a3436162db12f0a73c2644ac3ceae40 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    PyObject *par_sym_pos = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0f8fe32c9b52578bdb8acb324eaeb7a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0f8fe32c9b52578bdb8acb324eaeb7a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f8fe32c9b52578bdb8acb324eaeb7a6, codeobj_0f8fe32c9b52578bdb8acb324eaeb7a6, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f8fe32c9b52578bdb8acb324eaeb7a6 = cache_frame_0f8fe32c9b52578bdb8acb324eaeb7a6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sp );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sp" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_solve );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "M" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_r );
        tmp_tuple_element_1 = par_r;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_sym_pos;
        CHECK_OBJECT( par_sym_pos );
        tmp_dict_value_1 = par_sym_pos;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_0f8fe32c9b52578bdb8acb324eaeb7a6->m_frame.f_lineno = 110;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 110;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f8fe32c9b52578bdb8acb324eaeb7a6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f8fe32c9b52578bdb8acb324eaeb7a6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f8fe32c9b52578bdb8acb324eaeb7a6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f8fe32c9b52578bdb8acb324eaeb7a6,
        type_description_1,
        par_r,
        par_sym_pos,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 == cache_frame_0f8fe32c9b52578bdb8acb324eaeb7a6 )
    {
        Py_DECREF( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );
    }
    cache_frame_0f8fe32c9b52578bdb8acb324eaeb7a6 = NULL;

    assertFrameObject( frame_0f8fe32c9b52578bdb8acb324eaeb7a6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_2__get_delta( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    PyObject *par_x = python_pars[ 3 ];
    PyObject *par_y = python_pars[ 4 ];
    PyObject *par_z = python_pars[ 5 ];
    PyObject *par_tau = python_pars[ 6 ];
    PyObject *par_kappa = python_pars[ 7 ];
    PyObject *par_gamma = python_pars[ 8 ];
    PyObject *par_eta = python_pars[ 9 ];
    PyObject *par_sparse = python_pars[ 10 ];
    PyObject *par_lstsq = python_pars[ 11 ];
    PyObject *par_sym_pos = python_pars[ 12 ];
    PyObject *par_cholesky = python_pars[ 13 ];
    PyObject *par_pc = python_pars[ 14 ];
    PyObject *par_ip = python_pars[ 15 ];
    PyObject *par_permc_spec = python_pars[ 16 ];
    PyObject *var_n_x = NULL;
    PyObject *var_r_P = NULL;
    PyObject *var_r_D = NULL;
    PyObject *var_r_G = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_Dinv = NULL;
    PyObject *var_M = NULL;
    PyObject *var_solve = NULL;
    PyObject *var_n_corrections = NULL;
    PyObject *var_i = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_d_x = NULL;
    PyObject *var_d_z = NULL;
    PyObject *var_d_tau = NULL;
    PyObject *var_d_kappa = NULL;
    PyObject *var_rhatp = NULL;
    PyObject *var_rhatd = NULL;
    PyObject *var_rhatg = NULL;
    PyObject *var_rhatxs = NULL;
    PyObject *var_rhattk = NULL;
    PyObject *var_solved = NULL;
    PyObject *var_p = NULL;
    PyObject *var_q = NULL;
    PyObject *var_u = NULL;
    PyObject *var_v = NULL;
    PyObject *var_e = NULL;
    PyObject *var_d_y = NULL;
    PyObject *var_beta1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_909b34ebd570f06ae4ac3372ed29d101;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_909b34ebd570f06ae4ac3372ed29d101 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_909b34ebd570f06ae4ac3372ed29d101, codeobj_909b34ebd570f06ae4ac3372ed29d101, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_909b34ebd570f06ae4ac3372ed29d101 = cache_frame_909b34ebd570f06ae4ac3372ed29d101;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_909b34ebd570f06ae4ac3372ed29d101 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_909b34ebd570f06ae4ac3372ed29d101 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = const_tuple_false_false_true_false_tuple;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_1 == NULL) );
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
        }
        // Tried code:
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 208;
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 208;
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 208;
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


                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 208;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_4 == NULL );
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_sparse;
                assert( old != NULL );
                par_sparse = tmp_assign_source_6;
                Py_INCREF( par_sparse );
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
                PyObject *old = par_lstsq;
                assert( old != NULL );
                par_lstsq = tmp_assign_source_7;
                Py_INCREF( par_lstsq );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = par_sym_pos;
                assert( old != NULL );
                par_sym_pos = tmp_assign_source_8;
                Py_INCREF( par_sym_pos );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
            {
                PyObject *old = par_cholesky;
                assert( old != NULL );
                par_cholesky = tmp_assign_source_9;
                Py_INCREF( par_cholesky );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_4 );
        tmp_tuple_unpack_1__element_4 = NULL;

        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_assign_source_10 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_n_x == NULL );
        var_n_x = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_b );
        tmp_left_name_2 = par_b;
        CHECK_OBJECT( par_tau );
        tmp_right_name_1 = par_tau;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_called_instance_1 = par_A;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_P == NULL );
        var_r_P = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( par_c );
        tmp_left_name_5 = par_c;
        CHECK_OBJECT( par_tau );
        tmp_right_name_3 = par_tau;
        tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_right_name_5 = par_z;
        tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_D == NULL );
        var_r_D = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( par_c );
        tmp_called_instance_3 = par_c;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_called_instance_5 = par_b;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 214;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_transpose );
        if ( tmp_called_instance_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_args_element_name_4 = par_y;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_4 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_kappa );
        tmp_right_name_7 = par_kappa;
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_G == NULL );
        var_r_G = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( par_x );
        tmp_called_instance_6 = par_x;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_5 = par_z;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_left_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tau );
        tmp_left_name_10 = par_tau;
        CHECK_OBJECT( par_kappa );
        tmp_right_name_9 = par_kappa;
        tmp_right_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_n_x );
        tmp_left_name_11 = var_n_x;
        tmp_right_name_11 = const_int_pos_1;
        tmp_right_name_10 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_11, tmp_right_name_11 );
        assert( !(tmp_right_name_10 == NULL) );
        tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_8, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mu == NULL );
        var_mu = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( par_x );
        tmp_left_name_12 = par_x;
        CHECK_OBJECT( par_z );
        tmp_right_name_12 = par_z;
        tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Dinv == NULL );
        var_Dinv = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_sparse );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_sparse );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_A );
            tmp_source_name_3 = par_A;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dot );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_1;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_diags );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Dinv );
            tmp_tuple_element_1 = var_Dinv;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_0;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_de639e5406c83de902c3c5cbde7c2788 );
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 221;
            tmp_source_name_4 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_source_name_6 = par_A;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_T );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 221;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_16;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_13;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_right_name_13;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( par_A );
            tmp_source_name_7 = par_A;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_Dinv );
            tmp_called_instance_7 = var_Dinv;
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 223;
            tmp_left_name_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_int_neg_1_int_pos_1_tuple, 0 ) );

            if ( tmp_left_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_source_name_8 = par_A;
            tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T );
            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_left_name_13 );

                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_left_name_13 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_M == NULL );
            var_M = tmp_assign_source_17;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_solver );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_solver );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_solver" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_2;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_9 = var_M;
        CHECK_OBJECT( par_sparse );
        tmp_args_element_name_10 = par_sparse;
        CHECK_OBJECT( par_lstsq );
        tmp_args_element_name_11 = par_lstsq;
        CHECK_OBJECT( par_sym_pos );
        tmp_args_element_name_12 = par_sym_pos;
        CHECK_OBJECT( par_cholesky );
        tmp_args_element_name_13 = par_cholesky;
        CHECK_OBJECT( par_permc_spec );
        tmp_args_element_name_14 = par_permc_spec;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_solve == NULL );
        var_solve = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_pc );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_pc );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_19 = const_int_pos_1;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_19 = const_int_0;
        condexpr_end_1:;
        assert( var_n_corrections == NULL );
        Py_INCREF( tmp_assign_source_19 );
        var_n_corrections = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_0;
        assert( var_i == NULL );
        Py_INCREF( tmp_assign_source_20 );
        var_i = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_int_0_int_0_int_0_int_0_int_0_tuple;
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_21 == NULL) );
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_5, 0, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 232;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_6, 1, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 232;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_7, 2, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 232;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_8, 3, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 232;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_4 == NULL );
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_9, 4, 5 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 232;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_5 == NULL );
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_26;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

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
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
        assert( var_alpha == NULL );
        Py_INCREF( tmp_assign_source_27 );
        var_alpha = tmp_assign_source_27;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
        assert( var_d_x == NULL );
        Py_INCREF( tmp_assign_source_28 );
        var_d_x = tmp_assign_source_28;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_29 = tmp_tuple_unpack_2__element_3;
        assert( var_d_z == NULL );
        Py_INCREF( tmp_assign_source_29 );
        var_d_z = tmp_assign_source_29;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
        tmp_assign_source_30 = tmp_tuple_unpack_2__element_4;
        assert( var_d_tau == NULL );
        Py_INCREF( tmp_assign_source_30 );
        var_d_tau = tmp_assign_source_30;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_5 );
        tmp_assign_source_31 = tmp_tuple_unpack_2__element_5;
        assert( var_d_kappa == NULL );
        Py_INCREF( tmp_assign_source_31 );
        var_d_kappa = tmp_assign_source_31;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_2 = var_i;
        CHECK_OBJECT( var_n_corrections );
        tmp_compexpr_right_2 = var_n_corrections;
        tmp_operand_name_1 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_14;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( par_eta );
        tmp_called_name_6 = par_eta;
        CHECK_OBJECT( par_gamma );
        tmp_args_element_name_15 = par_gamma;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_left_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r_P );
        tmp_right_name_14 = var_r_P;
        tmp_assign_source_32 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhatp;
            var_rhatp = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_left_name_15;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( par_eta );
        tmp_called_name_7 = par_eta;
        CHECK_OBJECT( par_gamma );
        tmp_args_element_name_16 = par_gamma;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r_D );
        tmp_right_name_15 = var_r_D;
        tmp_assign_source_33 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhatd;
            var_rhatd = tmp_assign_source_33;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_left_name_16;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_right_name_16;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_3;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_array );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_eta );
        tmp_called_name_9 = par_eta;
        CHECK_OBJECT( par_gamma );
        tmp_args_element_name_18 = par_gamma;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_left_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r_G );
        tmp_right_name_16 = var_r_G;
        tmp_args_element_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        if ( tmp_args_element_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_called_instance_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_17 );
        if ( tmp_called_instance_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 237;
        tmp_assign_source_34 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_tuple_int_pos_1_tuple_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_8 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhatg;
            var_rhatg = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        CHECK_OBJECT( par_gamma );
        tmp_left_name_18 = par_gamma;
        CHECK_OBJECT( var_mu );
        tmp_right_name_17 = var_mu;
        tmp_left_name_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_18, tmp_right_name_17 );
        if ( tmp_left_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_left_name_19 = par_x;
        CHECK_OBJECT( par_z );
        tmp_right_name_19 = par_z;
        tmp_right_name_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_17 );

            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhatxs;
            var_rhatxs = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_4;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_array );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_gamma );
        tmp_left_name_21 = par_gamma;
        CHECK_OBJECT( var_mu );
        tmp_right_name_20 = var_mu;
        tmp_left_name_20 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_20 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tau );
        tmp_left_name_22 = par_tau;
        CHECK_OBJECT( par_kappa );
        tmp_right_name_22 = par_kappa;
        tmp_right_name_21 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_left_name_20 );

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_20, tmp_right_name_21 );
        Py_DECREF( tmp_left_name_20 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_called_instance_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_called_instance_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 241;
        tmp_assign_source_36 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_tuple_int_pos_1_tuple_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_9 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhattk;
            var_rhattk = tmp_assign_source_36;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_3 = var_i;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
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
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_ip );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_ip );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_37;
                PyObject *tmp_left_name_23;
                PyObject *tmp_left_name_24;
                PyObject *tmp_left_name_25;
                PyObject *tmp_left_name_26;
                PyObject *tmp_left_name_27;
                PyObject *tmp_right_name_23;
                PyObject *tmp_right_name_24;
                PyObject *tmp_right_name_25;
                PyObject *tmp_right_name_26;
                PyObject *tmp_left_name_28;
                PyObject *tmp_right_name_27;
                PyObject *tmp_right_name_28;
                PyObject *tmp_left_name_29;
                PyObject *tmp_left_name_30;
                PyObject *tmp_left_name_31;
                PyObject *tmp_right_name_29;
                PyObject *tmp_right_name_30;
                PyObject *tmp_right_name_31;
                tmp_left_name_27 = const_int_pos_1;
                CHECK_OBJECT( var_alpha );
                tmp_right_name_23 = var_alpha;
                tmp_left_name_26 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_27, tmp_right_name_23 );
                if ( tmp_left_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_gamma );
                tmp_right_name_24 = par_gamma;
                tmp_left_name_25 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_26, tmp_right_name_24 );
                Py_DECREF( tmp_left_name_26 );
                if ( tmp_left_name_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_mu );
                tmp_right_name_25 = var_mu;
                tmp_left_name_24 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_25, tmp_right_name_25 );
                Py_DECREF( tmp_left_name_25 );
                if ( tmp_left_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_x );
                tmp_left_name_28 = par_x;
                CHECK_OBJECT( par_z );
                tmp_right_name_27 = par_z;
                tmp_right_name_26 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_27 );
                if ( tmp_right_name_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_24 );

                    exception_lineno = 247;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_24, tmp_right_name_26 );
                Py_DECREF( tmp_left_name_24 );
                Py_DECREF( tmp_right_name_26 );
                if ( tmp_left_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_alpha );
                tmp_left_name_31 = var_alpha;
                tmp_right_name_29 = const_int_pos_2;
                tmp_left_name_30 = POWER_OPERATION( tmp_left_name_31, tmp_right_name_29 );
                if ( tmp_left_name_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_23 );

                    exception_lineno = 247;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_d_x );
                tmp_right_name_30 = var_d_x;
                tmp_left_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_30 );
                Py_DECREF( tmp_left_name_30 );
                if ( tmp_left_name_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_23 );

                    exception_lineno = 247;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_d_z );
                tmp_right_name_31 = var_d_z;
                tmp_right_name_28 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_31 );
                Py_DECREF( tmp_left_name_29 );
                if ( tmp_right_name_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_23 );

                    exception_lineno = 247;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_37 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_28 );
                Py_DECREF( tmp_left_name_23 );
                Py_DECREF( tmp_right_name_28 );
                if ( tmp_assign_source_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 247;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_rhatxs;
                    assert( old != NULL );
                    var_rhatxs = tmp_assign_source_37;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_called_instance_10;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_20;
                PyObject *tmp_left_name_32;
                PyObject *tmp_left_name_33;
                PyObject *tmp_left_name_34;
                PyObject *tmp_left_name_35;
                PyObject *tmp_left_name_36;
                PyObject *tmp_right_name_32;
                PyObject *tmp_right_name_33;
                PyObject *tmp_right_name_34;
                PyObject *tmp_right_name_35;
                PyObject *tmp_left_name_37;
                PyObject *tmp_right_name_36;
                PyObject *tmp_right_name_37;
                PyObject *tmp_left_name_38;
                PyObject *tmp_left_name_39;
                PyObject *tmp_left_name_40;
                PyObject *tmp_right_name_38;
                PyObject *tmp_right_name_39;
                PyObject *tmp_right_name_40;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 248;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_5;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_array );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_36 = const_int_pos_1;
                CHECK_OBJECT( var_alpha );
                tmp_right_name_32 = var_alpha;
                tmp_left_name_35 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_36, tmp_right_name_32 );
                if ( tmp_left_name_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_gamma );
                tmp_right_name_33 = par_gamma;
                tmp_left_name_34 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_35, tmp_right_name_33 );
                Py_DECREF( tmp_left_name_35 );
                if ( tmp_left_name_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_mu );
                tmp_right_name_34 = var_mu;
                tmp_left_name_33 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_34, tmp_right_name_34 );
                Py_DECREF( tmp_left_name_34 );
                if ( tmp_left_name_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 251;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_tau );
                tmp_left_name_37 = par_tau;
                CHECK_OBJECT( par_kappa );
                tmp_right_name_36 = par_kappa;
                tmp_right_name_35 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_37, tmp_right_name_36 );
                if ( tmp_right_name_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_left_name_33 );

                    exception_lineno = 253;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_33, tmp_right_name_35 );
                Py_DECREF( tmp_left_name_33 );
                Py_DECREF( tmp_right_name_35 );
                if ( tmp_left_name_32 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 249;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_alpha );
                tmp_left_name_40 = var_alpha;
                tmp_right_name_38 = const_int_pos_2;
                tmp_left_name_39 = POWER_OPERATION( tmp_left_name_40, tmp_right_name_38 );
                if ( tmp_left_name_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_left_name_32 );

                    exception_lineno = 255;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_d_tau );
                tmp_right_name_39 = var_d_tau;
                tmp_left_name_38 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_39, tmp_right_name_39 );
                Py_DECREF( tmp_left_name_39 );
                if ( tmp_left_name_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_left_name_32 );

                    exception_lineno = 255;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_d_kappa );
                tmp_right_name_40 = var_d_kappa;
                tmp_right_name_37 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_38, tmp_right_name_40 );
                Py_DECREF( tmp_left_name_38 );
                if ( tmp_right_name_37 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_left_name_32 );

                    exception_lineno = 256;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_20 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_37 );
                Py_DECREF( tmp_left_name_32 );
                Py_DECREF( tmp_right_name_37 );
                if ( tmp_args_element_name_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 254;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 248;
                {
                    PyObject *call_args[] = { tmp_args_element_name_20 };
                    tmp_called_instance_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_element_name_20 );
                if ( tmp_called_instance_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 248;
                tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_tuple_int_pos_1_tuple_tuple, 0 ) );

                Py_DECREF( tmp_called_instance_10 );
                if ( tmp_assign_source_38 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_rhattk;
                    assert( old != NULL );
                    var_rhattk = tmp_assign_source_38;
                    Py_DECREF( old );
                }

            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_left_name_41;
                PyObject *tmp_right_name_41;
                PyObject *tmp_left_name_42;
                PyObject *tmp_right_name_42;
                CHECK_OBJECT( var_rhatxs );
                tmp_left_name_41 = var_rhatxs;
                CHECK_OBJECT( var_d_x );
                tmp_left_name_42 = var_d_x;
                CHECK_OBJECT( var_d_z );
                tmp_right_name_42 = var_d_z;
                tmp_right_name_41 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_42, tmp_right_name_42 );
                if ( tmp_right_name_41 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_41, tmp_right_name_41 );
                Py_DECREF( tmp_right_name_41 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 262;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_39 = tmp_left_name_41;
                var_rhatxs = tmp_assign_source_39;

            }
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_left_name_43;
                PyObject *tmp_right_name_43;
                PyObject *tmp_left_name_44;
                PyObject *tmp_right_name_44;
                CHECK_OBJECT( var_rhattk );
                tmp_left_name_43 = var_rhattk;
                CHECK_OBJECT( var_d_tau );
                tmp_left_name_44 = var_d_tau;
                CHECK_OBJECT( var_d_kappa );
                tmp_right_name_44 = var_d_kappa;
                tmp_right_name_43 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_44, tmp_right_name_44 );
                if ( tmp_right_name_43 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 263;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_43, tmp_right_name_43 );
                Py_DECREF( tmp_right_name_43 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 263;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_40 = tmp_left_name_43;
                var_rhattk = tmp_assign_source_40;

            }
            branch_end_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = Py_False;
        {
            PyObject *old = var_solved;
            var_solved = tmp_assign_source_41;
            Py_INCREF( var_solved );
            Py_XDECREF( old );
        }

    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_operand_name_3;
        if ( var_solved == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "solved" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_3 = var_solved;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        goto loop_end_2;
        branch_no_6:;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__sym_solve );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_solve );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sym_solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_12 = tmp_mvar_value_6;
        CHECK_OBJECT( var_Dinv );
        tmp_args_element_name_21 = var_Dinv;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_22 = par_A;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_23 = par_c;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_24 = par_b;
        if ( var_solve == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 281;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_name_25 = var_solve;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_12, call_args );
        }

        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 281;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_10, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 281;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT( tmp_unpack_11, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 281;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 281;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 281;
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
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_45 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_45;
            Py_INCREF( var_p );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
        tmp_assign_source_46 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_46;
            Py_INCREF( var_q );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_13;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_left_name_45;
        PyObject *tmp_right_name_45;
        PyObject *tmp_left_name_46;
        PyObject *tmp_left_name_47;
        PyObject *tmp_right_name_46;
        PyObject *tmp_right_name_47;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__sym_solve );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_solve );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_sym_solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_13 = tmp_mvar_value_7;
        CHECK_OBJECT( var_Dinv );
        tmp_args_element_name_26 = var_Dinv;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_27 = par_A;
        CHECK_OBJECT( var_rhatd );
        tmp_left_name_45 = var_rhatd;
        tmp_left_name_47 = const_int_pos_1;
        CHECK_OBJECT( par_x );
        tmp_right_name_46 = par_x;
        tmp_left_name_46 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_47, tmp_right_name_46 );
        if ( tmp_left_name_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if ( var_rhatxs == NULL )
        {
            Py_DECREF( tmp_left_name_46 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rhatxs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_right_name_47 = var_rhatxs;
        tmp_right_name_45 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_46, tmp_right_name_47 );
        Py_DECREF( tmp_left_name_46 );
        if ( tmp_right_name_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_args_element_name_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_45, tmp_right_name_45 );
        Py_DECREF( tmp_right_name_45 );
        if ( tmp_args_element_name_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_rhatp );
        tmp_args_element_name_29 = var_rhatp;
        if ( var_solve == NULL )
        {
            Py_DECREF( tmp_args_element_name_28 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "solve" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_name_30 = var_solve;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_28 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_12, 0, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 283;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_48;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_13, 1, 2 );
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


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 283;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_49;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_iterator_name_2 = tmp_tuple_unpack_4__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 283;
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

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 283;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_50 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_50;
            Py_INCREF( var_u );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_51 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_51;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_name_14;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_32;
        int tmp_truth_name_4;
        PyObject *tmp_called_name_15;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_34;
        int tmp_truth_name_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_12 = tmp_mvar_value_8;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_any );
        if ( tmp_called_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_14 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_11 = tmp_mvar_value_9;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_32 = var_p;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_args_element_name_31 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_isnan, call_args );
        }

        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_14 );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_31 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_or_left_value_1 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_13 = tmp_mvar_value_10;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_any );
        if ( tmp_called_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_15 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_12 = tmp_mvar_value_11;
        CHECK_OBJECT( var_q );
        tmp_args_element_name_34 = var_q;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_34 };
            tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_isnan, call_args );
        }

        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_15 );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 285;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_or_right_value_1 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        tmp_condition_result_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_8 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_LinAlgError );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 286;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_raise_type_1 = tmp_mvar_value_12;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 286;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = Py_True;
        {
            PyObject *old = var_solved;
            var_solved = tmp_assign_source_52;
            Py_INCREF( var_solved );
            Py_XDECREF( old );
        }

    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_909b34ebd570f06ae4ac3372ed29d101, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_909b34ebd570f06ae4ac3372ed29d101, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_13;
        tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_LinAlgError );

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

            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_tuple_element_2 = tmp_mvar_value_13;
        tmp_compexpr_right_4 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = PyExc_TypeError;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_compexpr_right_4, 2, tmp_tuple_element_2 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
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
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = EXC_VALUE(PyThreadState_GET());
            {
                PyObject *old = var_e;
                var_e = tmp_assign_source_53;
                Py_INCREF( var_e );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_6;
            if ( par_cholesky == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cholesky" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 292;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_truth_name_6 = CHECK_IF_TRUE( par_cholesky );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_condition_result_10 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_54;
                tmp_assign_source_54 = Py_False;
                {
                    PyObject *old = par_cholesky;
                    par_cholesky = tmp_assign_source_54;
                    Py_INCREF( par_cholesky );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_called_name_16;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_kw_name_2;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_14 == NULL ))
                {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_14 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 294;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_called_name_16 = tmp_mvar_value_14;
                tmp_tuple_element_3 = const_str_digest_ebc86f55add0095217042fee821a5309;
                tmp_args_name_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 300;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_tuple_element_3 = tmp_mvar_value_15;
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
                tmp_kw_name_2 = PyDict_Copy( const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61 );
                frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 294;
                tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 294;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_11;
                int tmp_truth_name_7;
                if ( par_sym_pos == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sym_pos" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 301;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }

                tmp_truth_name_7 = CHECK_IF_TRUE( par_sym_pos );
                if ( tmp_truth_name_7 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                    goto try_except_handler_12;
                }
                tmp_condition_result_11 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_55;
                    tmp_assign_source_55 = Py_False;
                    {
                        PyObject *old = par_sym_pos;
                        par_sym_pos = tmp_assign_source_55;
                        Py_INCREF( par_sym_pos );
                        Py_XDECREF( old );
                    }

                }
                {
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_name_3;
                    PyObject *tmp_tuple_element_4;
                    PyObject *tmp_mvar_value_17;
                    PyObject *tmp_kw_name_3;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 303;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }

                    tmp_called_name_17 = tmp_mvar_value_16;
                    tmp_tuple_element_4 = const_str_digest_4eee7172f254e91ff9a57510d336b319;
                    tmp_args_name_3 = PyTuple_New( 2 );
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

                    if (unlikely( tmp_mvar_value_17 == NULL ))
                    {
                        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
                    }

                    if ( tmp_mvar_value_17 == NULL )
                    {
                        Py_DECREF( tmp_args_name_3 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 309;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }

                    tmp_tuple_element_4 = tmp_mvar_value_17;
                    Py_INCREF( tmp_tuple_element_4 );
                    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
                    tmp_kw_name_3 = PyDict_Copy( const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61 );
                    frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 303;
                    tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_3, tmp_kw_name_3 );
                    Py_DECREF( tmp_args_name_3 );
                    Py_DECREF( tmp_kw_name_3 );
                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 303;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                goto branch_end_10;
                branch_no_10:;
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_operand_name_4;
                    if ( par_lstsq == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lstsq" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 310;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }

                    tmp_operand_name_4 = par_lstsq;
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 310;
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_assign_source_56;
                        tmp_assign_source_56 = Py_True;
                        {
                            PyObject *old = par_lstsq;
                            par_lstsq = tmp_assign_source_56;
                            Py_INCREF( par_lstsq );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_called_name_18;
                        PyObject *tmp_mvar_value_18;
                        PyObject *tmp_call_result_5;
                        PyObject *tmp_args_name_4;
                        PyObject *tmp_tuple_element_5;
                        PyObject *tmp_mvar_value_19;
                        PyObject *tmp_kw_name_4;
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

                        if (unlikely( tmp_mvar_value_18 == NULL ))
                        {
                            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                        }

                        if ( tmp_mvar_value_18 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 312;
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                            goto try_except_handler_12;
                        }

                        tmp_called_name_18 = tmp_mvar_value_18;
                        tmp_tuple_element_5 = const_str_digest_033a776d7da133352911e07b565603a8;
                        tmp_args_name_4 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
                        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

                        if (unlikely( tmp_mvar_value_19 == NULL ))
                        {
                            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
                        }

                        if ( tmp_mvar_value_19 == NULL )
                        {
                            Py_DECREF( tmp_args_name_4 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                            CHAIN_EXCEPTION( exception_value );

                            exception_lineno = 321;
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                            goto try_except_handler_12;
                        }

                        tmp_tuple_element_5 = tmp_mvar_value_19;
                        Py_INCREF( tmp_tuple_element_5 );
                        PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
                        tmp_kw_name_4 = PyDict_Copy( const_dict_a6f9a6ea6fc5ec80bdbaf6d456da2f61 );
                        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 312;
                        tmp_call_result_5 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_4, tmp_kw_name_4 );
                        Py_DECREF( tmp_args_name_4 );
                        Py_DECREF( tmp_kw_name_4 );
                        if ( tmp_call_result_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 312;
                            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                            goto try_except_handler_12;
                        }
                        Py_DECREF( tmp_call_result_5 );
                    }
                    goto branch_end_11;
                    branch_no_11:;
                    {
                        PyObject *tmp_raise_type_2;
                        CHECK_OBJECT( var_e );
                        tmp_raise_type_2 = var_e;
                        exception_type = tmp_raise_type_2;
                        Py_INCREF( tmp_raise_type_2 );
                        exception_lineno = 323;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                        goto try_except_handler_12;
                    }
                    branch_end_11:;
                }
                branch_end_10:;
            }
            branch_end_9:;
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_name_19;
            PyObject *tmp_mvar_value_20;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_args_element_name_40;
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_solver );

            if (unlikely( tmp_mvar_value_20 == NULL ))
            {
                tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_solver );
            }

            if ( tmp_mvar_value_20 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_solver" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_called_name_19 = tmp_mvar_value_20;
            CHECK_OBJECT( var_M );
            tmp_args_element_name_35 = var_M;
            CHECK_OBJECT( par_sparse );
            tmp_args_element_name_36 = par_sparse;
            if ( par_lstsq == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lstsq" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_args_element_name_37 = par_lstsq;
            if ( par_sym_pos == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sym_pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 324;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_args_element_name_38 = par_sym_pos;
            if ( par_cholesky == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cholesky" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 325;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_args_element_name_39 = par_cholesky;
            CHECK_OBJECT( par_permc_spec );
            tmp_args_element_name_40 = par_permc_spec;
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40 };
                tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_19, call_args );
            }

            if ( tmp_assign_source_57 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = var_solve;
                var_solve = tmp_assign_source_57;
                Py_XDECREF( old );
            }

        }
        goto try_end_10;
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

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_10:;
        Py_XDECREF( var_e );
        var_e = NULL;

        goto branch_end_8;
        branch_no_8:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 279;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_909b34ebd570f06ae4ac3372ed29d101->m_frame) frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
        branch_end_8:;
    }
    goto try_end_11;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_9;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_2__get_delta );
    return NULL;
    // End of try:
    try_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_left_name_48;
        PyObject *tmp_left_name_49;
        PyObject *tmp_left_name_50;
        PyObject *tmp_right_name_48;
        PyObject *tmp_left_name_51;
        PyObject *tmp_left_name_52;
        PyObject *tmp_right_name_49;
        PyObject *tmp_right_name_50;
        PyObject *tmp_right_name_51;
        PyObject *tmp_left_name_53;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_called_name_20;
        PyObject *tmp_source_name_14;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_right_name_52;
        PyObject *tmp_called_name_21;
        PyObject *tmp_source_name_15;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_right_name_53;
        PyObject *tmp_left_name_54;
        PyObject *tmp_left_name_55;
        PyObject *tmp_left_name_56;
        PyObject *tmp_right_name_54;
        PyObject *tmp_right_name_55;
        PyObject *tmp_right_name_56;
        PyObject *tmp_left_name_57;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_called_name_22;
        PyObject *tmp_source_name_16;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_right_name_57;
        PyObject *tmp_called_name_23;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT( var_rhatg );
        tmp_left_name_50 = var_rhatg;
        tmp_left_name_52 = const_int_pos_1;
        CHECK_OBJECT( par_tau );
        tmp_right_name_49 = par_tau;
        tmp_left_name_51 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_52, tmp_right_name_49 );
        if ( tmp_left_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_rhattk == NULL )
        {
            Py_DECREF( tmp_left_name_51 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rhattk" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_50 = var_rhattk;
        tmp_right_name_48 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_51, tmp_right_name_50 );
        Py_DECREF( tmp_left_name_51 );
        if ( tmp_right_name_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_50, tmp_right_name_48 );
        Py_DECREF( tmp_right_name_48 );
        if ( tmp_left_name_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_source_name_14 = par_c;
        tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dot );
        if ( tmp_called_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_u == NULL )
        {
            Py_DECREF( tmp_left_name_49 );
            Py_DECREF( tmp_called_name_20 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_41 = var_u;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_41 };
            tmp_operand_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        Py_DECREF( tmp_called_name_20 );
        if ( tmp_operand_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_53 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
        Py_DECREF( tmp_operand_name_5 );
        if ( tmp_left_name_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_source_name_15 = par_b;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dot );
        if ( tmp_called_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );
            Py_DECREF( tmp_left_name_53 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_v == NULL )
        {
            Py_DECREF( tmp_left_name_49 );
            Py_DECREF( tmp_left_name_53 );
            Py_DECREF( tmp_called_name_21 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_42 = var_v;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = { tmp_args_element_name_42 };
            tmp_right_name_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
        }

        Py_DECREF( tmp_called_name_21 );
        if ( tmp_right_name_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );
            Py_DECREF( tmp_left_name_53 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_51 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_53, tmp_right_name_52 );
        Py_DECREF( tmp_left_name_53 );
        Py_DECREF( tmp_right_name_52 );
        if ( tmp_right_name_51 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_49 );

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_48 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_49, tmp_right_name_51 );
        Py_DECREF( tmp_left_name_49 );
        Py_DECREF( tmp_right_name_51 );
        if ( tmp_left_name_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_56 = const_int_pos_1;
        CHECK_OBJECT( par_tau );
        tmp_right_name_54 = par_tau;
        tmp_left_name_55 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_56, tmp_right_name_54 );
        if ( tmp_left_name_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_kappa );
        tmp_right_name_55 = par_kappa;
        tmp_left_name_54 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_55, tmp_right_name_55 );
        Py_DECREF( tmp_left_name_55 );
        if ( tmp_left_name_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c );
        tmp_source_name_16 = par_c;
        tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dot );
        if ( tmp_called_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_p == NULL )
        {
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );
            Py_DECREF( tmp_called_name_22 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_43 = var_p;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_43 };
            tmp_operand_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
        }

        Py_DECREF( tmp_called_name_22 );
        if ( tmp_operand_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_57 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_6 );
        Py_DECREF( tmp_operand_name_6 );
        if ( tmp_left_name_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_b );
        tmp_source_name_17 = par_b;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dot );
        if ( tmp_called_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );
            Py_DECREF( tmp_left_name_57 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_q == NULL )
        {
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );
            Py_DECREF( tmp_left_name_57 );
            Py_DECREF( tmp_called_name_23 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "q" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_44 = var_q;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_44 };
            tmp_right_name_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
        }

        Py_DECREF( tmp_called_name_23 );
        if ( tmp_right_name_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );
            Py_DECREF( tmp_left_name_57 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_57, tmp_right_name_57 );
        Py_DECREF( tmp_left_name_57 );
        Py_DECREF( tmp_right_name_57 );
        if ( tmp_right_name_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );
            Py_DECREF( tmp_left_name_54 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_54, tmp_right_name_56 );
        Py_DECREF( tmp_left_name_54 );
        Py_DECREF( tmp_right_name_56 );
        if ( tmp_right_name_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_48 );

            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_48, tmp_right_name_53 );
        Py_DECREF( tmp_left_name_48 );
        Py_DECREF( tmp_right_name_53 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d_tau;
            assert( old != NULL );
            var_d_tau = tmp_assign_source_58;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_left_name_58;
        PyObject *tmp_right_name_58;
        PyObject *tmp_left_name_59;
        PyObject *tmp_right_name_59;
        if ( var_u == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "u" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_58 = var_u;
        if ( var_p == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_59 = var_p;
        CHECK_OBJECT( var_d_tau );
        tmp_right_name_59 = var_d_tau;
        tmp_right_name_58 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_59, tmp_right_name_59 );
        if ( tmp_right_name_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_58, tmp_right_name_58 );
        Py_DECREF( tmp_right_name_58 );
        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d_x;
            assert( old != NULL );
            var_d_x = tmp_assign_source_59;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_left_name_60;
        PyObject *tmp_right_name_60;
        PyObject *tmp_left_name_61;
        PyObject *tmp_right_name_61;
        if ( var_v == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "v" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_60 = var_v;
        if ( var_q == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "q" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_61 = var_q;
        CHECK_OBJECT( var_d_tau );
        tmp_right_name_61 = var_d_tau;
        tmp_right_name_60 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_61, tmp_right_name_61 );
        if ( tmp_right_name_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_60, tmp_right_name_60 );
        Py_DECREF( tmp_right_name_60 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d_y;
            var_d_y = tmp_assign_source_60;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_left_name_62;
        PyObject *tmp_left_name_63;
        PyObject *tmp_right_name_62;
        PyObject *tmp_right_name_63;
        PyObject *tmp_left_name_64;
        PyObject *tmp_right_name_64;
        PyObject *tmp_left_name_65;
        PyObject *tmp_right_name_65;
        tmp_left_name_63 = const_int_pos_1;
        CHECK_OBJECT( par_x );
        tmp_right_name_62 = par_x;
        tmp_left_name_62 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_63, tmp_right_name_62 );
        if ( tmp_left_name_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_rhatxs == NULL )
        {
            Py_DECREF( tmp_left_name_62 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rhatxs" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_64 = var_rhatxs;
        CHECK_OBJECT( par_z );
        tmp_left_name_65 = par_z;
        CHECK_OBJECT( var_d_x );
        tmp_right_name_65 = var_d_x;
        tmp_right_name_64 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_65, tmp_right_name_65 );
        if ( tmp_right_name_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_62 );

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_63 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_64, tmp_right_name_64 );
        Py_DECREF( tmp_right_name_64 );
        if ( tmp_right_name_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_62 );

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_61 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_62, tmp_right_name_63 );
        Py_DECREF( tmp_left_name_62 );
        Py_DECREF( tmp_right_name_63 );
        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d_z;
            assert( old != NULL );
            var_d_z = tmp_assign_source_61;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_left_name_66;
        PyObject *tmp_left_name_67;
        PyObject *tmp_right_name_66;
        PyObject *tmp_right_name_67;
        PyObject *tmp_left_name_68;
        PyObject *tmp_right_name_68;
        PyObject *tmp_left_name_69;
        PyObject *tmp_right_name_69;
        tmp_left_name_67 = const_int_pos_1;
        CHECK_OBJECT( par_tau );
        tmp_right_name_66 = par_tau;
        tmp_left_name_66 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_67, tmp_right_name_66 );
        if ( tmp_left_name_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_rhattk == NULL )
        {
            Py_DECREF( tmp_left_name_66 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "rhattk" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_68 = var_rhattk;
        CHECK_OBJECT( par_kappa );
        tmp_left_name_69 = par_kappa;
        CHECK_OBJECT( var_d_tau );
        tmp_right_name_69 = var_d_tau;
        tmp_right_name_68 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_69, tmp_right_name_69 );
        if ( tmp_right_name_68 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_66 );

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_67 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_68, tmp_right_name_68 );
        Py_DECREF( tmp_right_name_68 );
        if ( tmp_right_name_67 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_66 );

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_66, tmp_right_name_67 );
        Py_DECREF( tmp_left_name_66 );
        Py_DECREF( tmp_right_name_67 );
        if ( tmp_assign_source_62 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_d_kappa;
            assert( old != NULL );
            var_d_kappa = tmp_assign_source_62;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_24;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_args_element_name_52;
        PyObject *tmp_args_element_name_53;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_step );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_step );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_step" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_24 = tmp_mvar_value_21;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_45 = par_x;
        CHECK_OBJECT( var_d_x );
        tmp_args_element_name_46 = var_d_x;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_47 = par_z;
        CHECK_OBJECT( var_d_z );
        tmp_args_element_name_48 = var_d_z;
        CHECK_OBJECT( par_tau );
        tmp_args_element_name_49 = par_tau;
        CHECK_OBJECT( var_d_tau );
        tmp_args_element_name_50 = var_d_tau;
        CHECK_OBJECT( par_kappa );
        tmp_args_element_name_51 = par_kappa;
        CHECK_OBJECT( var_d_kappa );
        tmp_args_element_name_52 = var_d_kappa;
        tmp_args_element_name_53 = const_int_pos_1;
        frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 337;
        {
            PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
            tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_24, call_args );
        }

        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_alpha;
            assert( old != NULL );
            var_alpha = tmp_assign_source_63;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_8;
        CHECK_OBJECT( par_ip );
        tmp_truth_name_8 = CHECK_IF_TRUE( par_ip );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_64;
            tmp_assign_source_64 = const_int_pos_10;
            {
                PyObject *old = par_gamma;
                assert( old != NULL );
                par_gamma = tmp_assign_source_64;
                Py_INCREF( par_gamma );
                Py_DECREF( old );
            }

        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_65;
            tmp_assign_source_65 = const_float_0_1;
            {
                PyObject *old = var_beta1;
                var_beta1 = tmp_assign_source_65;
                Py_INCREF( var_beta1 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_left_name_70;
            PyObject *tmp_left_name_71;
            PyObject *tmp_left_name_72;
            PyObject *tmp_right_name_70;
            PyObject *tmp_right_name_71;
            PyObject *tmp_right_name_72;
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_element_name_54;
            PyObject *tmp_args_element_name_55;
            PyObject *tmp_left_name_73;
            PyObject *tmp_right_name_73;
            tmp_left_name_72 = const_int_pos_1;
            CHECK_OBJECT( var_alpha );
            tmp_right_name_70 = var_alpha;
            tmp_left_name_71 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_72, tmp_right_name_70 );
            if ( tmp_left_name_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_71 = const_int_pos_2;
            tmp_left_name_70 = POWER_OPERATION( tmp_left_name_71, tmp_right_name_71 );
            Py_DECREF( tmp_left_name_71 );
            if ( tmp_left_name_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_25 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_25 != NULL );
            CHECK_OBJECT( var_beta1 );
            tmp_args_element_name_54 = var_beta1;
            tmp_left_name_73 = const_int_pos_1;
            CHECK_OBJECT( var_alpha );
            tmp_right_name_73 = var_alpha;
            tmp_args_element_name_55 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_73, tmp_right_name_73 );
            if ( tmp_args_element_name_55 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_70 );

                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_909b34ebd570f06ae4ac3372ed29d101->m_frame.f_lineno = 342;
            {
                PyObject *call_args[] = { tmp_args_element_name_54, tmp_args_element_name_55 };
                tmp_right_name_72 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
            }

            Py_DECREF( tmp_args_element_name_55 );
            if ( tmp_right_name_72 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_70 );

                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_66 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_70, tmp_right_name_72 );
            Py_DECREF( tmp_left_name_70 );
            Py_DECREF( tmp_right_name_72 );
            if ( tmp_assign_source_66 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 342;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_gamma;
                assert( old != NULL );
                par_gamma = tmp_assign_source_66;
                Py_DECREF( old );
            }

        }
        branch_end_12:;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_left_name_74;
        PyObject *tmp_right_name_74;
        CHECK_OBJECT( var_i );
        tmp_left_name_74 = var_i;
        tmp_right_name_74 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_74, tmp_right_name_74 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = tmp_left_name_74;
        var_i = tmp_assign_source_67;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_d_x );
        tmp_tuple_element_6 = var_d_x;
        tmp_return_value = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        if ( var_d_y == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d_y" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_d_y;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_d_z );
        tmp_tuple_element_6 = var_d_z;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
        CHECK_OBJECT( var_d_tau );
        tmp_tuple_element_6 = var_d_tau;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_6 );
        CHECK_OBJECT( var_d_kappa );
        tmp_tuple_element_6 = var_d_kappa;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_909b34ebd570f06ae4ac3372ed29d101 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_909b34ebd570f06ae4ac3372ed29d101 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_909b34ebd570f06ae4ac3372ed29d101 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_909b34ebd570f06ae4ac3372ed29d101, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_909b34ebd570f06ae4ac3372ed29d101->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_909b34ebd570f06ae4ac3372ed29d101, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_909b34ebd570f06ae4ac3372ed29d101,
        type_description_1,
        par_A,
        par_b,
        par_c,
        par_x,
        par_y,
        par_z,
        par_tau,
        par_kappa,
        par_gamma,
        par_eta,
        par_sparse,
        par_lstsq,
        par_sym_pos,
        par_cholesky,
        par_pc,
        par_ip,
        par_permc_spec,
        var_n_x,
        var_r_P,
        var_r_D,
        var_r_G,
        var_mu,
        var_Dinv,
        var_M,
        var_solve,
        var_n_corrections,
        var_i,
        var_alpha,
        var_d_x,
        var_d_z,
        var_d_tau,
        var_d_kappa,
        var_rhatp,
        var_rhatd,
        var_rhatg,
        var_rhatxs,
        var_rhattk,
        var_solved,
        var_p,
        var_q,
        var_u,
        var_v,
        var_e,
        var_d_y,
        var_beta1
    );


    // Release cached frame.
    if ( frame_909b34ebd570f06ae4ac3372ed29d101 == cache_frame_909b34ebd570f06ae4ac3372ed29d101 )
    {
        Py_DECREF( frame_909b34ebd570f06ae4ac3372ed29d101 );
    }
    cache_frame_909b34ebd570f06ae4ac3372ed29d101 = NULL;

    assertFrameObject( frame_909b34ebd570f06ae4ac3372ed29d101 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_2__get_delta );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_gamma );
    Py_DECREF( par_gamma );
    par_gamma = NULL;

    CHECK_OBJECT( (PyObject *)par_eta );
    Py_DECREF( par_eta );
    par_eta = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    Py_XDECREF( par_lstsq );
    par_lstsq = NULL;

    Py_XDECREF( par_sym_pos );
    par_sym_pos = NULL;

    Py_XDECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    CHECK_OBJECT( (PyObject *)par_ip );
    Py_DECREF( par_ip );
    par_ip = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)var_n_x );
    Py_DECREF( var_n_x );
    var_n_x = NULL;

    CHECK_OBJECT( (PyObject *)var_r_P );
    Py_DECREF( var_r_P );
    var_r_P = NULL;

    CHECK_OBJECT( (PyObject *)var_r_D );
    Py_DECREF( var_r_D );
    var_r_D = NULL;

    CHECK_OBJECT( (PyObject *)var_r_G );
    Py_DECREF( var_r_G );
    var_r_G = NULL;

    CHECK_OBJECT( (PyObject *)var_mu );
    Py_DECREF( var_mu );
    var_mu = NULL;

    CHECK_OBJECT( (PyObject *)var_Dinv );
    Py_DECREF( var_Dinv );
    var_Dinv = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_solve );
    var_solve = NULL;

    CHECK_OBJECT( (PyObject *)var_n_corrections );
    Py_DECREF( var_n_corrections );
    var_n_corrections = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

    CHECK_OBJECT( (PyObject *)var_d_x );
    Py_DECREF( var_d_x );
    var_d_x = NULL;

    CHECK_OBJECT( (PyObject *)var_d_z );
    Py_DECREF( var_d_z );
    var_d_z = NULL;

    CHECK_OBJECT( (PyObject *)var_d_tau );
    Py_DECREF( var_d_tau );
    var_d_tau = NULL;

    CHECK_OBJECT( (PyObject *)var_d_kappa );
    Py_DECREF( var_d_kappa );
    var_d_kappa = NULL;

    Py_XDECREF( var_rhatp );
    var_rhatp = NULL;

    Py_XDECREF( var_rhatd );
    var_rhatd = NULL;

    Py_XDECREF( var_rhatg );
    var_rhatg = NULL;

    Py_XDECREF( var_rhatxs );
    var_rhatxs = NULL;

    Py_XDECREF( var_rhattk );
    var_rhattk = NULL;

    Py_XDECREF( var_solved );
    var_solved = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_d_y );
    var_d_y = NULL;

    Py_XDECREF( var_beta1 );
    var_beta1 = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    Py_XDECREF( par_gamma );
    par_gamma = NULL;

    CHECK_OBJECT( (PyObject *)par_eta );
    Py_DECREF( par_eta );
    par_eta = NULL;

    Py_XDECREF( par_sparse );
    par_sparse = NULL;

    Py_XDECREF( par_lstsq );
    par_lstsq = NULL;

    Py_XDECREF( par_sym_pos );
    par_sym_pos = NULL;

    Py_XDECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    CHECK_OBJECT( (PyObject *)par_ip );
    Py_DECREF( par_ip );
    par_ip = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    Py_XDECREF( var_n_x );
    var_n_x = NULL;

    Py_XDECREF( var_r_P );
    var_r_P = NULL;

    Py_XDECREF( var_r_D );
    var_r_D = NULL;

    Py_XDECREF( var_r_G );
    var_r_G = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    Py_XDECREF( var_Dinv );
    var_Dinv = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_solve );
    var_solve = NULL;

    Py_XDECREF( var_n_corrections );
    var_n_corrections = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_d_x );
    var_d_x = NULL;

    Py_XDECREF( var_d_z );
    var_d_z = NULL;

    Py_XDECREF( var_d_tau );
    var_d_tau = NULL;

    Py_XDECREF( var_d_kappa );
    var_d_kappa = NULL;

    Py_XDECREF( var_rhatp );
    var_rhatp = NULL;

    Py_XDECREF( var_rhatd );
    var_rhatd = NULL;

    Py_XDECREF( var_rhatg );
    var_rhatg = NULL;

    Py_XDECREF( var_rhatxs );
    var_rhatxs = NULL;

    Py_XDECREF( var_rhattk );
    var_rhattk = NULL;

    Py_XDECREF( var_solved );
    var_solved = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_u );
    var_u = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_d_y );
    var_d_y = NULL;

    Py_XDECREF( var_beta1 );
    var_beta1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_2__get_delta );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_3__sym_solve( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_Dinv = python_pars[ 0 ];
    PyObject *par_A = python_pars[ 1 ];
    PyObject *par_r1 = python_pars[ 2 ];
    PyObject *par_r2 = python_pars[ 3 ];
    PyObject *par_solve = python_pars[ 4 ];
    PyObject *var_r = NULL;
    PyObject *var_v = NULL;
    PyObject *var_u = NULL;
    struct Nuitka_FrameObject *frame_eaeb57f80163bed14356ad4768f33166;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaeb57f80163bed14356ad4768f33166 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eaeb57f80163bed14356ad4768f33166, codeobj_eaeb57f80163bed14356ad4768f33166, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eaeb57f80163bed14356ad4768f33166 = cache_frame_eaeb57f80163bed14356ad4768f33166;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eaeb57f80163bed14356ad4768f33166 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eaeb57f80163bed14356ad4768f33166 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_r2 );
        tmp_left_name_1 = par_r2;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_Dinv );
        tmp_left_name_2 = par_Dinv;
        CHECK_OBJECT( par_r1 );
        tmp_right_name_2 = par_r1;
        tmp_args_element_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 361;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_eaeb57f80163bed14356ad4768f33166->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 361;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_solve );
        tmp_called_name_2 = par_solve;
        CHECK_OBJECT( var_r );
        tmp_args_element_name_2 = var_r;
        frame_eaeb57f80163bed14356ad4768f33166->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 362;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_Dinv );
        tmp_left_name_3 = par_Dinv;
        CHECK_OBJECT( par_A );
        tmp_source_name_2 = par_A;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_args_element_name_3 = var_v;
        frame_eaeb57f80163bed14356ad4768f33166->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_r1 );
        tmp_right_name_4 = par_r1;
        tmp_right_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_u == NULL );
        var_u = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eaeb57f80163bed14356ad4768f33166 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eaeb57f80163bed14356ad4768f33166 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eaeb57f80163bed14356ad4768f33166, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eaeb57f80163bed14356ad4768f33166->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eaeb57f80163bed14356ad4768f33166, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eaeb57f80163bed14356ad4768f33166,
        type_description_1,
        par_Dinv,
        par_A,
        par_r1,
        par_r2,
        par_solve,
        var_r,
        var_v,
        var_u
    );


    // Release cached frame.
    if ( frame_eaeb57f80163bed14356ad4768f33166 == cache_frame_eaeb57f80163bed14356ad4768f33166 )
    {
        Py_DECREF( frame_eaeb57f80163bed14356ad4768f33166 );
    }
    cache_frame_eaeb57f80163bed14356ad4768f33166 = NULL;

    assertFrameObject( frame_eaeb57f80163bed14356ad4768f33166 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_u );
        tmp_tuple_element_1 = var_u;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_v );
        tmp_tuple_element_1 = var_v;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_3__sym_solve );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Dinv );
    Py_DECREF( par_Dinv );
    par_Dinv = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_r1 );
    Py_DECREF( par_r1 );
    par_r1 = NULL;

    CHECK_OBJECT( (PyObject *)par_r2 );
    Py_DECREF( par_r2 );
    par_r2 = NULL;

    CHECK_OBJECT( (PyObject *)par_solve );
    Py_DECREF( par_solve );
    par_solve = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_u );
    Py_DECREF( var_u );
    var_u = NULL;

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

    CHECK_OBJECT( (PyObject *)par_Dinv );
    Py_DECREF( par_Dinv );
    par_Dinv = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_r1 );
    Py_DECREF( par_r1 );
    par_r1 = NULL;

    CHECK_OBJECT( (PyObject *)par_r2 );
    Py_DECREF( par_r2 );
    par_r2 = NULL;

    CHECK_OBJECT( (PyObject *)par_solve );
    Py_DECREF( par_solve );
    par_solve = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_3__sym_solve );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_4__get_step( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_d_x = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_d_z = python_pars[ 3 ];
    PyObject *par_tau = python_pars[ 4 ];
    PyObject *par_d_tau = python_pars[ 5 ];
    PyObject *par_kappa = python_pars[ 6 ];
    PyObject *par_d_kappa = python_pars[ 7 ];
    PyObject *par_alpha0 = python_pars[ 8 ];
    PyObject *var_i_x = NULL;
    PyObject *var_i_z = NULL;
    PyObject *var_alpha_x = NULL;
    PyObject *var_alpha_tau = NULL;
    PyObject *var_alpha_z = NULL;
    PyObject *var_alpha_kappa = NULL;
    PyObject *var_alpha = NULL;
    struct Nuitka_FrameObject *frame_cdfd33cc7792c8497343f916f8559535;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cdfd33cc7792c8497343f916f8559535 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdfd33cc7792c8497343f916f8559535, codeobj_cdfd33cc7792c8497343f916f8559535, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cdfd33cc7792c8497343f916f8559535 = cache_frame_cdfd33cc7792c8497343f916f8559535;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdfd33cc7792c8497343f916f8559535 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdfd33cc7792c8497343f916f8559535 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_d_x );
        tmp_compexpr_left_1 = par_d_x;
        tmp_compexpr_right_1 = const_int_0;
        tmp_assign_source_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_x == NULL );
        var_i_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_d_z );
        tmp_compexpr_left_2 = par_d_z;
        tmp_compexpr_right_2 = const_int_0;
        tmp_assign_source_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_i_z == NULL );
        var_i_z = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_i_x );
        tmp_args_element_name_1 = var_i_x;
        frame_cdfd33cc7792c8497343f916f8559535->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_alpha0 );
        tmp_left_name_1 = par_alpha0;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_min );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        CHECK_OBJECT( var_i_x );
        tmp_subscript_name_1 = var_i_x;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d_x );
        tmp_subscribed_name_2 = par_d_x;
        CHECK_OBJECT( var_i_x );
        tmp_subscript_name_2 = var_i_x;
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdfd33cc7792c8497343f916f8559535->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = const_int_pos_1;
        Py_INCREF( tmp_assign_source_3 );
        condexpr_end_1:;
        assert( var_alpha_x == NULL );
        var_alpha_x = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( par_d_tau );
        tmp_compexpr_left_3 = par_d_tau;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( par_alpha0 );
        tmp_left_name_4 = par_alpha0;
        CHECK_OBJECT( par_tau );
        tmp_right_name_3 = par_tau;
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d_tau );
        tmp_operand_name_2 = par_d_tau;
        tmp_right_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 387;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_4 = const_int_pos_1;
        Py_INCREF( tmp_assign_source_4 );
        condexpr_end_2:;
        assert( var_alpha_tau == NULL );
        var_alpha_tau = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_i_z );
        tmp_args_element_name_3 = var_i_z;
        frame_cdfd33cc7792c8497343f916f8559535->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_any, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( par_alpha0 );
        tmp_left_name_5 = par_alpha0;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_subscribed_name_3 = par_z;
        CHECK_OBJECT( var_i_z );
        tmp_subscript_name_3 = var_i_z;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d_z );
        tmp_subscribed_name_4 = par_d_z;
        CHECK_OBJECT( var_i_z );
        tmp_subscript_name_4 = var_i_z;
        tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_cdfd33cc7792c8497343f916f8559535->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_5 = const_int_pos_1;
        Py_INCREF( tmp_assign_source_5 );
        condexpr_end_3:;
        assert( var_alpha_z == NULL );
        var_alpha_z = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_operand_name_4;
        CHECK_OBJECT( par_d_kappa );
        tmp_compexpr_left_4 = par_d_kappa;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( par_alpha0 );
        tmp_left_name_8 = par_alpha0;
        CHECK_OBJECT( par_kappa );
        tmp_right_name_7 = par_kappa;
        tmp_left_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_7 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_d_kappa );
        tmp_operand_name_4 = par_d_kappa;
        tmp_right_name_8 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_4 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_6 = const_int_pos_1;
        Py_INCREF( tmp_assign_source_6 );
        condexpr_end_4:;
        assert( var_alpha_kappa == NULL );
        var_alpha_kappa = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 390;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        tmp_list_element_1 = const_int_pos_1;
        tmp_args_element_name_5 = PyList_New( 5 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_5, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_alpha_x );
        tmp_list_element_1 = var_alpha_x;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_5, 1, tmp_list_element_1 );
        CHECK_OBJECT( var_alpha_tau );
        tmp_list_element_1 = var_alpha_tau;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_5, 2, tmp_list_element_1 );
        CHECK_OBJECT( var_alpha_z );
        tmp_list_element_1 = var_alpha_z;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_5, 3, tmp_list_element_1 );
        CHECK_OBJECT( var_alpha_kappa );
        tmp_list_element_1 = var_alpha_kappa;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_5, 4, tmp_list_element_1 );
        frame_cdfd33cc7792c8497343f916f8559535->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_min, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_alpha == NULL );
        var_alpha = tmp_assign_source_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdfd33cc7792c8497343f916f8559535 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdfd33cc7792c8497343f916f8559535 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdfd33cc7792c8497343f916f8559535, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdfd33cc7792c8497343f916f8559535->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdfd33cc7792c8497343f916f8559535, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdfd33cc7792c8497343f916f8559535,
        type_description_1,
        par_x,
        par_d_x,
        par_z,
        par_d_z,
        par_tau,
        par_d_tau,
        par_kappa,
        par_d_kappa,
        par_alpha0,
        var_i_x,
        var_i_z,
        var_alpha_x,
        var_alpha_tau,
        var_alpha_z,
        var_alpha_kappa,
        var_alpha
    );


    // Release cached frame.
    if ( frame_cdfd33cc7792c8497343f916f8559535 == cache_frame_cdfd33cc7792c8497343f916f8559535 )
    {
        Py_DECREF( frame_cdfd33cc7792c8497343f916f8559535 );
    }
    cache_frame_cdfd33cc7792c8497343f916f8559535 = NULL;

    assertFrameObject( frame_cdfd33cc7792c8497343f916f8559535 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_alpha );
    tmp_return_value = var_alpha;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_4__get_step );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_d_x );
    Py_DECREF( par_d_x );
    par_d_x = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d_z );
    Py_DECREF( par_d_z );
    par_d_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_d_tau );
    Py_DECREF( par_d_tau );
    par_d_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_d_kappa );
    Py_DECREF( par_d_kappa );
    par_d_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    CHECK_OBJECT( (PyObject *)var_i_x );
    Py_DECREF( var_i_x );
    var_i_x = NULL;

    CHECK_OBJECT( (PyObject *)var_i_z );
    Py_DECREF( var_i_z );
    var_i_z = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha_x );
    Py_DECREF( var_alpha_x );
    var_alpha_x = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha_tau );
    Py_DECREF( var_alpha_tau );
    var_alpha_tau = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha_z );
    Py_DECREF( var_alpha_z );
    var_alpha_z = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha_kappa );
    Py_DECREF( var_alpha_kappa );
    var_alpha_kappa = NULL;

    CHECK_OBJECT( (PyObject *)var_alpha );
    Py_DECREF( var_alpha );
    var_alpha = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_d_x );
    Py_DECREF( par_d_x );
    par_d_x = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d_z );
    Py_DECREF( par_d_z );
    par_d_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_d_tau );
    Py_DECREF( par_d_tau );
    par_d_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_d_kappa );
    Py_DECREF( par_d_kappa );
    par_d_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    Py_XDECREF( var_i_x );
    var_i_x = NULL;

    Py_XDECREF( var_i_z );
    var_i_z = NULL;

    Py_XDECREF( var_alpha_x );
    var_alpha_x = NULL;

    Py_XDECREF( var_alpha_tau );
    var_alpha_tau = NULL;

    Py_XDECREF( var_alpha_z );
    var_alpha_z = NULL;

    Py_XDECREF( var_alpha_kappa );
    var_alpha_kappa = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_4__get_step );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_5__get_message( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_status = python_pars[ 0 ];
    PyObject *var_messages = NULL;
    struct Nuitka_FrameObject *frame_037dd71a358093e759e485fe1d0151f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_037dd71a358093e759e485fe1d0151f5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_47976af26f536b004407e4d2f35897ff_list );
        assert( var_messages == NULL );
        var_messages = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_037dd71a358093e759e485fe1d0151f5, codeobj_037dd71a358093e759e485fe1d0151f5, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *) );
    frame_037dd71a358093e759e485fe1d0151f5 = cache_frame_037dd71a358093e759e485fe1d0151f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_037dd71a358093e759e485fe1d0151f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_037dd71a358093e759e485fe1d0151f5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_messages );
        tmp_subscribed_name_1 = var_messages;
        CHECK_OBJECT( par_status );
        tmp_subscript_name_1 = par_status;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_037dd71a358093e759e485fe1d0151f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_037dd71a358093e759e485fe1d0151f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_037dd71a358093e759e485fe1d0151f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_037dd71a358093e759e485fe1d0151f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_037dd71a358093e759e485fe1d0151f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_037dd71a358093e759e485fe1d0151f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_037dd71a358093e759e485fe1d0151f5,
        type_description_1,
        par_status,
        var_messages
    );


    // Release cached frame.
    if ( frame_037dd71a358093e759e485fe1d0151f5 == cache_frame_037dd71a358093e759e485fe1d0151f5 )
    {
        Py_DECREF( frame_037dd71a358093e759e485fe1d0151f5 );
    }
    cache_frame_037dd71a358093e759e485fe1d0151f5 = NULL;

    assertFrameObject( frame_037dd71a358093e759e485fe1d0151f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_5__get_message );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)var_messages );
    Py_DECREF( var_messages );
    var_messages = NULL;

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

    CHECK_OBJECT( (PyObject *)par_status );
    Py_DECREF( par_status );
    par_status = NULL;

    CHECK_OBJECT( (PyObject *)var_messages );
    Py_DECREF( var_messages );
    var_messages = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_5__get_message );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_6__do_step( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_tau = python_pars[ 3 ];
    PyObject *par_kappa = python_pars[ 4 ];
    PyObject *par_d_x = python_pars[ 5 ];
    PyObject *par_d_y = python_pars[ 6 ];
    PyObject *par_d_z = python_pars[ 7 ];
    PyObject *par_d_tau = python_pars[ 8 ];
    PyObject *par_d_kappa = python_pars[ 9 ];
    PyObject *par_alpha = python_pars[ 10 ];
    struct Nuitka_FrameObject *frame_89b2468ae038758a1f84deb0db9eef47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89b2468ae038758a1f84deb0db9eef47 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89b2468ae038758a1f84deb0db9eef47, codeobj_89b2468ae038758a1f84deb0db9eef47, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_89b2468ae038758a1f84deb0db9eef47 = cache_frame_89b2468ae038758a1f84deb0db9eef47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89b2468ae038758a1f84deb0db9eef47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89b2468ae038758a1f84deb0db9eef47 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        CHECK_OBJECT( par_alpha );
        tmp_left_name_2 = par_alpha;
        CHECK_OBJECT( par_d_x );
        tmp_right_name_2 = par_d_x;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( par_tau );
        tmp_left_name_3 = par_tau;
        CHECK_OBJECT( par_alpha );
        tmp_left_name_4 = par_alpha;
        CHECK_OBJECT( par_d_tau );
        tmp_right_name_4 = par_d_tau;
        tmp_right_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_tau;
            assert( old != NULL );
            par_tau = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_z );
        tmp_left_name_5 = par_z;
        CHECK_OBJECT( par_alpha );
        tmp_left_name_6 = par_alpha;
        CHECK_OBJECT( par_d_z );
        tmp_right_name_6 = par_d_z;
        tmp_right_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 445;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( par_kappa );
        tmp_left_name_7 = par_kappa;
        CHECK_OBJECT( par_alpha );
        tmp_left_name_8 = par_alpha;
        CHECK_OBJECT( par_d_kappa );
        tmp_right_name_8 = par_d_kappa;
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 446;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_kappa;
            assert( old != NULL );
            par_kappa = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( par_y );
        tmp_left_name_9 = par_y;
        CHECK_OBJECT( par_alpha );
        tmp_left_name_10 = par_alpha;
        CHECK_OBJECT( par_d_y );
        tmp_right_name_10 = par_d_y;
        tmp_right_name_9 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 447;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89b2468ae038758a1f84deb0db9eef47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89b2468ae038758a1f84deb0db9eef47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89b2468ae038758a1f84deb0db9eef47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89b2468ae038758a1f84deb0db9eef47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89b2468ae038758a1f84deb0db9eef47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89b2468ae038758a1f84deb0db9eef47,
        type_description_1,
        par_x,
        par_y,
        par_z,
        par_tau,
        par_kappa,
        par_d_x,
        par_d_y,
        par_d_z,
        par_d_tau,
        par_d_kappa,
        par_alpha
    );


    // Release cached frame.
    if ( frame_89b2468ae038758a1f84deb0db9eef47 == cache_frame_89b2468ae038758a1f84deb0db9eef47 )
    {
        Py_DECREF( frame_89b2468ae038758a1f84deb0db9eef47 );
    }
    cache_frame_89b2468ae038758a1f84deb0db9eef47 = NULL;

    assertFrameObject( frame_89b2468ae038758a1f84deb0db9eef47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_x );
        tmp_tuple_element_1 = par_x;
        tmp_return_value = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_y );
        tmp_tuple_element_1 = par_y;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_z );
        tmp_tuple_element_1 = par_z;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_tau );
        tmp_tuple_element_1 = par_tau;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kappa );
        tmp_tuple_element_1 = par_kappa;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_6__do_step );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_d_x );
    Py_DECREF( par_d_x );
    par_d_x = NULL;

    CHECK_OBJECT( (PyObject *)par_d_y );
    Py_DECREF( par_d_y );
    par_d_y = NULL;

    CHECK_OBJECT( (PyObject *)par_d_z );
    Py_DECREF( par_d_z );
    par_d_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d_tau );
    Py_DECREF( par_d_tau );
    par_d_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_d_kappa );
    Py_DECREF( par_d_kappa );
    par_d_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_d_x );
    Py_DECREF( par_d_x );
    par_d_x = NULL;

    CHECK_OBJECT( (PyObject *)par_d_y );
    Py_DECREF( par_d_y );
    par_d_y = NULL;

    CHECK_OBJECT( (PyObject *)par_d_z );
    Py_DECREF( par_d_z );
    par_d_z = NULL;

    CHECK_OBJECT( (PyObject *)par_d_tau );
    Py_DECREF( par_d_tau );
    par_d_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_d_kappa );
    Py_DECREF( par_d_kappa );
    par_d_kappa = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_6__do_step );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_7__get_blind_start( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_shape = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_x0 = NULL;
    PyObject *var_y0 = NULL;
    PyObject *var_z0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b751d87af4bc6bf6e166a586722963ab;
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
    static struct Nuitka_FrameObject *cache_frame_b751d87af4bc6bf6e166a586722963ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b751d87af4bc6bf6e166a586722963ab, codeobj_b751d87af4bc6bf6e166a586722963ab, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b751d87af4bc6bf6e166a586722963ab = cache_frame_b751d87af4bc6bf6e166a586722963ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b751d87af4bc6bf6e166a586722963ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b751d87af4bc6bf6e166a586722963ab ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_shape );
        tmp_iter_arg_1 = par_shape;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 463;
            type_description_1 = "ooooooNN";
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


            type_description_1 = "ooooooNN";
            exception_lineno = 463;
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


            type_description_1 = "ooooooNN";
            exception_lineno = 463;
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

                    type_description_1 = "ooooooNN";
                    exception_lineno = 463;
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

            type_description_1 = "ooooooNN";
            exception_lineno = 463;
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
        assert( var_m == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_m = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_n == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_n = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 464;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_1 = var_n;
        frame_b751d87af4bc6bf6e166a586722963ab->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }
        assert( var_x0 == NULL );
        var_x0 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 465;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_m );
        tmp_args_element_name_2 = var_m;
        frame_b751d87af4bc6bf6e166a586722963ab->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 465;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }
        assert( var_y0 == NULL );
        var_y0 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 466;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_n );
        tmp_args_element_name_3 = var_n;
        frame_b751d87af4bc6bf6e166a586722963ab->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_ones, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooooNN";
            goto frame_exception_exit_1;
        }
        assert( var_z0 == NULL );
        var_z0 = tmp_assign_source_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b751d87af4bc6bf6e166a586722963ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b751d87af4bc6bf6e166a586722963ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b751d87af4bc6bf6e166a586722963ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b751d87af4bc6bf6e166a586722963ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b751d87af4bc6bf6e166a586722963ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b751d87af4bc6bf6e166a586722963ab,
        type_description_1,
        par_shape,
        var_m,
        var_n,
        var_x0,
        var_y0,
        var_z0,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_b751d87af4bc6bf6e166a586722963ab == cache_frame_b751d87af4bc6bf6e166a586722963ab )
    {
        Py_DECREF( frame_b751d87af4bc6bf6e166a586722963ab );
    }
    cache_frame_b751d87af4bc6bf6e166a586722963ab = NULL;

    assertFrameObject( frame_b751d87af4bc6bf6e166a586722963ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_x0 );
        tmp_tuple_element_1 = var_x0;
        tmp_return_value = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_y0 );
        tmp_tuple_element_1 = var_y0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_z0 );
        tmp_tuple_element_1 = var_z0;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_7__get_blind_start );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_x0 );
    Py_DECREF( var_x0 );
    var_x0 = NULL;

    CHECK_OBJECT( (PyObject *)var_y0 );
    Py_DECREF( var_y0 );
    var_y0 = NULL;

    CHECK_OBJECT( (PyObject *)var_z0 );
    Py_DECREF( var_z0 );
    var_z0 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_x0 );
    var_x0 = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_7__get_blind_start );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_A = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_b = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_c = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_c0 = python_pars[ 3 ];
    PyObject *par_x = python_pars[ 4 ];
    PyObject *par_y = python_pars[ 5 ];
    PyObject *par_z = python_pars[ 6 ];
    PyObject *par_tau = python_pars[ 7 ];
    PyObject *par_kappa = python_pars[ 8 ];
    PyObject *var_x0 = NULL;
    PyObject *var_y0 = NULL;
    PyObject *var_z0 = NULL;
    PyObject *var_tau0 = NULL;
    PyObject *var_kappa0 = NULL;
    PyObject *var_r_p = NULL;
    PyObject *var_r_d = NULL;
    PyObject *var_r_g = NULL;
    PyObject *var_mu = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_norm = NULL;
    PyObject *var_r_p0 = NULL;
    PyObject *var_r_d0 = NULL;
    PyObject *var_r_g0 = NULL;
    PyObject *var_mu_0 = NULL;
    PyObject *var_rho_A = NULL;
    PyObject *var_rho_p = NULL;
    PyObject *var_rho_d = NULL;
    PyObject *var_rho_g = NULL;
    PyObject *var_rho_mu = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a206cf138519e4e42a2d309b6cff675d;
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
    static struct Nuitka_FrameObject *cache_frame_a206cf138519e4e42a2d309b6cff675d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a206cf138519e4e42a2d309b6cff675d, codeobj_a206cf138519e4e42a2d309b6cff675d, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a206cf138519e4e42a2d309b6cff675d = cache_frame_a206cf138519e4e42a2d309b6cff675d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a206cf138519e4e42a2d309b6cff675d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a206cf138519e4e42a2d309b6cff675d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_blind_start );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_blind_start );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_blind_start" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 487;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_A ) );
        tmp_source_name_1 = PyCell_GET( par_A );
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 487;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 487;
            type_description_1 = "cccoooooooooooooooooooooooooo";
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


            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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


            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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


            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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


            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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


            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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

                    type_description_1 = "cccoooooooooooooooooooooooooo";
                    exception_lineno = 487;
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

            type_description_1 = "cccoooooooooooooooooooooooooo";
            exception_lineno = 487;
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
        assert( var_x0 == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_x0 = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_y0 == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_y0 = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_z0 == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_z0 = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
        assert( var_tau0 == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_tau0 = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_5;
        assert( var_kappa0 == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_kappa0 = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] = par_A;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] = par_b;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_12)->m_closure[1] );


        assert( var_r_p == NULL );
        var_r_p = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] = par_A;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] = par_c;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_13)->m_closure[1] );


        assert( var_r_d == NULL );
        var_r_d = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] = par_b;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] = par_c;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_14)->m_closure[1] );


        assert( var_r_g == NULL );
        var_r_g = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu(  );



        assert( var_mu == NULL );
        var_mu = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( PyCell_GET( par_c ) );
        tmp_source_name_2 = PyCell_GET( par_c );
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dot );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_left_name_2 = par_x;
        CHECK_OBJECT( par_tau );
        tmp_right_name_1 = par_tau;
        tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 503;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 503;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c0 );
        tmp_right_name_2 = par_c0;
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 503;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_obj == NULL );
        var_obj = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm(  );



        assert( var_norm == NULL );
        var_norm = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_r_p );
        tmp_called_name_3 = var_r_p;
        CHECK_OBJECT( var_x0 );
        tmp_args_element_name_3 = var_x0;
        CHECK_OBJECT( var_tau0 );
        tmp_args_element_name_4 = var_tau0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 509;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 509;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_p0 == NULL );
        var_r_p0 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_r_d );
        tmp_called_name_4 = var_r_d;
        CHECK_OBJECT( var_y0 );
        tmp_args_element_name_5 = var_y0;
        CHECK_OBJECT( var_z0 );
        tmp_args_element_name_6 = var_z0;
        CHECK_OBJECT( var_tau0 );
        tmp_args_element_name_7 = var_tau0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 510;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 510;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_d0 == NULL );
        var_r_d0 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT( var_r_g );
        tmp_called_name_5 = var_r_g;
        CHECK_OBJECT( var_x0 );
        tmp_args_element_name_8 = var_x0;
        CHECK_OBJECT( var_y0 );
        tmp_args_element_name_9 = var_y0;
        CHECK_OBJECT( var_kappa0 );
        tmp_args_element_name_10 = var_kappa0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 511;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 511;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_r_g0 == NULL );
        var_r_g0 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( var_mu );
        tmp_called_name_6 = var_mu;
        CHECK_OBJECT( var_x0 );
        tmp_args_element_name_11 = var_x0;
        CHECK_OBJECT( var_tau0 );
        tmp_args_element_name_12 = var_tau0;
        CHECK_OBJECT( var_z0 );
        tmp_args_element_name_13 = var_z0;
        CHECK_OBJECT( var_kappa0 );
        tmp_args_element_name_14 = var_kappa0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 512;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 512;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mu_0 == NULL );
        var_mu_0 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_19;
        CHECK_OBJECT( var_norm );
        tmp_called_name_7 = var_norm;
        CHECK_OBJECT( PyCell_GET( par_c ) );
        tmp_source_name_3 = PyCell_GET( par_c );
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_T );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_16 = par_x;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_b ) );
        tmp_source_name_4 = PyCell_GET( par_b );
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_args_element_name_17 = par_y;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_right_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tau );
        tmp_left_name_5 = par_tau;
        CHECK_OBJECT( var_norm );
        tmp_called_name_8 = var_norm;
        CHECK_OBJECT( PyCell_GET( par_b ) );
        tmp_source_name_5 = PyCell_GET( par_b );
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_T );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_args_element_name_19 = par_y;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_args_element_name_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 513;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rho_A == NULL );
        var_rho_A = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_name_12;
        PyObject *tmp_args_element_name_25;
        CHECK_OBJECT( var_norm );
        tmp_called_name_9 = var_norm;
        CHECK_OBJECT( var_r_p );
        tmp_called_name_10 = var_r_p;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_21 = par_x;
        CHECK_OBJECT( par_tau );
        tmp_args_element_name_22 = par_tau;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
            tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        if ( tmp_args_element_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_left_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_11 != NULL );
        tmp_args_element_name_23 = const_int_pos_1;
        CHECK_OBJECT( var_norm );
        tmp_called_name_12 = var_norm;
        CHECK_OBJECT( var_r_p0 );
        tmp_args_element_name_25 = var_r_p0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = { tmp_args_element_name_25 };
            tmp_args_element_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        if ( tmp_args_element_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 514;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 514;
        {
            PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_args_element_name_24 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 514;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 514;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rho_p == NULL );
        var_rho_p = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_7;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT( var_norm );
        tmp_called_name_13 = var_norm;
        CHECK_OBJECT( var_r_d );
        tmp_called_name_14 = var_r_d;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_27 = par_y;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_28 = par_z;
        CHECK_OBJECT( par_tau );
        tmp_args_element_name_29 = par_tau;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
            tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
        }

        if ( tmp_args_element_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = { tmp_args_element_name_26 };
            tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        Py_DECREF( tmp_args_element_name_26 );
        if ( tmp_left_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_15 != NULL );
        tmp_args_element_name_30 = const_int_pos_1;
        CHECK_OBJECT( var_norm );
        tmp_called_name_16 = var_norm;
        CHECK_OBJECT( var_r_d0 );
        tmp_args_element_name_32 = var_r_d0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = { tmp_args_element_name_32 };
            tmp_args_element_name_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_args_element_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 515;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = { tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_31 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_7 );

            exception_lineno = 515;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 515;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rho_d == NULL );
        var_rho_d = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_8;
        PyObject *tmp_called_name_17;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_20;
        PyObject *tmp_args_element_name_39;
        CHECK_OBJECT( var_norm );
        tmp_called_name_17 = var_norm;
        CHECK_OBJECT( var_r_g );
        tmp_called_name_18 = var_r_g;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_34 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_35 = par_y;
        CHECK_OBJECT( par_kappa );
        tmp_args_element_name_36 = par_kappa;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36 };
            tmp_args_element_name_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
        }

        if ( tmp_args_element_name_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_33 };
            tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
        }

        Py_DECREF( tmp_args_element_name_33 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_19 != NULL );
        tmp_args_element_name_37 = const_int_pos_1;
        CHECK_OBJECT( var_norm );
        tmp_called_name_20 = var_norm;
        CHECK_OBJECT( var_r_g0 );
        tmp_args_element_name_39 = var_r_g0;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_39 };
            tmp_args_element_name_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
        }

        if ( tmp_args_element_name_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 516;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
            tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
        }

        Py_DECREF( tmp_args_element_name_38 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 516;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 516;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rho_g == NULL );
        var_rho_g = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_9;
        PyObject *tmp_called_name_21;
        PyObject *tmp_args_element_name_40;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( var_mu );
        tmp_called_name_21 = var_mu;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_40 = par_x;
        CHECK_OBJECT( par_tau );
        tmp_args_element_name_41 = par_tau;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_42 = par_z;
        CHECK_OBJECT( par_kappa );
        tmp_args_element_name_43 = par_kappa;
        frame_a206cf138519e4e42a2d309b6cff675d->m_frame.f_lineno = 517;
        {
            PyObject *call_args[] = { tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42, tmp_args_element_name_43 };
            tmp_left_name_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_21, call_args );
        }

        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_mu_0 );
        tmp_right_name_9 = var_mu_0;
        tmp_assign_source_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "cccoooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rho_mu == NULL );
        var_rho_mu = tmp_assign_source_26;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a206cf138519e4e42a2d309b6cff675d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a206cf138519e4e42a2d309b6cff675d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a206cf138519e4e42a2d309b6cff675d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a206cf138519e4e42a2d309b6cff675d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a206cf138519e4e42a2d309b6cff675d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a206cf138519e4e42a2d309b6cff675d,
        type_description_1,
        par_A,
        par_b,
        par_c,
        par_c0,
        par_x,
        par_y,
        par_z,
        par_tau,
        par_kappa,
        var_x0,
        var_y0,
        var_z0,
        var_tau0,
        var_kappa0,
        var_r_p,
        var_r_d,
        var_r_g,
        var_mu,
        var_obj,
        var_norm,
        var_r_p0,
        var_r_d0,
        var_r_g0,
        var_mu_0,
        var_rho_A,
        var_rho_p,
        var_rho_d,
        var_rho_g,
        var_rho_mu
    );


    // Release cached frame.
    if ( frame_a206cf138519e4e42a2d309b6cff675d == cache_frame_a206cf138519e4e42a2d309b6cff675d )
    {
        Py_DECREF( frame_a206cf138519e4e42a2d309b6cff675d );
    }
    cache_frame_a206cf138519e4e42a2d309b6cff675d = NULL;

    assertFrameObject( frame_a206cf138519e4e42a2d309b6cff675d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_rho_p );
        tmp_tuple_element_1 = var_rho_p;
        tmp_return_value = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_rho_d );
        tmp_tuple_element_1 = var_rho_d;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_rho_A );
        tmp_tuple_element_1 = var_rho_A;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( var_rho_g );
        tmp_tuple_element_1 = var_rho_g;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
        CHECK_OBJECT( var_rho_mu );
        tmp_tuple_element_1 = var_rho_mu;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_1 );
        CHECK_OBJECT( var_obj );
        tmp_tuple_element_1 = var_obj;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    CHECK_OBJECT( (PyObject *)var_x0 );
    Py_DECREF( var_x0 );
    var_x0 = NULL;

    CHECK_OBJECT( (PyObject *)var_y0 );
    Py_DECREF( var_y0 );
    var_y0 = NULL;

    CHECK_OBJECT( (PyObject *)var_z0 );
    Py_DECREF( var_z0 );
    var_z0 = NULL;

    CHECK_OBJECT( (PyObject *)var_tau0 );
    Py_DECREF( var_tau0 );
    var_tau0 = NULL;

    CHECK_OBJECT( (PyObject *)var_kappa0 );
    Py_DECREF( var_kappa0 );
    var_kappa0 = NULL;

    CHECK_OBJECT( (PyObject *)var_r_p );
    Py_DECREF( var_r_p );
    var_r_p = NULL;

    CHECK_OBJECT( (PyObject *)var_r_d );
    Py_DECREF( var_r_d );
    var_r_d = NULL;

    CHECK_OBJECT( (PyObject *)var_r_g );
    Py_DECREF( var_r_g );
    var_r_g = NULL;

    CHECK_OBJECT( (PyObject *)var_mu );
    Py_DECREF( var_mu );
    var_mu = NULL;

    CHECK_OBJECT( (PyObject *)var_obj );
    Py_DECREF( var_obj );
    var_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_norm );
    Py_DECREF( var_norm );
    var_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_r_p0 );
    Py_DECREF( var_r_p0 );
    var_r_p0 = NULL;

    CHECK_OBJECT( (PyObject *)var_r_d0 );
    Py_DECREF( var_r_d0 );
    var_r_d0 = NULL;

    CHECK_OBJECT( (PyObject *)var_r_g0 );
    Py_DECREF( var_r_g0 );
    var_r_g0 = NULL;

    CHECK_OBJECT( (PyObject *)var_mu_0 );
    Py_DECREF( var_mu_0 );
    var_mu_0 = NULL;

    CHECK_OBJECT( (PyObject *)var_rho_A );
    Py_DECREF( var_rho_A );
    var_rho_A = NULL;

    CHECK_OBJECT( (PyObject *)var_rho_p );
    Py_DECREF( var_rho_p );
    var_rho_p = NULL;

    CHECK_OBJECT( (PyObject *)var_rho_d );
    Py_DECREF( var_rho_d );
    var_rho_d = NULL;

    CHECK_OBJECT( (PyObject *)var_rho_g );
    Py_DECREF( var_rho_g );
    var_rho_g = NULL;

    CHECK_OBJECT( (PyObject *)var_rho_mu );
    Py_DECREF( var_rho_mu );
    var_rho_mu = NULL;

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

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    Py_XDECREF( var_x0 );
    var_x0 = NULL;

    Py_XDECREF( var_y0 );
    var_y0 = NULL;

    Py_XDECREF( var_z0 );
    var_z0 = NULL;

    Py_XDECREF( var_tau0 );
    var_tau0 = NULL;

    Py_XDECREF( var_kappa0 );
    var_kappa0 = NULL;

    Py_XDECREF( var_r_p );
    var_r_p = NULL;

    Py_XDECREF( var_r_d );
    var_r_d = NULL;

    Py_XDECREF( var_r_g );
    var_r_g = NULL;

    Py_XDECREF( var_mu );
    var_mu = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_r_p0 );
    var_r_p0 = NULL;

    Py_XDECREF( var_r_d0 );
    var_r_d0 = NULL;

    Py_XDECREF( var_r_g0 );
    var_r_g0 = NULL;

    Py_XDECREF( var_mu_0 );
    var_mu_0 = NULL;

    Py_XDECREF( var_rho_A );
    var_rho_A = NULL;

    Py_XDECREF( var_rho_p );
    var_rho_p = NULL;

    Py_XDECREF( var_rho_d );
    var_rho_d = NULL;

    Py_XDECREF( var_rho_g );
    var_rho_g = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_tau = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e3d16fc5534cac9fe12c5c9a0b94bc3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3d16fc5534cac9fe12c5c9a0b94bc3b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3d16fc5534cac9fe12c5c9a0b94bc3b, codeobj_e3d16fc5534cac9fe12c5c9a0b94bc3b, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e3d16fc5534cac9fe12c5c9a0b94bc3b = cache_frame_e3d16fc5534cac9fe12c5c9a0b94bc3b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 491;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_tau );
        tmp_right_name_1 = par_tau;
        tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 491;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_e3d16fc5534cac9fe12c5c9a0b94bc3b->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 491;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 491;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3d16fc5534cac9fe12c5c9a0b94bc3b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3d16fc5534cac9fe12c5c9a0b94bc3b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3d16fc5534cac9fe12c5c9a0b94bc3b,
        type_description_1,
        par_x,
        par_tau,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b == cache_frame_e3d16fc5534cac9fe12c5c9a0b94bc3b )
    {
        Py_DECREF( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );
    }
    cache_frame_e3d16fc5534cac9fe12c5c9a0b94bc3b = NULL;

    assertFrameObject( frame_e3d16fc5534cac9fe12c5c9a0b94bc3b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_tau = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_725702b777715891450e1f2f3e78e9ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_725702b777715891450e1f2f3e78e9ae = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_725702b777715891450e1f2f3e78e9ae, codeobj_725702b777715891450e1f2f3e78e9ae, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_725702b777715891450e1f2f3e78e9ae = cache_frame_725702b777715891450e1f2f3e78e9ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_725702b777715891450e1f2f3e78e9ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_725702b777715891450e1f2f3e78e9ae ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_3;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_tau );
        tmp_right_name_1 = par_tau;
        tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "A" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_T );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_args_element_name_1 = par_y;
        frame_725702b777715891450e1f2f3e78e9ae->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_right_name_3 = par_z;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 494;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_725702b777715891450e1f2f3e78e9ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_725702b777715891450e1f2f3e78e9ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_725702b777715891450e1f2f3e78e9ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_725702b777715891450e1f2f3e78e9ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_725702b777715891450e1f2f3e78e9ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_725702b777715891450e1f2f3e78e9ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_725702b777715891450e1f2f3e78e9ae,
        type_description_1,
        par_y,
        par_z,
        par_tau,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_725702b777715891450e1f2f3e78e9ae == cache_frame_725702b777715891450e1f2f3e78e9ae )
    {
        Py_DECREF( frame_725702b777715891450e1f2f3e78e9ae );
    }
    cache_frame_725702b777715891450e1f2f3e78e9ae = NULL;

    assertFrameObject( frame_725702b777715891450e1f2f3e78e9ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_kappa = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_130d08ad62cc862166184645689c804a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_130d08ad62cc862166184645689c804a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_130d08ad62cc862166184645689c804a, codeobj_130d08ad62cc862166184645689c804a, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_130d08ad62cc862166184645689c804a = cache_frame_130d08ad62cc862166184645689c804a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_130d08ad62cc862166184645689c804a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_130d08ad62cc862166184645689c804a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_kappa );
        tmp_left_name_2 = par_kappa;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "c" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_130d08ad62cc862166184645689c804a->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "b" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_130d08ad62cc862166184645689c804a->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_130d08ad62cc862166184645689c804a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_130d08ad62cc862166184645689c804a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_130d08ad62cc862166184645689c804a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_130d08ad62cc862166184645689c804a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_130d08ad62cc862166184645689c804a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_130d08ad62cc862166184645689c804a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_130d08ad62cc862166184645689c804a,
        type_description_1,
        par_x,
        par_y,
        par_kappa,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_130d08ad62cc862166184645689c804a == cache_frame_130d08ad62cc862166184645689c804a )
    {
        Py_DECREF( frame_130d08ad62cc862166184645689c804a );
    }
    cache_frame_130d08ad62cc862166184645689c804a = NULL;

    assertFrameObject( frame_130d08ad62cc862166184645689c804a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_tau = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_kappa = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_0f795bb465d87c1003fe62fad1e5f479;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f795bb465d87c1003fe62fad1e5f479 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f795bb465d87c1003fe62fad1e5f479, codeobj_0f795bb465d87c1003fe62fad1e5f479, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f795bb465d87c1003fe62fad1e5f479 = cache_frame_0f795bb465d87c1003fe62fad1e5f479;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f795bb465d87c1003fe62fad1e5f479 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f795bb465d87c1003fe62fad1e5f479 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( par_x );
        tmp_called_instance_1 = par_x;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_0f795bb465d87c1003fe62fad1e5f479->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dot, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_left_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT( par_tau );
        tmp_args_element_name_2 = par_tau;
        CHECK_OBJECT( par_kappa );
        tmp_args_element_name_3 = par_kappa;
        frame_0f795bb465d87c1003fe62fad1e5f479->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        assert( !(tmp_right_name_2 == NULL) );
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 501;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f795bb465d87c1003fe62fad1e5f479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f795bb465d87c1003fe62fad1e5f479 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f795bb465d87c1003fe62fad1e5f479 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f795bb465d87c1003fe62fad1e5f479, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f795bb465d87c1003fe62fad1e5f479->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f795bb465d87c1003fe62fad1e5f479, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f795bb465d87c1003fe62fad1e5f479,
        type_description_1,
        par_x,
        par_tau,
        par_z,
        par_kappa
    );


    // Release cached frame.
    if ( frame_0f795bb465d87c1003fe62fad1e5f479 == cache_frame_0f795bb465d87c1003fe62fad1e5f479 )
    {
        Py_DECREF( frame_0f795bb465d87c1003fe62fad1e5f479 );
    }
    cache_frame_0f795bb465d87c1003fe62fad1e5f479 = NULL;

    assertFrameObject( frame_0f795bb465d87c1003fe62fad1e5f479 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_tau );
    Py_DECREF( par_tau );
    par_tau = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_kappa );
    Py_DECREF( par_kappa );
    par_kappa = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2, codeobj_b4e7bf2a684e2cb5f3f28c3294e3a1a2, module_scipy$optimize$_linprog_ip, sizeof(void *) );
    frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 = cache_frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_linalg );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_args_element_name_1 = par_a;
        frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_norm, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 == cache_frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 )
    {
        Py_DECREF( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );
    }
    cache_frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 = NULL;

    assertFrameObject( frame_b4e7bf2a684e2cb5f3f28c3294e3a1a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_9__display_iter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rho_p = python_pars[ 0 ];
    PyObject *par_rho_d = python_pars[ 1 ];
    PyObject *par_rho_g = python_pars[ 2 ];
    PyObject *par_alpha = python_pars[ 3 ];
    PyObject *par_rho_mu = python_pars[ 4 ];
    PyObject *par_obj = python_pars[ 5 ];
    PyObject *par_header = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_cf9d0d002fe8a6fa0a577d3053ef4776;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cf9d0d002fe8a6fa0a577d3053ef4776 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf9d0d002fe8a6fa0a577d3053ef4776, codeobj_cf9d0d002fe8a6fa0a577d3053ef4776, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cf9d0d002fe8a6fa0a577d3053ef4776 = cache_frame_cf9d0d002fe8a6fa0a577d3053ef4776;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf9d0d002fe8a6fa0a577d3053ef4776 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf9d0d002fe8a6fa0a577d3053ef4776 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_header );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_header );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 550;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_1 != NULL );
            frame_cf9d0d002fe8a6fa0a577d3053ef4776->m_frame.f_lineno = 551;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_cd83023d7690b2d0ef2aee92ff6f1e90_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 551;
                type_description_1 = "oooooooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_args_element_name_5;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_float_arg_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_float_arg_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_float_arg_6;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
        assert( tmp_called_name_2 != NULL );
        tmp_source_name_1 = const_str_digest_3b2656850c515aa0969118f5af02ed36;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
        assert( !(tmp_called_name_3 == NULL) );
        CHECK_OBJECT( par_rho_p );
        tmp_float_arg_1 = par_rho_p;
        tmp_args_element_name_2 = TO_FLOAT( tmp_float_arg_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 561;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho_d );
        tmp_float_arg_2 = par_rho_d;
        tmp_args_element_name_3 = TO_FLOAT( tmp_float_arg_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 562;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rho_g );
        tmp_float_arg_3 = par_rho_g;
        tmp_args_element_name_4 = TO_FLOAT( tmp_float_arg_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 563;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_alpha );
        tmp_isinstance_inst_1 = par_alpha;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_numbers );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numbers );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "numbers" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 564;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Number );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 564;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 564;
            type_description_1 = "oooooooN";
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
        CHECK_OBJECT( par_alpha );
        tmp_float_arg_4 = par_alpha;
        tmp_args_element_name_5 = TO_FLOAT( tmp_float_arg_4 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 564;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_alpha );
        tmp_args_element_name_5 = par_alpha;
        Py_INCREF( tmp_args_element_name_5 );
        condexpr_end_1:;
        CHECK_OBJECT( par_rho_mu );
        tmp_float_arg_5 = par_rho_mu;
        tmp_args_element_name_6 = TO_FLOAT( tmp_float_arg_5 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 565;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_obj );
        tmp_float_arg_6 = par_obj;
        tmp_args_element_name_7 = TO_FLOAT( tmp_float_arg_6 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            Py_DECREF( tmp_args_element_name_6 );

            exception_lineno = 566;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        frame_cf9d0d002fe8a6fa0a577d3053ef4776->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 560;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        frame_cf9d0d002fe8a6fa0a577d3053ef4776->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 560;
            type_description_1 = "oooooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf9d0d002fe8a6fa0a577d3053ef4776 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf9d0d002fe8a6fa0a577d3053ef4776 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf9d0d002fe8a6fa0a577d3053ef4776, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf9d0d002fe8a6fa0a577d3053ef4776->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf9d0d002fe8a6fa0a577d3053ef4776, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf9d0d002fe8a6fa0a577d3053ef4776,
        type_description_1,
        par_rho_p,
        par_rho_d,
        par_rho_g,
        par_alpha,
        par_rho_mu,
        par_obj,
        par_header,
        NULL
    );


    // Release cached frame.
    if ( frame_cf9d0d002fe8a6fa0a577d3053ef4776 == cache_frame_cf9d0d002fe8a6fa0a577d3053ef4776 )
    {
        Py_DECREF( frame_cf9d0d002fe8a6fa0a577d3053ef4776 );
    }
    cache_frame_cf9d0d002fe8a6fa0a577d3053ef4776 = NULL;

    assertFrameObject( frame_cf9d0d002fe8a6fa0a577d3053ef4776 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_9__display_iter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rho_p );
    Py_DECREF( par_rho_p );
    par_rho_p = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_d );
    Py_DECREF( par_rho_d );
    par_rho_d = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_g );
    Py_DECREF( par_rho_g );
    par_rho_g = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_mu );
    Py_DECREF( par_rho_mu );
    par_rho_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_header );
    Py_DECREF( par_header );
    par_header = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rho_p );
    Py_DECREF( par_rho_p );
    par_rho_p = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_d );
    Py_DECREF( par_rho_d );
    par_rho_d = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_g );
    Py_DECREF( par_rho_g );
    par_rho_g = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha );
    Py_DECREF( par_alpha );
    par_alpha = NULL;

    CHECK_OBJECT( (PyObject *)par_rho_mu );
    Py_DECREF( par_rho_mu );
    par_rho_mu = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_header );
    Py_DECREF( par_header );
    par_header = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_9__display_iter );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
    PyObject *par_c0 = python_pars[ 3 ];
    PyObject *par_alpha0 = python_pars[ 4 ];
    PyObject *par_beta = python_pars[ 5 ];
    PyObject *par_maxiter = python_pars[ 6 ];
    PyObject *par_disp = python_pars[ 7 ];
    PyObject *par_tol = python_pars[ 8 ];
    PyObject *par_sparse = python_pars[ 9 ];
    PyObject *par_lstsq = python_pars[ 10 ];
    PyObject *par_sym_pos = python_pars[ 11 ];
    PyObject *par_cholesky = python_pars[ 12 ];
    PyObject *par_pc = python_pars[ 13 ];
    PyObject *par_ip = python_pars[ 14 ];
    PyObject *par_permc_spec = python_pars[ 15 ];
    PyObject *par_callback = python_pars[ 16 ];
    PyObject *par__T_o = python_pars[ 17 ];
    PyObject *var_iteration = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_z = NULL;
    PyObject *var_tau = NULL;
    PyObject *var_kappa = NULL;
    PyObject *var_rho_p = NULL;
    PyObject *var_rho_d = NULL;
    PyObject *var_rho_A = NULL;
    PyObject *var_rho_g = NULL;
    PyObject *var_rho_mu = NULL;
    PyObject *var_obj = NULL;
    PyObject *var_go = NULL;
    PyObject *var_x_o = NULL;
    PyObject *var_fun = NULL;
    PyObject *var_slack = NULL;
    PyObject *var_con = NULL;
    PyObject *var__ = NULL;
    PyObject *var_res = NULL;
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_gamma = NULL;
    PyObject *var_eta = NULL;
    PyObject *var_d_x = NULL;
    PyObject *var_d_y = NULL;
    PyObject *var_d_z = NULL;
    PyObject *var_d_tau = NULL;
    PyObject *var_d_kappa = NULL;
    PyObject *var_alpha = NULL;
    PyObject *var_inf1 = NULL;
    PyObject *var_inf2 = NULL;
    PyObject *var_x_hat = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__element_6 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__element_5 = NULL;
    PyObject *tmp_tuple_unpack_3__element_6 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__element_5 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__element_4 = NULL;
    PyObject *tmp_tuple_unpack_5__element_5 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__element_5 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__element_5 = NULL;
    PyObject *tmp_tuple_unpack_7__element_6 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__element_5 = NULL;
    PyObject *tmp_tuple_unpack_8__element_6 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    struct Nuitka_FrameObject *frame_36201c1b1cab33e2e1968269b69e718e;
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
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_36201c1b1cab33e2e1968269b69e718e = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_iteration = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36201c1b1cab33e2e1968269b69e718e, codeobj_36201c1b1cab33e2e1968269b69e718e, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_36201c1b1cab33e2e1968269b69e718e = cache_frame_36201c1b1cab33e2e1968269b69e718e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36201c1b1cab33e2e1968269b69e718e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36201c1b1cab33e2e1968269b69e718e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_blind_start );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_blind_start );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_blind_start" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_A );
        tmp_source_name_1 = par_A;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 714;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
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
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_5 == NULL );
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 714;
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

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 714;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_x = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_y = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert( var_z == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_z = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
        assert( var_tau == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_tau = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_5 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;
        assert( var_kappa == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_kappa = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_13;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_pc );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_pc );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 717;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_ip );
        tmp_assign_source_13 = par_ip;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_13 = Py_False;
        condexpr_end_1:;
        {
            PyObject *old = par_ip;
            assert( old != NULL );
            par_ip = tmp_assign_source_13;
            Py_INCREF( par_ip );
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__indicators );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__indicators );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_indicators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 720;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_3 = par_b;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_4 = par_c;
        CHECK_OBJECT( par_c0 );
        tmp_args_element_name_5 = par_c0;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_6 = var_x;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_7 = var_y;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_8 = var_z;
        CHECK_OBJECT( var_tau );
        tmp_args_element_name_9 = var_tau;
        CHECK_OBJECT( var_kappa );
        tmp_args_element_name_10 = var_kappa;
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 720;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_2, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 720;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 720;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_6, 0, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_7, 1, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_8, 2, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_9, 3, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_4 == NULL );
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_10 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_10, 4, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_5 == NULL );
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_11 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_11, 5, 6 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_6 == NULL );
        tmp_tuple_unpack_2__element_6 = tmp_assign_source_20;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 720;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 720;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_6 );
    tmp_tuple_unpack_2__element_6 = NULL;

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
        assert( var_rho_p == NULL );
        Py_INCREF( tmp_assign_source_21 );
        var_rho_p = tmp_assign_source_21;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
        assert( var_rho_d == NULL );
        Py_INCREF( tmp_assign_source_22 );
        var_rho_d = tmp_assign_source_22;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_3;
        assert( var_rho_A == NULL );
        Py_INCREF( tmp_assign_source_23 );
        var_rho_A = tmp_assign_source_23;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_4;
        assert( var_rho_g == NULL );
        Py_INCREF( tmp_assign_source_24 );
        var_rho_g = tmp_assign_source_24;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_5 );
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_5;
        assert( var_rho_mu == NULL );
        Py_INCREF( tmp_assign_source_25 );
        var_rho_mu = tmp_assign_source_25;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_6 );
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_6;
        assert( var_obj == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_obj = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_6 );
    tmp_tuple_unpack_2__element_6 = NULL;

    {
        PyObject *tmp_assign_source_27;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var_rho_p );
        tmp_compexpr_left_1 = var_rho_p;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_1 = par_tol;
        tmp_or_left_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_or_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        Py_DECREF( tmp_or_left_value_1 );
        CHECK_OBJECT( var_rho_d );
        tmp_compexpr_left_2 = var_rho_d;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_or_left_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF( tmp_or_left_value_2 );
        CHECK_OBJECT( var_rho_A );
        tmp_compexpr_left_3 = var_rho_A;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_3 = par_tol;
        tmp_or_right_value_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_or_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_assign_source_27 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_27 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_go == NULL );
        var_go = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_disp );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_disp );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 724;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__display_iter );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__display_iter );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_display_iter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_rho_p );
            tmp_tuple_element_1 = var_rho_p;
            tmp_args_name_1 = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_rho_d );
            tmp_tuple_element_1 = var_rho_d;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_rho_g );
            tmp_tuple_element_1 = var_rho_g;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_str_chr_45;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
            CHECK_OBJECT( var_rho_mu );
            tmp_tuple_element_1 = var_rho_mu;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
            CHECK_OBJECT( var_obj );
            tmp_tuple_element_1 = var_obj;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 5, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_95f2fb06c20fdff3289065c53213fa93 );
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 725;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 725;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_4 = par_callback;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_4 != tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_dircall_arg4_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__postsolve );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__postsolve );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_postsolve" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 727;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_4;
            CHECK_OBJECT( var_x );
            tmp_left_name_1 = var_x;
            CHECK_OBJECT( var_tau );
            tmp_right_name_1 = var_tau;
            tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 727;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par__T_o );
            tmp_dircall_arg3_1 = par__T_o;
            tmp_dict_key_1 = const_str_plain_tol;
            CHECK_OBJECT( par_tol );
            tmp_dict_value_1 = par_tol;
            tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                tmp_iter_arg_3 = impl___internal__$$$function_17_complex_call_helper_pos_keywords_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 727;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 727;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_12, 0, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_13 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_13, 1, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_14 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_14, 2, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_3 == NULL );
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_15 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_15, 3, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_4 == NULL );
            tmp_tuple_unpack_3__element_4 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_16 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_16, 4, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_5 == NULL );
            tmp_tuple_unpack_3__element_5 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_17 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_17, 5, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_6 == NULL );
            tmp_tuple_unpack_3__element_6 = tmp_assign_source_34;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 727;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 727;
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

        Py_XDECREF( tmp_tuple_unpack_3__element_5 );
        tmp_tuple_unpack_3__element_5 = NULL;

        Py_XDECREF( tmp_tuple_unpack_3__element_6 );
        tmp_tuple_unpack_3__element_6 = NULL;

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
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_35 = tmp_tuple_unpack_3__element_1;
            assert( var_x_o == NULL );
            Py_INCREF( tmp_assign_source_35 );
            var_x_o = tmp_assign_source_35;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_36 = tmp_tuple_unpack_3__element_2;
            assert( var_fun == NULL );
            Py_INCREF( tmp_assign_source_36 );
            var_fun = tmp_assign_source_36;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_3 );
            tmp_assign_source_37 = tmp_tuple_unpack_3__element_3;
            assert( var_slack == NULL );
            Py_INCREF( tmp_assign_source_37 );
            var_slack = tmp_assign_source_37;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_3 );
        tmp_tuple_unpack_3__element_3 = NULL;

        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_4 );
            tmp_assign_source_38 = tmp_tuple_unpack_3__element_4;
            assert( var_con == NULL );
            Py_INCREF( tmp_assign_source_38 );
            var_con = tmp_assign_source_38;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_4 );
        tmp_tuple_unpack_3__element_4 = NULL;

        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_5 );
            tmp_assign_source_39 = tmp_tuple_unpack_3__element_5;
            assert( var__ == NULL );
            Py_INCREF( tmp_assign_source_39 );
            var__ = tmp_assign_source_39;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_5 );
        tmp_tuple_unpack_3__element_5 = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_6 );
            tmp_assign_source_40 = tmp_tuple_unpack_3__element_6;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_40;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_3__element_6 );
        tmp_tuple_unpack_3__element_6 = NULL;

        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
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
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 729;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            tmp_dict_key_2 = const_str_plain_x;
            CHECK_OBJECT( var_x_o );
            tmp_dict_value_2 = var_x_o;
            tmp_args_element_name_11 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_3 = const_str_plain_fun;
            CHECK_OBJECT( var_fun );
            tmp_dict_value_3 = var_fun;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_4 = const_str_plain_slack;
            CHECK_OBJECT( var_slack );
            tmp_dict_value_4 = var_slack;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_5 = const_str_plain_con;
            CHECK_OBJECT( var_con );
            tmp_dict_value_5 = var_con;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_6 = const_str_plain_nit;
            CHECK_OBJECT( var_iteration );
            tmp_dict_value_6 = var_iteration;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_7 = const_str_plain_phase;
            tmp_dict_value_7 = const_int_pos_1;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_8 = const_str_plain_complete;
            tmp_dict_value_8 = Py_False;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_9 = const_str_plain_status;
            tmp_dict_value_9 = const_int_0;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_10 = const_str_plain_message;
            tmp_dict_value_10 = const_str_empty;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_11 = const_str_plain_success;
            tmp_dict_value_11 = Py_False;
            tmp_res = PyDict_SetItem( tmp_args_element_name_11, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 729;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_41 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 729;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_res == NULL );
            var_res = tmp_assign_source_41;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_12;
            CHECK_OBJECT( par_callback );
            tmp_called_name_5 = par_callback;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_12 = var_res;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 733;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 733;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = const_int_0;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_42 );
        var_status = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = const_str_digest_b7b1eea3f789c24aaf98d3f720167206;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_43 );
        var_message = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_sparse );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_sparse );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 738;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_13;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sps );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sps" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 739;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_6;
            CHECK_OBJECT( par_A );
            tmp_args_element_name_13 = par_A;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 739;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_assign_source_44 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_csc_matrix, call_args );
            }

            if ( tmp_assign_source_44 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 739;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_A;
                assert( old != NULL );
                par_A = tmp_assign_source_44;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_A );
            tmp_called_instance_2 = par_A;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 740;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_transpose );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 740;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_A );
            tmp_assattr_target_1 = par_A;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_T, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 740;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_go );
        tmp_operand_name_1 = var_go;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        goto loop_end_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_iteration );
        tmp_left_name_2 = var_iteration;
        tmp_right_name_2 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 746;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = tmp_left_name_2;
        var_iteration = tmp_assign_source_45;

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        if ( par_ip == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 748;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE( par_ip );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 748;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = const_int_pos_1;
            {
                PyObject *old = var_gamma;
                var_gamma = tmp_assign_source_46;
                Py_INCREF( var_gamma );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta(  );



            {
                PyObject *old = var_eta;
                var_eta = tmp_assign_source_47;
                Py_XDECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_48;
            nuitka_bool tmp_condition_result_7;
            int tmp_truth_name_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( par_pc );
            tmp_truth_name_5 = CHECK_IF_TRUE( par_pc );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_2;
            }
            else
            {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_assign_source_48 = const_int_0;
            Py_INCREF( tmp_assign_source_48 );
            goto condexpr_end_2;
            condexpr_false_2:;
            CHECK_OBJECT( par_beta );
            tmp_left_name_3 = par_beta;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_7;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_mean );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_z );
            tmp_left_name_4 = var_z;
            CHECK_OBJECT( var_x );
            tmp_right_name_4 = var_x;
            tmp_args_element_name_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 758;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_48 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 758;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            condexpr_end_2:;
            {
                PyObject *old = var_gamma;
                var_gamma = tmp_assign_source_48;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT( var_gamma );
            tmp_tuple_element_3 = var_gamma;
            tmp_defaults_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
            tmp_assign_source_49 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta( tmp_defaults_1 );



            {
                PyObject *old = var_eta;
                var_eta = tmp_assign_source_49;
                Py_XDECREF( old );
            }

        }
        branch_end_5:;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_delta );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_delta );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_delta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_15 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_16 = par_b;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_17 = par_c;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_18 = var_x;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_19 = var_y;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_20 = var_z;
        CHECK_OBJECT( var_tau );
        tmp_args_element_name_21 = var_tau;
        CHECK_OBJECT( var_kappa );
        tmp_args_element_name_22 = var_kappa;
        CHECK_OBJECT( var_gamma );
        tmp_args_element_name_23 = var_gamma;
        CHECK_OBJECT( var_eta );
        tmp_args_element_name_24 = var_eta;
        CHECK_OBJECT( par_sparse );
        tmp_args_element_name_25 = par_sparse;
        CHECK_OBJECT( par_lstsq );
        tmp_args_element_name_26 = par_lstsq;
        CHECK_OBJECT( par_sym_pos );
        tmp_args_element_name_27 = par_sym_pos;
        CHECK_OBJECT( par_cholesky );
        tmp_args_element_name_28 = par_cholesky;
        CHECK_OBJECT( par_pc );
        tmp_args_element_name_29 = par_pc;
        if ( par_ip == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 768;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_name_30 = par_ip;
        CHECK_OBJECT( par_permc_spec );
        tmp_args_element_name_31 = par_permc_spec;
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 766;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS17( tmp_called_name_7, call_args );
        }

        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_50 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_50 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 766;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_50;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_18 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_18, 0, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_51;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_19 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_19, 1, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_52;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_20 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_20, 2, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_53;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_21 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT( tmp_unpack_21, 3, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_4;
            tmp_tuple_unpack_4__element_4 = tmp_assign_source_54;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT( tmp_tuple_unpack_4__source_iter );
        tmp_unpack_22 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_22, 4, 5 );
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_5;
            tmp_tuple_unpack_4__element_5 = tmp_assign_source_55;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 766;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 766;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_1 );
        tmp_assign_source_56 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_d_x;
            var_d_x = tmp_assign_source_56;
            Py_INCREF( var_d_x );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_2 );
        tmp_assign_source_57 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_d_y;
            var_d_y = tmp_assign_source_57;
            Py_INCREF( var_d_y );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_3 );
        tmp_assign_source_58 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_d_z;
            var_d_z = tmp_assign_source_58;
            Py_INCREF( var_d_z );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_4 );
        tmp_assign_source_59 = tmp_tuple_unpack_4__element_4;
        {
            PyObject *old = var_d_tau;
            var_d_tau = tmp_assign_source_59;
            Py_INCREF( var_d_tau );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_tuple_unpack_4__element_5 );
        tmp_assign_source_60 = tmp_tuple_unpack_4__element_5;
        {
            PyObject *old = var_d_kappa;
            var_d_kappa = tmp_assign_source_60;
            Py_INCREF( var_d_kappa );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_6;
        if ( par_ip == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ip" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 770;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE( par_ip );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 770;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_8 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_61;
            tmp_assign_source_61 = const_float_1_0;
            {
                PyObject *old = var_alpha;
                var_alpha = tmp_assign_source_61;
                Py_INCREF( var_alpha );
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_args_element_name_35;
            PyObject *tmp_args_element_name_36;
            PyObject *tmp_args_element_name_37;
            PyObject *tmp_args_element_name_38;
            PyObject *tmp_args_element_name_39;
            PyObject *tmp_args_element_name_40;
            PyObject *tmp_args_element_name_41;
            PyObject *tmp_args_element_name_42;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__do_step );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__do_step );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_do_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 775;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_8 = tmp_mvar_value_9;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_32 = var_x;
            CHECK_OBJECT( var_y );
            tmp_args_element_name_33 = var_y;
            CHECK_OBJECT( var_z );
            tmp_args_element_name_34 = var_z;
            CHECK_OBJECT( var_tau );
            tmp_args_element_name_35 = var_tau;
            CHECK_OBJECT( var_kappa );
            tmp_args_element_name_36 = var_kappa;
            CHECK_OBJECT( var_d_x );
            tmp_args_element_name_37 = var_d_x;
            CHECK_OBJECT( var_d_y );
            tmp_args_element_name_38 = var_d_y;
            CHECK_OBJECT( var_d_z );
            tmp_args_element_name_39 = var_d_z;
            CHECK_OBJECT( var_d_tau );
            tmp_args_element_name_40 = var_d_tau;
            CHECK_OBJECT( var_d_kappa );
            tmp_args_element_name_41 = var_d_kappa;
            CHECK_OBJECT( var_alpha );
            tmp_args_element_name_42 = var_alpha;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 775;
            {
                PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34, tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_40, tmp_args_element_name_41, tmp_args_element_name_42 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS11( tmp_called_name_8, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_62 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 775;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__source_iter;
                tmp_tuple_unpack_5__source_iter = tmp_assign_source_62;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_23 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_23, 0, 5 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_1;
                tmp_tuple_unpack_5__element_1 = tmp_assign_source_63;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_24 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_24, 1, 5 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_2;
                tmp_tuple_unpack_5__element_2 = tmp_assign_source_64;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_unpack_25;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_25 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_65 = UNPACK_NEXT( tmp_unpack_25, 2, 5 );
            if ( tmp_assign_source_65 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_3;
                tmp_tuple_unpack_5__element_3 = tmp_assign_source_65;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_unpack_26;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_26 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_26, 3, 5 );
            if ( tmp_assign_source_66 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_4;
                tmp_tuple_unpack_5__element_4 = tmp_assign_source_66;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_unpack_27;
            CHECK_OBJECT( tmp_tuple_unpack_5__source_iter );
            tmp_unpack_27 = tmp_tuple_unpack_5__source_iter;
            tmp_assign_source_67 = UNPACK_NEXT( tmp_unpack_27, 4, 5 );
            if ( tmp_assign_source_67 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
                goto try_except_handler_12;
            }
            {
                PyObject *old = tmp_tuple_unpack_5__element_5;
                tmp_tuple_unpack_5__element_5 = tmp_assign_source_67;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 775;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 775;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_8;
        // End of try:
        try_end_10:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
        Py_DECREF( tmp_tuple_unpack_5__source_iter );
        tmp_tuple_unpack_5__source_iter = NULL;

        {
            PyObject *tmp_assign_source_68;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_1 );
            tmp_assign_source_68 = tmp_tuple_unpack_5__element_1;
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_68;
                Py_INCREF( var_x );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_1 );
        tmp_tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_2 );
            tmp_assign_source_69 = tmp_tuple_unpack_5__element_2;
            {
                PyObject *old = var_y;
                assert( old != NULL );
                var_y = tmp_assign_source_69;
                Py_INCREF( var_y );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_2 );
        tmp_tuple_unpack_5__element_2 = NULL;

        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_3 );
            tmp_assign_source_70 = tmp_tuple_unpack_5__element_3;
            {
                PyObject *old = var_z;
                assert( old != NULL );
                var_z = tmp_assign_source_70;
                Py_INCREF( var_z );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_3 );
        tmp_tuple_unpack_5__element_3 = NULL;

        {
            PyObject *tmp_assign_source_71;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_4 );
            tmp_assign_source_71 = tmp_tuple_unpack_5__element_4;
            {
                PyObject *old = var_tau;
                assert( old != NULL );
                var_tau = tmp_assign_source_71;
                Py_INCREF( var_tau );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_4 );
        tmp_tuple_unpack_5__element_4 = NULL;

        {
            PyObject *tmp_assign_source_72;
            CHECK_OBJECT( tmp_tuple_unpack_5__element_5 );
            tmp_assign_source_72 = tmp_tuple_unpack_5__element_5;
            {
                PyObject *old = var_kappa;
                assert( old != NULL );
                var_kappa = tmp_assign_source_72;
                Py_INCREF( var_kappa );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_5__element_5 );
        tmp_tuple_unpack_5__element_5 = NULL;

        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_ass_subvalue_1 = const_int_pos_1;
            CHECK_OBJECT( var_x );
            tmp_ass_subscribed_1 = var_x;
            CHECK_OBJECT( var_x );
            tmp_compexpr_left_5 = var_x;
            tmp_compexpr_right_5 = const_int_pos_1;
            tmp_ass_subscript_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 778;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 778;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_ass_subvalue_2 = const_int_pos_1;
            CHECK_OBJECT( var_z );
            tmp_ass_subscribed_2 = var_z;
            CHECK_OBJECT( var_z );
            tmp_compexpr_left_6 = var_z;
            tmp_compexpr_right_6 = const_int_pos_1;
            tmp_ass_subscript_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 779;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 779;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_43;
            PyObject *tmp_args_element_name_44;
            tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_9 != NULL );
            tmp_args_element_name_43 = const_int_pos_1;
            CHECK_OBJECT( var_tau );
            tmp_args_element_name_44 = var_tau;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 780;
            {
                PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
                tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
            }

            if ( tmp_assign_source_73 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 780;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_tau;
                assert( old != NULL );
                var_tau = tmp_assign_source_73;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_45;
            PyObject *tmp_args_element_name_46;
            tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_10 != NULL );
            tmp_args_element_name_45 = const_int_pos_1;
            CHECK_OBJECT( var_kappa );
            tmp_args_element_name_46 = var_kappa;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 781;
            {
                PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
                tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
            }

            if ( tmp_assign_source_74 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 781;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_kappa;
                assert( old != NULL );
                var_kappa = tmp_assign_source_74;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_75;
            tmp_assign_source_75 = Py_False;
            {
                PyObject *old = par_ip;
                par_ip = tmp_assign_source_75;
                Py_INCREF( par_ip );
                Py_XDECREF( old );
            }

        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_name_11;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_47;
            PyObject *tmp_args_element_name_48;
            PyObject *tmp_args_element_name_49;
            PyObject *tmp_args_element_name_50;
            PyObject *tmp_args_element_name_51;
            PyObject *tmp_args_element_name_52;
            PyObject *tmp_args_element_name_53;
            PyObject *tmp_args_element_name_54;
            PyObject *tmp_args_element_name_55;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_step );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_step );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 785;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_called_name_11 = tmp_mvar_value_10;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_47 = var_x;
            CHECK_OBJECT( var_d_x );
            tmp_args_element_name_48 = var_d_x;
            CHECK_OBJECT( var_z );
            tmp_args_element_name_49 = var_z;
            CHECK_OBJECT( var_d_z );
            tmp_args_element_name_50 = var_d_z;
            CHECK_OBJECT( var_tau );
            tmp_args_element_name_51 = var_tau;
            CHECK_OBJECT( var_d_tau );
            tmp_args_element_name_52 = var_d_tau;
            CHECK_OBJECT( var_kappa );
            tmp_args_element_name_53 = var_kappa;
            CHECK_OBJECT( var_d_kappa );
            tmp_args_element_name_54 = var_d_kappa;
            CHECK_OBJECT( par_alpha0 );
            tmp_args_element_name_55 = par_alpha0;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 785;
            {
                PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48, tmp_args_element_name_49, tmp_args_element_name_50, tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55 };
                tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_11, call_args );
            }

            if ( tmp_assign_source_76 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 785;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = var_alpha;
                var_alpha = tmp_assign_source_76;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_name_12;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_56;
            PyObject *tmp_args_element_name_57;
            PyObject *tmp_args_element_name_58;
            PyObject *tmp_args_element_name_59;
            PyObject *tmp_args_element_name_60;
            PyObject *tmp_args_element_name_61;
            PyObject *tmp_args_element_name_62;
            PyObject *tmp_args_element_name_63;
            PyObject *tmp_args_element_name_64;
            PyObject *tmp_args_element_name_65;
            PyObject *tmp_args_element_name_66;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__do_step );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__do_step );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_do_step" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 788;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_called_name_12 = tmp_mvar_value_11;
            CHECK_OBJECT( var_x );
            tmp_args_element_name_56 = var_x;
            CHECK_OBJECT( var_y );
            tmp_args_element_name_57 = var_y;
            CHECK_OBJECT( var_z );
            tmp_args_element_name_58 = var_z;
            CHECK_OBJECT( var_tau );
            tmp_args_element_name_59 = var_tau;
            CHECK_OBJECT( var_kappa );
            tmp_args_element_name_60 = var_kappa;
            CHECK_OBJECT( var_d_x );
            tmp_args_element_name_61 = var_d_x;
            CHECK_OBJECT( var_d_y );
            tmp_args_element_name_62 = var_d_y;
            CHECK_OBJECT( var_d_z );
            tmp_args_element_name_63 = var_d_z;
            CHECK_OBJECT( var_d_tau );
            tmp_args_element_name_64 = var_d_tau;
            CHECK_OBJECT( var_d_kappa );
            tmp_args_element_name_65 = var_d_kappa;
            CHECK_OBJECT( var_alpha );
            tmp_args_element_name_66 = var_alpha;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 788;
            {
                PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_58, tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_62, tmp_args_element_name_63, tmp_args_element_name_64, tmp_args_element_name_65, tmp_args_element_name_66 };
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS11( tmp_called_name_12, call_args );
            }

            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 788;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_77 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_77 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 788;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__source_iter;
                tmp_tuple_unpack_6__source_iter = tmp_assign_source_77;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_unpack_28;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_28 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_28, 0, 5 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_1;
                tmp_tuple_unpack_6__element_1 = tmp_assign_source_78;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_unpack_29;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_29 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_29, 1, 5 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_2;
                tmp_tuple_unpack_6__element_2 = tmp_assign_source_79;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_unpack_30;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_30 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_30, 2, 5 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_3;
                tmp_tuple_unpack_6__element_3 = tmp_assign_source_80;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_unpack_31;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_31 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_81 = UNPACK_NEXT( tmp_unpack_31, 3, 5 );
            if ( tmp_assign_source_81 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_4;
                tmp_tuple_unpack_6__element_4 = tmp_assign_source_81;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_unpack_32;
            CHECK_OBJECT( tmp_tuple_unpack_6__source_iter );
            tmp_unpack_32 = tmp_tuple_unpack_6__source_iter;
            tmp_assign_source_82 = UNPACK_NEXT( tmp_unpack_32, 4, 5 );
            if ( tmp_assign_source_82 == NULL )
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_6__element_5;
                tmp_tuple_unpack_6__element_5 = tmp_assign_source_82;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 788;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 788;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_13;
        // End of try:
        try_end_11:;
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

        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_3 );
        tmp_tuple_unpack_6__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_4 );
        tmp_tuple_unpack_6__element_4 = NULL;

        Py_XDECREF( tmp_tuple_unpack_6__element_5 );
        tmp_tuple_unpack_6__element_5 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_8;
        // End of try:
        try_end_12:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
        Py_DECREF( tmp_tuple_unpack_6__source_iter );
        tmp_tuple_unpack_6__source_iter = NULL;

        {
            PyObject *tmp_assign_source_83;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_1 );
            tmp_assign_source_83 = tmp_tuple_unpack_6__element_1;
            {
                PyObject *old = var_x;
                assert( old != NULL );
                var_x = tmp_assign_source_83;
                Py_INCREF( var_x );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_1 );
        tmp_tuple_unpack_6__element_1 = NULL;

        {
            PyObject *tmp_assign_source_84;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_2 );
            tmp_assign_source_84 = tmp_tuple_unpack_6__element_2;
            {
                PyObject *old = var_y;
                assert( old != NULL );
                var_y = tmp_assign_source_84;
                Py_INCREF( var_y );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_2 );
        tmp_tuple_unpack_6__element_2 = NULL;

        {
            PyObject *tmp_assign_source_85;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_3 );
            tmp_assign_source_85 = tmp_tuple_unpack_6__element_3;
            {
                PyObject *old = var_z;
                assert( old != NULL );
                var_z = tmp_assign_source_85;
                Py_INCREF( var_z );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_3 );
        tmp_tuple_unpack_6__element_3 = NULL;

        {
            PyObject *tmp_assign_source_86;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_4 );
            tmp_assign_source_86 = tmp_tuple_unpack_6__element_4;
            {
                PyObject *old = var_tau;
                assert( old != NULL );
                var_tau = tmp_assign_source_86;
                Py_INCREF( var_tau );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_4 );
        tmp_tuple_unpack_6__element_4 = NULL;

        {
            PyObject *tmp_assign_source_87;
            CHECK_OBJECT( tmp_tuple_unpack_6__element_5 );
            tmp_assign_source_87 = tmp_tuple_unpack_6__element_5;
            {
                PyObject *old = var_kappa;
                assert( old != NULL );
                var_kappa = tmp_assign_source_87;
                Py_INCREF( var_kappa );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_6__element_5 );
        tmp_tuple_unpack_6__element_5 = NULL;

        branch_end_6:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_13 == NULL )
    {
        exception_keeper_tb_13 = MAKE_TRACEBACK( frame_36201c1b1cab33e2e1968269b69e718e, exception_keeper_lineno_13 );
    }
    else if ( exception_keeper_lineno_13 != 0 )
    {
        exception_keeper_tb_13 = ADD_TRACEBACK( exception_keeper_tb_13, frame_36201c1b1cab33e2e1968269b69e718e, exception_keeper_lineno_13 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    PyException_SetTraceback( exception_keeper_value_13, (PyObject *)exception_keeper_tb_13 );
    PUBLISH_EXCEPTION( &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_12;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_LinAlgError );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinAlgError );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LinAlgError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 791;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_tuple_element_4 = tmp_mvar_value_12;
        tmp_compexpr_right_7 = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_compexpr_right_7, 0, tmp_tuple_element_4 );
        tmp_tuple_element_4 = PyExc_FloatingPointError;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_compexpr_right_7, 1, tmp_tuple_element_4 );
        tmp_tuple_element_4 = PyExc_ValueError;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_compexpr_right_7, 2, tmp_tuple_element_4 );
        tmp_tuple_element_4 = PyExc_ZeroDivisionError;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_compexpr_right_7, 3, tmp_tuple_element_4 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 791;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_88;
            tmp_assign_source_88 = const_int_pos_4;
            {
                PyObject *old = var_status;
                assert( old != NULL );
                var_status = tmp_assign_source_88;
                Py_INCREF( var_status );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_message );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_message );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_message" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 797;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }

            tmp_called_name_13 = tmp_mvar_value_13;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 797;
            tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

            if ( tmp_assign_source_89 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 797;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            {
                PyObject *old = var_message;
                assert( old != NULL );
                var_message = tmp_assign_source_89;
                Py_DECREF( old );
            }

        }
        goto try_break_handler_15;
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 764;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_36201c1b1cab33e2e1968269b69e718e->m_frame) frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
        branch_end_7:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd );
    return NULL;
    // Exception handler code:
    try_except_handler_15:;
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

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_15:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto loop_end_1;
    // End of try:
    // End of try:
    try_end_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_14;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_args_element_name_67;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_args_element_name_75;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__indicators );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__indicators );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_indicators" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 801;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_name_14 = tmp_mvar_value_14;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_67 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_68 = par_b;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_69 = par_c;
        CHECK_OBJECT( par_c0 );
        tmp_args_element_name_70 = par_c0;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_71 = var_x;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_72 = var_y;
        CHECK_OBJECT( var_z );
        tmp_args_element_name_73 = var_z;
        CHECK_OBJECT( var_tau );
        tmp_args_element_name_74 = var_tau;
        CHECK_OBJECT( var_kappa );
        tmp_args_element_name_75 = var_kappa;
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 801;
        {
            PyObject *call_args[] = { tmp_args_element_name_67, tmp_args_element_name_68, tmp_args_element_name_69, tmp_args_element_name_70, tmp_args_element_name_71, tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74, tmp_args_element_name_75 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS9( tmp_called_name_14, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 801;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_assign_source_90 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_90 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 801;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_90;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_33 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_91 = UNPACK_NEXT( tmp_unpack_33, 0, 6 );
        if ( tmp_assign_source_91 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_91;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_34 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_92 = UNPACK_NEXT( tmp_unpack_34, 1, 6 );
        if ( tmp_assign_source_92 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_92;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_35 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_93 = UNPACK_NEXT( tmp_unpack_35, 2, 6 );
        if ( tmp_assign_source_93 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_3;
            tmp_tuple_unpack_7__element_3 = tmp_assign_source_93;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_unpack_36;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_36 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_94 = UNPACK_NEXT( tmp_unpack_36, 3, 6 );
        if ( tmp_assign_source_94 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_4;
            tmp_tuple_unpack_7__element_4 = tmp_assign_source_94;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_unpack_37;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_37 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_95 = UNPACK_NEXT( tmp_unpack_37, 4, 6 );
        if ( tmp_assign_source_95 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_5;
            tmp_tuple_unpack_7__element_5 = tmp_assign_source_95;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_unpack_38;
        CHECK_OBJECT( tmp_tuple_unpack_7__source_iter );
        tmp_unpack_38 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_96 = UNPACK_NEXT( tmp_unpack_38, 5, 6 );
        if ( tmp_assign_source_96 == NULL )
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


            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_6;
            tmp_tuple_unpack_7__element_6 = tmp_assign_source_96;
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

                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 801;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 801;
            goto try_except_handler_17;
        }
    }
    goto try_end_14;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    goto try_end_15;
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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_4 );
    tmp_tuple_unpack_7__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_5 );
    tmp_tuple_unpack_7__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_6 );
    tmp_tuple_unpack_7__element_6 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_1 );
        tmp_assign_source_97 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_rho_p;
            assert( old != NULL );
            var_rho_p = tmp_assign_source_97;
            Py_INCREF( var_rho_p );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_2 );
        tmp_assign_source_98 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var_rho_d;
            assert( old != NULL );
            var_rho_d = tmp_assign_source_98;
            Py_INCREF( var_rho_d );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_3 );
        tmp_assign_source_99 = tmp_tuple_unpack_7__element_3;
        {
            PyObject *old = var_rho_A;
            assert( old != NULL );
            var_rho_A = tmp_assign_source_99;
            Py_INCREF( var_rho_A );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_4 );
        tmp_assign_source_100 = tmp_tuple_unpack_7__element_4;
        {
            PyObject *old = var_rho_g;
            assert( old != NULL );
            var_rho_g = tmp_assign_source_100;
            Py_INCREF( var_rho_g );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_4 );
    tmp_tuple_unpack_7__element_4 = NULL;

    {
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_5 );
        tmp_assign_source_101 = tmp_tuple_unpack_7__element_5;
        {
            PyObject *old = var_rho_mu;
            assert( old != NULL );
            var_rho_mu = tmp_assign_source_101;
            Py_INCREF( var_rho_mu );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_5 );
    tmp_tuple_unpack_7__element_5 = NULL;

    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT( tmp_tuple_unpack_7__element_6 );
        tmp_assign_source_102 = tmp_tuple_unpack_7__element_6;
        {
            PyObject *old = var_obj;
            assert( old != NULL );
            var_obj = tmp_assign_source_102;
            Py_INCREF( var_obj );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_7__element_6 );
    tmp_tuple_unpack_7__element_6 = NULL;

    {
        PyObject *tmp_assign_source_103;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        int tmp_or_left_truth_4;
        PyObject *tmp_or_left_value_4;
        PyObject *tmp_or_right_value_4;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_rho_p );
        tmp_compexpr_left_8 = var_rho_p;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_8 = par_tol;
        tmp_or_left_value_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_or_left_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 803;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
        if ( tmp_or_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_3 );

            exception_lineno = 803;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_3 == 1 )
        {
            goto or_left_3;
        }
        else
        {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF( tmp_or_left_value_3 );
        CHECK_OBJECT( var_rho_d );
        tmp_compexpr_left_9 = var_rho_d;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_9 = par_tol;
        tmp_or_left_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_or_left_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 803;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
        if ( tmp_or_left_truth_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_4 );

            exception_lineno = 803;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_4 == 1 )
        {
            goto or_left_4;
        }
        else
        {
            goto or_right_4;
        }
        or_right_4:;
        Py_DECREF( tmp_or_left_value_4 );
        CHECK_OBJECT( var_rho_A );
        tmp_compexpr_left_10 = var_rho_A;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_10 = par_tol;
        tmp_or_right_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_or_right_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 803;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_or_right_value_3 = tmp_or_left_value_4;
        or_end_4:;
        tmp_assign_source_103 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_103 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = var_go;
            assert( old != NULL );
            var_go = tmp_assign_source_103;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_7;
        CHECK_OBJECT( par_disp );
        tmp_truth_name_7 = CHECK_IF_TRUE( par_disp );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 805;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_name_15;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_76;
            PyObject *tmp_args_element_name_77;
            PyObject *tmp_args_element_name_78;
            PyObject *tmp_args_element_name_79;
            PyObject *tmp_args_element_name_80;
            PyObject *tmp_args_element_name_81;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__display_iter );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__display_iter );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_display_iter" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 806;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_15 = tmp_mvar_value_15;
            CHECK_OBJECT( var_rho_p );
            tmp_args_element_name_76 = var_rho_p;
            CHECK_OBJECT( var_rho_d );
            tmp_args_element_name_77 = var_rho_d;
            CHECK_OBJECT( var_rho_g );
            tmp_args_element_name_78 = var_rho_g;
            CHECK_OBJECT( var_alpha );
            tmp_args_element_name_79 = var_alpha;
            CHECK_OBJECT( var_rho_mu );
            tmp_args_element_name_80 = var_rho_mu;
            CHECK_OBJECT( var_obj );
            tmp_args_element_name_81 = var_obj;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 806;
            {
                PyObject *call_args[] = { tmp_args_element_name_76, tmp_args_element_name_77, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_81 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_15, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 806;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_callback );
        tmp_compexpr_left_11 = par_callback;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_11 != tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        // Tried code:
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_dircall_arg3_2;
            PyObject *tmp_dircall_arg4_2;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__postsolve );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__postsolve );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_postsolve" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 808;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }

            tmp_dircall_arg1_2 = tmp_mvar_value_16;
            CHECK_OBJECT( var_x );
            tmp_left_name_5 = var_x;
            CHECK_OBJECT( var_tau );
            tmp_right_name_5 = var_tau;
            tmp_tuple_element_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_dircall_arg2_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par__T_o );
            tmp_dircall_arg3_2 = par__T_o;
            tmp_dict_key_12 = const_str_plain_tol;
            CHECK_OBJECT( par_tol );
            tmp_dict_value_12 = par_tol;
            tmp_dircall_arg4_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_dircall_arg4_2, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            Py_INCREF( tmp_dircall_arg1_2 );
            Py_INCREF( tmp_dircall_arg3_2 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                tmp_iter_arg_8 = impl___internal__$$$function_17_complex_call_helper_pos_keywords_star_list( dir_call_args );
            }
            if ( tmp_iter_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
            }
            tmp_assign_source_104 = MAKE_ITERATOR( tmp_iter_arg_8 );
            Py_DECREF( tmp_iter_arg_8 );
            if ( tmp_assign_source_104 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 808;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto try_except_handler_18;
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
            PyObject *tmp_unpack_39;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_39 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_105 = UNPACK_NEXT( tmp_unpack_39, 0, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_1;
                tmp_tuple_unpack_8__element_1 = tmp_assign_source_105;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_unpack_40;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_40 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_106 = UNPACK_NEXT( tmp_unpack_40, 1, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_2;
                tmp_tuple_unpack_8__element_2 = tmp_assign_source_106;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_unpack_41;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_41 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_107 = UNPACK_NEXT( tmp_unpack_41, 2, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_3;
                tmp_tuple_unpack_8__element_3 = tmp_assign_source_107;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_108;
            PyObject *tmp_unpack_42;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_42 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_108 = UNPACK_NEXT( tmp_unpack_42, 3, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_4;
                tmp_tuple_unpack_8__element_4 = tmp_assign_source_108;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_unpack_43;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_43 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_109 = UNPACK_NEXT( tmp_unpack_43, 4, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_5;
                tmp_tuple_unpack_8__element_5 = tmp_assign_source_109;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_unpack_44;
            CHECK_OBJECT( tmp_tuple_unpack_8__source_iter );
            tmp_unpack_44 = tmp_tuple_unpack_8__source_iter;
            tmp_assign_source_110 = UNPACK_NEXT( tmp_unpack_44, 5, 6 );
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


                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
            {
                PyObject *old = tmp_tuple_unpack_8__element_6;
                tmp_tuple_unpack_8__element_6 = tmp_assign_source_110;
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

                        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                        exception_lineno = 808;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 808;
                goto try_except_handler_19;
            }
        }
        goto try_end_16;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        try_end_16:;
        goto try_end_17;
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

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_1;
        // End of try:
        try_end_17:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
        Py_DECREF( tmp_tuple_unpack_8__source_iter );
        tmp_tuple_unpack_8__source_iter = NULL;

        {
            PyObject *tmp_assign_source_111;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_1 );
            tmp_assign_source_111 = tmp_tuple_unpack_8__element_1;
            {
                PyObject *old = var_x_o;
                var_x_o = tmp_assign_source_111;
                Py_INCREF( var_x_o );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_1 );
        tmp_tuple_unpack_8__element_1 = NULL;

        {
            PyObject *tmp_assign_source_112;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_2 );
            tmp_assign_source_112 = tmp_tuple_unpack_8__element_2;
            {
                PyObject *old = var_fun;
                var_fun = tmp_assign_source_112;
                Py_INCREF( var_fun );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_2 );
        tmp_tuple_unpack_8__element_2 = NULL;

        {
            PyObject *tmp_assign_source_113;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_3 );
            tmp_assign_source_113 = tmp_tuple_unpack_8__element_3;
            {
                PyObject *old = var_slack;
                var_slack = tmp_assign_source_113;
                Py_INCREF( var_slack );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_3 );
        tmp_tuple_unpack_8__element_3 = NULL;

        {
            PyObject *tmp_assign_source_114;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_4 );
            tmp_assign_source_114 = tmp_tuple_unpack_8__element_4;
            {
                PyObject *old = var_con;
                var_con = tmp_assign_source_114;
                Py_INCREF( var_con );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_4 );
        tmp_tuple_unpack_8__element_4 = NULL;

        {
            PyObject *tmp_assign_source_115;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_5 );
            tmp_assign_source_115 = tmp_tuple_unpack_8__element_5;
            {
                PyObject *old = var__;
                var__ = tmp_assign_source_115;
                Py_INCREF( var__ );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_5 );
        tmp_tuple_unpack_8__element_5 = NULL;

        {
            PyObject *tmp_assign_source_116;
            CHECK_OBJECT( tmp_tuple_unpack_8__element_6 );
            tmp_assign_source_116 = tmp_tuple_unpack_8__element_6;
            {
                PyObject *old = var__;
                assert( old != NULL );
                var__ = tmp_assign_source_116;
                Py_INCREF( var__ );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_8__element_6 );
        tmp_tuple_unpack_8__element_6 = NULL;

        {
            PyObject *tmp_assign_source_117;
            PyObject *tmp_called_name_16;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_args_element_name_82;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeResult );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeResult );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeResult" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 810;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_16 = tmp_mvar_value_17;
            tmp_dict_key_13 = const_str_plain_x;
            CHECK_OBJECT( var_x_o );
            tmp_dict_value_13 = var_x_o;
            tmp_args_element_name_82 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_14 = const_str_plain_fun;
            CHECK_OBJECT( var_fun );
            tmp_dict_value_14 = var_fun;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_15 = const_str_plain_slack;
            CHECK_OBJECT( var_slack );
            tmp_dict_value_15 = var_slack;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_16 = const_str_plain_con;
            CHECK_OBJECT( var_con );
            tmp_dict_value_16 = var_con;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_17 = const_str_plain_nit;
            CHECK_OBJECT( var_iteration );
            tmp_dict_value_17 = var_iteration;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_18 = const_str_plain_phase;
            tmp_dict_value_18 = const_int_pos_1;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_19 = const_str_plain_complete;
            tmp_dict_value_19 = Py_False;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_20 = const_str_plain_status;
            tmp_dict_value_20 = const_int_0;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_21 = const_str_plain_message;
            tmp_dict_value_21 = const_str_empty;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_21, tmp_dict_value_21 );
            assert( !(tmp_res != 0) );
            tmp_dict_key_22 = const_str_plain_success;
            tmp_dict_value_22 = Py_False;
            tmp_res = PyDict_SetItem( tmp_args_element_name_82, tmp_dict_key_22, tmp_dict_value_22 );
            assert( !(tmp_res != 0) );
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 810;
            {
                PyObject *call_args[] = { tmp_args_element_name_82 };
                tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
            }

            Py_DECREF( tmp_args_element_name_82 );
            if ( tmp_assign_source_117 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 810;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_res;
                var_res = tmp_assign_source_117;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_83;
            CHECK_OBJECT( par_callback );
            tmp_called_name_17 = par_callback;
            CHECK_OBJECT( var_res );
            tmp_args_element_name_83 = var_res;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 814;
            {
                PyObject *call_args[] = { tmp_args_element_name_83 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 814;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_118;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_called_name_18;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_args_element_name_85;
        CHECK_OBJECT( var_rho_p );
        tmp_compexpr_left_12 = var_rho_p;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_12 = par_tol;
        tmp_and_left_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        CHECK_OBJECT( var_rho_d );
        tmp_compexpr_left_13 = var_rho_d;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_13 = par_tol;
        tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_rho_g );
        tmp_compexpr_left_14 = var_rho_g;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_14 = par_tol;
        tmp_and_left_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_14, tmp_compexpr_right_14 );
        if ( tmp_and_left_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
        if ( tmp_and_left_truth_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_3 );

            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_3 == 1 )
        {
            goto and_right_3;
        }
        else
        {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF( tmp_and_left_value_3 );
        CHECK_OBJECT( var_tau );
        tmp_compexpr_left_15 = var_tau;
        CHECK_OBJECT( par_tol );
        tmp_left_name_6 = par_tol;
        tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_18 != NULL );
        tmp_args_element_name_84 = const_int_pos_1;
        CHECK_OBJECT( var_kappa );
        tmp_args_element_name_85 = var_kappa;
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 818;
        {
            PyObject *call_args[] = { tmp_args_element_name_84, tmp_args_element_name_85 };
            tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
        }

        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 818;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_compexpr_right_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        Py_DECREF( tmp_compexpr_right_15 );
        if ( tmp_and_right_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 817;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_assign_source_118 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_118 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = var_inf1;
            var_inf1 = tmp_assign_source_118;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_119;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_args_element_name_87;
        CHECK_OBJECT( var_rho_mu );
        tmp_compexpr_left_16 = var_rho_mu;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_16 = par_tol;
        tmp_and_left_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        if ( tmp_and_left_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 819;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
        if ( tmp_and_left_truth_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_4 );

            exception_lineno = 819;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        Py_DECREF( tmp_and_left_value_4 );
        CHECK_OBJECT( var_tau );
        tmp_compexpr_left_17 = var_tau;
        CHECK_OBJECT( par_tol );
        tmp_left_name_7 = par_tol;
        tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_19 != NULL );
        tmp_args_element_name_86 = const_int_pos_1;
        CHECK_OBJECT( var_kappa );
        tmp_args_element_name_87 = var_kappa;
        frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 819;
        {
            PyObject *call_args[] = { tmp_args_element_name_86, tmp_args_element_name_87 };
            tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
        }

        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 819;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_compexpr_right_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 819;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
        Py_DECREF( tmp_compexpr_right_17 );
        if ( tmp_and_right_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 819;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_assign_source_119 = tmp_and_left_value_4;
        and_end_4:;
        {
            PyObject *old = var_inf2;
            var_inf2 = tmp_assign_source_119;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_or_left_truth_5;
        nuitka_bool tmp_or_left_value_5;
        nuitka_bool tmp_or_right_value_5;
        int tmp_truth_name_8;
        int tmp_truth_name_9;
        CHECK_OBJECT( var_inf1 );
        tmp_truth_name_8 = CHECK_IF_TRUE( var_inf1 );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 820;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_5 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_5 == 1 )
        {
            goto or_left_5;
        }
        else
        {
            goto or_right_5;
        }
        or_right_5:;
        CHECK_OBJECT( var_inf2 );
        tmp_truth_name_9 = CHECK_IF_TRUE( var_inf2 );
        if ( tmp_truth_name_9 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 820;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_5 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_condition_result_12 = tmp_or_left_value_5;
        or_end_5:;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_88;
            CHECK_OBJECT( par_b );
            tmp_called_instance_4 = par_b;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 822;
            tmp_called_instance_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_transpose );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_y );
            tmp_args_element_name_88 = var_y;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 822;
            {
                PyObject *call_args[] = { tmp_args_element_name_88 };
                tmp_compexpr_left_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dot, call_args );
            }

            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_compexpr_left_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_tol );
            tmp_compexpr_right_18 = par_tol;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
            Py_DECREF( tmp_compexpr_left_18 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 822;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_120;
                tmp_assign_source_120 = const_int_pos_2;
                {
                    PyObject *old = var_status;
                    assert( old != NULL );
                    var_status = tmp_assign_source_120;
                    Py_INCREF( var_status );
                    Py_DECREF( old );
                }

            }
            goto branch_end_11;
            branch_no_11:;
            {
                PyObject *tmp_assign_source_121;
                tmp_assign_source_121 = const_int_pos_3;
                {
                    PyObject *old = var_status;
                    assert( old != NULL );
                    var_status = tmp_assign_source_121;
                    Py_INCREF( var_status );
                    Py_DECREF( old );
                }

            }
            branch_end_11:;
        }
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_name_20;
            PyObject *tmp_mvar_value_18;
            PyObject *tmp_args_element_name_89;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_message );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_message );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_message" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 826;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_20 = tmp_mvar_value_18;
            CHECK_OBJECT( var_status );
            tmp_args_element_name_89 = var_status;
            frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 826;
            {
                PyObject *call_args[] = { tmp_args_element_name_89 };
                tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
            }

            if ( tmp_assign_source_122 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 826;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_message;
                assert( old != NULL );
                var_message = tmp_assign_source_122;
                Py_DECREF( old );
            }

        }
        goto loop_end_1;
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            CHECK_OBJECT( var_iteration );
            tmp_compexpr_left_19 = var_iteration;
            CHECK_OBJECT( par_maxiter );
            tmp_compexpr_right_19 = par_maxiter;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_19, tmp_compexpr_right_19 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 828;
                type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_assign_source_123;
                tmp_assign_source_123 = const_int_pos_1;
                {
                    PyObject *old = var_status;
                    assert( old != NULL );
                    var_status = tmp_assign_source_123;
                    Py_INCREF( var_status );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_124;
                PyObject *tmp_called_name_21;
                PyObject *tmp_mvar_value_19;
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_message );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_message );
                }

                if ( tmp_mvar_value_19 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_get_message" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 830;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_21 = tmp_mvar_value_19;
                frame_36201c1b1cab33e2e1968269b69e718e->m_frame.f_lineno = 830;
                tmp_assign_source_124 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

                if ( tmp_assign_source_124 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 830;
                    type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_message;
                    assert( old != NULL );
                    var_message = tmp_assign_source_124;
                    Py_DECREF( old );
                }

            }
            goto loop_end_1;
            branch_no_12:;
        }
        branch_end_10:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 744;
        type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 833;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_x;
        if ( var_tau == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tau" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 833;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_8 = var_tau;
        tmp_assign_source_125 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_assign_source_125 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 833;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_x_hat == NULL );
        var_x_hat = tmp_assign_source_125;
    }
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT( var_x_hat );
        tmp_tuple_element_6 = var_x_hat;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
        if ( var_status == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "status" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 835;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_status;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
        if ( var_message == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 835;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_message;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_6 );
        if ( var_iteration == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "iteration" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 835;
            type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_iteration;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_6 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36201c1b1cab33e2e1968269b69e718e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_36201c1b1cab33e2e1968269b69e718e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36201c1b1cab33e2e1968269b69e718e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36201c1b1cab33e2e1968269b69e718e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36201c1b1cab33e2e1968269b69e718e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36201c1b1cab33e2e1968269b69e718e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36201c1b1cab33e2e1968269b69e718e,
        type_description_1,
        par_A,
        par_b,
        par_c,
        par_c0,
        par_alpha0,
        par_beta,
        par_maxiter,
        par_disp,
        par_tol,
        par_sparse,
        par_lstsq,
        par_sym_pos,
        par_cholesky,
        par_pc,
        par_ip,
        par_permc_spec,
        par_callback,
        par__T_o,
        var_iteration,
        var_x,
        var_y,
        var_z,
        var_tau,
        var_kappa,
        var_rho_p,
        var_rho_d,
        var_rho_A,
        var_rho_g,
        var_rho_mu,
        var_obj,
        var_go,
        var_x_o,
        var_fun,
        var_slack,
        var_con,
        var__,
        var_res,
        var_status,
        var_message,
        var_gamma,
        var_eta,
        var_d_x,
        var_d_y,
        var_d_z,
        var_d_tau,
        var_d_kappa,
        var_alpha,
        var_inf1,
        var_inf2,
        var_x_hat
    );


    // Release cached frame.
    if ( frame_36201c1b1cab33e2e1968269b69e718e == cache_frame_36201c1b1cab33e2e1968269b69e718e )
    {
        Py_DECREF( frame_36201c1b1cab33e2e1968269b69e718e );
    }
    cache_frame_36201c1b1cab33e2e1968269b69e718e = NULL;

    assertFrameObject( frame_36201c1b1cab33e2e1968269b69e718e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_cholesky );
    Py_DECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    Py_XDECREF( par_ip );
    par_ip = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_tau );
    var_tau = NULL;

    Py_XDECREF( var_kappa );
    var_kappa = NULL;

    Py_XDECREF( var_rho_p );
    var_rho_p = NULL;

    Py_XDECREF( var_rho_d );
    var_rho_d = NULL;

    Py_XDECREF( var_rho_A );
    var_rho_A = NULL;

    Py_XDECREF( var_rho_g );
    var_rho_g = NULL;

    Py_XDECREF( var_rho_mu );
    var_rho_mu = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_go );
    var_go = NULL;

    Py_XDECREF( var_x_o );
    var_x_o = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_slack );
    var_slack = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_gamma );
    var_gamma = NULL;

    Py_XDECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_d_x );
    var_d_x = NULL;

    Py_XDECREF( var_d_y );
    var_d_y = NULL;

    Py_XDECREF( var_d_z );
    var_d_z = NULL;

    Py_XDECREF( var_d_tau );
    var_d_tau = NULL;

    Py_XDECREF( var_d_kappa );
    var_d_kappa = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_inf1 );
    var_inf1 = NULL;

    Py_XDECREF( var_inf2 );
    var_inf2 = NULL;

    CHECK_OBJECT( (PyObject *)var_x_hat );
    Py_DECREF( var_x_hat );
    var_x_hat = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_cholesky );
    Py_DECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    Py_XDECREF( par_ip );
    par_ip = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_tau );
    var_tau = NULL;

    Py_XDECREF( var_kappa );
    var_kappa = NULL;

    Py_XDECREF( var_rho_p );
    var_rho_p = NULL;

    Py_XDECREF( var_rho_d );
    var_rho_d = NULL;

    Py_XDECREF( var_rho_A );
    var_rho_A = NULL;

    Py_XDECREF( var_rho_g );
    var_rho_g = NULL;

    Py_XDECREF( var_rho_mu );
    var_rho_mu = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_go );
    var_go = NULL;

    Py_XDECREF( var_x_o );
    var_x_o = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    Py_XDECREF( var_slack );
    var_slack = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    Py_XDECREF( var_message );
    var_message = NULL;

    Py_XDECREF( var_gamma );
    var_gamma = NULL;

    Py_XDECREF( var_eta );
    var_eta = NULL;

    Py_XDECREF( var_d_x );
    var_d_x = NULL;

    Py_XDECREF( var_d_y );
    var_d_y = NULL;

    Py_XDECREF( var_d_z );
    var_d_z = NULL;

    Py_XDECREF( var_d_tau );
    var_d_tau = NULL;

    Py_XDECREF( var_d_kappa );
    var_d_kappa = NULL;

    Py_XDECREF( var_alpha );
    var_alpha = NULL;

    Py_XDECREF( var_inf1 );
    var_inf1 = NULL;

    Py_XDECREF( var_inf2 );
    var_inf2 = NULL;

    Py_XDECREF( var_x_hat );
    var_x_hat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_9a46d5c3fed2257781c852aaa732740b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a46d5c3fed2257781c852aaa732740b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a46d5c3fed2257781c852aaa732740b, codeobj_9a46d5c3fed2257781c852aaa732740b, module_scipy$optimize$_linprog_ip, sizeof(void *) );
    frame_9a46d5c3fed2257781c852aaa732740b = cache_frame_9a46d5c3fed2257781c852aaa732740b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a46d5c3fed2257781c852aaa732740b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a46d5c3fed2257781c852aaa732740b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_g );
        tmp_right_name_1 = par_g;
        tmp_return_value = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 762;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a46d5c3fed2257781c852aaa732740b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a46d5c3fed2257781c852aaa732740b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a46d5c3fed2257781c852aaa732740b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a46d5c3fed2257781c852aaa732740b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a46d5c3fed2257781c852aaa732740b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a46d5c3fed2257781c852aaa732740b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a46d5c3fed2257781c852aaa732740b,
        type_description_1,
        par_g
    );


    // Release cached frame.
    if ( frame_9a46d5c3fed2257781c852aaa732740b == cache_frame_9a46d5c3fed2257781c852aaa732740b )
    {
        Py_DECREF( frame_9a46d5c3fed2257781c852aaa732740b );
    }
    cache_frame_9a46d5c3fed2257781c852aaa732740b = NULL;

    assertFrameObject( frame_9a46d5c3fed2257781c852aaa732740b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

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

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta );
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


static PyObject *impl_scipy$optimize$_linprog_ip$$$function_11__linprog_ip( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_c0 = python_pars[ 1 ];
    PyObject *par_A = python_pars[ 2 ];
    PyObject *par_b = python_pars[ 3 ];
    PyObject *par_callback = python_pars[ 4 ];
    PyObject *par__T_o = python_pars[ 5 ];
    PyObject *par_alpha0 = python_pars[ 6 ];
    PyObject *par_beta = python_pars[ 7 ];
    PyObject *par_maxiter = python_pars[ 8 ];
    PyObject *par_disp = python_pars[ 9 ];
    PyObject *par_tol = python_pars[ 10 ];
    PyObject *par_sparse = python_pars[ 11 ];
    PyObject *par_lstsq = python_pars[ 12 ];
    PyObject *par_sym_pos = python_pars[ 13 ];
    PyObject *par_cholesky = python_pars[ 14 ];
    PyObject *par_pc = python_pars[ 15 ];
    PyObject *par_ip = python_pars[ 16 ];
    PyObject *par_permc_spec = python_pars[ 17 ];
    PyObject *par_unknown_options = python_pars[ 18 ];
    PyObject *var_x = NULL;
    PyObject *var_status = NULL;
    PyObject *var_message = NULL;
    PyObject *var_iteration = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6d8c7348756bfd788ea5de34005ca67b;
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
    static struct Nuitka_FrameObject *cache_frame_6d8c7348756bfd788ea5de34005ca67b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d8c7348756bfd788ea5de34005ca67b, codeobj_6d8c7348756bfd788ea5de34005ca67b, module_scipy$optimize$_linprog_ip, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6d8c7348756bfd788ea5de34005ca67b = cache_frame_6d8c7348756bfd788ea5de34005ca67b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d8c7348756bfd788ea5de34005ca67b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d8c7348756bfd788ea5de34005ca67b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__check_unknown_options );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_unknown_options );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_unknown_options" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1103;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_unknown_options );
        tmp_args_element_name_1 = par_unknown_options;
        frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1103;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1103;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_cholesky );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cholesky );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1106;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_cholesky );
        tmp_compexpr_left_1 = par_cholesky;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_right_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
        CHECK_OBJECT( par_sparse );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_sparse );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1106;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_cholmod );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_cholmod );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "has_cholmod" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1106;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_2;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1106;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
            int tmp_truth_name_3;
            CHECK_OBJECT( par_cholesky );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_cholesky );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1107;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_kw_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1108;
                    type_description_1 = "oooooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                tmp_tuple_element_1 = const_str_digest_38ff53700658cabaea622d812db146cd;
                tmp_args_name_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_args_name_1 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 1110;
                    type_description_1 = "oooooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_1 = tmp_mvar_value_4;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1108;
                tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 1108;
                    type_description_1 = "oooooooooooooooooooNoooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = Py_False;
            {
                PyObject *old = par_cholesky;
                assert( old != NULL );
                par_cholesky = tmp_assign_source_1;
                Py_INCREF( par_cholesky );
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_4;
        int tmp_truth_name_5;
        CHECK_OBJECT( par_sparse );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_sparse );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1113;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_lstsq );
        tmp_truth_name_5 = CHECK_IF_TRUE( par_lstsq );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1113;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_3 = tmp_and_left_value_3;
        and_end_3:;
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1114;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            tmp_tuple_element_2 = const_str_digest_e1621240fc79efdc0d678f34207fb565;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1116;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = tmp_mvar_value_6;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1114;
            tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1114;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        int tmp_truth_name_6;
        int tmp_truth_name_7;
        CHECK_OBJECT( par_lstsq );
        tmp_truth_name_6 = CHECK_IF_TRUE( par_lstsq );
        if ( tmp_truth_name_6 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1118;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_4 == 1 )
        {
            goto and_right_4;
        }
        else
        {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT( par_cholesky );
        tmp_truth_name_7 = CHECK_IF_TRUE( par_cholesky );
        if ( tmp_truth_name_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1118;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_4 = tmp_and_left_value_4;
        and_end_4:;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1119;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            tmp_tuple_element_3 = const_str_digest_63f971632eda6f35602c1e6b25e1fe5c;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1122;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_3 = tmp_mvar_value_8;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1119;
            tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1119;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_permc_spec );
        tmp_called_instance_1 = par_permc_spec;
        frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1125;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_tuple_cc5007b94d27143730a7d2b73cbdf521_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1125;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_kw_name_4;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warn );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warn" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1126;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_9;
            tmp_left_name_2 = const_str_digest_a288c7b7246ac1602ed9c8db367974e2;
            CHECK_OBJECT( par_permc_spec );
            tmp_unicode_arg_1 = par_permc_spec;
            tmp_right_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1126;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1126;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_str_digest_b74fed43a3f8218e5a0c9c62281cae61;
            tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1126;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OptimizeWarning );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_args_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OptimizeWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 1129;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_4 = tmp_mvar_value_10;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
            tmp_kw_name_4 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
            frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1126;
            tmp_call_result_5 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_4 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 1126;
                type_description_1 = "oooooooooooooooooooNoooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = const_str_plain_MMD_AT_PLUS_A;
            {
                PyObject *old = par_permc_spec;
                assert( old != NULL );
                par_permc_spec = tmp_assign_source_2;
                Py_INCREF( par_permc_spec );
                Py_DECREF( old );
            }

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_operand_name_2;
        int tmp_truth_name_8;
        CHECK_OBJECT( par_sym_pos );
        tmp_operand_name_2 = par_sym_pos;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1133;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_5 == 1 )
        {
            goto and_right_5;
        }
        else
        {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT( par_cholesky );
        tmp_truth_name_8 = CHECK_IF_TRUE( par_cholesky );
        if ( tmp_truth_name_8 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1133;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_6 = tmp_and_left_value_5;
        and_end_5:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d3d6b8785606b0b75cdcdf4417344020;
            frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1134;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 1134;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        int tmp_and_left_truth_6;
        PyObject *tmp_and_left_value_6;
        PyObject *tmp_and_right_value_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        int tmp_and_left_truth_7;
        PyObject *tmp_and_left_value_7;
        PyObject *tmp_and_right_value_7;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT( par_cholesky );
        tmp_or_left_value_2 = par_cholesky;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1139;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( par_cholesky );
        tmp_compexpr_left_3 = par_cholesky;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_6 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? Py_True : Py_False;
        tmp_and_left_truth_6 = CHECK_IF_TRUE( tmp_and_left_value_6 );
        if ( tmp_and_left_truth_6 == 1 )
        {
            goto and_right_6;
        }
        else
        {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT( par_sym_pos );
        tmp_and_left_value_7 = par_sym_pos;
        tmp_and_left_truth_7 = CHECK_IF_TRUE( tmp_and_left_value_7 );
        if ( tmp_and_left_truth_7 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1139;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_7 == 1 )
        {
            goto and_right_7;
        }
        else
        {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT( par_lstsq );
        tmp_operand_name_3 = par_lstsq;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1139;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_7 = ( tmp_res == 0 ) ? Py_True : Py_False;
        tmp_and_right_value_6 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_and_right_value_6 = tmp_and_left_value_7;
        and_end_7:;
        tmp_or_right_value_2 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_or_right_value_2 = tmp_and_left_value_6;
        and_end_6:;
        tmp_assign_source_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_3 = tmp_or_left_value_2;
        or_end_2:;
        {
            PyObject *old = par_cholesky;
            assert( old != NULL );
            par_cholesky = tmp_assign_source_3;
            Py_INCREF( par_cholesky );
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__ip_hsd );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ip_hsd );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_ip_hsd" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 1141;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto try_except_handler_2;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_3 = par_b;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_4 = par_c;
        CHECK_OBJECT( par_c0 );
        tmp_args_element_name_5 = par_c0;
        CHECK_OBJECT( par_alpha0 );
        tmp_args_element_name_6 = par_alpha0;
        CHECK_OBJECT( par_beta );
        tmp_args_element_name_7 = par_beta;
        CHECK_OBJECT( par_maxiter );
        tmp_args_element_name_8 = par_maxiter;
        CHECK_OBJECT( par_disp );
        tmp_args_element_name_9 = par_disp;
        CHECK_OBJECT( par_tol );
        tmp_args_element_name_10 = par_tol;
        CHECK_OBJECT( par_sparse );
        tmp_args_element_name_11 = par_sparse;
        CHECK_OBJECT( par_lstsq );
        tmp_args_element_name_12 = par_lstsq;
        CHECK_OBJECT( par_sym_pos );
        tmp_args_element_name_13 = par_sym_pos;
        CHECK_OBJECT( par_cholesky );
        tmp_args_element_name_14 = par_cholesky;
        CHECK_OBJECT( par_pc );
        tmp_args_element_name_15 = par_pc;
        CHECK_OBJECT( par_ip );
        tmp_args_element_name_16 = par_ip;
        CHECK_OBJECT( par_permc_spec );
        tmp_args_element_name_17 = par_permc_spec;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_18 = par_callback;
        CHECK_OBJECT( par__T_o );
        tmp_args_element_name_19 = par__T_o;
        frame_6d8c7348756bfd788ea5de34005ca67b->m_frame.f_lineno = 1141;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS18( tmp_called_name_6, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1141;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1141;
            type_description_1 = "oooooooooooooooooooNoooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "oooooooooooooooooooNoooo";
            exception_lineno = 1141;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "oooooooooooooooooooNoooo";
            exception_lineno = 1141;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "oooooooooooooooooooNoooo";
            exception_lineno = 1141;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "oooooooooooooooooooNoooo";
            exception_lineno = 1141;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooooooooooooooNoooo";
                    exception_lineno = 1141;
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

            type_description_1 = "oooooooooooooooooooNoooo";
            exception_lineno = 1141;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d8c7348756bfd788ea5de34005ca67b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d8c7348756bfd788ea5de34005ca67b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d8c7348756bfd788ea5de34005ca67b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d8c7348756bfd788ea5de34005ca67b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d8c7348756bfd788ea5de34005ca67b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d8c7348756bfd788ea5de34005ca67b,
        type_description_1,
        par_c,
        par_c0,
        par_A,
        par_b,
        par_callback,
        par__T_o,
        par_alpha0,
        par_beta,
        par_maxiter,
        par_disp,
        par_tol,
        par_sparse,
        par_lstsq,
        par_sym_pos,
        par_cholesky,
        par_pc,
        par_ip,
        par_permc_spec,
        par_unknown_options,
        NULL,
        var_x,
        var_status,
        var_message,
        var_iteration
    );


    // Release cached frame.
    if ( frame_6d8c7348756bfd788ea5de34005ca67b == cache_frame_6d8c7348756bfd788ea5de34005ca67b )
    {
        Py_DECREF( frame_6d8c7348756bfd788ea5de34005ca67b );
    }
    cache_frame_6d8c7348756bfd788ea5de34005ca67b = NULL;

    assertFrameObject( frame_6d8c7348756bfd788ea5de34005ca67b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_x = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert( var_status == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_status = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
        assert( var_message == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_message = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
        assert( var_iteration == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_iteration = tmp_assign_source_12;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT( var_x );
        tmp_tuple_element_5 = var_x;
        tmp_return_value = PyTuple_New( 4 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_status );
        tmp_tuple_element_5 = var_status;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( var_message );
        tmp_tuple_element_5 = var_message;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
        CHECK_OBJECT( var_iteration );
        tmp_tuple_element_5 = var_iteration;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_5 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_11__linprog_ip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    CHECK_OBJECT( (PyObject *)par_cholesky );
    Py_DECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    CHECK_OBJECT( (PyObject *)par_ip );
    Py_DECREF( par_ip );
    par_ip = NULL;

    CHECK_OBJECT( (PyObject *)par_permc_spec );
    Py_DECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_status );
    Py_DECREF( var_status );
    var_status = NULL;

    CHECK_OBJECT( (PyObject *)var_message );
    Py_DECREF( var_message );
    var_message = NULL;

    CHECK_OBJECT( (PyObject *)var_iteration );
    Py_DECREF( var_iteration );
    var_iteration = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_c0 );
    Py_DECREF( par_c0 );
    par_c0 = NULL;

    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)par__T_o );
    Py_DECREF( par__T_o );
    par__T_o = NULL;

    CHECK_OBJECT( (PyObject *)par_alpha0 );
    Py_DECREF( par_alpha0 );
    par_alpha0 = NULL;

    CHECK_OBJECT( (PyObject *)par_beta );
    Py_DECREF( par_beta );
    par_beta = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    CHECK_OBJECT( (PyObject *)par_disp );
    Py_DECREF( par_disp );
    par_disp = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    CHECK_OBJECT( (PyObject *)par_lstsq );
    Py_DECREF( par_lstsq );
    par_lstsq = NULL;

    CHECK_OBJECT( (PyObject *)par_sym_pos );
    Py_DECREF( par_sym_pos );
    par_sym_pos = NULL;

    Py_XDECREF( par_cholesky );
    par_cholesky = NULL;

    CHECK_OBJECT( (PyObject *)par_pc );
    Py_DECREF( par_pc );
    par_pc = NULL;

    CHECK_OBJECT( (PyObject *)par_ip );
    Py_DECREF( par_ip );
    par_ip = NULL;

    Py_XDECREF( par_permc_spec );
    par_permc_spec = NULL;

    CHECK_OBJECT( (PyObject *)par_unknown_options );
    Py_DECREF( par_unknown_options );
    par_unknown_options = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip$$$function_11__linprog_ip );
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



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd,
        const_str_plain__ip_hsd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36201c1b1cab33e2e1968269b69e718e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_b16a19e95770741ecd4ced334106b088,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_1_eta,
        const_str_plain_eta,
#if PYTHON_VERSION >= 300
        const_str_digest_1c5ab8c80a45b7d92c1e490083ee358f,
#endif
        codeobj_f6af70920351afa82a05839e0f150296,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_10__ip_hsd$$$function_2_eta,
        const_str_plain_eta,
#if PYTHON_VERSION >= 300
        const_str_digest_1c5ab8c80a45b7d92c1e490083ee358f,
#endif
        codeobj_9a46d5c3fed2257781c852aaa732740b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_11__linprog_ip( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_11__linprog_ip,
        const_str_plain__linprog_ip,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6d8c7348756bfd788ea5de34005ca67b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_bb8a80dd4b23ceab55b323a06f1130f6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_1__get_solver,
        const_str_plain__get_solver,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9aaac410a21f703eadf8326c5a989761,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_e67e1230c0b5ba3a2ba4afcba0b61d60,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_1_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_b25163d262b2e608fd92a07f5857ee47,
#endif
        codeobj_0c73aaf694eed03fc8b9c14463d11fa0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_2_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_b25163d262b2e608fd92a07f5857ee47,
#endif
        codeobj_452c087c986d786dba6661acfd5a5451,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_3_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_b25163d262b2e608fd92a07f5857ee47,
#endif
        codeobj_3a3436162db12f0a73c2644ac3ceae40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_1__get_solver$$$function_4_solve,
        const_str_plain_solve,
#if PYTHON_VERSION >= 300
        const_str_digest_b25163d262b2e608fd92a07f5857ee47,
#endif
        codeobj_0f8fe32c9b52578bdb8acb324eaeb7a6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_2__get_delta( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_2__get_delta,
        const_str_plain__get_delta,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_909b34ebd570f06ae4ac3372ed29d101,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_51c25179badd9e591b1b6f136bc6bc43,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_3__sym_solve(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_3__sym_solve,
        const_str_plain__sym_solve,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eaeb57f80163bed14356ad4768f33166,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_42a1f79652b52bfb37e8d9899b02c680,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_4__get_step(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_4__get_step,
        const_str_plain__get_step,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cdfd33cc7792c8497343f916f8559535,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_96b3f131ae45a522908dd9930490865c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_5__get_message(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_5__get_message,
        const_str_plain__get_message,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_037dd71a358093e759e485fe1d0151f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_df5a52113e232030c0d37af053b9ce08,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_6__do_step(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_6__do_step,
        const_str_plain__do_step,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89b2468ae038758a1f84deb0db9eef47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_545fc1b37bacdaee684e3e6a1d6511ef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_7__get_blind_start(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_7__get_blind_start,
        const_str_plain__get_blind_start,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b751d87af4bc6bf6e166a586722963ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_acf6dc820c3326ca1fb1eb7aaf0c90bc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators,
        const_str_plain__indicators,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a206cf138519e4e42a2d309b6cff675d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_0f50e41170e0897b6840bf38de7c1fd3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_1_r_p,
        const_str_plain_r_p,
#if PYTHON_VERSION >= 300
        const_str_digest_41f020564758e80f307684be79fef96e,
#endif
        codeobj_e3d16fc5534cac9fe12c5c9a0b94bc3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_2_r_d,
        const_str_plain_r_d,
#if PYTHON_VERSION >= 300
        const_str_digest_c4cf0f8f33bab7cf2398cd9c59bbf459,
#endif
        codeobj_725702b777715891450e1f2f3e78e9ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_3_r_g,
        const_str_plain_r_g,
#if PYTHON_VERSION >= 300
        const_str_digest_274390281ee8f903a5e1f366b68ddab1,
#endif
        codeobj_130d08ad62cc862166184645689c804a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_4_mu,
        const_str_plain_mu,
#if PYTHON_VERSION >= 300
        const_str_digest_e2b1c7d7e55b78f71e44d24cefa675ad,
#endif
        codeobj_0f795bb465d87c1003fe62fad1e5f479,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_8__indicators$$$function_5_norm,
        const_str_plain_norm,
#if PYTHON_VERSION >= 300
        const_str_digest_3c3d3c54921a531314b5e5cbc9c28b11,
#endif
        codeobj_b4e7bf2a684e2cb5f3f28c3294e3a1a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_9__display_iter( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$optimize$_linprog_ip$$$function_9__display_iter,
        const_str_plain__display_iter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf9d0d002fe8a6fa0a577d3053ef4776,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$optimize$_linprog_ip,
        const_str_digest_7c28b2ce26449e864767bd77950f8770,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$optimize$_linprog_ip =
{
    PyModuleDef_HEAD_INIT,
    "scipy.optimize._linprog_ip",
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

MOD_INIT_DECL( scipy$optimize$_linprog_ip )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_ip );
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
    puts("scipy.optimize._linprog_ip: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_ip: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.optimize._linprog_ip: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$optimize$_linprog_ip" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$optimize$_linprog_ip = Py_InitModule4(
        "scipy.optimize._linprog_ip",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$optimize$_linprog_ip = PyModule_Create( &mdef_scipy$optimize$_linprog_ip );
#endif

    moduledict_scipy$optimize$_linprog_ip = MODULE_DICT( module_scipy$optimize$_linprog_ip );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$optimize$_linprog_ip,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$optimize$_linprog_ip,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_ip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$optimize$_linprog_ip,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$optimize$_linprog_ip );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_becc746910d26d24b351689b348450da, module_scipy$optimize$_linprog_ip );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_f7f6d44379aefcfe8227106df2d0b66b;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_98ecf4f68caa24ac5880c9c1823ad36b;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f7f6d44379aefcfe8227106df2d0b66b = MAKE_MODULE_FRAME( codeobj_f7f6d44379aefcfe8227106df2d0b66b, module_scipy$optimize$_linprog_ip );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f7f6d44379aefcfe8227106df2d0b66b );
    assert( Py_REFCNT( frame_f7f6d44379aefcfe8227106df2d0b66b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 21;
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
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 22;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_scipy;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 23;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sp, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_6ec935c682940e0f3baef1cd7db400ad;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 24;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sparse );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_sps, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_numbers;
        tmp_globals_name_4 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 25;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_numbers, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_warnings;
        tmp_globals_name_5 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_warn_tuple;
        tmp_level_name_5 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 26;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_warn );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_6 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_LinAlgError_tuple;
        tmp_level_name_6 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 27;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LinAlgError );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_LinAlgError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_optimize;
        tmp_globals_name_7 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_95efcc91c82a9f09f784cde48797a1aa_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 28;
        tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$optimize$_linprog_ip,
                const_str_plain_OptimizeWarning,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_OptimizeWarning );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeWarning, tmp_assign_source_15 );
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
                (PyObject *)moduledict_scipy$optimize$_linprog_ip,
                const_str_plain_OptimizeResult,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_OptimizeResult );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_OptimizeResult, tmp_assign_source_16 );
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
                (PyObject *)moduledict_scipy$optimize$_linprog_ip,
                const_str_plain__check_unknown_options,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__check_unknown_options );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__check_unknown_options, tmp_assign_source_17 );
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
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain__linprog_util;
        tmp_globals_name_8 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__postsolve_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 29;
        tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_10 ) )
        {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_scipy$optimize$_linprog_ip,
                const_str_plain__postsolve,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain__postsolve );
        }

        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__postsolve, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = Py_True;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_umfpack, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = Py_True;
        UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_cholmod, tmp_assign_source_20 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_60a2b8ac8bdc53113df526e4af94b9c4;
        tmp_globals_name_9 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_cholesky_tuple;
        tmp_level_name_9 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 33;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_cholesky );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_cholmod, tmp_assign_source_21 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_f7f6d44379aefcfe8227106df2d0b66b, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_f7f6d44379aefcfe8227106df2d0b66b, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_False;
            UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_cholmod, tmp_assign_source_22 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 32;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame) frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_9b568abd0afabc6e6ad6748919c47246;
        tmp_globals_name_10 = (PyObject *)moduledict_scipy$optimize$_linprog_ip;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = 37;
        tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_scikits, tmp_assign_source_23 );
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_f7f6d44379aefcfe8227106df2d0b66b, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_f7f6d44379aefcfe8227106df2d0b66b, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

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
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = Py_False;
            UPDATE_STRING_DICT0( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain_has_umfpack, tmp_assign_source_24 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 36;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame) frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_6;
        branch_end_2:;
    }
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$optimize$_linprog_ip );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7f6d44379aefcfe8227106df2d0b66b );
#endif
    popFrameStack();

    assertFrameObject( frame_f7f6d44379aefcfe8227106df2d0b66b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7f6d44379aefcfe8227106df2d0b66b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7f6d44379aefcfe8227106df2d0b66b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7f6d44379aefcfe8227106df2d0b66b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7f6d44379aefcfe8227106df2d0b66b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_false_true_true_str_plain_MMD_AT_PLUS_A_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_25 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_1__get_solver( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_solver, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_false_true_true_true_false_str_plain_MMD_AT_PLUS_A_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_26 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_2__get_delta( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_delta, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_3__sym_solve(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__sym_solve, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_4__get_step(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_step, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_5__get_message(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_message, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_6__do_step(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__do_step, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_7__get_blind_start(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__get_blind_start, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_8__indicators(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__indicators, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_33 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_9__display_iter( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__display_iter, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_10__ip_hsd(  );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__ip_hsd, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_defaults_4;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = const_int_0;
        tmp_defaults_4 = PyTuple_New( 17 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = PyList_New( 0 );
        PyTuple_SET_ITEM( tmp_defaults_4, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_0_99995;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 5, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_0_1;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 6, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_1000;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 7, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 8, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_float_1eminus_08;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 9, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 10, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 11, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 12, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 13, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_True;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 14, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 15, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_MMD_AT_PLUS_A;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_defaults_4, 16, tmp_tuple_element_1 );
        tmp_assign_source_35 = MAKE_FUNCTION_scipy$optimize$_linprog_ip$$$function_11__linprog_ip( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain__linprog_ip, tmp_assign_source_35 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$optimize$_linprog_ip, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$optimize$_linprog_ip );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
