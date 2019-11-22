/* Generated code for Python module 'numpy.polynomial.polyutils'
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

/* The "_module_numpy$polynomial$polyutils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$polyutils;
PyDictObject *moduledict_numpy$polynomial$polyutils;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_seq;
extern PyObject *const_str_plain_xi;
static PyObject *const_str_digest_64b87b83ba9d8a368190eddba29f3dd7;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_index;
static PyObject *const_str_digest_86bddf8ddd67e49da0bc28efd50b11b2;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_getdomain;
static PyObject *const_str_digest_88ea85868dacccabad48a8aef44c097b;
extern PyObject *const_str_plain_array;
extern PyObject *const_tuple_list_int_pos_1_list_tuple;
static PyObject *const_str_plain_vander_f;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_prd;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_digest_3a21fa4bd62cdcaaa70f24e241b85885;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_i;
static PyObject *const_str_digest_a58c5aeb44f29deee4fc7a1a266f2895;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_dcc373994db858994f09cc5bb9c9a0c3;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_plain_degx;
static PyObject *const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_plain_PolyDomainError;
static PyObject *const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_trim;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e;
extern PyObject *const_str_plain__fit;
static PyObject *const_str_plain_line_f;
static PyObject *const_str_plain_alist;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b3b20c6499548f5f690faa8d63dd85e8;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_rmin;
extern PyObject *const_str_plain_q;
extern PyObject *const_dict_0aaf07bc1f9989227b8953d83057c37b;
extern PyObject *const_dict_ee9b50b2ea01af7ea63a79da3e3468b3;
static PyObject *const_str_digest_dcf41904ab4883fb834b2fe6c347ec73;
static PyObject *const_str_digest_13227f847c5a19dd9cedee16debb959e;
static PyObject *const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple;
extern PyObject *const_str_plain_full;
static PyObject *const_str_digest_fec7117366bd52892d39d8e43ffa8ae4;
extern PyObject *const_str_plain_cc;
extern PyObject *const_str_plain__valnd;
extern PyObject *const_str_plain__deprecate_as_int;
static PyObject *const_str_digest_4123428f5f27e31c483a1d929e97a334;
static PyObject *const_tuple_e770dc85d4ed7293a283330de0053906_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_typecodes;
static PyObject *const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain__pow;
extern PyObject *const_tuple_str_plain_d_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_as_series;
extern PyObject *const_slice_none_int_neg_2_none;
extern PyObject *const_str_plain_Ellipsis;
static PyObject *const_str_digest_8cddc816cdb78f26976645673d7a8785;
extern PyObject *const_str_plain_resids;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_it;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_mapdomain;
static PyObject *const_str_digest_df4438039abddc03aa325ded7a3d73dd;
static PyObject *const_str_digest_846377ae7ebf64e407501456090ac4b6;
extern PyObject *const_str_plain_ix;
extern PyObject *const_tuple_ellipsis_none_slice_none_none_none_tuple;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_PolyBase_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_RankWarning;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_21a64dcb81594be5923fffb0d0da01da;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_imin;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_c2;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_rhs;
static PyObject *const_tuple_015edfb0413cf8401851524b894f5723_tuple;
extern PyObject *const_str_plain_roots;
extern PyObject *const_dict_2254aca578e492e580f4e46a40647b9b;
static PyObject *const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple;
extern PyObject *const_str_plain_x0;
extern PyObject *const_str_plain_quo;
extern PyObject *const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
extern PyObject *const_str_plain_imag;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain_old;
static PyObject *const_str_plain_vz;
extern PyObject *const_str_plain_rem;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_a1a1115f4e0f0a2f69d2729c2672d2c9;
extern PyObject *const_str_plain_lmax;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_degrees;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_vy;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain__add;
static PyObject *const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple;
static PyObject *const_tuple_ellipsis_none_none_tuple;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain__fromroots;
static PyObject *const_str_digest_38ddb95e1ec5856024db3736b3b90fc6;
extern PyObject *const_str_plain_lc2;
extern PyObject *const_str_plain_trimcoef;
extern PyObject *const_str_plain_trimseq;
static PyObject *const_tuple_str_plain_seq_str_plain_i_tuple;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_str_plain_van;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain__gridnd;
static PyObject *const_str_digest_f6944356c8987164c4200fa24fd72607;
extern PyObject *const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_f8f03ae7f408e33206ad99264ded8eb9;
extern PyObject *const_str_plain_rank;
extern PyObject *const_slice_none_int_pos_1_none;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_338f0160593f851c0143eebfd79bfeca;
static PyObject *const_tuple_ellipsis_none_slice_none_none_none_none_tuple;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_c1;
extern PyObject *const_slice_none_int_neg_3_none;
extern PyObject *const_str_plain__vander2d;
static PyObject *const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple;
extern PyObject *const_str_plain_pow;
extern PyObject *const_int_0;
static PyObject *const_str_plain_degy;
extern PyObject *const_str_plain_off;
extern PyObject *const_str_digest_3943f956186dfbaba7ee5555afa1df28;
extern PyObject *const_str_plain_finfo;
static PyObject *const_str_digest_70ac5ec746d0a4795310a3e396a1d93e;
static PyObject *const_tuple_ellipsis_none_tuple;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_digest_96913cd14b29e43ad3329fdc3de70b26;
extern PyObject *const_str_plain_Complex;
static PyObject *const_str_plain_degz;
extern PyObject *const_str_plain_tensor;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_mul_f;
static PyObject *const_str_digest_643654cb13449fa2a76e1bdee86349c8;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_4471058343fad3fddb5c2ec908785a22;
static PyObject *const_tuple_str_plain_PolyError_tuple_type_Exception_tuple_tuple;
static PyObject *const_str_digest_6901a8c879c55a361bd5ce29530fcffc;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_ind;
static PyObject *const_str_plain_vx;
static PyObject *const_tuple_0ab89489271e2525207b99b87b07b687_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_dtype_tuple;
extern PyObject *const_dict_5c9928d3d4adf8d21e4940309b7f60ed;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_lstsq;
static PyObject *const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple;
extern PyObject *const_str_plain__sub;
extern PyObject *const_int_neg_3;
static PyObject *const_str_digest_1343b7fd691b6ccde63dcfd7f7be9b49;
static PyObject *const_str_plain_oldlen;
static PyObject *const_str_digest_417a5d06d4d954b63a0b0e1634b358ab;
static PyObject *const_str_digest_d4402ccc6609c8cb901f6facc83c7413;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain_lc1;
static PyObject *const_str_digest_1a86acac8b575cf418c742e35393e18a;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_35bc8f981eaca920d98448862867f3b0;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_8951ccdacb98b200a9a15eb53d76a6f9;
static PyObject *const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple;
extern PyObject *const_tuple_none_false_none_tuple;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_str_plain_z;
static PyObject *const_tuple_str_plain_r_str_plain_line_f_tuple;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_PolyBase;
extern PyObject *const_str_plain_y;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_ellipsis_none_none_slice_none_none_none_tuple;
extern PyObject *const_str_digest_5075ddfb8c5b93b4cdb1b7871af68165;
static PyObject *const_str_digest_c3fbef28d81c0d779c444231a45b0d97;
static PyObject *const_str_digest_1722cd2b807715d51e1b79f34119dd17;
extern PyObject *const_str_plain_lhs;
extern PyObject *const_str_plain_iu;
extern PyObject *const_str_plain_rmax;
static PyObject *const_dict_d61f4d385fe121badbdc8e4bc7fe576f;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_operator;
static PyObject *const_str_digest_606a253911dfde14fa932a8cd2e635e9;
extern PyObject *const_str_plain__vander3d;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_mapparms;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_86a0b56433fe35dfdaa0791504789667;
extern PyObject *const_str_plain_sort;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_ceecd28074cde975bbff22a5ee88a8e5;
extern PyObject *const_str_plain__div;
static PyObject *const_tuple_0016fc8b32868b77b22ba011f167547b_tuple;
extern PyObject *const_str_plain_scl;
static PyObject *const_str_plain_val_f;
extern PyObject *const_str_plain_desc;
extern PyObject *const_str_plain_imax;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_square;
extern PyObject *const_str_plain_newlen;
static PyObject *const_str_plain_PolyError;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_64b87b83ba9d8a368190eddba29f3dd7 = UNSTREAM_STRING_ASCII( &constant_bin[ 3863494 ], 312, 0 );
    const_str_digest_86bddf8ddd67e49da0bc28efd50b11b2 = UNSTREAM_STRING_ASCII( &constant_bin[ 3863806 ], 48, 0 );
    const_str_digest_88ea85868dacccabad48a8aef44c097b = UNSTREAM_STRING_ASCII( &constant_bin[ 3863854 ], 21, 0 );
    const_str_plain_vander_f = UNSTREAM_STRING_ASCII( &constant_bin[ 3863875 ], 8, 1 );
    const_str_digest_a58c5aeb44f29deee4fc7a1a266f2895 = UNSTREAM_STRING_ASCII( &constant_bin[ 3863883 ], 29, 0 );
    const_str_digest_dcc373994db858994f09cc5bb9c9a0c3 = UNSTREAM_STRING_ASCII( &constant_bin[ 3863912 ], 310, 0 );
    const_str_plain_degx = UNSTREAM_STRING_ASCII( &constant_bin[ 3864222 ], 4, 1 );
    const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 1, const_str_plain_old ); Py_INCREF( const_str_plain_old );
    PyTuple_SET_ITEM( const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 2, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    PyTuple_SET_ITEM( const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 3, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 4, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_plain_PolyDomainError = UNSTREAM_STRING_ASCII( &constant_bin[ 3864226 ], 15, 1 );
    const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple = PyTuple_New( 4 );
    const_str_plain_val_f = UNSTREAM_STRING_ASCII( &constant_bin[ 3863602 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple, 0, const_str_plain_val_f ); Py_INCREF( const_str_plain_val_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple, 3, const_str_plain_xi ); Py_INCREF( const_str_plain_xi );
    const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e = UNSTREAM_STRING_ASCII( &constant_bin[ 3864241 ], 214, 0 );
    const_str_plain_line_f = UNSTREAM_STRING_ASCII( &constant_bin[ 1303588 ], 6, 1 );
    const_str_plain_alist = UNSTREAM_STRING_ASCII( &constant_bin[ 1422719 ], 5, 1 );
    const_str_digest_b3b20c6499548f5f690faa8d63dd85e8 = UNSTREAM_STRING_ASCII( &constant_bin[ 3864455 ], 36, 0 );
    const_str_digest_dcf41904ab4883fb834b2fe6c347ec73 = UNSTREAM_STRING_ASCII( &constant_bin[ 3864491 ], 98, 0 );
    const_str_digest_13227f847c5a19dd9cedee16debb959e = UNSTREAM_STRING_ASCII( &constant_bin[ 3864589 ], 24, 0 );
    const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 0, const_str_plain_old ); Py_INCREF( const_str_plain_old );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 1, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_str_plain_oldlen = UNSTREAM_STRING_ASCII( &constant_bin[ 3864613 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 2, const_str_plain_oldlen ); Py_INCREF( const_str_plain_oldlen );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 3, const_str_plain_newlen ); Py_INCREF( const_str_plain_newlen );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 4, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 5, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_digest_fec7117366bd52892d39d8e43ffa8ae4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3864619 ], 509, 0 );
    const_str_digest_4123428f5f27e31c483a1d929e97a334 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865128 ], 64, 0 );
    const_tuple_e770dc85d4ed7293a283330de0053906_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 0, const_str_plain_vander_f ); Py_INCREF( const_str_plain_vander_f );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 3, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 4, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 5, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 6, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 7, const_str_plain_lmax ); Py_INCREF( const_str_plain_lmax );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 8, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_plain_van = UNSTREAM_STRING_ASCII( &constant_bin[ 1327 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 9, const_str_plain_van ); Py_INCREF( const_str_plain_van );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 10, const_str_plain_lhs ); Py_INCREF( const_str_plain_lhs );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 11, const_str_plain_rhs ); Py_INCREF( const_str_plain_rhs );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 12, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 13, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 14, const_str_plain_resids ); Py_INCREF( const_str_plain_resids );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 15, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 16, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 17, const_str_plain_cc ); Py_INCREF( const_str_plain_cc );
    PyTuple_SET_ITEM( const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 18, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 0, const_str_plain_RankWarning ); Py_INCREF( const_str_plain_RankWarning );
    const_str_plain_PolyError = UNSTREAM_STRING_ASCII( &constant_bin[ 3865192 ], 9, 1 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 1, const_str_plain_PolyError ); Py_INCREF( const_str_plain_PolyError );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 2, const_str_plain_PolyDomainError ); Py_INCREF( const_str_plain_PolyDomainError );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 3, const_str_plain_as_series ); Py_INCREF( const_str_plain_as_series );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 4, const_str_plain_trimseq ); Py_INCREF( const_str_plain_trimseq );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 5, const_str_plain_trimcoef ); Py_INCREF( const_str_plain_trimcoef );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 6, const_str_plain_getdomain ); Py_INCREF( const_str_plain_getdomain );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 7, const_str_plain_mapdomain ); Py_INCREF( const_str_plain_mapdomain );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 8, const_str_plain_mapparms ); Py_INCREF( const_str_plain_mapparms );
    const_str_plain_PolyBase = UNSTREAM_STRING_ASCII( &constant_bin[ 3581875 ], 8, 1 );
    PyList_SET_ITEM( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list, 9, const_str_plain_PolyBase ); Py_INCREF( const_str_plain_PolyBase );
    const_str_digest_8cddc816cdb78f26976645673d7a8785 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865201 ], 24, 0 );
    const_str_digest_df4438039abddc03aa325ded7a3d73dd = UNSTREAM_STRING_ASCII( &constant_bin[ 3865225 ], 59, 0 );
    const_str_digest_846377ae7ebf64e407501456090ac4b6 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865284 ], 164, 0 );
    const_tuple_str_plain_PolyBase_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PolyBase_tuple_type_object_tuple_tuple, 0, const_str_plain_PolyBase ); Py_INCREF( const_str_plain_PolyBase );
    PyTuple_SET_ITEM( const_tuple_str_plain_PolyBase_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_21a64dcb81594be5923fffb0d0da01da = UNSTREAM_STRING_ASCII( &constant_bin[ 3865448 ], 37, 0 );
    const_tuple_015edfb0413cf8401851524b894f5723_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 0, const_str_plain_vander_f ); Py_INCREF( const_str_plain_vander_f );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 3, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 4, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 5, const_str_plain_degx ); Py_INCREF( const_str_plain_degx );
    const_str_plain_degy = UNSTREAM_STRING_ASCII( &constant_bin[ 3865485 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 6, const_str_plain_degy ); Py_INCREF( const_str_plain_degy );
    const_str_plain_degz = UNSTREAM_STRING_ASCII( &constant_bin[ 2806849 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 7, const_str_plain_degz ); Py_INCREF( const_str_plain_degz );
    const_str_plain_vx = UNSTREAM_STRING_ASCII( &constant_bin[ 3355969 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 8, const_str_plain_vx ); Py_INCREF( const_str_plain_vx );
    const_str_plain_vy = UNSTREAM_STRING_ASCII( &constant_bin[ 59772 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 9, const_str_plain_vy ); Py_INCREF( const_str_plain_vy );
    const_str_plain_vz = UNSTREAM_STRING_ASCII( &constant_bin[ 440416 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 10, const_str_plain_vz ); Py_INCREF( const_str_plain_vz );
    PyTuple_SET_ITEM( const_tuple_015edfb0413cf8401851524b894f5723_tuple, 11, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 0, const_str_plain_vander_f ); Py_INCREF( const_str_plain_vander_f );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 3, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 4, const_str_plain_degx ); Py_INCREF( const_str_plain_degx );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 5, const_str_plain_degy ); Py_INCREF( const_str_plain_degy );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 6, const_str_plain_vx ); Py_INCREF( const_str_plain_vx );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 7, const_str_plain_vy ); Py_INCREF( const_str_plain_vy );
    PyTuple_SET_ITEM( const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 8, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_a1a1115f4e0f0a2f69d2729c2672d2c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865489 ], 400, 0 );
    const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple, 1, const_str_plain_desc ); Py_INCREF( const_str_plain_desc );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple, 2, const_str_plain_ix ); Py_INCREF( const_str_plain_ix );
    const_tuple_ellipsis_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_tuple, 0, Py_Ellipsis ); Py_INCREF( Py_Ellipsis );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_38ddb95e1ec5856024db3736b3b90fc6 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865889 ], 24, 0 );
    const_tuple_str_plain_seq_str_plain_i_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_seq_str_plain_i_tuple, 0, const_str_plain_seq ); Py_INCREF( const_str_plain_seq );
    PyTuple_SET_ITEM( const_tuple_str_plain_seq_str_plain_i_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_f6944356c8987164c4200fa24fd72607 = UNSTREAM_STRING_ASCII( &constant_bin[ 3865913 ], 1083, 0 );
    const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_plain_mul_f = UNSTREAM_STRING_ASCII( &constant_bin[ 3865703 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple, 1, const_str_plain_mul_f ); Py_INCREF( const_str_plain_mul_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple, 2, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple, 3, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_digest_f8f03ae7f408e33206ad99264ded8eb9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3866996 ], 404, 0 );
    const_str_digest_338f0160593f851c0143eebfd79bfeca = UNSTREAM_STRING_ASCII( &constant_bin[ 3867400 ], 26, 0 );
    const_tuple_ellipsis_none_slice_none_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_slice_none_none_none_none_tuple, 0, Py_Ellipsis ); Py_INCREF( Py_Ellipsis );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_slice_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_slice_none_none_none_none_tuple, 2, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_slice_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 1, const_str_plain_rmin ); Py_INCREF( const_str_plain_rmin );
    PyTuple_SET_ITEM( const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 2, const_str_plain_rmax ); Py_INCREF( const_str_plain_rmax );
    PyTuple_SET_ITEM( const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 3, const_str_plain_imin ); Py_INCREF( const_str_plain_imin );
    PyTuple_SET_ITEM( const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 4, const_str_plain_imax ); Py_INCREF( const_str_plain_imax );
    const_str_digest_70ac5ec746d0a4795310a3e396a1d93e = UNSTREAM_STRING_ASCII( &constant_bin[ 3867426 ], 21, 0 );
    const_tuple_ellipsis_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_tuple, 0, Py_Ellipsis ); Py_INCREF( Py_Ellipsis );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_96913cd14b29e43ad3329fdc3de70b26 = UNSTREAM_STRING_ASCII( &constant_bin[ 3867447 ], 1845, 0 );
    const_str_digest_643654cb13449fa2a76e1bdee86349c8 = UNSTREAM_STRING_ASCII( &constant_bin[ 3869292 ], 1554, 0 );
    const_str_digest_4471058343fad3fddb5c2ec908785a22 = UNSTREAM_STRING_ASCII( &constant_bin[ 3870846 ], 64, 0 );
    const_tuple_str_plain_PolyError_tuple_type_Exception_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PolyError_tuple_type_Exception_tuple_tuple, 0, const_str_plain_PolyError ); Py_INCREF( const_str_plain_PolyError );
    PyTuple_SET_ITEM( const_tuple_str_plain_PolyError_tuple_type_Exception_tuple_tuple, 1, const_tuple_type_Exception_tuple ); Py_INCREF( const_tuple_type_Exception_tuple );
    const_str_digest_6901a8c879c55a361bd5ce29530fcffc = UNSTREAM_STRING_ASCII( &constant_bin[ 3870910 ], 279, 0 );
    const_tuple_0ab89489271e2525207b99b87b07b687_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 0, const_str_plain_mul_f ); Py_INCREF( const_str_plain_mul_f );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 2, const_str_plain_pow ); Py_INCREF( const_str_plain_pow );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 3, const_str_plain_maxpower ); Py_INCREF( const_str_plain_maxpower );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 4, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 5, const_str_plain_prd ); Py_INCREF( const_str_plain_prd );
    PyTuple_SET_ITEM( const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 0, const_str_plain_val_f ); Py_INCREF( const_str_plain_val_f );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 3, const_str_plain_it ); Py_INCREF( const_str_plain_it );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 4, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 5, const_str_plain_xi ); Py_INCREF( const_str_plain_xi );
    const_str_digest_1343b7fd691b6ccde63dcfd7f7be9b49 = UNSTREAM_STRING_ASCII( &constant_bin[ 3871189 ], 442, 0 );
    const_str_digest_417a5d06d4d954b63a0b0e1634b358ab = UNSTREAM_STRING_ASCII( &constant_bin[ 3871631 ], 33, 0 );
    const_str_digest_d4402ccc6609c8cb901f6facc83c7413 = UNSTREAM_STRING_ASCII( &constant_bin[ 3871664 ], 38, 0 );
    const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15 = UNSTREAM_STRING_ASCII( &constant_bin[ 3871702 ], 28, 0 );
    const_str_digest_1a86acac8b575cf418c742e35393e18a = UNSTREAM_STRING_ASCII( &constant_bin[ 3871730 ], 26, 0 );
    const_str_digest_35bc8f981eaca920d98448862867f3b0 = UNSTREAM_STRING_ASCII( &constant_bin[ 3871756 ], 292, 0 );
    const_str_digest_8951ccdacb98b200a9a15eb53d76a6f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3872048 ], 1004, 0 );
    const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 0, const_str_plain_mul_f ); Py_INCREF( const_str_plain_mul_f );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 1, const_str_plain_c1 ); Py_INCREF( const_str_plain_c1 );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 2, const_str_plain_c2 ); Py_INCREF( const_str_plain_c2 );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 3, const_str_plain_lc1 ); Py_INCREF( const_str_plain_lc1 );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 4, const_str_plain_lc2 ); Py_INCREF( const_str_plain_lc2 );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 5, const_str_plain_quo ); Py_INCREF( const_str_plain_quo );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 6, const_str_plain_rem ); Py_INCREF( const_str_plain_rem );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 8, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 9, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    const_tuple_str_plain_r_str_plain_line_f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_line_f_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_line_f_tuple, 1, const_str_plain_line_f ); Py_INCREF( const_str_plain_line_f );
    const_tuple_ellipsis_none_none_slice_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_slice_none_none_none_tuple, 0, Py_Ellipsis ); Py_INCREF( Py_Ellipsis );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_slice_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_slice_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_ellipsis_none_none_slice_none_none_none_tuple, 3, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    const_str_digest_c3fbef28d81c0d779c444231a45b0d97 = UNSTREAM_STRING_ASCII( &constant_bin[ 3873052 ], 1105, 0 );
    const_str_digest_1722cd2b807715d51e1b79f34119dd17 = UNSTREAM_STRING_ASCII( &constant_bin[ 3874157 ], 398, 0 );
    const_dict_d61f4d385fe121badbdc8e4bc7fe576f = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d61f4d385fe121badbdc8e4bc7fe576f, const_str_plain_tensor, Py_False );
    assert( PyDict_Size( const_dict_d61f4d385fe121badbdc8e4bc7fe576f ) == 1 );
    const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 0, const_str_plain_alist ); Py_INCREF( const_str_plain_alist );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 1, const_str_plain_trim ); Py_INCREF( const_str_plain_trim );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 2, const_str_plain_arrays ); Py_INCREF( const_str_plain_arrays );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 3, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 4, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 5, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 6, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_digest_a0d13325845562e4bbc31bdb2ba6618b = UNSTREAM_STRING_ASCII( &constant_bin[ 3874555 ], 26, 0 );
    const_str_digest_606a253911dfde14fa932a8cd2e635e9 = UNSTREAM_STRING_ASCII( &constant_bin[ 3874581 ], 1328, 0 );
    const_str_digest_86a0b56433fe35dfdaa0791504789667 = UNSTREAM_STRING_ASCII( &constant_bin[ 3875909 ], 35, 0 );
    const_str_digest_ceecd28074cde975bbff22a5ee88a8e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 3875944 ], 295, 0 );
    const_tuple_0016fc8b32868b77b22ba011f167547b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 0, const_str_plain_line_f ); Py_INCREF( const_str_plain_line_f );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 1, const_str_plain_mul_f ); Py_INCREF( const_str_plain_mul_f );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 2, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 3, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 6, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 7, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$polyutils( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_858415ff7519c992a853f0167be5db33;
static PyCodeObject *codeobj_d37e1b4c49dbad624e035dd53f1e7db1;
static PyCodeObject *codeobj_8de15f07bd7fc9f20368fee366aa7d63;
static PyCodeObject *codeobj_b2a021e8be8f8c38b324a6624e5bc942;
static PyCodeObject *codeobj_3362a3a346dd35de6e0520340ffa8694;
static PyCodeObject *codeobj_7ba89ca1013e68f9d03a893b3c87760e;
static PyCodeObject *codeobj_305afad0b81c2b24c3e342819a9f787f;
static PyCodeObject *codeobj_ef1a882391e18d24bb4d98b24596cab6;
static PyCodeObject *codeobj_f611b64defd46832c84341b744f9335e;
static PyCodeObject *codeobj_324997a6638e7b73abeb64001048a0de;
static PyCodeObject *codeobj_c2cacf06261bfbcee34859c9221ccc83;
static PyCodeObject *codeobj_cc2528e6eff54e6d7e64ff064245b109;
static PyCodeObject *codeobj_535e070f7d544047ac0b26fde43d12e1;
static PyCodeObject *codeobj_32697007c1d97981caff23da5ee4bdec;
static PyCodeObject *codeobj_69c72dfefee04b675bfbde74be2a6b15;
static PyCodeObject *codeobj_1fbeb9368a4f4d6cdaf281ca77b728f6;
static PyCodeObject *codeobj_a90280ae7d81c308808ce9dfc5cceafd;
static PyCodeObject *codeobj_94d6aecb7cfcc0066df7ccdcc169b582;
static PyCodeObject *codeobj_8c80621e000021559d9287e9ded0e566;
static PyCodeObject *codeobj_1ff0f7ead4c049b7f9db97a367943f25;
static PyCodeObject *codeobj_f0f16afb27b7604960d36530ef1dca61;
static PyCodeObject *codeobj_03b32df7379cab2c6d364e1f46168871;
static PyCodeObject *codeobj_5389b255abb26161a850e6104c49e41a;
static PyCodeObject *codeobj_d35a275f1d72abf9860c5459feec121e;
static PyCodeObject *codeobj_026b3372ba871ef03f5feece96022e59;
static PyCodeObject *codeobj_b4f050e230b69c34c955edc9699c5119;
static PyCodeObject *codeobj_83205d0421d6f4d40fa38f611cb390a8;
static PyCodeObject *codeobj_6e11d6f7615729d4670dd89cc953b5b0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a58c5aeb44f29deee4fc7a1a266f2895 );
    codeobj_858415ff7519c992a853f0167be5db33 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 177, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d37e1b4c49dbad624e035dd53f1e7db1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 178, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8de15f07bd7fc9f20368fee366aa7d63 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 180, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b2a021e8be8f8c38b324a6624e5bc942 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 183, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3362a3a346dd35de6e0520340ffa8694 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 185, const_tuple_str_plain_a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ba89ca1013e68f9d03a893b3c87760e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 199, const_tuple_str_plain_a_str_plain_dtype_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_305afad0b81c2b24c3e342819a9f787f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 430, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef1a882391e18d24bb4d98b24596cab6 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 453, const_tuple_str_plain_d_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f611b64defd46832c84341b744f9335e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 483, const_tuple_str_plain_r_str_plain_line_f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_324997a6638e7b73abeb64001048a0de = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 487, const_tuple_str_plain_i_str_plain_mul_f_str_plain_p_str_plain_m_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c2cacf06261bfbcee34859c9221ccc83 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_86a0b56433fe35dfdaa0791504789667, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_cc2528e6eff54e6d7e64ff064245b109 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add, 579, const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_535e070f7d544047ac0b26fde43d12e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__deprecate_as_int, 727, const_tuple_str_plain_x_str_plain_desc_str_plain_ix_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_32697007c1d97981caff23da5ee4bdec = MAKE_CODEOBJ( module_filename_obj, const_str_plain__div, 543, const_tuple_f46dbfa56d57970eb96eb9854391fe77_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_69c72dfefee04b675bfbde74be2a6b15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fit, 606, const_tuple_e770dc85d4ed7293a283330de0053906_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fbeb9368a4f4d6cdaf281ca77b728f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fromroots, 465, const_tuple_0016fc8b32868b77b22ba011f167547b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a90280ae7d81c308808ce9dfc5cceafd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__gridnd, 527, const_tuple_str_plain_val_f_str_plain_c_str_plain_args_str_plain_xi_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_94d6aecb7cfcc0066df7ccdcc169b582 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pow, 694, const_tuple_0ab89489271e2525207b99b87b07b687_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8c80621e000021559d9287e9ded0e566 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sub, 592, const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ff0f7ead4c049b7f9db97a367943f25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__valnd, 495, const_tuple_9528a6e27ca927f66f3bfeb524c44858_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_f0f16afb27b7604960d36530ef1dca61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__vander2d, 418, const_tuple_58517080d1af88e6d3de711f2ecff7c2_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_03b32df7379cab2c6d364e1f46168871 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__vander3d, 441, const_tuple_015edfb0413cf8401851524b894f5723_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5389b255abb26161a850e6104c49e41a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_series, 127, const_tuple_82ad0306e21579e6a7b33f21d7f65c0e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d35a275f1d72abf9860c5459feec121e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getdomain, 257, const_tuple_64abcfb605726e59df11aa8a35f41c41_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_026b3372ba871ef03f5feece96022e59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapdomain, 350, const_tuple_78ef24da77ef6843306525e3c2ad5b11_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4f050e230b69c34c955edc9699c5119 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapparms, 303, const_tuple_e5166813f4274cc0325d4d7237b6b52a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83205d0421d6f4d40fa38f611cb390a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trimcoef, 203, const_tuple_str_plain_c_str_plain_tol_str_plain_ind_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6e11d6f7615729d4670dd89cc953b5b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trimseq, 97, const_tuple_str_plain_seq_str_plain_i_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_10__valnd(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_11__gridnd(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_12__div(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_13__add(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_14__sub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_15__fit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_16__pow(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_17__deprecate_as_int(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_7__vander2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_8__vander3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_9__fromroots(  );


// The module function definitions.
static PyObject *impl_numpy$polynomial$polyutils$$$function_1_trimseq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_seq = python_pars[ 0 ];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6e11d6f7615729d4670dd89cc953b5b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6e11d6f7615729d4670dd89cc953b5b0 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e11d6f7615729d4670dd89cc953b5b0, codeobj_6e11d6f7615729d4670dd89cc953b5b0, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *) );
    frame_6e11d6f7615729d4670dd89cc953b5b0 = cache_frame_6e11d6f7615729d4670dd89cc953b5b0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e11d6f7615729d4670dd89cc953b5b0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e11d6f7615729d4670dd89cc953b5b0 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_seq );
        tmp_len_arg_1 = par_seq;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        CHECK_OBJECT( par_seq );
        tmp_return_value = par_seq;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_xrange_high_1;
            PyObject *tmp_xrange_step_1;
            CHECK_OBJECT( par_seq );
            tmp_len_arg_2 = par_seq;
            tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            assert( !(tmp_xrange_low_1 == NULL) );
            tmp_xrange_high_1 = const_int_neg_1;
            tmp_xrange_step_1 = const_int_neg_1;
            tmp_iter_arg_1 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
            Py_DECREF( tmp_xrange_low_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_1;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oo";
                    exception_lineno = 121;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_2;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_3 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_3;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_seq );
            tmp_subscribed_name_1 = par_seq;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_1 = var_i;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_compexpr_right_2 = const_int_0;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "oo";
                goto try_except_handler_2;
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
            goto loop_end_1;
            branch_no_2:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "oo";
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
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_seq );
            tmp_subscribed_name_2 = par_seq;
            tmp_start_name_1 = Py_None;
            if ( var_i == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "i" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 124;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_i;
            tmp_right_name_2 = const_int_pos_1;
            tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e11d6f7615729d4670dd89cc953b5b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e11d6f7615729d4670dd89cc953b5b0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e11d6f7615729d4670dd89cc953b5b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e11d6f7615729d4670dd89cc953b5b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e11d6f7615729d4670dd89cc953b5b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e11d6f7615729d4670dd89cc953b5b0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e11d6f7615729d4670dd89cc953b5b0,
        type_description_1,
        par_seq,
        var_i
    );


    // Release cached frame.
    if ( frame_6e11d6f7615729d4670dd89cc953b5b0 == cache_frame_6e11d6f7615729d4670dd89cc953b5b0 )
    {
        Py_DECREF( frame_6e11d6f7615729d4670dd89cc953b5b0 );
    }
    cache_frame_6e11d6f7615729d4670dd89cc953b5b0 = NULL;

    assertFrameObject( frame_6e11d6f7615729d4670dd89cc953b5b0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_1_trimseq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_seq );
    Py_DECREF( par_seq );
    par_seq = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_1_trimseq );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_2_as_series( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_alist = python_pars[ 0 ];
    PyObject *par_trim = python_pars[ 1 ];
    PyObject *var_arrays = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_a = NULL;
    PyObject *var_tmp = NULL;
    PyObject *var_dtype = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *outline_1_var_a = NULL;
    PyObject *outline_2_var_a = NULL;
    PyObject *outline_3_var_a = NULL;
    PyObject *outline_4_var_a = NULL;
    PyObject *outline_5_var_a = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_listcomp_6__$0 = NULL;
    PyObject *tmp_listcomp_6__contraction = NULL;
    PyObject *tmp_listcomp_6__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_5389b255abb26161a850e6104c49e41a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_858415ff7519c992a853f0167be5db33_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_858415ff7519c992a853f0167be5db33_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_d37e1b4c49dbad624e035dd53f1e7db1_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_d37e1b4c49dbad624e035dd53f1e7db1_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_8de15f07bd7fc9f20368fee366aa7d63_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_8de15f07bd7fc9f20368fee366aa7d63_4 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_b2a021e8be8f8c38b324a6624e5bc942_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_b2a021e8be8f8c38b324a6624e5bc942_5 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_3362a3a346dd35de6e0520340ffa8694_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_3362a3a346dd35de6e0520340ffa8694_6 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_FrameObject *frame_7ba89ca1013e68f9d03a893b3c87760e_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_7ba89ca1013e68f9d03a893b3c87760e_7 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_5389b255abb26161a850e6104c49e41a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5389b255abb26161a850e6104c49e41a, codeobj_5389b255abb26161a850e6104c49e41a, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5389b255abb26161a850e6104c49e41a = cache_frame_5389b255abb26161a850e6104c49e41a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5389b255abb26161a850e6104c49e41a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5389b255abb26161a850e6104c49e41a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_alist );
            tmp_iter_arg_1 = par_alist;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_858415ff7519c992a853f0167be5db33_2, codeobj_858415ff7519c992a853f0167be5db33, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_858415ff7519c992a853f0167be5db33_2 = cache_frame_858415ff7519c992a853f0167be5db33_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_858415ff7519c992a853f0167be5db33_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_858415ff7519c992a853f0167be5db33_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 177;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_5;
                Py_INCREF( outline_0_var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 177;
                type_description_2 = "o";
                goto try_except_handler_3;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( outline_0_var_a );
            tmp_tuple_element_1 = outline_0_var_a;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_0aaf07bc1f9989227b8953d83057c37b );
            frame_858415ff7519c992a853f0167be5db33_2->m_frame.f_lineno = 177;
            tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 177;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
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
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_858415ff7519c992a853f0167be5db33_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_1:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_858415ff7519c992a853f0167be5db33_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_858415ff7519c992a853f0167be5db33_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_858415ff7519c992a853f0167be5db33_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_858415ff7519c992a853f0167be5db33_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_858415ff7519c992a853f0167be5db33_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_858415ff7519c992a853f0167be5db33_2,
            type_description_2,
            outline_0_var_a
        );


        // Release cached frame.
        if ( frame_858415ff7519c992a853f0167be5db33_2 == cache_frame_858415ff7519c992a853f0167be5db33_2 )
        {
            Py_DECREF( frame_858415ff7519c992a853f0167be5db33_2 );
        }
        cache_frame_858415ff7519c992a853f0167be5db33_2 = NULL;

        assertFrameObject( frame_858415ff7519c992a853f0167be5db33_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF( outline_0_var_a );
        outline_0_var_a = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_a );
        outline_0_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_exception_1:;
        exception_lineno = 177;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert( var_arrays == NULL );
        var_arrays = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_2 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_2 = var_arrays;
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_listcomp_2__$0 == NULL );
            tmp_listcomp_2__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New( 0 );
            assert( tmp_listcomp_2__contraction == NULL );
            tmp_listcomp_2__contraction = tmp_assign_source_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_d37e1b4c49dbad624e035dd53f1e7db1_3, codeobj_d37e1b4c49dbad624e035dd53f1e7db1, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_d37e1b4c49dbad624e035dd53f1e7db1_3 = cache_frame_d37e1b4c49dbad624e035dd53f1e7db1_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_listcomp_2__$0 );
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 178;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
            tmp_assign_source_9 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_a;
                outline_1_var_a = tmp_assign_source_9;
                Py_INCREF( outline_1_var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT( outline_1_var_a );
            tmp_source_name_2 = outline_1_var_a;
            tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_listcomp_2__contraction );
        tmp_args_element_name_1 = tmp_listcomp_2__contraction;
        Py_INCREF( tmp_args_element_name_1 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        goto frame_return_exit_2;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
        Py_DECREF( tmp_listcomp_2__$0 );
        tmp_listcomp_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
        Py_DECREF( tmp_listcomp_2__contraction );
        tmp_listcomp_2__contraction = NULL;

        Py_XDECREF( tmp_listcomp_2__iter_value_0 );
        tmp_listcomp_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_d37e1b4c49dbad624e035dd53f1e7db1_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_d37e1b4c49dbad624e035dd53f1e7db1_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_d37e1b4c49dbad624e035dd53f1e7db1_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_d37e1b4c49dbad624e035dd53f1e7db1_3,
            type_description_2,
            outline_1_var_a
        );


        // Release cached frame.
        if ( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 == cache_frame_d37e1b4c49dbad624e035dd53f1e7db1_3 )
        {
            Py_DECREF( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );
        }
        cache_frame_d37e1b4c49dbad624e035dd53f1e7db1_3 = NULL;

        assertFrameObject( frame_d37e1b4c49dbad624e035dd53f1e7db1_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF( outline_1_var_a );
        outline_1_var_a = NULL;

        goto outline_result_2;
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

        Py_XDECREF( outline_1_var_a );
        outline_1_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_exception_2:;
        exception_lineno = 178;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_338f0160593f851c0143eebfd79bfeca;
            frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 179;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_3 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_3 = var_arrays;
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto try_except_handler_6;
            }
            assert( tmp_listcomp_3__$0 == NULL );
            tmp_listcomp_3__$0 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyList_New( 0 );
            assert( tmp_listcomp_3__contraction == NULL );
            tmp_listcomp_3__contraction = tmp_assign_source_11;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_8de15f07bd7fc9f20368fee366aa7d63_4, codeobj_8de15f07bd7fc9f20368fee366aa7d63, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_8de15f07bd7fc9f20368fee366aa7d63_4 = cache_frame_8de15f07bd7fc9f20368fee366aa7d63_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8de15f07bd7fc9f20368fee366aa7d63_4 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_listcomp_3__$0 );
            tmp_next_source_3 = tmp_listcomp_3__$0;
            tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_12 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 180;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_listcomp_3__iter_value_0 );
            tmp_assign_source_13 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_a;
                outline_2_var_a = tmp_assign_source_13;
                Py_INCREF( outline_2_var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_listcomp_3__contraction );
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT( outline_2_var_a );
            tmp_source_name_3 = outline_2_var_a;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_append_value_3 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_append_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_listcomp_3__contraction );
        tmp_args_element_name_2 = tmp_listcomp_3__contraction;
        Py_INCREF( tmp_args_element_name_2 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
        Py_DECREF( tmp_listcomp_3__$0 );
        tmp_listcomp_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
        Py_DECREF( tmp_listcomp_3__contraction );
        tmp_listcomp_3__contraction = NULL;

        Py_XDECREF( tmp_listcomp_3__iter_value_0 );
        tmp_listcomp_3__iter_value_0 = NULL;

        goto frame_return_exit_3;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__$0 );
        Py_DECREF( tmp_listcomp_3__$0 );
        tmp_listcomp_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_3__contraction );
        Py_DECREF( tmp_listcomp_3__contraction );
        tmp_listcomp_3__contraction = NULL;

        Py_XDECREF( tmp_listcomp_3__iter_value_0 );
        tmp_listcomp_3__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_4;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8de15f07bd7fc9f20368fee366aa7d63_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8de15f07bd7fc9f20368fee366aa7d63_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8de15f07bd7fc9f20368fee366aa7d63_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8de15f07bd7fc9f20368fee366aa7d63_4,
            type_description_2,
            outline_2_var_a
        );


        // Release cached frame.
        if ( frame_8de15f07bd7fc9f20368fee366aa7d63_4 == cache_frame_8de15f07bd7fc9f20368fee366aa7d63_4 )
        {
            Py_DECREF( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );
        }
        cache_frame_8de15f07bd7fc9f20368fee366aa7d63_4 = NULL;

        assertFrameObject( frame_8de15f07bd7fc9f20368fee366aa7d63_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooooooo";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF( outline_2_var_a );
        outline_2_var_a = NULL;

        goto outline_result_3;
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

        Py_XDECREF( outline_2_var_a );
        outline_2_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_exception_3:;
        exception_lineno = 180;
        goto frame_exception_exit_1;
        outline_result_3:;
        frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            tmp_make_exception_arg_2 = const_str_digest_c33c3dfe4ecbe4552a6e4d75b21c1f15;
            frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 181;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_trim );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_trim );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_14;
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT( var_arrays );
                tmp_iter_arg_4 = var_arrays;
                tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_8;
                }
                assert( tmp_listcomp_4__$0 == NULL );
                tmp_listcomp_4__$0 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = PyList_New( 0 );
                assert( tmp_listcomp_4__contraction == NULL );
                tmp_listcomp_4__contraction = tmp_assign_source_16;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_b2a021e8be8f8c38b324a6624e5bc942_5, codeobj_b2a021e8be8f8c38b324a6624e5bc942, module_numpy$polynomial$polyutils, sizeof(void *) );
            frame_b2a021e8be8f8c38b324a6624e5bc942_5 = cache_frame_b2a021e8be8f8c38b324a6624e5bc942_5;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_b2a021e8be8f8c38b324a6624e5bc942_5 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT( tmp_listcomp_4__$0 );
                tmp_next_source_4 = tmp_listcomp_4__$0;
                tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_17 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "o";
                        exception_lineno = 183;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_4__iter_value_0;
                    tmp_listcomp_4__iter_value_0 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_listcomp_4__iter_value_0 );
                tmp_assign_source_18 = tmp_listcomp_4__iter_value_0;
                {
                    PyObject *old = outline_3_var_a;
                    outline_3_var_a = tmp_assign_source_18;
                    Py_INCREF( outline_3_var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( tmp_listcomp_4__contraction );
                tmp_append_list_4 = tmp_listcomp_4__contraction;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trimseq );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trimseq" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto try_except_handler_9;
                }

                tmp_called_name_4 = tmp_mvar_value_2;
                CHECK_OBJECT( outline_3_var_a );
                tmp_args_element_name_3 = outline_3_var_a;
                frame_b2a021e8be8f8c38b324a6624e5bc942_5->m_frame.f_lineno = 183;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_append_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto try_except_handler_9;
                }
                assert( PyList_Check( tmp_append_list_4 ) );
                tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
                Py_DECREF( tmp_append_value_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 183;
                    type_description_2 = "o";
                    goto try_except_handler_9;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 183;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT( tmp_listcomp_4__contraction );
            tmp_assign_source_14 = tmp_listcomp_4__contraction;
            Py_INCREF( tmp_assign_source_14 );
            goto try_return_handler_9;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_4__$0 );
            Py_DECREF( tmp_listcomp_4__$0 );
            tmp_listcomp_4__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_4__contraction );
            Py_DECREF( tmp_listcomp_4__contraction );
            tmp_listcomp_4__contraction = NULL;

            Py_XDECREF( tmp_listcomp_4__iter_value_0 );
            tmp_listcomp_4__iter_value_0 = NULL;

            goto frame_return_exit_4;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_4__$0 );
            Py_DECREF( tmp_listcomp_4__$0 );
            tmp_listcomp_4__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_4__contraction );
            Py_DECREF( tmp_listcomp_4__contraction );
            tmp_listcomp_4__contraction = NULL;

            Py_XDECREF( tmp_listcomp_4__iter_value_0 );
            tmp_listcomp_4__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_5;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_4;

            frame_return_exit_4:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;

            frame_exception_exit_5:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_b2a021e8be8f8c38b324a6624e5bc942_5, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_b2a021e8be8f8c38b324a6624e5bc942_5->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_b2a021e8be8f8c38b324a6624e5bc942_5, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_b2a021e8be8f8c38b324a6624e5bc942_5,
                type_description_2,
                outline_3_var_a
            );


            // Release cached frame.
            if ( frame_b2a021e8be8f8c38b324a6624e5bc942_5 == cache_frame_b2a021e8be8f8c38b324a6624e5bc942_5 )
            {
                Py_DECREF( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );
            }
            cache_frame_b2a021e8be8f8c38b324a6624e5bc942_5 = NULL;

            assertFrameObject( frame_b2a021e8be8f8c38b324a6624e5bc942_5 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_4;

            frame_no_exception_4:;
            goto skip_nested_handling_4;
            nested_frame_exit_4:;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
            skip_nested_handling_4:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF( outline_3_var_a );
            outline_3_var_a = NULL;

            goto outline_result_4;
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

            Py_XDECREF( outline_3_var_a );
            outline_3_var_a = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto outline_exception_4;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            outline_exception_4:;
            exception_lineno = 183;
            goto frame_exception_exit_1;
            outline_result_4:;
            {
                PyObject *old = var_arrays;
                assert( old != NULL );
                var_arrays = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_3;
        tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_any );
        assert( tmp_called_name_5 != NULL );
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_5 = var_arrays;
            tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooo";
                goto try_except_handler_10;
            }
            assert( tmp_listcomp_5__$0 == NULL );
            tmp_listcomp_5__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = PyList_New( 0 );
            assert( tmp_listcomp_5__contraction == NULL );
            tmp_listcomp_5__contraction = tmp_assign_source_20;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_3362a3a346dd35de6e0520340ffa8694_6, codeobj_3362a3a346dd35de6e0520340ffa8694, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_3362a3a346dd35de6e0520340ffa8694_6 = cache_frame_3362a3a346dd35de6e0520340ffa8694_6;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_3362a3a346dd35de6e0520340ffa8694_6 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_3362a3a346dd35de6e0520340ffa8694_6 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_listcomp_5__$0 );
            tmp_next_source_5 = tmp_listcomp_5__$0;
            tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_21 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 185;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_listcomp_5__iter_value_0 );
            tmp_assign_source_22 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var_a;
                outline_4_var_a = tmp_assign_source_22;
                Py_INCREF( outline_4_var_a );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( tmp_listcomp_5__contraction );
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            CHECK_OBJECT( outline_4_var_a );
            tmp_source_name_4 = outline_4_var_a;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 185;
                type_description_2 = "o";
                goto try_except_handler_11;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_3362a3a346dd35de6e0520340ffa8694_6->m_frame.f_lineno = 185;
            tmp_compexpr_right_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 185;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_append_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_append_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert( PyList_Check( tmp_append_list_5 ) );
            tmp_res = PyList_Append( tmp_append_list_5, tmp_append_value_5 );
            Py_DECREF( tmp_append_value_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT( tmp_listcomp_5__contraction );
        tmp_args_element_name_4 = tmp_listcomp_5__contraction;
        Py_INCREF( tmp_args_element_name_4 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)tmp_listcomp_5__$0 );
        Py_DECREF( tmp_listcomp_5__$0 );
        tmp_listcomp_5__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_5__contraction );
        Py_DECREF( tmp_listcomp_5__contraction );
        tmp_listcomp_5__contraction = NULL;

        Py_XDECREF( tmp_listcomp_5__iter_value_0 );
        tmp_listcomp_5__iter_value_0 = NULL;

        goto frame_return_exit_5;
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

        CHECK_OBJECT( (PyObject *)tmp_listcomp_5__$0 );
        Py_DECREF( tmp_listcomp_5__$0 );
        tmp_listcomp_5__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_listcomp_5__contraction );
        Py_DECREF( tmp_listcomp_5__contraction );
        tmp_listcomp_5__contraction = NULL;

        Py_XDECREF( tmp_listcomp_5__iter_value_0 );
        tmp_listcomp_5__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_6;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3362a3a346dd35de6e0520340ffa8694_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_return_exit_5:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_3362a3a346dd35de6e0520340ffa8694_6 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_3362a3a346dd35de6e0520340ffa8694_6 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_3362a3a346dd35de6e0520340ffa8694_6, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_3362a3a346dd35de6e0520340ffa8694_6->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_3362a3a346dd35de6e0520340ffa8694_6, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3362a3a346dd35de6e0520340ffa8694_6,
            type_description_2,
            outline_4_var_a
        );


        // Release cached frame.
        if ( frame_3362a3a346dd35de6e0520340ffa8694_6 == cache_frame_3362a3a346dd35de6e0520340ffa8694_6 )
        {
            Py_DECREF( frame_3362a3a346dd35de6e0520340ffa8694_6 );
        }
        cache_frame_3362a3a346dd35de6e0520340ffa8694_6 = NULL;

        assertFrameObject( frame_3362a3a346dd35de6e0520340ffa8694_6 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "ooooooo";
        goto try_except_handler_10;
        skip_nested_handling_5:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF( outline_4_var_a );
        outline_4_var_a = NULL;

        goto outline_result_5;
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

        Py_XDECREF( outline_4_var_a );
        outline_4_var_a = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_5;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        outline_exception_5:;
        exception_lineno = 185;
        goto frame_exception_exit_1;
        outline_result_5:;
        frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_2 );

            exception_lineno = 185;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_2 );
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
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyList_New( 0 );
            assert( var_ret == NULL );
            var_ret = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT( var_arrays );
            tmp_iter_arg_6 = var_arrays;
            tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_6 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 187;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_24;
        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_6 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_6 );
            if ( tmp_assign_source_25 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_6;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooo";
                    exception_lineno = 187;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_26 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_a;
                var_a = tmp_assign_source_26;
                Py_INCREF( var_a );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( var_a );
            tmp_source_name_5 = var_a;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_12;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_12;
            }

            tmp_called_instance_2 = tmp_mvar_value_4;
            frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 188;
            tmp_compexpr_right_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_12;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooo";
                goto try_except_handler_12;
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
                PyObject *tmp_assign_source_27;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_6;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_6;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }

                tmp_source_name_6 = tmp_mvar_value_5;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_empty );
                if ( tmp_called_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                CHECK_OBJECT( var_a );
                tmp_len_arg_1 = var_a;
                tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
                tmp_dict_key_1 = const_str_plain_dtype;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
                }

                if ( tmp_mvar_value_6 == NULL )
                {
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_name_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }

                tmp_called_instance_3 = tmp_mvar_value_6;
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 189;
                tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_dtype, &PyTuple_GET_ITEM( const_tuple_type_object_tuple, 0 ) );

                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 189;
                tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 189;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                {
                    PyObject *old = var_tmp;
                    var_tmp = tmp_assign_source_27;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( var_a );
                tmp_subscribed_name_1 = var_a;
                tmp_subscript_name_1 = const_slice_none_none_none;
                tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                CHECK_OBJECT( var_tmp );
                tmp_ass_subscribed_1 = var_tmp;
                tmp_ass_subscript_1 = const_slice_none_none_none;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 190;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( var_ret );
                tmp_called_instance_4 = var_ret;
                CHECK_OBJECT( var_tmp );
                tmp_args_element_name_5 = var_tmp;
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 191;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
                }

                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 191;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_ret );
                tmp_source_name_7 = var_ret;
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                CHECK_OBJECT( var_a );
                tmp_called_instance_5 = var_a;
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 193;
                tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_copy );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 193;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_12;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_end_5:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooo";
            goto try_except_handler_12;
        }
        goto loop_start_6;
        loop_end_6:;
        goto try_end_1;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_4;
        branch_no_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_dircall_arg2_1;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 196;
                type_description_1 = "ooooooo";
                goto try_except_handler_13;
            }

            tmp_source_name_8 = tmp_mvar_value_7;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_common_type );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "ooooooo";
                goto try_except_handler_13;
            }
            CHECK_OBJECT( var_arrays );
            tmp_dircall_arg2_1 = var_arrays;
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_assign_source_28 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 196;
                type_description_1 = "ooooooo";
                goto try_except_handler_13;
            }
            assert( var_dtype == NULL );
            var_dtype = tmp_assign_source_28;
        }
        goto try_end_2;
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_12 == NULL )
        {
            exception_keeper_tb_12 = MAKE_TRACEBACK( frame_5389b255abb26161a850e6104c49e41a, exception_keeper_lineno_12 );
        }
        else if ( exception_keeper_lineno_12 != 0 )
        {
            exception_keeper_tb_12 = ADD_TRACEBACK( exception_keeper_tb_12, frame_5389b255abb26161a850e6104c49e41a, exception_keeper_lineno_12 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
        PyException_SetTraceback( exception_keeper_value_12, (PyObject *)exception_keeper_tb_12 );
        PUBLISH_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_Exception;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooo";
                goto try_except_handler_14;
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_d4402ccc6609c8cb901f6facc83c7413;
                frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = 198;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 198;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto try_except_handler_14;
            }
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 195;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_5389b255abb26161a850e6104c49e41a->m_frame) frame_5389b255abb26161a850e6104c49e41a->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooo";
            goto try_except_handler_14;
            branch_end_6:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
        return NULL;
        // Exception handler code:
        try_except_handler_14:;
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

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_2:;
        {
            PyObject *tmp_assign_source_29;
            // Tried code:
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_iter_arg_7;
                CHECK_OBJECT( var_arrays );
                tmp_iter_arg_7 = var_arrays;
                tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_7 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_15;
                }
                assert( tmp_listcomp_6__$0 == NULL );
                tmp_listcomp_6__$0 = tmp_assign_source_30;
            }
            {
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = PyList_New( 0 );
                assert( tmp_listcomp_6__contraction == NULL );
                tmp_listcomp_6__contraction = tmp_assign_source_31;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_7ba89ca1013e68f9d03a893b3c87760e_7, codeobj_7ba89ca1013e68f9d03a893b3c87760e, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *) );
            frame_7ba89ca1013e68f9d03a893b3c87760e_7 = cache_frame_7ba89ca1013e68f9d03a893b3c87760e_7;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_7ba89ca1013e68f9d03a893b3c87760e_7 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_7:;
            {
                PyObject *tmp_next_source_7;
                PyObject *tmp_assign_source_32;
                CHECK_OBJECT( tmp_listcomp_6__$0 );
                tmp_next_source_7 = tmp_listcomp_6__$0;
                tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_7 );
                if ( tmp_assign_source_32 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_7;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oo";
                        exception_lineno = 199;
                        goto try_except_handler_16;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_6__iter_value_0;
                    tmp_listcomp_6__iter_value_0 = tmp_assign_source_32;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_33;
                CHECK_OBJECT( tmp_listcomp_6__iter_value_0 );
                tmp_assign_source_33 = tmp_listcomp_6__iter_value_0;
                {
                    PyObject *old = outline_5_var_a;
                    outline_5_var_a = tmp_assign_source_33;
                    Py_INCREF( outline_5_var_a );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_6;
                PyObject *tmp_append_value_6;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_9;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_name_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_kw_name_3;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                CHECK_OBJECT( tmp_listcomp_6__contraction );
                tmp_append_list_6 = tmp_listcomp_6__contraction;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 199;
                    type_description_2 = "oo";
                    goto try_except_handler_16;
                }

                tmp_source_name_9 = tmp_mvar_value_8;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_array );
                if ( tmp_called_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_2 = "oo";
                    goto try_except_handler_16;
                }
                CHECK_OBJECT( outline_5_var_a );
                tmp_tuple_element_3 = outline_5_var_a;
                tmp_args_name_3 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_3 );
                PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
                tmp_dict_key_2 = const_str_plain_copy;
                tmp_dict_value_2 = const_int_pos_1;
                tmp_kw_name_3 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                tmp_dict_key_3 = const_str_plain_dtype;
                CHECK_OBJECT( var_dtype );
                tmp_dict_value_3 = var_dtype;
                tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_3, tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                frame_7ba89ca1013e68f9d03a893b3c87760e_7->m_frame.f_lineno = 199;
                tmp_append_value_6 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_3, tmp_kw_name_3 );
                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_name_3 );
                Py_DECREF( tmp_kw_name_3 );
                if ( tmp_append_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_2 = "oo";
                    goto try_except_handler_16;
                }
                assert( PyList_Check( tmp_append_list_6 ) );
                tmp_res = PyList_Append( tmp_append_list_6, tmp_append_value_6 );
                Py_DECREF( tmp_append_value_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_2 = "oo";
                    goto try_except_handler_16;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_2 = "oo";
                goto try_except_handler_16;
            }
            goto loop_start_7;
            loop_end_7:;
            CHECK_OBJECT( tmp_listcomp_6__contraction );
            tmp_assign_source_29 = tmp_listcomp_6__contraction;
            Py_INCREF( tmp_assign_source_29 );
            goto try_return_handler_16;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_16:;
            CHECK_OBJECT( (PyObject *)tmp_listcomp_6__$0 );
            Py_DECREF( tmp_listcomp_6__$0 );
            tmp_listcomp_6__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_6__contraction );
            Py_DECREF( tmp_listcomp_6__contraction );
            tmp_listcomp_6__contraction = NULL;

            Py_XDECREF( tmp_listcomp_6__iter_value_0 );
            tmp_listcomp_6__iter_value_0 = NULL;

            goto frame_return_exit_6;
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

            CHECK_OBJECT( (PyObject *)tmp_listcomp_6__$0 );
            Py_DECREF( tmp_listcomp_6__$0 );
            tmp_listcomp_6__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_listcomp_6__contraction );
            Py_DECREF( tmp_listcomp_6__contraction );
            tmp_listcomp_6__contraction = NULL;

            Py_XDECREF( tmp_listcomp_6__iter_value_0 );
            tmp_listcomp_6__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto frame_exception_exit_7;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_6;

            frame_return_exit_6:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_15;

            frame_exception_exit_7:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_7ba89ca1013e68f9d03a893b3c87760e_7, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_7ba89ca1013e68f9d03a893b3c87760e_7->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_7ba89ca1013e68f9d03a893b3c87760e_7, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_7ba89ca1013e68f9d03a893b3c87760e_7,
                type_description_2,
                outline_5_var_a,
                var_dtype
            );


            // Release cached frame.
            if ( frame_7ba89ca1013e68f9d03a893b3c87760e_7 == cache_frame_7ba89ca1013e68f9d03a893b3c87760e_7 )
            {
                Py_DECREF( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );
            }
            cache_frame_7ba89ca1013e68f9d03a893b3c87760e_7 = NULL;

            assertFrameObject( frame_7ba89ca1013e68f9d03a893b3c87760e_7 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_6;

            frame_no_exception_6:;
            goto skip_nested_handling_6;
            nested_frame_exit_6:;
            type_description_1 = "ooooooo";
            goto try_except_handler_15;
            skip_nested_handling_6:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            Py_XDECREF( outline_5_var_a );
            outline_5_var_a = NULL;

            goto outline_result_6;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_15 = exception_type;
            exception_keeper_value_15 = exception_value;
            exception_keeper_tb_15 = exception_tb;
            exception_keeper_lineno_15 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( outline_5_var_a );
            outline_5_var_a = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto outline_exception_6;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
            return NULL;
            outline_exception_6:;
            exception_lineno = 199;
            goto frame_exception_exit_1;
            outline_result_6:;
            assert( var_ret == NULL );
            var_ret = tmp_assign_source_29;
        }
        branch_end_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5389b255abb26161a850e6104c49e41a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5389b255abb26161a850e6104c49e41a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5389b255abb26161a850e6104c49e41a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5389b255abb26161a850e6104c49e41a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5389b255abb26161a850e6104c49e41a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5389b255abb26161a850e6104c49e41a,
        type_description_1,
        par_alist,
        par_trim,
        var_arrays,
        var_ret,
        var_a,
        var_tmp,
        var_dtype
    );


    // Release cached frame.
    if ( frame_5389b255abb26161a850e6104c49e41a == cache_frame_5389b255abb26161a850e6104c49e41a )
    {
        Py_DECREF( frame_5389b255abb26161a850e6104c49e41a );
    }
    cache_frame_5389b255abb26161a850e6104c49e41a = NULL;

    assertFrameObject( frame_5389b255abb26161a850e6104c49e41a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_7:;
    CHECK_OBJECT( var_ret );
    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_alist );
    Py_DECREF( par_alist );
    par_alist = NULL;

    CHECK_OBJECT( (PyObject *)par_trim );
    Py_DECREF( par_trim );
    par_trim = NULL;

    CHECK_OBJECT( (PyObject *)var_arrays );
    Py_DECREF( var_arrays );
    var_arrays = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_alist );
    Py_DECREF( par_alist );
    par_alist = NULL;

    CHECK_OBJECT( (PyObject *)par_trim );
    Py_DECREF( par_trim );
    par_trim = NULL;

    Py_XDECREF( var_arrays );
    var_arrays = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_2_as_series );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_3_trimcoef( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_ind = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_83205d0421d6f4d40fa38f611cb390a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_83205d0421d6f4d40fa38f611cb390a8 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83205d0421d6f4d40fa38f611cb390a8, codeobj_83205d0421d6f4d40fa38f611cb390a8, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_83205d0421d6f4d40fa38f611cb390a8 = cache_frame_83205d0421d6f4d40fa38f611cb390a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83205d0421d6f4d40fa38f611cb390a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83205d0421d6f4d40fa38f611cb390a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_tol );
        tmp_compexpr_left_1 = par_tol;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8cddc816cdb78f26976645673d7a8785;
            frame_83205d0421d6f4d40fa38f611cb390a8->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 248;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 250;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_83205d0421d6f4d40fa38f611cb390a8->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooo";
            exception_lineno = 250;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooo";
                    exception_lineno = 250;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 250;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nonzero );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_3 = par_c;
        frame_83205d0421d6f4d40fa38f611cb390a8->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_compexpr_left_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abs, call_args );
        }

        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( par_tol );
        tmp_compexpr_right_2 = par_tol;
        tmp_args_element_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_83205d0421d6f4d40fa38f611cb390a8->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0, 1 );
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


            type_description_1 = "ooo";
            exception_lineno = 251;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
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

                    type_description_1 = "ooo";
                    exception_lineno = 251;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooo";
            exception_lineno = 251;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_2__element_1;
        assert( var_ind == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_ind = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_ind );
        tmp_len_arg_1 = var_ind;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_1 = par_c;
            tmp_subscript_name_1 = const_slice_none_int_pos_1_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_0;
            tmp_return_value = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 253;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_c );
            tmp_subscribed_name_2 = par_c;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( var_ind );
            tmp_subscribed_name_3 = var_ind;
            tmp_subscript_name_3 = const_int_neg_1;
            tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_called_instance_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_83205d0421d6f4d40fa38f611cb390a8->m_frame.f_lineno = 255;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83205d0421d6f4d40fa38f611cb390a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83205d0421d6f4d40fa38f611cb390a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83205d0421d6f4d40fa38f611cb390a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83205d0421d6f4d40fa38f611cb390a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83205d0421d6f4d40fa38f611cb390a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83205d0421d6f4d40fa38f611cb390a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83205d0421d6f4d40fa38f611cb390a8,
        type_description_1,
        par_c,
        par_tol,
        var_ind
    );


    // Release cached frame.
    if ( frame_83205d0421d6f4d40fa38f611cb390a8 == cache_frame_83205d0421d6f4d40fa38f611cb390a8 )
    {
        Py_DECREF( frame_83205d0421d6f4d40fa38f611cb390a8 );
    }
    cache_frame_83205d0421d6f4d40fa38f611cb390a8 = NULL;

    assertFrameObject( frame_83205d0421d6f4d40fa38f611cb390a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_3_trimcoef );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_3_trimcoef );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_4_getdomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_rmin = NULL;
    PyObject *var_rmax = NULL;
    PyObject *var_imin = NULL;
    PyObject *var_imax = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d35a275f1d72abf9860c5459feec121e;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d35a275f1d72abf9860c5459feec121e = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d35a275f1d72abf9860c5459feec121e, codeobj_d35a275f1d72abf9860c5459feec121e, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d35a275f1d72abf9860c5459feec121e = cache_frame_d35a275f1d72abf9860c5459feec121e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d35a275f1d72abf9860c5459feec121e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d35a275f1d72abf9860c5459feec121e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_list_element_1 = par_x;
        tmp_tuple_element_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
        frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 295;
        tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "ooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 295;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 295;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooo";
            exception_lineno = 295;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_3;
            Py_INCREF( par_x );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_x );
        tmp_source_name_2 = par_x;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_char );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_typecodes );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_Complex;
        tmp_compexpr_right_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_x );
            tmp_source_name_4 = par_x;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_real );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 297;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_min );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_iter_arg_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_x );
            tmp_source_name_5 = par_x;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_real );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 297;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 297;
            tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_max );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_2 );

                exception_lineno = 297;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0, 2 );
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


                type_description_1 = "ooooo";
                exception_lineno = 297;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 1, 2 );
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


                type_description_1 = "ooooo";
                exception_lineno = 297;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_6;
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
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_7 = tmp_tuple_unpack_2__element_1;
            assert( var_rmin == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_rmin = tmp_assign_source_7;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_8 = tmp_tuple_unpack_2__element_2;
            assert( var_rmax == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_rmax = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( par_x );
            tmp_source_name_6 = par_x;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_imag );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 298;
            tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_min );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            tmp_iter_arg_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_iter_arg_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_x );
            tmp_source_name_7 = par_x;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_imag );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_3 );

                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 298;
            tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_max );
            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_3 );

                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_3, 1, tmp_tuple_element_3 );
            tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "ooooo";
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_3__source_iter == NULL );
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_4, 0, 2 );
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


                type_description_1 = "ooooo";
                exception_lineno = 298;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_1 == NULL );
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_5, 1, 2 );
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


                type_description_1 = "ooooo";
                exception_lineno = 298;
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_3__element_2 == NULL );
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_11;
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
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
            tmp_assign_source_12 = tmp_tuple_unpack_3__element_1;
            assert( var_imin == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_imin = tmp_assign_source_12;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_1 );
        tmp_tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_3__element_2 );
            tmp_assign_source_13 = tmp_tuple_unpack_3__element_2;
            assert( var_imax == NULL );
            Py_INCREF( tmp_assign_source_13 );
            var_imax = tmp_assign_source_13;
        }
        Py_XDECREF( tmp_tuple_unpack_3__element_2 );
        tmp_tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_real_arg_1;
            PyObject *tmp_imag_arg_1;
            PyObject *tmp_real_arg_2;
            PyObject *tmp_imag_arg_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 299;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_array );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_rmin );
            tmp_real_arg_1 = var_rmin;
            CHECK_OBJECT( var_imin );
            tmp_imag_arg_1 = var_imin;
            tmp_tuple_element_4 = BUILTIN_COMPLEX2( tmp_real_arg_1, tmp_imag_arg_1 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 299;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_rmax );
            tmp_real_arg_2 = var_rmax;
            CHECK_OBJECT( var_imax );
            tmp_imag_arg_2 = var_imax;
            tmp_tuple_element_4 = BUILTIN_COMPLEX2( tmp_real_arg_2, tmp_imag_arg_2 );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 299;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_4 );
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 299;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 299;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_4;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_array );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_called_instance_5 = par_x;
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 301;
            tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_min );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_5 );
            CHECK_OBJECT( par_x );
            tmp_called_instance_6 = par_x;
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 301;
            tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_max );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_5 );
            frame_d35a275f1d72abf9860c5459feec121e->m_frame.f_lineno = 301;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d35a275f1d72abf9860c5459feec121e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d35a275f1d72abf9860c5459feec121e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d35a275f1d72abf9860c5459feec121e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d35a275f1d72abf9860c5459feec121e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d35a275f1d72abf9860c5459feec121e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d35a275f1d72abf9860c5459feec121e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d35a275f1d72abf9860c5459feec121e,
        type_description_1,
        par_x,
        var_rmin,
        var_rmax,
        var_imin,
        var_imax
    );


    // Release cached frame.
    if ( frame_d35a275f1d72abf9860c5459feec121e == cache_frame_d35a275f1d72abf9860c5459feec121e )
    {
        Py_DECREF( frame_d35a275f1d72abf9860c5459feec121e );
    }
    cache_frame_d35a275f1d72abf9860c5459feec121e = NULL;

    assertFrameObject( frame_d35a275f1d72abf9860c5459feec121e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_4_getdomain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_rmin );
    var_rmin = NULL;

    Py_XDECREF( var_rmax );
    var_rmax = NULL;

    Py_XDECREF( var_imin );
    var_imin = NULL;

    Py_XDECREF( var_imax );
    var_imax = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_rmin );
    var_rmin = NULL;

    Py_XDECREF( var_rmax );
    var_rmax = NULL;

    Py_XDECREF( var_imin );
    var_imin = NULL;

    Py_XDECREF( var_imax );
    var_imax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_4_getdomain );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_5_mapparms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_old = python_pars[ 0 ];
    PyObject *par_new = python_pars[ 1 ];
    PyObject *var_oldlen = NULL;
    PyObject *var_newlen = NULL;
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    struct Nuitka_FrameObject *frame_b4f050e230b69c34c955edc9699c5119;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4f050e230b69c34c955edc9699c5119 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4f050e230b69c34c955edc9699c5119, codeobj_b4f050e230b69c34c955edc9699c5119, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4f050e230b69c34c955edc9699c5119 = cache_frame_b4f050e230b69c34c955edc9699c5119;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4f050e230b69c34c955edc9699c5119 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4f050e230b69c34c955edc9699c5119 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_1 = par_old;
        tmp_subscript_name_1 = const_int_pos_1;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_2 = par_old;
        tmp_subscript_name_2 = const_int_0;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_oldlen == NULL );
        var_oldlen = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_3 = par_new;
        tmp_subscript_name_3 = const_int_pos_1;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_4 = par_new;
        tmp_subscript_name_4 = const_int_0;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_newlen == NULL );
        var_newlen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_5 = par_old;
        tmp_subscript_name_5 = const_int_pos_1;
        tmp_left_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 1 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_6 = par_new;
        tmp_subscript_name_6 = const_int_0;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, 0 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_old );
        tmp_subscribed_name_7 = par_old;
        tmp_subscript_name_7 = const_int_0;
        tmp_left_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_7, tmp_subscript_name_7, 0 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_new );
        tmp_subscribed_name_8 = par_new;
        tmp_subscript_name_8 = const_int_pos_1;
        tmp_right_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 1 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_oldlen );
        tmp_right_name_6 = var_oldlen;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_off == NULL );
        var_off = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( var_newlen );
        tmp_left_name_7 = var_newlen;
        CHECK_OBJECT( var_oldlen );
        tmp_right_name_7 = var_oldlen;
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scl == NULL );
        var_scl = tmp_assign_source_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f050e230b69c34c955edc9699c5119 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4f050e230b69c34c955edc9699c5119 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4f050e230b69c34c955edc9699c5119, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4f050e230b69c34c955edc9699c5119->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4f050e230b69c34c955edc9699c5119, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4f050e230b69c34c955edc9699c5119,
        type_description_1,
        par_old,
        par_new,
        var_oldlen,
        var_newlen,
        var_off,
        var_scl
    );


    // Release cached frame.
    if ( frame_b4f050e230b69c34c955edc9699c5119 == cache_frame_b4f050e230b69c34c955edc9699c5119 )
    {
        Py_DECREF( frame_b4f050e230b69c34c955edc9699c5119 );
    }
    cache_frame_b4f050e230b69c34c955edc9699c5119 = NULL;

    assertFrameObject( frame_b4f050e230b69c34c955edc9699c5119 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_off );
        tmp_tuple_element_1 = var_off;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_scl );
        tmp_tuple_element_1 = var_scl;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_5_mapparms );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    CHECK_OBJECT( (PyObject *)var_oldlen );
    Py_DECREF( var_oldlen );
    var_oldlen = NULL;

    CHECK_OBJECT( (PyObject *)var_newlen );
    Py_DECREF( var_newlen );
    var_newlen = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    Py_XDECREF( var_oldlen );
    var_oldlen = NULL;

    Py_XDECREF( var_newlen );
    var_newlen = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_5_mapparms );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_6_mapdomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_old = python_pars[ 1 ];
    PyObject *par_new = python_pars[ 2 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_026b3372ba871ef03f5feece96022e59;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_026b3372ba871ef03f5feece96022e59 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_026b3372ba871ef03f5feece96022e59, codeobj_026b3372ba871ef03f5feece96022e59, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_026b3372ba871ef03f5feece96022e59 = cache_frame_026b3372ba871ef03f5feece96022e59;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_026b3372ba871ef03f5feece96022e59 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_026b3372ba871ef03f5feece96022e59 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_026b3372ba871ef03f5feece96022e59->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asanyarray, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapparms );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mapparms );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mapparms" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 414;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_old );
        tmp_args_element_name_2 = par_old;
        CHECK_OBJECT( par_new );
        tmp_args_element_name_3 = par_new;
        frame_026b3372ba871ef03f5feece96022e59->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "ooooo";
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


            type_description_1 = "ooooo";
            exception_lineno = 414;
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


            type_description_1 = "ooooo";
            exception_lineno = 414;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 414;
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

            type_description_1 = "ooooo";
            exception_lineno = 414;
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
        assert( var_off == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_off = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_scl == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_scl = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_off );
        tmp_left_name_1 = var_off;
        CHECK_OBJECT( var_scl );
        tmp_left_name_2 = var_scl;
        CHECK_OBJECT( par_x );
        tmp_right_name_2 = par_x;
        tmp_right_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 415;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_026b3372ba871ef03f5feece96022e59 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_026b3372ba871ef03f5feece96022e59 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_026b3372ba871ef03f5feece96022e59 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_026b3372ba871ef03f5feece96022e59, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_026b3372ba871ef03f5feece96022e59->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_026b3372ba871ef03f5feece96022e59, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_026b3372ba871ef03f5feece96022e59,
        type_description_1,
        par_x,
        par_old,
        par_new,
        var_off,
        var_scl
    );


    // Release cached frame.
    if ( frame_026b3372ba871ef03f5feece96022e59 == cache_frame_026b3372ba871ef03f5feece96022e59 )
    {
        Py_DECREF( frame_026b3372ba871ef03f5feece96022e59 );
    }
    cache_frame_026b3372ba871ef03f5feece96022e59 = NULL;

    assertFrameObject( frame_026b3372ba871ef03f5feece96022e59 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_6_mapdomain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_old );
    Py_DECREF( par_old );
    par_old = NULL;

    CHECK_OBJECT( (PyObject *)par_new );
    Py_DECREF( par_new );
    par_new = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_6_mapdomain );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_7__vander2d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vander_f = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    PyObject *var_degx = NULL;
    PyObject *var_degy = NULL;
    PyObject *var_vx = NULL;
    PyObject *var_vy = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f0f16afb27b7604960d36530ef1dca61;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_305afad0b81c2b24c3e342819a9f787f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_305afad0b81c2b24c3e342819a9f787f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_f0f16afb27b7604960d36530ef1dca61 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f0f16afb27b7604960d36530ef1dca61, codeobj_f0f16afb27b7604960d36530ef1dca61, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f0f16afb27b7604960d36530ef1dca61 = cache_frame_f0f16afb27b7604960d36530ef1dca61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f0f16afb27b7604960d36530ef1dca61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f0f16afb27b7604960d36530ef1dca61 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_deg );
            tmp_iter_arg_2 = par_deg;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "ooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_305afad0b81c2b24c3e342819a9f787f_2, codeobj_305afad0b81c2b24c3e342819a9f787f, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_305afad0b81c2b24c3e342819a9f787f_2 = cache_frame_305afad0b81c2b24c3e342819a9f787f_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_305afad0b81c2b24c3e342819a9f787f_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_305afad0b81c2b24c3e342819a9f787f_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 430;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_5;
                Py_INCREF( outline_0_var_d );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__deprecate_as_int );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deprecate_as_int );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deprecate_as_int" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 430;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( outline_0_var_d );
            tmp_args_element_name_1 = outline_0_var_d;
            tmp_args_element_name_2 = const_str_plain_degrees;
            frame_305afad0b81c2b24c3e342819a9f787f_2->m_frame.f_lineno = 430;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_iter_arg_1 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_7__vander2d );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_305afad0b81c2b24c3e342819a9f787f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_305afad0b81c2b24c3e342819a9f787f_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_305afad0b81c2b24c3e342819a9f787f_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_305afad0b81c2b24c3e342819a9f787f_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_305afad0b81c2b24c3e342819a9f787f_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_305afad0b81c2b24c3e342819a9f787f_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_305afad0b81c2b24c3e342819a9f787f_2,
            type_description_2,
            outline_0_var_d
        );


        // Release cached frame.
        if ( frame_305afad0b81c2b24c3e342819a9f787f_2 == cache_frame_305afad0b81c2b24c3e342819a9f787f_2 )
        {
            Py_DECREF( frame_305afad0b81c2b24c3e342819a9f787f_2 );
        }
        cache_frame_305afad0b81c2b24c3e342819a9f787f_2 = NULL;

        assertFrameObject( frame_305afad0b81c2b24c3e342819a9f787f_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_7__vander2d );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_d );
        outline_0_var_d = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_d );
        outline_0_var_d = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_7__vander2d );
        return NULL;
        outline_exception_1:;
        exception_lineno = 430;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
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


            type_description_1 = "ooooooooo";
            exception_lineno = 429;
            goto try_except_handler_5;
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


            type_description_1 = "ooooooooo";
            exception_lineno = 429;
            goto try_except_handler_5;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 429;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 429;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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
        assert( var_degx == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_degx = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert( var_degy == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_degy = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_2 = par_x;
        tmp_tuple_element_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_y );
        tmp_tuple_element_2 = par_y;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
        frame_f0f16afb27b7604960d36530ef1dca61->m_frame.f_lineno = 433;
        tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_1 = const_float_0_0;
        tmp_iter_arg_3 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 433;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


            type_description_1 = "ooooooooo";
            exception_lineno = 433;
            goto try_except_handler_7;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 433;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 433;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_13;
            Py_INCREF( par_x );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_14;
            Py_INCREF( par_y );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_vander_f );
        tmp_called_name_3 = par_vander_f;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( var_degx );
        tmp_args_element_name_4 = var_degx;
        frame_f0f16afb27b7604960d36530ef1dca61->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vx == NULL );
        var_vx = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_vander_f );
        tmp_called_name_4 = par_vander_f;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_5 = par_y;
        CHECK_OBJECT( var_degy );
        tmp_args_element_name_6 = var_degy;
        frame_f0f16afb27b7604960d36530ef1dca61->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vy == NULL );
        var_vy = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_vx );
        tmp_subscribed_name_1 = var_vx;
        tmp_subscript_name_1 = const_tuple_ellipsis_none_tuple;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_vy );
        tmp_subscribed_name_2 = var_vy;
        tmp_subscript_name_2 = const_tuple_ellipsis_none_slice_none_none_none_tuple;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 437;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_v );
        tmp_source_name_2 = var_v;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reshape );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_source_name_3 = var_v;
        tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_slice_none_int_neg_2_none;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscribed_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_tuple_int_neg_1_tuple;
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_f0f16afb27b7604960d36530ef1dca61->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0f16afb27b7604960d36530ef1dca61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0f16afb27b7604960d36530ef1dca61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0f16afb27b7604960d36530ef1dca61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f0f16afb27b7604960d36530ef1dca61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f0f16afb27b7604960d36530ef1dca61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f0f16afb27b7604960d36530ef1dca61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0f16afb27b7604960d36530ef1dca61,
        type_description_1,
        par_vander_f,
        par_x,
        par_y,
        par_deg,
        var_degx,
        var_degy,
        var_vx,
        var_vy,
        var_v
    );


    // Release cached frame.
    if ( frame_f0f16afb27b7604960d36530ef1dca61 == cache_frame_f0f16afb27b7604960d36530ef1dca61 )
    {
        Py_DECREF( frame_f0f16afb27b7604960d36530ef1dca61 );
    }
    cache_frame_f0f16afb27b7604960d36530ef1dca61 = NULL;

    assertFrameObject( frame_f0f16afb27b7604960d36530ef1dca61 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_7__vander2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_degx );
    Py_DECREF( var_degx );
    var_degx = NULL;

    CHECK_OBJECT( (PyObject *)var_degy );
    Py_DECREF( var_degy );
    var_degy = NULL;

    CHECK_OBJECT( (PyObject *)var_vx );
    Py_DECREF( var_vx );
    var_vx = NULL;

    CHECK_OBJECT( (PyObject *)var_vy );
    Py_DECREF( var_vy );
    var_vy = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_degx );
    var_degx = NULL;

    Py_XDECREF( var_degy );
    var_degy = NULL;

    Py_XDECREF( var_vx );
    var_vx = NULL;

    Py_XDECREF( var_vy );
    var_vy = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_7__vander2d );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_8__vander3d( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vander_f = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_z = python_pars[ 3 ];
    PyObject *par_deg = python_pars[ 4 ];
    PyObject *var_degx = NULL;
    PyObject *var_degy = NULL;
    PyObject *var_degz = NULL;
    PyObject *var_vx = NULL;
    PyObject *var_vy = NULL;
    PyObject *var_vz = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_d = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_03b32df7379cab2c6d364e1f46168871;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_ef1a882391e18d24bb4d98b24596cab6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ef1a882391e18d24bb4d98b24596cab6_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_03b32df7379cab2c6d364e1f46168871 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03b32df7379cab2c6d364e1f46168871, codeobj_03b32df7379cab2c6d364e1f46168871, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03b32df7379cab2c6d364e1f46168871 = cache_frame_03b32df7379cab2c6d364e1f46168871;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03b32df7379cab2c6d364e1f46168871 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03b32df7379cab2c6d364e1f46168871 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( par_deg );
            tmp_iter_arg_2 = par_deg;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 453;
                type_description_1 = "oooooooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_listcomp_1__$0 == NULL );
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_listcomp_1__contraction == NULL );
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_ef1a882391e18d24bb4d98b24596cab6_2, codeobj_ef1a882391e18d24bb4d98b24596cab6, module_numpy$polynomial$polyutils, sizeof(void *) );
        frame_ef1a882391e18d24bb4d98b24596cab6_2 = cache_frame_ef1a882391e18d24bb4d98b24596cab6_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_ef1a882391e18d24bb4d98b24596cab6_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_ef1a882391e18d24bb4d98b24596cab6_2 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_listcomp_1__$0 );
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_2 = "o";
                    exception_lineno = 453;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_d;
                outline_0_var_d = tmp_assign_source_5;
                Py_INCREF( outline_0_var_d );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__deprecate_as_int );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deprecate_as_int );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_deprecate_as_int" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 453;
                type_description_2 = "o";
                goto try_except_handler_4;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( outline_0_var_d );
            tmp_args_element_name_1 = outline_0_var_d;
            tmp_args_element_name_2 = const_str_plain_degrees;
            frame_ef1a882391e18d24bb4d98b24596cab6_2->m_frame.f_lineno = 453;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 453;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 453;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_listcomp_1__contraction );
        tmp_iter_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF( tmp_iter_arg_1 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_8__vander3d );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ef1a882391e18d24bb4d98b24596cab6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION( frame_ef1a882391e18d24bb4d98b24596cab6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_ef1a882391e18d24bb4d98b24596cab6_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_ef1a882391e18d24bb4d98b24596cab6_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_ef1a882391e18d24bb4d98b24596cab6_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_ef1a882391e18d24bb4d98b24596cab6_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_ef1a882391e18d24bb4d98b24596cab6_2,
            type_description_2,
            outline_0_var_d
        );


        // Release cached frame.
        if ( frame_ef1a882391e18d24bb4d98b24596cab6_2 == cache_frame_ef1a882391e18d24bb4d98b24596cab6_2 )
        {
            Py_DECREF( frame_ef1a882391e18d24bb4d98b24596cab6_2 );
        }
        cache_frame_ef1a882391e18d24bb4d98b24596cab6_2 = NULL;

        assertFrameObject( frame_ef1a882391e18d24bb4d98b24596cab6_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_8__vander3d );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF( outline_0_var_d );
        outline_0_var_d = NULL;

        goto outline_result_1;
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

        Py_XDECREF( outline_0_var_d );
        outline_0_var_d = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_8__vander3d );
        return NULL;
        outline_exception_1:;
        exception_lineno = 453;
        goto try_except_handler_2;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 452;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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
            exception_lineno = 452;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
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
            exception_lineno = 452;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
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
                    exception_lineno = 452;
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

            type_description_1 = "oooooooooooo";
            exception_lineno = 452;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert( var_degx == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_degx = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert( var_degy == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_degy = tmp_assign_source_10;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
        assert( var_degz == NULL );
        Py_INCREF( tmp_assign_source_11 );
        var_degz = tmp_assign_source_11;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_x );
        tmp_tuple_element_2 = par_x;
        tmp_tuple_element_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_y );
        tmp_tuple_element_2 = par_y;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_z );
        tmp_tuple_element_2 = par_z;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
        tmp_args_name_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
        frame_03b32df7379cab2c6d364e1f46168871->m_frame.f_lineno = 456;
        tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_name_1 = const_float_0_0;
        tmp_iter_arg_3 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_iter_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
        Py_DECREF( tmp_iter_arg_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 456;
            type_description_1 = "oooooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 0, 3 );
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
            exception_lineno = 456;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 1, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 456;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_6, 2, 3 );
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


            type_description_1 = "oooooooooooo";
            exception_lineno = 456;
            goto try_except_handler_7;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
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
                    exception_lineno = 456;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooooooooooo";
            exception_lineno = 456;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_16;
            Py_INCREF( par_x );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_17;
            Py_INCREF( par_y );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = par_z;
            assert( old != NULL );
            par_z = tmp_assign_source_18;
            Py_INCREF( par_z );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_vander_f );
        tmp_called_name_3 = par_vander_f;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        CHECK_OBJECT( var_degx );
        tmp_args_element_name_4 = var_degx;
        frame_03b32df7379cab2c6d364e1f46168871->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 458;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vx == NULL );
        var_vx = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_vander_f );
        tmp_called_name_4 = par_vander_f;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_5 = par_y;
        CHECK_OBJECT( var_degy );
        tmp_args_element_name_6 = var_degy;
        frame_03b32df7379cab2c6d364e1f46168871->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vy == NULL );
        var_vy = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_vander_f );
        tmp_called_name_5 = par_vander_f;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_7 = par_z;
        CHECK_OBJECT( var_degz );
        tmp_args_element_name_8 = var_degz;
        frame_03b32df7379cab2c6d364e1f46168871->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 460;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_vz == NULL );
        var_vz = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_vx );
        tmp_subscribed_name_1 = var_vx;
        tmp_subscript_name_1 = const_tuple_ellipsis_none_none_tuple;
        tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_vy );
        tmp_subscribed_name_2 = var_vy;
        tmp_subscript_name_2 = const_tuple_ellipsis_none_slice_none_none_none_none_tuple;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 461;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_vz );
        tmp_subscribed_name_3 = var_vz;
        tmp_subscript_name_3 = const_tuple_ellipsis_none_none_slice_none_none_none_tuple;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 461;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 461;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_v );
        tmp_source_name_2 = var_v;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reshape );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_v );
        tmp_source_name_3 = var_v;
        tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 462;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = const_slice_none_int_neg_3_none;
        tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 462;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_tuple_int_neg_1_tuple;
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 462;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_03b32df7379cab2c6d364e1f46168871->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b32df7379cab2c6d364e1f46168871 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b32df7379cab2c6d364e1f46168871 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03b32df7379cab2c6d364e1f46168871 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03b32df7379cab2c6d364e1f46168871, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03b32df7379cab2c6d364e1f46168871->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03b32df7379cab2c6d364e1f46168871, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03b32df7379cab2c6d364e1f46168871,
        type_description_1,
        par_vander_f,
        par_x,
        par_y,
        par_z,
        par_deg,
        var_degx,
        var_degy,
        var_degz,
        var_vx,
        var_vy,
        var_vz,
        var_v
    );


    // Release cached frame.
    if ( frame_03b32df7379cab2c6d364e1f46168871 == cache_frame_03b32df7379cab2c6d364e1f46168871 )
    {
        Py_DECREF( frame_03b32df7379cab2c6d364e1f46168871 );
    }
    cache_frame_03b32df7379cab2c6d364e1f46168871 = NULL;

    assertFrameObject( frame_03b32df7379cab2c6d364e1f46168871 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_8__vander3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_degx );
    Py_DECREF( var_degx );
    var_degx = NULL;

    CHECK_OBJECT( (PyObject *)var_degy );
    Py_DECREF( var_degy );
    var_degy = NULL;

    CHECK_OBJECT( (PyObject *)var_degz );
    Py_DECREF( var_degz );
    var_degz = NULL;

    CHECK_OBJECT( (PyObject *)var_vx );
    Py_DECREF( var_vx );
    var_vx = NULL;

    CHECK_OBJECT( (PyObject *)var_vy );
    Py_DECREF( var_vy );
    var_vy = NULL;

    CHECK_OBJECT( (PyObject *)var_vz );
    Py_DECREF( var_vz );
    var_vz = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_degx );
    var_degx = NULL;

    Py_XDECREF( var_degy );
    var_degy = NULL;

    Py_XDECREF( var_degz );
    var_degz = NULL;

    Py_XDECREF( var_vx );
    var_vx = NULL;

    Py_XDECREF( var_vy );
    var_vy = NULL;

    Py_XDECREF( var_vz );
    var_vz = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_8__vander3d );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_9__fromroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line_f = python_pars[ 0 ];
    PyObject *par_mul_f = python_pars[ 1 ];
    PyObject *par_roots = python_pars[ 2 ];
    PyObject *var_p = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_r = NULL;
    PyObject *var_tmp = NULL;
    PyObject *outline_0_var_r = NULL;
    PyObject *outline_1_var_i = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1fbeb9368a4f4d6cdaf281ca77b728f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_f611b64defd46832c84341b744f9335e_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_f611b64defd46832c84341b744f9335e_2 = NULL;
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
    struct Nuitka_FrameObject *frame_324997a6638e7b73abeb64001048a0de_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_324997a6638e7b73abeb64001048a0de_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_1fbeb9368a4f4d6cdaf281ca77b728f6 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1fbeb9368a4f4d6cdaf281ca77b728f6, codeobj_1fbeb9368a4f4d6cdaf281ca77b728f6, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1fbeb9368a4f4d6cdaf281ca77b728f6 = cache_frame_1fbeb9368a4f4d6cdaf281ca77b728f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_roots );
        tmp_len_arg_1 = par_roots;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 478;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 479;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_1fbeb9368a4f4d6cdaf281ca77b728f6->m_frame.f_lineno = 479;
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ones, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_list_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 481;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_roots );
            tmp_list_element_1 = par_roots;
            tmp_tuple_element_1 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
            frame_1fbeb9368a4f4d6cdaf281ca77b728f6->m_frame.f_lineno = 481;
            tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 481;
                type_description_1 = "oooooooo";
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
            tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 481;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                        type_description_1 = "oooooooo";
                        exception_lineno = 481;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooo";
                exception_lineno = 481;
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
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = par_roots;
                assert( old != NULL );
                par_roots = tmp_assign_source_3;
                Py_INCREF( par_roots );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_roots );
            tmp_called_instance_2 = par_roots;
            frame_1fbeb9368a4f4d6cdaf281ca77b728f6->m_frame.f_lineno = 482;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_sort );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 482;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_4;
            // Tried code:
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( par_roots );
                tmp_iter_arg_2 = par_roots;
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 483;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_listcomp_1__$0 == NULL );
                tmp_listcomp_1__$0 = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = PyList_New( 0 );
                assert( tmp_listcomp_1__contraction == NULL );
                tmp_listcomp_1__contraction = tmp_assign_source_6;
            }
            MAKE_OR_REUSE_FRAME( cache_frame_f611b64defd46832c84341b744f9335e_2, codeobj_f611b64defd46832c84341b744f9335e, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *) );
            frame_f611b64defd46832c84341b744f9335e_2 = cache_frame_f611b64defd46832c84341b744f9335e_2;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_f611b64defd46832c84341b744f9335e_2 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_f611b64defd46832c84341b744f9335e_2 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_listcomp_1__$0 );
                tmp_next_source_1 = tmp_listcomp_1__$0;
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
                        type_description_2 = "oo";
                        exception_lineno = 483;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_listcomp_1__iter_value_0 );
                tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_r;
                    outline_0_var_r = tmp_assign_source_8;
                    Py_INCREF( outline_0_var_r );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( tmp_listcomp_1__contraction );
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT( par_line_f );
                tmp_called_name_2 = par_line_f;
                CHECK_OBJECT( outline_0_var_r );
                tmp_operand_name_1 = outline_0_var_r;
                tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 483;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
                tmp_args_element_name_2 = const_int_pos_1;
                frame_f611b64defd46832c84341b744f9335e_2->m_frame.f_lineno = 483;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 483;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 483;
                    type_description_2 = "oo";
                    goto try_except_handler_5;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 483;
                type_description_2 = "oo";
                goto try_except_handler_5;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_listcomp_1__contraction );
            tmp_assign_source_4 = tmp_listcomp_1__contraction;
            Py_INCREF( tmp_assign_source_4 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            // Return handler code:
            try_return_handler_5:;
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
            try_except_handler_5:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
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
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f611b64defd46832c84341b744f9335e_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_2:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_f611b64defd46832c84341b744f9335e_2 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_4;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_f611b64defd46832c84341b744f9335e_2 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_f611b64defd46832c84341b744f9335e_2, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_f611b64defd46832c84341b744f9335e_2->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_f611b64defd46832c84341b744f9335e_2, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_f611b64defd46832c84341b744f9335e_2,
                type_description_2,
                outline_0_var_r,
                par_line_f
            );


            // Release cached frame.
            if ( frame_f611b64defd46832c84341b744f9335e_2 == cache_frame_f611b64defd46832c84341b744f9335e_2 )
            {
                Py_DECREF( frame_f611b64defd46832c84341b744f9335e_2 );
            }
            cache_frame_f611b64defd46832c84341b744f9335e_2 = NULL;

            assertFrameObject( frame_f611b64defd46832c84341b744f9335e_2 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF( outline_0_var_r );
            outline_0_var_r = NULL;

            goto outline_result_1;
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

            Py_XDECREF( outline_0_var_r );
            outline_0_var_r = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            outline_exception_1:;
            exception_lineno = 483;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert( var_p == NULL );
            var_p = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( var_p );
            tmp_len_arg_2 = var_p;
            tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_9;
        }
        loop_start_2:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_n );
            tmp_compexpr_left_2 = var_n;
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_operand_name_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 485;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 485;
                type_description_1 = "oooooooo";
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
            goto loop_end_2;
            branch_no_2:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_n );
            tmp_left_name_1 = var_n;
            tmp_right_name_1 = const_int_pos_2;
            tmp_iter_arg_3 = BUILTIN_DIVMOD( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 486;
                type_description_1 = "oooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 486;
                type_description_1 = "oooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 0, 2 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 486;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 1, 2 );
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


                type_description_1 = "oooooooo";
                exception_lineno = 486;
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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

                        type_description_1 = "oooooooo";
                        exception_lineno = 486;
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

                type_description_1 = "oooooooo";
                exception_lineno = 486;
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        try_end_3:;
        goto try_end_4;
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
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_m;
                var_m = tmp_assign_source_13;
                Py_INCREF( var_m );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_r;
                var_r = tmp_assign_source_14;
                Py_INCREF( var_r );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_15;
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_xrange_low_1;
                CHECK_OBJECT( var_m );
                tmp_xrange_low_1 = var_m;
                tmp_iter_arg_4 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_listcomp_2__$0;
                    tmp_listcomp_2__$0 = tmp_assign_source_16;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_17;
                tmp_assign_source_17 = PyList_New( 0 );
                {
                    PyObject *old = tmp_listcomp_2__contraction;
                    tmp_listcomp_2__contraction = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            MAKE_OR_REUSE_FRAME( cache_frame_324997a6638e7b73abeb64001048a0de_3, codeobj_324997a6638e7b73abeb64001048a0de, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
            frame_324997a6638e7b73abeb64001048a0de_3 = cache_frame_324997a6638e7b73abeb64001048a0de_3;

            // Push the new frame as the currently active one.
            pushFrameStack( frame_324997a6638e7b73abeb64001048a0de_3 );

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert( Py_REFCNT( frame_324997a6638e7b73abeb64001048a0de_3 ) == 2 ); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_listcomp_2__$0 );
                tmp_next_source_2 = tmp_listcomp_2__$0;
                tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
                if ( tmp_assign_source_18 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_3;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_2 = "oooo";
                        exception_lineno = 487;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_2__iter_value_0;
                    tmp_listcomp_2__iter_value_0 = tmp_assign_source_18;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT( tmp_listcomp_2__iter_value_0 );
                tmp_assign_source_19 = tmp_listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_1_var_i;
                    outline_1_var_i = tmp_assign_source_19;
                    Py_INCREF( outline_1_var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( tmp_listcomp_2__contraction );
                tmp_append_list_2 = tmp_listcomp_2__contraction;
                CHECK_OBJECT( par_mul_f );
                tmp_called_name_3 = par_mul_f;
                CHECK_OBJECT( var_p );
                tmp_subscribed_name_1 = var_p;
                CHECK_OBJECT( outline_1_var_i );
                tmp_subscript_name_1 = outline_1_var_i;
                tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_2 = "oooo";
                    goto try_except_handler_9;
                }
                CHECK_OBJECT( var_p );
                tmp_subscribed_name_2 = var_p;
                CHECK_OBJECT( outline_1_var_i );
                tmp_left_name_2 = outline_1_var_i;
                CHECK_OBJECT( var_m );
                tmp_right_name_2 = var_m;
                tmp_subscript_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_subscript_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_3 );

                    exception_lineno = 487;
                    type_description_2 = "oooo";
                    goto try_except_handler_9;
                }
                tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_3 );

                    exception_lineno = 487;
                    type_description_2 = "oooo";
                    goto try_except_handler_9;
                }
                frame_324997a6638e7b73abeb64001048a0de_3->m_frame.f_lineno = 487;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_append_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_2 = "oooo";
                    goto try_except_handler_9;
                }
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                Py_DECREF( tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 487;
                    type_description_2 = "oooo";
                    goto try_except_handler_9;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 487;
                type_description_2 = "oooo";
                goto try_except_handler_9;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( tmp_listcomp_2__contraction );
            tmp_assign_source_15 = tmp_listcomp_2__contraction;
            Py_INCREF( tmp_assign_source_15 );
            goto try_return_handler_9;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            // Return handler code:
            try_return_handler_9:;
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
            try_except_handler_9:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
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
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_3;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION( frame_324997a6638e7b73abeb64001048a0de_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;

            frame_return_exit_3:;
#if 0
            RESTORE_FRAME_EXCEPTION( frame_324997a6638e7b73abeb64001048a0de_3 );
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;

            frame_exception_exit_3:;

#if 0
            RESTORE_FRAME_EXCEPTION( frame_324997a6638e7b73abeb64001048a0de_3 );
#endif

            if ( exception_tb == NULL )
            {
                exception_tb = MAKE_TRACEBACK( frame_324997a6638e7b73abeb64001048a0de_3, exception_lineno );
            }
            else if ( exception_tb->tb_frame != &frame_324997a6638e7b73abeb64001048a0de_3->m_frame )
            {
                exception_tb = ADD_TRACEBACK( exception_tb, frame_324997a6638e7b73abeb64001048a0de_3, exception_lineno );
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_324997a6638e7b73abeb64001048a0de_3,
                type_description_2,
                outline_1_var_i,
                par_mul_f,
                var_p,
                var_m
            );


            // Release cached frame.
            if ( frame_324997a6638e7b73abeb64001048a0de_3 == cache_frame_324997a6638e7b73abeb64001048a0de_3 )
            {
                Py_DECREF( frame_324997a6638e7b73abeb64001048a0de_3 );
            }
            cache_frame_324997a6638e7b73abeb64001048a0de_3 = NULL;

            assertFrameObject( frame_324997a6638e7b73abeb64001048a0de_3 );

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;

            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_2:;
            type_description_1 = "oooooooo";
            goto try_except_handler_8;
            skip_nested_handling_2:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF( outline_1_var_i );
            outline_1_var_i = NULL;

            goto outline_result_2;
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

            Py_XDECREF( outline_1_var_i );
            outline_1_var_i = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto outline_exception_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
            return NULL;
            outline_exception_2:;
            exception_lineno = 487;
            goto frame_exception_exit_1;
            outline_result_2:;
            {
                PyObject *old = var_tmp;
                var_tmp = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_r );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_r );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 488;
                type_description_1 = "oooooooo";
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
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                int tmp_ass_subscript_res_1;
                CHECK_OBJECT( par_mul_f );
                tmp_called_name_4 = par_mul_f;
                CHECK_OBJECT( var_tmp );
                tmp_subscribed_name_3 = var_tmp;
                tmp_subscript_name_3 = const_int_0;
                tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_p );
                tmp_subscribed_name_4 = var_p;
                tmp_subscript_name_4 = const_int_neg_1;
                tmp_args_element_name_6 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, -1 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_args_element_name_5 );

                    exception_lineno = 489;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_1fbeb9368a4f4d6cdaf281ca77b728f6->m_frame.f_lineno = 489;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_5 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_ass_subvalue_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_tmp );
                tmp_ass_subscribed_1 = var_tmp;
                tmp_ass_subscript_1 = const_int_0;
                tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subvalue_1 );
                if ( tmp_ass_subscript_res_1 == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 489;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( var_tmp );
            tmp_assign_source_20 = var_tmp;
            {
                PyObject *old = var_p;
                assert( old != NULL );
                var_p = tmp_assign_source_20;
                Py_INCREF( var_p );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( var_m );
            tmp_assign_source_21 = var_m;
            {
                PyObject *old = var_n;
                assert( old != NULL );
                var_n = tmp_assign_source_21;
                Py_INCREF( var_n );
                Py_DECREF( old );
            }

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto loop_start_2;
        loop_end_2:;
        {
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( var_p );
            tmp_subscribed_name_5 = var_p;
            tmp_subscript_name_5 = const_int_0;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 492;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fbeb9368a4f4d6cdaf281ca77b728f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fbeb9368a4f4d6cdaf281ca77b728f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fbeb9368a4f4d6cdaf281ca77b728f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1fbeb9368a4f4d6cdaf281ca77b728f6,
        type_description_1,
        par_line_f,
        par_mul_f,
        par_roots,
        var_p,
        var_n,
        var_m,
        var_r,
        var_tmp
    );


    // Release cached frame.
    if ( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 == cache_frame_1fbeb9368a4f4d6cdaf281ca77b728f6 )
    {
        Py_DECREF( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );
    }
    cache_frame_1fbeb9368a4f4d6cdaf281ca77b728f6 = NULL;

    assertFrameObject( frame_1fbeb9368a4f4d6cdaf281ca77b728f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_line_f );
    Py_DECREF( par_line_f );
    par_line_f = NULL;

    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_line_f );
    Py_DECREF( par_line_f );
    par_line_f = NULL;

    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_9__fromroots );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_10__valnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val_f = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_it = NULL;
    PyObject *var_x0 = NULL;
    PyObject *var_xi = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1ff0f7ead4c049b7f9db97a367943f25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1ff0f7ead4c049b7f9db97a367943f25 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ff0f7ead4c049b7f9db97a367943f25, codeobj_1ff0f7ead4c049b7f9db97a367943f25, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1ff0f7ead4c049b7f9db97a367943f25 = cache_frame_1ff0f7ead4c049b7f9db97a367943f25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ff0f7ead4c049b7f9db97a367943f25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ff0f7ead4c049b7f9db97a367943f25 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 507;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_tuple_element_1 = par_args;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
        frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 507;
        tmp_tuple_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_tuple_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 507;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_args;
            assert( old != NULL );
            par_args = tmp_assign_source_1;
            Py_DECREF( old );
        }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_1ff0f7ead4c049b7f9db97a367943f25, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_1ff0f7ead4c049b7f9db97a367943f25, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 508;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_args );
            tmp_len_arg_1 = par_args;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 510;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_compexpr_right_2 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_13227f847c5a19dd9cedee16debb959e;
                frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 511;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 511;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                PyObject *tmp_len_arg_2;
                CHECK_OBJECT( par_args );
                tmp_len_arg_2 = par_args;
                tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
                if ( tmp_compexpr_left_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 512;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                tmp_compexpr_right_3 = const_int_pos_3;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                Py_DECREF( tmp_compexpr_left_3 );
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_88ea85868dacccabad48a8aef44c097b;
                    frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 513;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 513;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_make_exception_arg_3;
                    tmp_make_exception_arg_3 = const_str_digest_1a86acac8b575cf418c742e35393e18a;
                    frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 515;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_3 };
                        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_3 == NULL) );
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 515;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 506;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame) frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_10__valnd );
    return NULL;
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_args );
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_it == NULL );
        var_it = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( var_it );
        tmp_value_name_1 = var_it;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
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


            type_description_1 = "oooooo";
            exception_lineno = 518;
            goto frame_exception_exit_1;
        }
        assert( var_x0 == NULL );
        var_x0 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_val_f );
        tmp_called_name_2 = par_val_f;
        CHECK_OBJECT( var_x0 );
        tmp_args_element_name_1 = var_x0;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 521;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_it );
        tmp_iter_arg_2 = var_it;
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 522;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                exception_lineno = 522;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_xi;
            var_xi = tmp_assign_source_7;
            Py_INCREF( var_xi );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        CHECK_OBJECT( par_val_f );
        tmp_called_name_3 = par_val_f;
        CHECK_OBJECT( var_xi );
        tmp_tuple_element_2 = var_xi;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_c );
        tmp_tuple_element_2 = par_c;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_d61f4d385fe121badbdc8e4bc7fe576f );
        frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame.f_lineno = 523;
        tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 523;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_8;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
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
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff0f7ead4c049b7f9db97a367943f25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff0f7ead4c049b7f9db97a367943f25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ff0f7ead4c049b7f9db97a367943f25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ff0f7ead4c049b7f9db97a367943f25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ff0f7ead4c049b7f9db97a367943f25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ff0f7ead4c049b7f9db97a367943f25,
        type_description_1,
        par_val_f,
        par_c,
        par_args,
        var_it,
        var_x0,
        var_xi
    );


    // Release cached frame.
    if ( frame_1ff0f7ead4c049b7f9db97a367943f25 == cache_frame_1ff0f7ead4c049b7f9db97a367943f25 )
    {
        Py_DECREF( frame_1ff0f7ead4c049b7f9db97a367943f25 );
    }
    cache_frame_1ff0f7ead4c049b7f9db97a367943f25 = NULL;

    assertFrameObject( frame_1ff0f7ead4c049b7f9db97a367943f25 );

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

    CHECK_OBJECT( par_c );
    tmp_return_value = par_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_10__valnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val_f );
    Py_DECREF( par_val_f );
    par_val_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_it );
    Py_DECREF( var_it );
    var_it = NULL;

    CHECK_OBJECT( (PyObject *)var_x0 );
    Py_DECREF( var_x0 );
    var_x0 = NULL;

    Py_XDECREF( var_xi );
    var_xi = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val_f );
    Py_DECREF( par_val_f );
    par_val_f = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_x0 );
    var_x0 = NULL;

    Py_XDECREF( var_xi );
    var_xi = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_10__valnd );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_11__gridnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val_f = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_xi = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a90280ae7d81c308808ce9dfc5cceafd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a90280ae7d81c308808ce9dfc5cceafd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a90280ae7d81c308808ce9dfc5cceafd, codeobj_a90280ae7d81c308808ce9dfc5cceafd, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a90280ae7d81c308808ce9dfc5cceafd = cache_frame_a90280ae7d81c308808ce9dfc5cceafd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a90280ae7d81c308808ce9dfc5cceafd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a90280ae7d81c308808ce9dfc5cceafd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_args );
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 538;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_xi;
            var_xi = tmp_assign_source_3;
            Py_INCREF( var_xi );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_val_f );
        tmp_called_name_1 = par_val_f;
        CHECK_OBJECT( var_xi );
        tmp_args_element_name_1 = var_xi;
        CHECK_OBJECT( par_c );
        tmp_args_element_name_2 = par_c;
        frame_a90280ae7d81c308808ce9dfc5cceafd->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 539;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_4;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oooo";
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
    RESTORE_FRAME_EXCEPTION( frame_a90280ae7d81c308808ce9dfc5cceafd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a90280ae7d81c308808ce9dfc5cceafd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a90280ae7d81c308808ce9dfc5cceafd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a90280ae7d81c308808ce9dfc5cceafd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a90280ae7d81c308808ce9dfc5cceafd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a90280ae7d81c308808ce9dfc5cceafd,
        type_description_1,
        par_val_f,
        par_c,
        par_args,
        var_xi
    );


    // Release cached frame.
    if ( frame_a90280ae7d81c308808ce9dfc5cceafd == cache_frame_a90280ae7d81c308808ce9dfc5cceafd )
    {
        Py_DECREF( frame_a90280ae7d81c308808ce9dfc5cceafd );
    }
    cache_frame_a90280ae7d81c308808ce9dfc5cceafd = NULL;

    assertFrameObject( frame_a90280ae7d81c308808ce9dfc5cceafd );

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

    CHECK_OBJECT( par_c );
    tmp_return_value = par_c;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_11__gridnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val_f );
    Py_DECREF( par_val_f );
    par_val_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_xi );
    var_xi = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val_f );
    Py_DECREF( par_val_f );
    par_val_f = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_xi );
    var_xi = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_11__gridnd );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_12__div( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mul_f = python_pars[ 0 ];
    PyObject *par_c1 = python_pars[ 1 ];
    PyObject *par_c2 = python_pars[ 2 ];
    PyObject *var_lc1 = NULL;
    PyObject *var_lc2 = NULL;
    PyObject *var_quo = NULL;
    PyObject *var_rem = NULL;
    PyObject *var_i = NULL;
    PyObject *var_p = NULL;
    PyObject *var_q = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_32697007c1d97981caff23da5ee4bdec;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_32697007c1d97981caff23da5ee4bdec = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32697007c1d97981caff23da5ee4bdec, codeobj_32697007c1d97981caff23da5ee4bdec, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_32697007c1d97981caff23da5ee4bdec = cache_frame_32697007c1d97981caff23da5ee4bdec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32697007c1d97981caff23da5ee4bdec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32697007c1d97981caff23da5ee4bdec ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 558;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_list_element_1 = par_c1;
        tmp_args_element_name_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_c2 );
        tmp_list_element_1 = par_c2;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_32697007c1d97981caff23da5ee4bdec->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 558;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 558;
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


            type_description_1 = "oooooooooo";
            exception_lineno = 558;
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

                    type_description_1 = "oooooooooo";
                    exception_lineno = 558;
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

            type_description_1 = "oooooooooo";
            exception_lineno = 558;
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
        {
            PyObject *old = par_c1;
            assert( old != NULL );
            par_c1 = tmp_assign_source_4;
            Py_INCREF( par_c1 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_c2;
            assert( old != NULL );
            par_c2 = tmp_assign_source_5;
            Py_INCREF( par_c2 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_c2 );
        tmp_subscribed_name_1 = par_c2;
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 559;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 559;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_raise_type_1;
            frame_32697007c1d97981caff23da5ee4bdec->m_frame.f_lineno = 560;
            tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_ZeroDivisionError );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 560;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_c1 );
        tmp_len_arg_1 = par_c1;
        tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 562;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lc1 == NULL );
        var_lc1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c2 );
        tmp_len_arg_2 = par_c2;
        tmp_assign_source_7 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 563;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_lc2 == NULL );
        var_lc2 = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_lc1 );
        tmp_compexpr_left_2 = var_lc1;
        CHECK_OBJECT( var_lc2 );
        tmp_compexpr_right_2 = var_lc2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
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
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_c1 );
            tmp_subscribed_name_2 = par_c1;
            tmp_subscript_name_2 = const_slice_none_int_pos_1_none;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 565;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_0;
            tmp_tuple_element_1 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 565;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_c1 );
            tmp_tuple_element_1 = par_c1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_lc2 );
            tmp_compexpr_left_3 = var_lc2;
            tmp_compexpr_right_3 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
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
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( par_c1 );
                tmp_left_name_2 = par_c1;
                CHECK_OBJECT( par_c2 );
                tmp_subscribed_name_3 = par_c2;
                tmp_subscript_name_3 = const_int_neg_1;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 567;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 567;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( par_c1 );
                tmp_subscribed_name_4 = par_c1;
                tmp_subscript_name_4 = const_slice_none_int_pos_1_none;
                tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_left_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 567;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_3 = const_int_0;
                tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_left_name_3 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 567;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
                goto frame_return_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_left_name_4;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_4;
                PyObject *tmp_right_name_5;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 569;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_empty );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 569;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lc1 );
                tmp_left_name_5 = var_lc1;
                CHECK_OBJECT( var_lc2 );
                tmp_right_name_4 = var_lc2;
                tmp_left_name_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_5, tmp_right_name_4 );
                assert( !(tmp_left_name_4 == NULL) );
                tmp_right_name_5 = const_int_pos_1;
                tmp_tuple_element_3 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_4, tmp_right_name_5 );
                Py_DECREF( tmp_left_name_4 );
                assert( !(tmp_tuple_element_3 == NULL) );
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
                tmp_dict_key_1 = const_str_plain_dtype;
                CHECK_OBJECT( par_c1 );
                tmp_source_name_2 = par_c1;
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_name_1 );

                    exception_lineno = 569;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_32697007c1d97981caff23da5ee4bdec->m_frame.f_lineno = 569;
                tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 569;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_quo == NULL );
                var_quo = tmp_assign_source_8;
            }
            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( par_c1 );
                tmp_assign_source_9 = par_c1;
                assert( var_rem == NULL );
                Py_INCREF( tmp_assign_source_9 );
                var_rem = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_xrange_low_1;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_xrange_high_1;
                PyObject *tmp_xrange_step_1;
                CHECK_OBJECT( var_lc1 );
                tmp_left_name_6 = var_lc1;
                CHECK_OBJECT( var_lc2 );
                tmp_right_name_6 = var_lc2;
                tmp_xrange_low_1 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_6, tmp_right_name_6 );
                assert( !(tmp_xrange_low_1 == NULL) );
                tmp_xrange_high_1 = const_int_neg_1;
                tmp_xrange_step_1 = const_int_neg_1;
                tmp_iter_arg_2 = BUILTIN_XRANGE3( tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1 );
                Py_DECREF( tmp_xrange_low_1 );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 571;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 571;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
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
                        type_description_1 = "oooooooooo";
                        exception_lineno = 571;
                        goto try_except_handler_4;
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
                    PyObject *old = var_i;
                    var_i = tmp_assign_source_12;
                    Py_INCREF( var_i );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_7;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_7;
                PyObject *tmp_right_name_8;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_mul_f );
                tmp_called_name_3 = par_mul_f;
                tmp_left_name_8 = LIST_COPY( const_list_int_0_list );
                CHECK_OBJECT( var_i );
                tmp_right_name_7 = var_i;
                tmp_left_name_7 = BINARY_OPERATION_MUL_LIST_OBJECT( tmp_left_name_8, tmp_right_name_7 );
                Py_DECREF( tmp_left_name_8 );
                if ( tmp_left_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 572;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_8 = LIST_COPY( const_list_int_pos_1_list );
                tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_7, tmp_right_name_8 );
                Py_DECREF( tmp_left_name_7 );
                Py_DECREF( tmp_right_name_8 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 572;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_c2 );
                tmp_args_element_name_3 = par_c2;
                frame_32697007c1d97981caff23da5ee4bdec->m_frame.f_lineno = 572;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 572;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_p;
                    var_p = tmp_assign_source_13;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_left_name_9;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_right_name_9;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                CHECK_OBJECT( var_rem );
                tmp_subscribed_name_5 = var_rem;
                tmp_subscript_name_5 = const_int_neg_1;
                tmp_left_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, -1 );
                if ( tmp_left_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 573;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_p );
                tmp_subscribed_name_6 = var_p;
                tmp_subscript_name_6 = const_int_neg_1;
                tmp_right_name_9 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_6, tmp_subscript_name_6, -1 );
                if ( tmp_right_name_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_9 );

                    exception_lineno = 573;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
                Py_DECREF( tmp_left_name_9 );
                Py_DECREF( tmp_right_name_9 );
                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 573;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_q;
                    var_q = tmp_assign_source_14;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_left_name_10;
                PyObject *tmp_subscribed_name_7;
                PyObject *tmp_subscript_name_7;
                PyObject *tmp_right_name_10;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                CHECK_OBJECT( var_rem );
                tmp_subscribed_name_7 = var_rem;
                tmp_subscript_name_7 = const_slice_none_int_neg_1_none;
                tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                if ( tmp_left_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 574;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( var_q );
                tmp_left_name_11 = var_q;
                CHECK_OBJECT( var_p );
                tmp_subscribed_name_8 = var_p;
                tmp_subscript_name_8 = const_slice_none_int_neg_1_none;
                tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                if ( tmp_right_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 574;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                tmp_right_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
                Py_DECREF( tmp_right_name_11 );
                if ( tmp_right_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_left_name_10 );

                    exception_lineno = 574;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                tmp_assign_source_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
                Py_DECREF( tmp_left_name_10 );
                Py_DECREF( tmp_right_name_10 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 574;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = var_rem;
                    assert( old != NULL );
                    var_rem = tmp_assign_source_15;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( var_q );
                tmp_ass_subvalue_1 = var_q;
                CHECK_OBJECT( var_quo );
                tmp_ass_subscribed_1 = var_quo;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_1 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 575;
                    type_description_1 = "oooooooooo";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 571;
                type_description_1 = "oooooooooo";
                goto try_except_handler_4;
            }
            goto loop_start_1;
            loop_end_1:;
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
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                CHECK_OBJECT( var_quo );
                tmp_tuple_element_4 = var_quo;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_4 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trimseq );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_return_value );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trimseq" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 576;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_3;
                CHECK_OBJECT( var_rem );
                tmp_args_element_name_4 = var_rem;
                frame_32697007c1d97981caff23da5ee4bdec->m_frame.f_lineno = 576;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_return_value );

                    exception_lineno = 576;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
                goto frame_return_exit_1;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32697007c1d97981caff23da5ee4bdec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32697007c1d97981caff23da5ee4bdec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32697007c1d97981caff23da5ee4bdec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32697007c1d97981caff23da5ee4bdec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32697007c1d97981caff23da5ee4bdec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32697007c1d97981caff23da5ee4bdec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32697007c1d97981caff23da5ee4bdec,
        type_description_1,
        par_mul_f,
        par_c1,
        par_c2,
        var_lc1,
        var_lc2,
        var_quo,
        var_rem,
        var_i,
        var_p,
        var_q
    );


    // Release cached frame.
    if ( frame_32697007c1d97981caff23da5ee4bdec == cache_frame_32697007c1d97981caff23da5ee4bdec )
    {
        Py_DECREF( frame_32697007c1d97981caff23da5ee4bdec );
    }
    cache_frame_32697007c1d97981caff23da5ee4bdec = NULL;

    assertFrameObject( frame_32697007c1d97981caff23da5ee4bdec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_12__div );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_lc1 );
    Py_DECREF( var_lc1 );
    var_lc1 = NULL;

    CHECK_OBJECT( (PyObject *)var_lc2 );
    Py_DECREF( var_lc2 );
    var_lc2 = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_lc1 );
    var_lc1 = NULL;

    Py_XDECREF( var_lc2 );
    var_lc2 = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_12__div );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_13__add( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__upper = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cc2528e6eff54e6d7e64ff064245b109;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc2528e6eff54e6d7e64ff064245b109 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc2528e6eff54e6d7e64ff064245b109, codeobj_cc2528e6eff54e6d7e64ff064245b109, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc2528e6eff54e6d7e64ff064245b109 = cache_frame_cc2528e6eff54e6d7e64ff064245b109;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc2528e6eff54e6d7e64ff064245b109 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc2528e6eff54e6d7e64ff064245b109 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 582;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_list_element_1 = par_c1;
        tmp_args_element_name_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_c2 );
        tmp_list_element_1 = par_c2;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_cc2528e6eff54e6d7e64ff064245b109->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 582;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 582;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 582;
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


            type_description_1 = "ooo";
            exception_lineno = 582;
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

                    type_description_1 = "ooo";
                    exception_lineno = 582;
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

            type_description_1 = "ooo";
            exception_lineno = 582;
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
        {
            PyObject *old = par_c1;
            assert( old != NULL );
            par_c1 = tmp_assign_source_4;
            Py_INCREF( par_c1 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_c2;
            assert( old != NULL );
            par_c2 = tmp_assign_source_5;
            Py_INCREF( par_c2 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c1 );
        tmp_len_arg_1 = par_c1;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 583;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c2 );
        tmp_len_arg_2 = par_c2;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 583;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_6 = par_c1;
            assert( tmp_inplace_assign_slice_1__target == NULL );
            Py_INCREF( tmp_assign_source_6 );
            tmp_inplace_assign_slice_1__target = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_c2 );
            tmp_source_name_1 = par_c2;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_slice_1__upper == NULL );
            tmp_inplace_assign_slice_1__upper = tmp_assign_source_7;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
            tmp_subscribed_name_1 = tmp_inplace_assign_slice_1__target;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__upper );
            tmp_stop_name_1 = tmp_inplace_assign_slice_1__upper;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_c2 );
            tmp_right_name_1 = par_c2;
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
            tmp_ass_subscribed_1 = tmp_inplace_assign_slice_1__target;
            tmp_start_name_2 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__upper );
            tmp_stop_name_2 = tmp_inplace_assign_slice_1__upper;
            tmp_step_name_2 = Py_None;
            tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_ass_subscript_1 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 584;
                type_description_1 = "ooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
        Py_DECREF( tmp_inplace_assign_slice_1__target );
        tmp_inplace_assign_slice_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_slice_1__upper );
        tmp_inplace_assign_slice_1__upper = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
        Py_DECREF( tmp_inplace_assign_slice_1__target );
        tmp_inplace_assign_slice_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
        Py_DECREF( tmp_inplace_assign_slice_1__upper );
        tmp_inplace_assign_slice_1__upper = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_8 = par_c1;
            assert( var_ret == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_ret = tmp_assign_source_8;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_9 = par_c2;
            assert( tmp_inplace_assign_slice_2__target == NULL );
            Py_INCREF( tmp_assign_source_9 );
            tmp_inplace_assign_slice_2__target = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_c1 );
            tmp_source_name_2 = par_c1;
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert( tmp_inplace_assign_slice_2__upper == NULL );
            tmp_inplace_assign_slice_2__upper = tmp_assign_source_10;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
            tmp_subscribed_name_2 = tmp_inplace_assign_slice_2__target;
            tmp_start_name_3 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__upper );
            tmp_stop_name_3 = tmp_inplace_assign_slice_2__upper;
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_c1 );
            tmp_right_name_2 = par_c1;
            tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
            tmp_ass_subscribed_2 = tmp_inplace_assign_slice_2__target;
            tmp_start_name_4 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__upper );
            tmp_stop_name_4 = tmp_inplace_assign_slice_2__upper;
            tmp_step_name_4 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 587;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
        Py_DECREF( tmp_inplace_assign_slice_2__target );
        tmp_inplace_assign_slice_2__target = NULL;

        Py_XDECREF( tmp_inplace_assign_slice_2__upper );
        tmp_inplace_assign_slice_2__upper = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
        Py_DECREF( tmp_inplace_assign_slice_2__target );
        tmp_inplace_assign_slice_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__upper );
        Py_DECREF( tmp_inplace_assign_slice_2__upper );
        tmp_inplace_assign_slice_2__upper = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_11 = par_c2;
            assert( var_ret == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_ret = tmp_assign_source_11;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trimseq );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trimseq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_ret );
        tmp_args_element_name_2 = var_ret;
        frame_cc2528e6eff54e6d7e64ff064245b109->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 589;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc2528e6eff54e6d7e64ff064245b109 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc2528e6eff54e6d7e64ff064245b109 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc2528e6eff54e6d7e64ff064245b109 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc2528e6eff54e6d7e64ff064245b109, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc2528e6eff54e6d7e64ff064245b109->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc2528e6eff54e6d7e64ff064245b109, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc2528e6eff54e6d7e64ff064245b109,
        type_description_1,
        par_c1,
        par_c2,
        var_ret
    );


    // Release cached frame.
    if ( frame_cc2528e6eff54e6d7e64ff064245b109 == cache_frame_cc2528e6eff54e6d7e64ff064245b109 )
    {
        Py_DECREF( frame_cc2528e6eff54e6d7e64ff064245b109 );
    }
    cache_frame_cc2528e6eff54e6d7e64ff064245b109 = NULL;

    assertFrameObject( frame_cc2528e6eff54e6d7e64ff064245b109 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_13__add );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_13__add );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_14__sub( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__upper = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8c80621e000021559d9287e9ded0e566;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c80621e000021559d9287e9ded0e566 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c80621e000021559d9287e9ded0e566, codeobj_8c80621e000021559d9287e9ded0e566, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8c80621e000021559d9287e9ded0e566 = cache_frame_8c80621e000021559d9287e9ded0e566;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c80621e000021559d9287e9ded0e566 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c80621e000021559d9287e9ded0e566 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 595;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c1 );
        tmp_list_element_1 = par_c1;
        tmp_args_element_name_1 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_c2 );
        tmp_list_element_1 = par_c2;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_8c80621e000021559d9287e9ded0e566->m_frame.f_lineno = 595;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 595;
            type_description_1 = "ooo";
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


            type_description_1 = "ooo";
            exception_lineno = 595;
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


            type_description_1 = "ooo";
            exception_lineno = 595;
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

                    type_description_1 = "ooo";
                    exception_lineno = 595;
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

            type_description_1 = "ooo";
            exception_lineno = 595;
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
        {
            PyObject *old = par_c1;
            assert( old != NULL );
            par_c1 = tmp_assign_source_4;
            Py_INCREF( par_c1 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_c2;
            assert( old != NULL );
            par_c2 = tmp_assign_source_5;
            Py_INCREF( par_c2 );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_c1 );
        tmp_len_arg_1 = par_c1;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 596;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_c2 );
        tmp_len_arg_2 = par_c2;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 596;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_6 = par_c1;
            assert( tmp_inplace_assign_slice_1__target == NULL );
            Py_INCREF( tmp_assign_source_6 );
            tmp_inplace_assign_slice_1__target = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_c2 );
            tmp_source_name_1 = par_c2;
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            assert( tmp_inplace_assign_slice_1__upper == NULL );
            tmp_inplace_assign_slice_1__upper = tmp_assign_source_7;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
            tmp_subscribed_name_1 = tmp_inplace_assign_slice_1__target;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__upper );
            tmp_stop_name_1 = tmp_inplace_assign_slice_1__upper;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( par_c2 );
            tmp_right_name_1 = par_c2;
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
            tmp_ass_subscribed_1 = tmp_inplace_assign_slice_1__target;
            tmp_start_name_2 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_1__upper );
            tmp_stop_name_2 = tmp_inplace_assign_slice_1__upper;
            tmp_step_name_2 = Py_None;
            tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_ass_subscript_1 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 597;
                type_description_1 = "ooo";
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
        Py_DECREF( tmp_inplace_assign_slice_1__target );
        tmp_inplace_assign_slice_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_slice_1__upper );
        tmp_inplace_assign_slice_1__upper = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
        Py_DECREF( tmp_inplace_assign_slice_1__target );
        tmp_inplace_assign_slice_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
        Py_DECREF( tmp_inplace_assign_slice_1__upper );
        tmp_inplace_assign_slice_1__upper = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( par_c1 );
            tmp_assign_source_8 = par_c1;
            assert( var_ret == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_ret = tmp_assign_source_8;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( par_c2 );
            tmp_operand_name_1 = par_c2;
            tmp_assign_source_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 600;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_c2;
                assert( old != NULL );
                par_c2 = tmp_assign_source_9;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_10 = par_c2;
            assert( tmp_inplace_assign_slice_2__target == NULL );
            Py_INCREF( tmp_assign_source_10 );
            tmp_inplace_assign_slice_2__target = tmp_assign_source_10;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_c1 );
            tmp_source_name_2 = par_c1;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert( tmp_inplace_assign_slice_2__upper == NULL );
            tmp_inplace_assign_slice_2__upper = tmp_assign_source_11;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_step_name_4;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
            tmp_subscribed_name_2 = tmp_inplace_assign_slice_2__target;
            tmp_start_name_3 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__upper );
            tmp_stop_name_3 = tmp_inplace_assign_slice_2__upper;
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            assert( !(tmp_subscript_name_2 == NULL) );
            tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( par_c1 );
            tmp_right_name_2 = par_c1;
            tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
            tmp_ass_subscribed_2 = tmp_inplace_assign_slice_2__target;
            tmp_start_name_4 = Py_None;
            CHECK_OBJECT( tmp_inplace_assign_slice_2__upper );
            tmp_stop_name_4 = tmp_inplace_assign_slice_2__upper;
            tmp_step_name_4 = Py_None;
            tmp_ass_subscript_2 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            assert( !(tmp_ass_subscript_2 == NULL) );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 601;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
        Py_DECREF( tmp_inplace_assign_slice_2__target );
        tmp_inplace_assign_slice_2__target = NULL;

        Py_XDECREF( tmp_inplace_assign_slice_2__upper );
        tmp_inplace_assign_slice_2__upper = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
        Py_DECREF( tmp_inplace_assign_slice_2__target );
        tmp_inplace_assign_slice_2__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__upper );
        Py_DECREF( tmp_inplace_assign_slice_2__upper );
        tmp_inplace_assign_slice_2__upper = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( par_c2 );
            tmp_assign_source_12 = par_c2;
            assert( var_ret == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_ret = tmp_assign_source_12;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trimseq );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "trimseq" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 603;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( var_ret );
        tmp_args_element_name_2 = var_ret;
        frame_8c80621e000021559d9287e9ded0e566->m_frame.f_lineno = 603;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 603;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c80621e000021559d9287e9ded0e566 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c80621e000021559d9287e9ded0e566 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c80621e000021559d9287e9ded0e566 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c80621e000021559d9287e9ded0e566, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c80621e000021559d9287e9ded0e566->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c80621e000021559d9287e9ded0e566, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c80621e000021559d9287e9ded0e566,
        type_description_1,
        par_c1,
        par_c2,
        var_ret
    );


    // Release cached frame.
    if ( frame_8c80621e000021559d9287e9ded0e566 == cache_frame_8c80621e000021559d9287e9ded0e566 )
    {
        Py_DECREF( frame_8c80621e000021559d9287e9ded0e566 );
    }
    cache_frame_8c80621e000021559d9287e9ded0e566 = NULL;

    assertFrameObject( frame_8c80621e000021559d9287e9ded0e566 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_14__sub );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    Py_XDECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_14__sub );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_15__fit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vander_f = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    PyObject *par_rcond = python_pars[ 4 ];
    PyObject *par_full = python_pars[ 5 ];
    PyObject *par_w = python_pars[ 6 ];
    PyObject *var_lmax = NULL;
    PyObject *var_order = NULL;
    PyObject *var_van = NULL;
    PyObject *var_lhs = NULL;
    PyObject *var_rhs = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_c = NULL;
    PyObject *var_resids = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_s = NULL;
    PyObject *var_cc = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_69c72dfefee04b675bfbde74be2a6b15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69c72dfefee04b675bfbde74be2a6b15 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_69c72dfefee04b675bfbde74be2a6b15, codeobj_69c72dfefee04b675bfbde74be2a6b15, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_69c72dfefee04b675bfbde74be2a6b15 = cache_frame_69c72dfefee04b675bfbde74be2a6b15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_69c72dfefee04b675bfbde74be2a6b15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_69c72dfefee04b675bfbde74be2a6b15 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 617;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_float_0_0;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 617;
            type_description_1 = "ooooooooooooooooooN";
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
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 618;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
        }

        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_float_0_0;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 618;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            assert( old != NULL );
            par_y = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_3;
        CHECK_OBJECT( par_deg );
        tmp_args_element_name_3 = par_deg;
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 619;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asarray, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 619;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_deg;
            assert( old != NULL );
            par_deg = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_deg );
        tmp_source_name_1 = par_deg;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
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
        CHECK_OBJECT( par_deg );
        tmp_source_name_3 = par_deg;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_kind );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_plain_iu;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( par_deg );
        tmp_source_name_4 = par_deg;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 622;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_86bddf8ddd67e49da0bc28efd50b11b2;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 623;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 623;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( par_deg );
        tmp_called_instance_4 = par_deg;
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 624;
        tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_min );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 624;
            type_description_1 = "ooooooooooooooooooN";
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
            tmp_make_exception_arg_2 = const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 625;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 625;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_x );
        tmp_source_name_5 = par_x;
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 626;
            type_description_1 = "ooooooooooooooooooN";
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
            PyObject *tmp_raise_type_3;
            PyObject *tmp_make_exception_arg_3;
            tmp_make_exception_arg_3 = const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 627;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 627;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_x );
        tmp_source_name_6 = par_x;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_size );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 628;
            type_description_1 = "ooooooooooooooooooN";
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
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 629;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 629;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_y );
        tmp_source_name_7 = par_y;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooooN";
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
        CHECK_OBJECT( par_y );
        tmp_source_name_8 = par_y;
        tmp_compexpr_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndim );
        if ( tmp_compexpr_left_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_left_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 630;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_5 = tmp_or_left_value_3;
        or_end_3:;
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
            PyObject *tmp_make_exception_arg_5;
            tmp_make_exception_arg_5 = const_str_digest_3943f956186dfbaba7ee5555afa1df28;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 631;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 631;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_compexpr_left_9 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_y );
        tmp_len_arg_2 = par_y;
        tmp_compexpr_right_9 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_right_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_9 );

            exception_lineno = 632;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        Py_DECREF( tmp_compexpr_left_9 );
        Py_DECREF( tmp_compexpr_right_9 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_6;
            PyObject *tmp_make_exception_arg_6;
            tmp_make_exception_arg_6 = const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 633;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_6 };
                tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            assert( !(tmp_raise_type_6 == NULL) );
            exception_type = tmp_raise_type_6;
            exception_lineno = 633;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_deg );
        tmp_source_name_9 = par_deg;
        tmp_compexpr_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
        if ( tmp_compexpr_left_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        Py_DECREF( tmp_compexpr_left_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 635;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( par_deg );
            tmp_assign_source_4 = par_deg;
            assert( var_lmax == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_lmax = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_lmax );
            tmp_left_name_3 = var_lmax;
            tmp_right_name_3 = const_int_pos_1;
            tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 637;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_order == NULL );
            var_order = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_vander_f );
            tmp_called_name_1 = par_vander_f;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_4 = par_x;
            CHECK_OBJECT( var_lmax );
            tmp_args_element_name_5 = var_lmax;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 638;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 638;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_van == NULL );
            var_van = tmp_assign_source_6;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 640;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_5 = tmp_mvar_value_4;
            CHECK_OBJECT( par_deg );
            tmp_args_element_name_6 = par_deg;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 640;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_sort, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 640;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_deg;
                assert( old != NULL );
                par_deg = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_deg );
            tmp_subscribed_name_1 = par_deg;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 641;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_lmax == NULL );
            var_lmax = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_len_arg_3;
            CHECK_OBJECT( par_deg );
            tmp_len_arg_3 = par_deg;
            tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 642;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_order == NULL );
            var_order = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( par_vander_f );
            tmp_called_name_2 = par_vander_f;
            CHECK_OBJECT( par_x );
            tmp_args_element_name_7 = par_x;
            CHECK_OBJECT( var_lmax );
            tmp_args_element_name_8 = var_lmax;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 643;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_subscribed_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 643;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_slice_none_none_none;
            tmp_subscript_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_deg );
            tmp_tuple_element_1 = par_deg;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_1 );
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            Py_DECREF( tmp_subscribed_name_2 );
            Py_DECREF( tmp_subscript_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 643;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_van == NULL );
            var_van = tmp_assign_source_10;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( var_van );
        tmp_source_name_10 = var_van;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_T );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 646;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_lhs == NULL );
        var_lhs = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_y );
        tmp_source_name_11 = par_y;
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 647;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        assert( var_rhs == NULL );
        var_rhs = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        CHECK_OBJECT( par_w );
        tmp_compexpr_left_11 = par_w;
        tmp_compexpr_right_11 = Py_None;
        tmp_condition_result_8 = ( tmp_compexpr_left_11 != tmp_compexpr_right_11 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_4;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 649;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_6 = tmp_mvar_value_5;
            CHECK_OBJECT( par_w );
            tmp_args_element_name_9 = par_w;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 649;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_left_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_asarray, call_args );
            }

            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 649;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_float_0_0;
            tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_FLOAT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 649;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_w;
                assert( old != NULL );
                par_w = tmp_assign_source_13;
                Py_DECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_source_name_12;
            CHECK_OBJECT( par_w );
            tmp_source_name_12 = par_w;
            tmp_compexpr_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ndim );
            if ( tmp_compexpr_left_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 650;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_12 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            Py_DECREF( tmp_compexpr_left_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 650;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_7;
                PyObject *tmp_make_exception_arg_7;
                tmp_make_exception_arg_7 = const_str_digest_38ddb95e1ec5856024db3736b3b90fc6;
                frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 651;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_7 };
                    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_7 == NULL) );
                exception_type = tmp_raise_type_7;
                exception_lineno = 651;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_len_arg_5;
            CHECK_OBJECT( par_x );
            tmp_len_arg_4 = par_x;
            tmp_compexpr_left_13 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_compexpr_left_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 652;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_w );
            tmp_len_arg_5 = par_w;
            tmp_compexpr_right_13 = BUILTIN_LEN( tmp_len_arg_5 );
            if ( tmp_compexpr_right_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_13 );

                exception_lineno = 652;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_13, tmp_compexpr_right_13 );
            Py_DECREF( tmp_compexpr_left_13 );
            Py_DECREF( tmp_compexpr_right_13 );
            assert( !(tmp_res == -1) );
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
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_make_exception_arg_8;
                tmp_make_exception_arg_8 = const_str_digest_b3b20c6499548f5f690faa8d63dd85e8;
                frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 653;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_8 };
                    tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_8 == NULL) );
                exception_type = tmp_raise_type_8;
                exception_lineno = 653;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            branch_no_10:;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_lhs );
            tmp_left_name_5 = var_lhs;
            CHECK_OBJECT( par_w );
            tmp_right_name_5 = par_w;
            tmp_assign_source_14 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 656;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_lhs;
                assert( old != NULL );
                var_lhs = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_rhs );
            tmp_left_name_6 = var_rhs;
            CHECK_OBJECT( par_w );
            tmp_right_name_6 = par_w;
            tmp_assign_source_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 657;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_rhs;
                assert( old != NULL );
                var_rhs = tmp_assign_source_15;
                Py_DECREF( old );
            }

        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT( par_rcond );
        tmp_compexpr_left_14 = par_rcond;
        tmp_compexpr_right_14 = Py_None;
        tmp_condition_result_11 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_16;
            PyObject *tmp_left_name_7;
            PyObject *tmp_len_arg_6;
            PyObject *tmp_right_name_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( par_x );
            tmp_len_arg_6 = par_x;
            tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_6 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_left_name_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_6;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_finfo );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_x );
            tmp_source_name_15 = par_x;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_dtype );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 661;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_source_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_eps );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_16 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 661;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_rcond;
                assert( old != NULL );
                par_rcond = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        branch_no_11:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_source_name_18;
        PyObject *tmp_mvar_value_7;
        int tmp_truth_name_1;
        tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
        assert( tmp_called_name_4 != NULL );
        CHECK_OBJECT( var_lhs );
        tmp_source_name_17 = var_lhs;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_type );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_18 = tmp_mvar_value_7;
        tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_complexfloating );
        if ( tmp_args_element_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_11 );

            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 664;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_19;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_20;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_source_name_21;
            PyObject *tmp_right_name_8;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_element_name_15;
            PyObject *tmp_source_name_23;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_19 = tmp_mvar_value_8;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_sqrt );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_20 = tmp_mvar_value_9;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_square );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lhs );
            tmp_source_name_21 = var_lhs;
            tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_real );
            if ( tmp_args_element_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 665;
            {
                PyObject *call_args[] = { tmp_args_element_name_14 };
                tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_14 );
            if ( tmp_left_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_10;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_square );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_lhs );
            tmp_source_name_23 = var_lhs;
            tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_imag );
            if ( tmp_args_element_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_8 );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 665;
            {
                PyObject *call_args[] = { tmp_args_element_name_15 };
                tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_15 );
            if ( tmp_right_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );
                Py_DECREF( tmp_left_name_8 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_called_instance_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 665;
            tmp_args_element_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_sum, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_7 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 665;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 665;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_scl == NULL );
            var_scl = tmp_assign_source_17;
        }
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_24;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_args_element_name_17;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_24 = tmp_mvar_value_11;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_sqrt );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_9 = tmp_mvar_value_12;
            CHECK_OBJECT( var_lhs );
            tmp_args_element_name_17 = var_lhs;
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 667;
            {
                PyObject *call_args[] = { tmp_args_element_name_17 };
                tmp_called_instance_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_square, call_args );
            }

            if ( tmp_called_instance_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 667;
            tmp_args_element_name_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_sum, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_8 );
            if ( tmp_args_element_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_8 );

                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 667;
            {
                PyObject *call_args[] = { tmp_args_element_name_16 };
                tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_16 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 667;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            assert( var_scl == NULL );
            var_scl = tmp_assign_source_18;
        }
        branch_end_12:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        tmp_ass_subvalue_1 = const_int_pos_1;
        CHECK_OBJECT( var_scl );
        tmp_ass_subscribed_1 = var_scl;
        CHECK_OBJECT( var_scl );
        tmp_compexpr_left_15 = var_scl;
        tmp_compexpr_right_15 = const_int_0;
        tmp_ass_subscript_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_15, tmp_compexpr_right_15 );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 668;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_25;
        PyObject *tmp_source_name_26;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_left_name_9;
        PyObject *tmp_source_name_27;
        PyObject *tmp_right_name_9;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_source_name_28;
        PyObject *tmp_args_element_name_20;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }

        tmp_source_name_26 = tmp_mvar_value_13;
        tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_linalg );
        if ( tmp_source_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_lstsq );
        Py_DECREF( tmp_source_name_25 );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_lhs );
        tmp_source_name_27 = var_lhs;
        tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_T );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_scl );
        tmp_right_name_9 = var_scl;
        tmp_args_element_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_9 );
        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_rhs );
        tmp_source_name_28 = var_rhs;
        tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_T );
        if ( tmp_args_element_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_18 );

            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_rcond );
        tmp_args_element_name_20 = par_rcond;
        frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 671;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_18 );
        Py_DECREF( tmp_args_element_name_19 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 671;
            type_description_1 = "ooooooooooooooooooN";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_1, 0, 4 );
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


            type_description_1 = "ooooooooooooooooooN";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_2, 1, 4 );
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


            type_description_1 = "ooooooooooooooooooN";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_3, 2, 4 );
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


            type_description_1 = "ooooooooooooooooooN";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_4, 3, 4 );
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


            type_description_1 = "ooooooooooooooooooN";
            exception_lineno = 671;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_4 == NULL );
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_23;
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

                    type_description_1 = "ooooooooooooooooooN";
                    exception_lineno = 671;
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

            type_description_1 = "ooooooooooooooooooN";
            exception_lineno = 671;
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
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
        assert( var_c == NULL );
        Py_INCREF( tmp_assign_source_24 );
        var_c = tmp_assign_source_24;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
        assert( var_resids == NULL );
        Py_INCREF( tmp_assign_source_25 );
        var_resids = tmp_assign_source_25;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_3;
        assert( var_rank == NULL );
        Py_INCREF( tmp_assign_source_26 );
        var_rank = tmp_assign_source_26;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_4 );
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_4;
        assert( var_s == NULL );
        Py_INCREF( tmp_assign_source_27 );
        var_s = tmp_assign_source_27;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_left_name_10;
        PyObject *tmp_source_name_30;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_c );
        tmp_source_name_30 = var_c;
        tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_T );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_scl );
        tmp_right_name_10 = var_scl;
        tmp_source_name_29 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        if ( tmp_source_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_T );
        Py_DECREF( tmp_source_name_29 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 672;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_c;
            assert( old != NULL );
            var_c = tmp_assign_source_28;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_source_name_31;
        CHECK_OBJECT( par_deg );
        tmp_source_name_31 = par_deg;
        tmp_compexpr_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_ndim );
        if ( tmp_compexpr_left_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 675;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_16 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_16, tmp_compexpr_right_16 );
        Py_DECREF( tmp_compexpr_left_16 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 675;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            PyObject *tmp_source_name_32;
            CHECK_OBJECT( var_c );
            tmp_source_name_32 = var_c;
            tmp_compexpr_left_17 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_ndim );
            if ( tmp_compexpr_left_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 676;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_17 = const_int_pos_2;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_17, tmp_compexpr_right_17 );
            Py_DECREF( tmp_compexpr_left_17 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 676;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_29;
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_33;
                PyObject *tmp_mvar_value_14;
                PyObject *tmp_args_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_left_name_11;
                PyObject *tmp_right_name_11;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_source_name_34;
                PyObject *tmp_subscript_name_3;
                PyObject *tmp_kw_name_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_source_name_35;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_33 = tmp_mvar_value_14;
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_zeros );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lmax );
                tmp_left_name_11 = var_lmax;
                tmp_right_name_11 = const_int_pos_1;
                tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_tuple_element_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( var_c );
                tmp_source_name_34 = var_c;
                tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_shape );
                if ( tmp_subscribed_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_tuple_element_2 );

                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_subscript_name_3 = const_int_pos_1;
                tmp_tuple_element_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 1 );
                Py_DECREF( tmp_subscribed_name_3 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_tuple_element_2 );

                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
                tmp_args_name_1 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
                tmp_dict_key_1 = const_str_plain_dtype;
                CHECK_OBJECT( var_c );
                tmp_source_name_35 = var_c;
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_dtype );
                if ( tmp_dict_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_name_1 );

                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                Py_DECREF( tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 677;
                tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_1, tmp_kw_name_1 );
                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_name_1 );
                Py_DECREF( tmp_kw_name_1 );
                if ( tmp_assign_source_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 677;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                assert( var_cc == NULL );
                var_cc = tmp_assign_source_29;
            }
            goto branch_end_14;
            branch_no_14:;
            {
                PyObject *tmp_assign_source_30;
                PyObject *tmp_called_name_11;
                PyObject *tmp_source_name_36;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_args_name_2;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_kw_name_2;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_source_name_37;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                    exception_lineno = 679;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_36 = tmp_mvar_value_15;
                tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_zeros );
                if ( tmp_called_name_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 679;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_lmax );
                tmp_left_name_12 = var_lmax;
                tmp_right_name_12 = const_int_pos_1;
                tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_12, tmp_right_name_12 );
                if ( tmp_tuple_element_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );

                    exception_lineno = 679;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_args_name_2 = PyTuple_New( 1 );
                PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
                tmp_dict_key_2 = const_str_plain_dtype;
                CHECK_OBJECT( var_c );
                tmp_source_name_37 = var_c;
                tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_dtype );
                if ( tmp_dict_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_11 );
                    Py_DECREF( tmp_args_name_2 );

                    exception_lineno = 679;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                tmp_kw_name_2 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
                Py_DECREF( tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 679;
                tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_2, tmp_kw_name_2 );
                Py_DECREF( tmp_called_name_11 );
                Py_DECREF( tmp_args_name_2 );
                Py_DECREF( tmp_kw_name_2 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 679;
                    type_description_1 = "ooooooooooooooooooN";
                    goto frame_exception_exit_1;
                }
                assert( var_cc == NULL );
                var_cc = tmp_assign_source_30;
            }
            branch_end_14:;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_c );
            tmp_ass_subvalue_2 = var_c;
            CHECK_OBJECT( var_cc );
            tmp_ass_subscribed_2 = var_cc;
            CHECK_OBJECT( par_deg );
            tmp_ass_subscript_2 = par_deg;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 680;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT( var_cc );
            tmp_assign_source_31 = var_cc;
            {
                PyObject *old = var_c;
                assert( old != NULL );
                var_c = tmp_assign_source_31;
                Py_INCREF( var_c );
                Py_DECREF( old );
            }

        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_rank );
        tmp_compexpr_left_18 = var_rank;
        CHECK_OBJECT( var_order );
        tmp_compexpr_right_18 = var_order;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_18, tmp_compexpr_right_18 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( par_full );
        tmp_operand_name_1 = par_full;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 684;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_15 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_15 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_38;
            PyObject *tmp_mvar_value_16;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_mvar_value_17;
            PyObject *tmp_kw_name_3;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 686;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_source_name_38 = tmp_mvar_value_16;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_warn );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 686;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_5 = const_str_digest_417a5d06d4d954b63a0b0e1634b358ab;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_RankWarning );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankWarning );
            }

            if ( tmp_mvar_value_17 == NULL )
            {
                Py_DECREF( tmp_called_name_12 );
                Py_DECREF( tmp_args_name_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RankWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 686;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_5 = tmp_mvar_value_17;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
            tmp_kw_name_3 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_69c72dfefee04b675bfbde74be2a6b15->m_frame.f_lineno = 686;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 686;
                type_description_1 = "ooooooooooooooooooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_15:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_full );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_full );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 688;
            type_description_1 = "ooooooooooooooooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_c );
            tmp_tuple_element_6 = var_c;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( var_resids );
            tmp_list_element_1 = var_resids;
            tmp_tuple_element_6 = PyList_New( 4 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_6, 0, tmp_list_element_1 );
            CHECK_OBJECT( var_rank );
            tmp_list_element_1 = var_rank;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_6, 1, tmp_list_element_1 );
            CHECK_OBJECT( var_s );
            tmp_list_element_1 = var_s;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_6, 2, tmp_list_element_1 );
            CHECK_OBJECT( par_rcond );
            tmp_list_element_1 = par_rcond;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_tuple_element_6, 3, tmp_list_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
            goto frame_return_exit_1;
        }
        goto branch_end_16;
        branch_no_16:;
        CHECK_OBJECT( var_c );
        tmp_return_value = var_c;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_16:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69c72dfefee04b675bfbde74be2a6b15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69c72dfefee04b675bfbde74be2a6b15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_69c72dfefee04b675bfbde74be2a6b15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69c72dfefee04b675bfbde74be2a6b15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69c72dfefee04b675bfbde74be2a6b15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69c72dfefee04b675bfbde74be2a6b15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_69c72dfefee04b675bfbde74be2a6b15,
        type_description_1,
        par_vander_f,
        par_x,
        par_y,
        par_deg,
        par_rcond,
        par_full,
        par_w,
        var_lmax,
        var_order,
        var_van,
        var_lhs,
        var_rhs,
        var_scl,
        var_c,
        var_resids,
        var_rank,
        var_s,
        var_cc,
        NULL
    );


    // Release cached frame.
    if ( frame_69c72dfefee04b675bfbde74be2a6b15 == cache_frame_69c72dfefee04b675bfbde74be2a6b15 )
    {
        Py_DECREF( frame_69c72dfefee04b675bfbde74be2a6b15 );
    }
    cache_frame_69c72dfefee04b675bfbde74be2a6b15 = NULL;

    assertFrameObject( frame_69c72dfefee04b675bfbde74be2a6b15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_15__fit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)var_lmax );
    Py_DECREF( var_lmax );
    var_lmax = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_van );
    Py_DECREF( var_van );
    var_van = NULL;

    CHECK_OBJECT( (PyObject *)var_lhs );
    Py_DECREF( var_lhs );
    var_lhs = NULL;

    CHECK_OBJECT( (PyObject *)var_rhs );
    Py_DECREF( var_rhs );
    var_rhs = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_resids );
    Py_DECREF( var_resids );
    var_resids = NULL;

    CHECK_OBJECT( (PyObject *)var_rank );
    Py_DECREF( var_rank );
    var_rank = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cc );
    var_cc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_vander_f );
    Py_DECREF( par_vander_f );
    par_vander_f = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    Py_XDECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    Py_XDECREF( par_w );
    par_w = NULL;

    Py_XDECREF( var_lmax );
    var_lmax = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_van );
    var_van = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_resids );
    var_resids = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cc );
    var_cc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_15__fit );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_16__pow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mul_f = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_pow = python_pars[ 2 ];
    PyObject *par_maxpower = python_pars[ 3 ];
    PyObject *var_power = NULL;
    PyObject *var_prd = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_94d6aecb7cfcc0066df7ccdcc169b582;
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
    static struct Nuitka_FrameObject *cache_frame_94d6aecb7cfcc0066df7ccdcc169b582 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94d6aecb7cfcc0066df7ccdcc169b582, codeobj_94d6aecb7cfcc0066df7ccdcc169b582, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94d6aecb7cfcc0066df7ccdcc169b582 = cache_frame_94d6aecb7cfcc0066df7ccdcc169b582;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94d6aecb7cfcc0066df7ccdcc169b582 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94d6aecb7cfcc0066df7ccdcc169b582 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_series );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "as_series" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 708;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_c );
        tmp_list_element_1 = par_c;
        tmp_args_element_name_1 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame.f_lineno = 708;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 708;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 708;
            type_description_1 = "ooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 1 );
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


            type_description_1 = "ooooooo";
            exception_lineno = 708;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 708;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooo";
            exception_lineno = 708;
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
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_c;
            assert( old != NULL );
            par_c = tmp_assign_source_3;
            Py_INCREF( par_c );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT( par_pow );
        tmp_int_arg_1 = par_pow;
        tmp_assign_source_4 = PyNumber_Int( tmp_int_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 709;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_power == NULL );
        var_power = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_power );
        tmp_compexpr_left_1 = var_power;
        CHECK_OBJECT( par_pow );
        tmp_compexpr_right_1 = par_pow;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( var_power );
        tmp_compexpr_left_2 = var_power;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 710;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_5075ddfb8c5b93b4cdb1b7871af68165;
            frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame.f_lineno = 711;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 711;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_maxpower );
            tmp_compexpr_left_3 = par_maxpower;
            tmp_compexpr_right_3 = Py_None;
            tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_power );
            tmp_compexpr_left_4 = var_power;
            CHECK_OBJECT( par_maxpower );
            tmp_compexpr_right_4 = par_maxpower;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 712;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
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
                tmp_make_exception_arg_2 = const_str_digest_3a21fa4bd62cdcaaa70f24e241b85885;
                frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame.f_lineno = 713;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 713;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var_power );
                tmp_compexpr_left_5 = var_power;
                tmp_compexpr_right_5 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 714;
                    type_description_1 = "ooooooo";
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
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_kw_name_1;
                    PyObject *tmp_dict_key_1;
                    PyObject *tmp_dict_value_1;
                    PyObject *tmp_source_name_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np );

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

                        exception_lineno = 715;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_1 = tmp_mvar_value_2;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 715;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_name_1 = DEEP_COPY( const_tuple_list_int_pos_1_list_tuple );
                    tmp_dict_key_1 = const_str_plain_dtype;
                    CHECK_OBJECT( par_c );
                    tmp_source_name_2 = par_c;
                    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
                    if ( tmp_dict_value_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_name_1 );

                        exception_lineno = 715;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
                    Py_DECREF( tmp_dict_value_1 );
                    assert( !(tmp_res != 0) );
                    frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame.f_lineno = 715;
                    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 715;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    CHECK_OBJECT( var_power );
                    tmp_compexpr_left_6 = var_power;
                    tmp_compexpr_right_6 = const_int_pos_1;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 716;
                        type_description_1 = "ooooooo";
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
                    CHECK_OBJECT( par_c );
                    tmp_return_value = par_c;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_assign_source_5;
                        CHECK_OBJECT( par_c );
                        tmp_assign_source_5 = par_c;
                        assert( var_prd == NULL );
                        Py_INCREF( tmp_assign_source_5 );
                        var_prd = tmp_assign_source_5;
                    }
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_iter_arg_2;
                        PyObject *tmp_xrange_low_1;
                        PyObject *tmp_xrange_high_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_xrange_low_1 = const_int_pos_2;
                        CHECK_OBJECT( var_power );
                        tmp_left_name_1 = var_power;
                        tmp_right_name_1 = const_int_pos_1;
                        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
                        if ( tmp_xrange_high_1 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 722;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_iter_arg_2 = BUILTIN_XRANGE2( tmp_xrange_low_1, tmp_xrange_high_1 );
                        Py_DECREF( tmp_xrange_high_1 );
                        if ( tmp_iter_arg_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 722;
                            type_description_1 = "ooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
                        Py_DECREF( tmp_iter_arg_2 );
                        if ( tmp_assign_source_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 722;
                            type_description_1 = "ooooooo";
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
                                type_description_1 = "ooooooo";
                                exception_lineno = 722;
                                goto try_except_handler_4;
                            }
                        }

                        {
                            PyObject *old = tmp_for_loop_1__iter_value;
                            tmp_for_loop_1__iter_value = tmp_assign_source_7;
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_8;
                        CHECK_OBJECT( tmp_for_loop_1__iter_value );
                        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
                        {
                            PyObject *old = var_i;
                            var_i = tmp_assign_source_8;
                            Py_INCREF( var_i );
                            Py_XDECREF( old );
                        }

                    }
                    {
                        PyObject *tmp_assign_source_9;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_args_element_name_2;
                        PyObject *tmp_args_element_name_3;
                        CHECK_OBJECT( par_mul_f );
                        tmp_called_name_3 = par_mul_f;
                        CHECK_OBJECT( var_prd );
                        tmp_args_element_name_2 = var_prd;
                        CHECK_OBJECT( par_c );
                        tmp_args_element_name_3 = par_c;
                        frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame.f_lineno = 723;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                        }

                        if ( tmp_assign_source_9 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 723;
                            type_description_1 = "ooooooo";
                            goto try_except_handler_4;
                        }
                        {
                            PyObject *old = var_prd;
                            assert( old != NULL );
                            var_prd = tmp_assign_source_9;
                            Py_DECREF( old );
                        }

                    }
                    if ( CONSIDER_THREADING() == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 722;
                        type_description_1 = "ooooooo";
                        goto try_except_handler_4;
                    }
                    goto loop_start_1;
                    loop_end_1:;
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

                    CHECK_OBJECT( var_prd );
                    tmp_return_value = var_prd;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                    branch_end_4:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94d6aecb7cfcc0066df7ccdcc169b582 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94d6aecb7cfcc0066df7ccdcc169b582 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94d6aecb7cfcc0066df7ccdcc169b582 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94d6aecb7cfcc0066df7ccdcc169b582, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94d6aecb7cfcc0066df7ccdcc169b582->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94d6aecb7cfcc0066df7ccdcc169b582, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94d6aecb7cfcc0066df7ccdcc169b582,
        type_description_1,
        par_mul_f,
        par_c,
        par_pow,
        par_maxpower,
        var_power,
        var_prd,
        var_i
    );


    // Release cached frame.
    if ( frame_94d6aecb7cfcc0066df7ccdcc169b582 == cache_frame_94d6aecb7cfcc0066df7ccdcc169b582 )
    {
        Py_DECREF( frame_94d6aecb7cfcc0066df7ccdcc169b582 );
    }
    cache_frame_94d6aecb7cfcc0066df7ccdcc169b582 = NULL;

    assertFrameObject( frame_94d6aecb7cfcc0066df7ccdcc169b582 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_16__pow );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

    CHECK_OBJECT( (PyObject *)var_power );
    Py_DECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mul_f );
    Py_DECREF( par_mul_f );
    par_mul_f = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_16__pow );
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


static PyObject *impl_numpy$polynomial$polyutils$$$function_17__deprecate_as_int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_desc = python_pars[ 1 ];
    PyObject *var_ix = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_535e070f7d544047ac0b26fde43d12e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_res;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_535e070f7d544047ac0b26fde43d12e1 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_535e070f7d544047ac0b26fde43d12e1, codeobj_535e070f7d544047ac0b26fde43d12e1, module_numpy$polynomial$polyutils, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_535e070f7d544047ac0b26fde43d12e1 = cache_frame_535e070f7d544047ac0b26fde43d12e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_535e070f7d544047ac0b26fde43d12e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_535e070f7d544047ac0b26fde43d12e1 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_operator );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "operator" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 744;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = 744;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_index, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 744;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_17__deprecate_as_int );
    return NULL;
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
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_535e070f7d544047ac0b26fde43d12e1, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_535e070f7d544047ac0b26fde43d12e1, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 745;
            type_description_1 = "ooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_1;
            tmp_assign_source_1 = NUITKA_BOOL_TRUE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT( par_x );
            tmp_int_arg_1 = par_x;
            tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 748;
                type_description_1 = "ooo";
                goto try_except_handler_5;
            }
            assert( var_ix == NULL );
            var_ix = tmp_assign_source_2;
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            nuitka_bool tmp_assign_source_3;
            tmp_assign_source_3 = NUITKA_BOOL_FALSE;
            tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        }
        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_type_1 );
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF( exception_preserved_value_1 );
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF( exception_preserved_tb_1 );

        if ( exception_keeper_tb_2 == NULL )
        {
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_535e070f7d544047ac0b26fde43d12e1, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_535e070f7d544047ac0b26fde43d12e1, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 749;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 749;
                type_description_1 = "ooo";
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
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 747;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_535e070f7d544047ac0b26fde43d12e1->m_frame) frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_6;
            branch_no_2:;
        }
        goto try_end_2;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_17__deprecate_as_int );
        return NULL;
        // End of try:
        try_end_1:;
        {
            nuitka_bool tmp_condition_result_3;
            nuitka_bool tmp_compexpr_left_3;
            nuitka_bool tmp_compexpr_right_3;
            assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
            tmp_compexpr_left_3 = tmp_try_except_1__unhandled_indicator;
            tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
            tmp_condition_result_3 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                if ( var_ix == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 752;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_compexpr_left_4 = var_ix;
                CHECK_OBJECT( par_x );
                tmp_compexpr_right_4 = par_x;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 752;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
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
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_1;
                    PyObject *tmp_mvar_value_2;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_name_1;
                    PyObject *tmp_tuple_element_1;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_kw_name_1;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_warnings );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 753;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }

                    tmp_source_name_1 = tmp_mvar_value_2;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 753;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    tmp_called_instance_2 = const_str_digest_dcf41904ab4883fb834b2fe6c347ec73;
                    CHECK_OBJECT( par_desc );
                    tmp_args_element_name_2 = par_desc;
                    frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = 754;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
                    }

                    if ( tmp_tuple_element_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 754;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    tmp_args_name_1 = PyTuple_New( 2 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {
                        Py_DECREF( tmp_called_name_1 );
                        Py_DECREF( tmp_args_name_1 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 757;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }

                    tmp_tuple_element_1 = tmp_mvar_value_3;
                    Py_INCREF( tmp_tuple_element_1 );
                    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
                    tmp_kw_name_1 = PyDict_Copy( const_dict_2254aca578e492e580f4e46a40647b9b );
                    frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = 753;
                    tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_name_1 );
                    Py_DECREF( tmp_kw_name_1 );
                    if ( tmp_call_result_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 753;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    Py_DECREF( tmp_call_result_1 );
                }
                if ( var_ix == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ix" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 760;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_return_value = var_ix;
                Py_INCREF( tmp_return_value );
                goto try_return_handler_4;
                branch_no_4:;
            }
            branch_no_3:;
        }
        goto try_end_3;
        // Return handler code:
        try_return_handler_4:;
        goto try_return_handler_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_3;
        // End of try:
        try_end_3:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_3 = const_str_digest_70ac5ec746d0a4795310a3e396a1d93e;
            CHECK_OBJECT( par_desc );
            tmp_args_element_name_3 = par_desc;
            frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = 762;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 762;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = 762;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 762;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 743;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_535e070f7d544047ac0b26fde43d12e1->m_frame) frame_535e070f7d544047ac0b26fde43d12e1->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_17__deprecate_as_int );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_535e070f7d544047ac0b26fde43d12e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_535e070f7d544047ac0b26fde43d12e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_535e070f7d544047ac0b26fde43d12e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_535e070f7d544047ac0b26fde43d12e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_535e070f7d544047ac0b26fde43d12e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_535e070f7d544047ac0b26fde43d12e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_535e070f7d544047ac0b26fde43d12e1,
        type_description_1,
        par_x,
        par_desc,
        var_ix
    );


    // Release cached frame.
    if ( frame_535e070f7d544047ac0b26fde43d12e1 == cache_frame_535e070f7d544047ac0b26fde43d12e1 )
    {
        Py_DECREF( frame_535e070f7d544047ac0b26fde43d12e1 );
    }
    cache_frame_535e070f7d544047ac0b26fde43d12e1 = NULL;

    assertFrameObject( frame_535e070f7d544047ac0b26fde43d12e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_17__deprecate_as_int );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_desc );
    Py_DECREF( par_desc );
    par_desc = NULL;

    Py_XDECREF( var_ix );
    var_ix = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_desc );
    Py_DECREF( par_desc );
    par_desc = NULL;

    Py_XDECREF( var_ix );
    var_ix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils$$$function_17__deprecate_as_int );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_10__valnd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_10__valnd,
        const_str_plain__valnd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ff0f7ead4c049b7f9db97a367943f25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_dcc373994db858994f09cc5bb9c9a0c3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_11__gridnd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_11__gridnd,
        const_str_plain__gridnd,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a90280ae7d81c308808ce9dfc5cceafd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_64b87b83ba9d8a368190eddba29f3dd7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_12__div(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_12__div,
        const_str_plain__div,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_32697007c1d97981caff23da5ee4bdec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_1343b7fd691b6ccde63dcfd7f7be9b49,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_13__add(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_13__add,
        const_str_plain__add,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cc2528e6eff54e6d7e64ff064245b109,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_4123428f5f27e31c483a1d929e97a334,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_14__sub(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_14__sub,
        const_str_plain__sub,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8c80621e000021559d9287e9ded0e566,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_4471058343fad3fddb5c2ec908785a22,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_15__fit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_15__fit,
        const_str_plain__fit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_69c72dfefee04b675bfbde74be2a6b15,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_6901a8c879c55a361bd5ce29530fcffc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_16__pow(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_16__pow,
        const_str_plain__pow,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_94d6aecb7cfcc0066df7ccdcc169b582,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_1722cd2b807715d51e1b79f34119dd17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_17__deprecate_as_int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_17__deprecate_as_int,
        const_str_plain__deprecate_as_int,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_535e070f7d544047ac0b26fde43d12e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_f8f03ae7f408e33206ad99264ded8eb9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_1_trimseq,
        const_str_plain_trimseq,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6e11d6f7615729d4670dd89cc953b5b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_fec7117366bd52892d39d8e43ffa8ae4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_2_as_series,
        const_str_plain_as_series,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5389b255abb26161a850e6104c49e41a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_643654cb13449fa2a76e1bdee86349c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_3_trimcoef,
        const_str_plain_trimcoef,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83205d0421d6f4d40fa38f611cb390a8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_606a253911dfde14fa932a8cd2e635e9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_4_getdomain,
        const_str_plain_getdomain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d35a275f1d72abf9860c5459feec121e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_f6944356c8987164c4200fa24fd72607,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_5_mapparms,
        const_str_plain_mapparms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4f050e230b69c34c955edc9699c5119,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_8951ccdacb98b200a9a15eb53d76a6f9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_6_mapdomain,
        const_str_plain_mapdomain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_026b3372ba871ef03f5feece96022e59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_96913cd14b29e43ad3329fdc3de70b26,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_7__vander2d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_7__vander2d,
        const_str_plain__vander2d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f0f16afb27b7604960d36530ef1dca61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_35bc8f981eaca920d98448862867f3b0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_8__vander3d(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_8__vander3d,
        const_str_plain__vander3d,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_03b32df7379cab2c6d364e1f46168871,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_ceecd28074cde975bbff22a5ee88a8e5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_9__fromroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polyutils$$$function_9__fromroots,
        const_str_plain__fromroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1fbeb9368a4f4d6cdaf281ca77b728f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$polynomial$polyutils,
        const_str_digest_a1a1115f4e0f0a2f69d2729c2672d2c9,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$polyutils =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial.polyutils",
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

MOD_INIT_DECL( numpy$polynomial$polyutils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$polyutils );
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
    puts("numpy.polynomial.polyutils: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.polyutils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial.polyutils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$polynomial$polyutils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$polyutils = Py_InitModule4(
        "numpy.polynomial.polyutils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$polynomial$polyutils = PyModule_Create( &mdef_numpy$polynomial$polyutils );
#endif

    moduledict_numpy$polynomial$polyutils = MODULE_DICT( module_numpy$polynomial$polyutils );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_numpy$polynomial$polyutils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$polynomial$polyutils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polyutils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$polynomial$polyutils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$polynomial$polyutils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a0d13325845562e4bbc31bdb2ba6618b, module_numpy$polynomial$polyutils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c2cacf06261bfbcee34859c9221ccc83;
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
    PyObject *locals_numpy$polynomial$polyutils_61 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_numpy$polynomial$polyutils_65 = NULL;
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
    PyObject *locals_numpy$polynomial$polyutils_69 = NULL;
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
    PyObject *locals_numpy$polynomial$polyutils_82 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_c3fbef28d81c0d779c444231a45b0d97;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_c2cacf06261bfbcee34859c9221ccc83 = MAKE_MODULE_FRAME( codeobj_c2cacf06261bfbcee34859c9221ccc83, module_numpy$polynomial$polyutils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c2cacf06261bfbcee34859c9221ccc83 );
    assert( Py_REFCNT( frame_c2cacf06261bfbcee34859c9221ccc83 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 46;
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


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
        tmp_name_name_1 = const_str_plain_operator;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$polyutils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 48;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$polynomial$polyutils;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 49;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_numpy;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$polynomial$polyutils;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 51;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_5140ad4e1b77591e9582f3c8be3d2cbb_list );
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 61;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_12 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 61;

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


            exception_lineno = 61;

            goto try_except_handler_2;
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


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
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


            exception_lineno = 61;

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


            exception_lineno = 61;

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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_RankWarning;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 61;
            tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_15;
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


                exception_lineno = 61;

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
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
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


                    exception_lineno = 61;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 61;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 61;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_16;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$polynomial$polyutils_61 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_61, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_df4438039abddc03aa325ded7a3d73dd;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_61, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_RankWarning;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_61, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_RankWarning;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_numpy$polynomial$polyutils_61;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 61;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_17 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_numpy$polynomial$polyutils_61 );
        locals_numpy$polynomial$polyutils_61 = NULL;
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

        Py_DECREF( locals_numpy$polynomial$polyutils_61 );
        locals_numpy$polynomial$polyutils_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
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
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 61;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_RankWarning, tmp_assign_source_17 );
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_2 != NULL );
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_2:;
        tmp_bases_name_2 = const_tuple_type_Exception_tuple;
        tmp_assign_source_20 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_5;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_5;
            }
            tmp_args_name_3 = const_tuple_str_plain_PolyError_tuple_type_Exception_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 65;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_21;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_5;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_3;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_5;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_3 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_3 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 65;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_5 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 65;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_6:;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_22;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_numpy$polynomial$polyutils_65 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_65, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_21a64dcb81594be5923fffb0d0da01da;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_65, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_PolyError;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_65, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_7;
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_PolyError;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
            tmp_tuple_element_6 = const_tuple_type_Exception_tuple;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_6 );
            tmp_tuple_element_6 = locals_numpy$polynomial$polyutils_65;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 65;
            tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 65;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_23 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_numpy$polynomial$polyutils_65 );
        locals_numpy$polynomial$polyutils_65 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF( locals_numpy$polynomial$polyutils_65 );
        locals_numpy$polynomial$polyutils_65 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 65;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyError, tmp_assign_source_23 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyError );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PolyError );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PolyError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;

            goto try_except_handler_8;
        }

        tmp_tuple_element_7 = tmp_mvar_value_4;
        tmp_assign_source_25 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_7 );
        PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_7 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert( tmp_class_creation_3__class_decl_dict == NULL );
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_type_arg_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_subscribed_name_2 = tmp_class_creation_3__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_4 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_4 );
        Py_DECREF( tmp_type_arg_4 );
        if ( tmp_metaclass_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_27 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
        Py_DECREF( tmp_metaclass_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
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
        CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_8;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_9, const_str_plain___prepare__ );
        tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_8;
            }
            tmp_tuple_element_8 = const_str_plain_PolyDomainError;
            tmp_args_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_8 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 69;
            tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_5 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_8;
            }
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_28;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_11, const_str_plain___getitem__ );
            tmp_operand_name_3 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_8;
            }
            tmp_condition_result_12 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_5;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_3__metaclass );
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_9 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 69;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_9 );
                CHECK_OBJECT( tmp_class_creation_3__prepared );
                tmp_type_arg_5 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1( tmp_type_arg_5 );
                assert( !(tmp_source_name_12 == NULL) );
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_tuple_element_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 69;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_9 );
                tmp_raise_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 69;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF( tmp_raise_type_3 );
                exception_value = tmp_raise_value_3;
                exception_lineno = 69;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_8;
            }
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyDict_New();
            assert( tmp_class_creation_3__prepared == NULL );
            tmp_class_creation_3__prepared = tmp_assign_source_29;
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT( tmp_class_creation_3__prepared );
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_numpy$polynomial$polyutils_69 = tmp_set_locals_3;
            Py_INCREF( tmp_set_locals_3 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_69, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_846377ae7ebf64e407501456090ac4b6;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_69, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_PolyDomainError;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_69, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT( tmp_class_creation_3__metaclass );
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = const_str_plain_PolyDomainError;
            tmp_args_name_6 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_10 );
            tmp_tuple_element_10 = locals_numpy$polynomial$polyutils_69;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_10 );
            CHECK_OBJECT( tmp_class_creation_3__class_decl_dict );
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 69;
            tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
            Py_DECREF( tmp_args_name_6 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;

                goto try_except_handler_10;
            }
            assert( outline_2_var___class__ == NULL );
            outline_2_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT( outline_2_var___class__ );
        tmp_assign_source_30 = outline_2_var___class__;
        Py_INCREF( tmp_assign_source_30 );
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF( locals_numpy$polynomial$polyutils_69 );
        locals_numpy$polynomial$polyutils_69 = NULL;
        goto try_return_handler_9;
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

        Py_DECREF( locals_numpy$polynomial$polyutils_69 );
        locals_numpy$polynomial$polyutils_69 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
        Py_DECREF( outline_2_var___class__ );
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 69;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyDomainError, tmp_assign_source_30 );
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert( tmp_class_creation_4__class_decl_dict == NULL );
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_metaclass_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_4 != NULL );
        Py_INCREF( tmp_metaclass_name_4 );
        condexpr_end_4:;
        tmp_bases_name_4 = const_tuple_type_object_tuple;
        tmp_assign_source_33 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
        Py_DECREF( tmp_metaclass_name_4 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_11;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_11;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_13, const_str_plain___prepare__ );
        tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_11;
            }
            tmp_args_name_7 = const_tuple_str_plain_PolyBase_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 82;
            tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_7 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_11;
            }
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_34;
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_15, const_str_plain___getitem__ );
            tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_11;
            }
            tmp_condition_result_16 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_4__metaclass );
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_11 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;

                    goto try_except_handler_11;
                }
                tmp_right_name_4 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( tmp_class_creation_4__prepared );
                tmp_type_arg_6 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1( tmp_type_arg_6 );
                assert( !(tmp_source_name_16 == NULL) );
                tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_16 );
                if ( tmp_tuple_element_11 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_4 );

                    exception_lineno = 82;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_11 );
                tmp_raise_value_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_raise_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 82;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF( tmp_raise_type_4 );
                exception_value = tmp_raise_value_4;
                exception_lineno = 82;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_11;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = PyDict_New();
            assert( tmp_class_creation_4__prepared == NULL );
            tmp_class_creation_4__prepared = tmp_assign_source_35;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT( tmp_class_creation_4__prepared );
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_numpy$polynomial$polyutils_82 = tmp_set_locals_4;
            Py_INCREF( tmp_set_locals_4 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_a0d13325845562e4bbc31bdb2ba6618b;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_82, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_digest_ab1a29ebd75ef6b4e43e6d8f6635134e;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_82, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_PolyBase;
        tmp_res = PyObject_SetItem( locals_numpy$polynomial$polyutils_82, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;

            goto try_except_handler_13;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( tmp_class_creation_4__metaclass );
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = const_str_plain_PolyBase;
            tmp_args_name_8 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_12 );
            tmp_tuple_element_12 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_12 );
            tmp_tuple_element_12 = locals_numpy$polynomial$polyutils_82;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_12 );
            CHECK_OBJECT( tmp_class_creation_4__class_decl_dict );
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_c2cacf06261bfbcee34859c9221ccc83->m_frame.f_lineno = 82;
            tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
            Py_DECREF( tmp_args_name_8 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 82;

                goto try_except_handler_13;
            }
            assert( outline_3_var___class__ == NULL );
            outline_3_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT( outline_3_var___class__ );
        tmp_assign_source_36 = outline_3_var___class__;
        Py_INCREF( tmp_assign_source_36 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_numpy$polynomial$polyutils_82 );
        locals_numpy$polynomial$polyutils_82 = NULL;
        goto try_return_handler_12;
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

        Py_DECREF( locals_numpy$polynomial$polyutils_82 );
        locals_numpy$polynomial$polyutils_82 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
        Py_DECREF( outline_3_var___class__ );
        outline_3_var___class__ = NULL;

        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$polynomial$polyutils );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_4:;
        exception_lineno = 82;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_PolyBase, tmp_assign_source_36 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2cacf06261bfbcee34859c9221ccc83 );
#endif
    popFrameStack();

    assertFrameObject( frame_c2cacf06261bfbcee34859c9221ccc83 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2cacf06261bfbcee34859c9221ccc83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2cacf06261bfbcee34859c9221ccc83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2cacf06261bfbcee34859c9221ccc83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2cacf06261bfbcee34859c9221ccc83, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_1_trimseq(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimseq, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_39 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_2_as_series( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_as_series, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_40 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_3_trimcoef( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_trimcoef, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_4_getdomain(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_getdomain, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_5_mapparms(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapparms, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_6_mapdomain(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain_mapdomain, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_7__vander2d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__vander2d, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_8__vander3d(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__vander3d, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_9__fromroots(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__fromroots, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_10__valnd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__valnd, tmp_assign_source_47 );
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_11__gridnd(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__gridnd, tmp_assign_source_48 );
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_12__div(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__div, tmp_assign_source_49 );
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_13__add(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__add, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_14__sub(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__sub, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = const_tuple_none_false_none_tuple;
        Py_INCREF( tmp_defaults_3 );
        tmp_assign_source_52 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_15__fit( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__fit, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_16__pow(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__pow, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_FUNCTION_numpy$polynomial$polyutils$$$function_17__deprecate_as_int(  );



        UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain__deprecate_as_int, tmp_assign_source_54 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polyutils, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$polynomial$polyutils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
