/* Generated code for Python module 'scipy.spatial.transform._rotation_spline'
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

/* The "_module_scipy$spatial$transform$_rotation_spline" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$spatial$transform$_rotation_spline;
PyDictObject *moduledict_scipy$spatial$transform$_rotation_spline;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_tuple_tuple_int_neg_1_int_pos_3_tuple_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain_cp;
extern PyObject *const_int_pos_24;
extern PyObject *const_str_plain___name__;
extern PyObject *const_int_pos_120;
static PyObject *const_tuple_str_plain_RotationSpline_tuple_type_object_tuple_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_int_pos_180;
static PyObject *const_str_plain__compute_angular_acceleration;
extern PyObject *const_str_plain_einsum;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_skew;
extern PyObject *const_str_plain_rotvecs;
extern PyObject *const_str_plain_sum;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
extern PyObject *const_str_plain_rotation;
static PyObject *const_tuple_827ee133952af79c20822d997673700a_tuple;
extern PyObject *const_str_plain_iteration;
extern PyObject *const_slice_int_pos_1_int_neg_1_none;
static PyObject *const_tuple_slice_none_int_neg_1_none_none_tuple;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_digest_219b06272e3f0ee4164fbd3258259c37;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_sin;
extern PyObject *const_str_plain_k1;
static PyObject *const_str_plain_angular_rate_first;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_x_str_plain_result_tuple;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_k2;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_cos;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_times;
static PyObject *const_str_plain_rotvecs_dot;
static PyObject *const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple;
extern PyObject *const_str_plain_b0;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_9aeb22bef1c0fd0deac466850acb062d;
static PyObject *const_str_digest_646be1ceb9fc2aaeaff4471a079da276;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_dict_6ccf1996a79e7bc95b345c0d39aef510;
static PyObject *const_str_plain__angular_acceleration_nonlinear_term;
static PyObject *const_str_plain_angular_rates_new;
extern PyObject *const_float_0_16666666666666666;
extern PyObject *const_str_digest_52b9a9e657bc059446f244181343d90b;
static PyObject *const_str_digest_51ede53d730446f3866302acb9ef9c9f;
static PyObject *const_str_digest_118b5993109e45495a7729b875aa7457;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_list_int_0_int_pos_1_int_pos_2_list;
extern PyObject *const_str_plain_rotations;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_eb5d252b6e80642fe4b094c359fcd14d;
static PyObject *const_str_plain_A_i;
extern PyObject *const_int_neg_2;
extern PyObject *const_str_plain_Rotation;
extern PyObject *const_str_plain_int;
static PyObject *const_tuple_int_pos_5_int_pos_5_tuple;
extern PyObject *const_tuple_slice_none_none_none_int_0_int_pos_1_tuple;
extern PyObject *const_tuple_slice_none_none_none_none_tuple;
static PyObject *const_str_digest_9cc3e4b407d7ef8c8995b0779f693bec;
static PyObject *const_str_digest_adce91ef5ea51ad8487231d11dfd08df;
extern PyObject *const_str_plain_float;
extern PyObject *const_tuple_slice_none_none_none_int_pos_2_tuple;
static PyObject *const_str_digest_98730388cdc302378a66c796f84b9f4b;
static PyObject *const_str_digest_cee0fa3901db1b22c651b038e69be635;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_delta;
static PyObject *const_str_plain_ind_blocks;
static PyObject *const_str_plain_singe_time;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_slice_none_none_none_int_pos_1_int_pos_2_tuple;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_dp;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_k3;
extern PyObject *const_str_plain_repeat;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_matmul;
static PyObject *const_str_plain__rotvec_dot_to_angular_rate_matrix;
extern PyObject *const_str_plain_RotationSpline;
static PyObject *const_str_plain_B_j;
static PyObject *const_tuple_str_plain_solve_banded_tuple;
static PyObject *const_str_plain__create_block_3_diagonal_matrix;
extern PyObject *const_str_plain_side;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_diag_j;
static PyObject *const_float_0_001388888888888889;
static PyObject *const_str_digest_1f59b4f4aad6697354e7dd67ad81f7b9;
static PyObject *const_float_0_08333333333333333;
static PyObject *const_str_plain__compute_angular_rate;
extern PyObject *const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_digest_f0a7ed9815b21723bea6e03db633f81c;
extern PyObject *const_str_plain_n_segments;
extern PyObject *const_str_plain_tan;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_plain_A_j;
static PyObject *const_str_digest_8d509c7d983de81bf7b41f82f30753bd;
extern PyObject *const_str_plain_searchsorted;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_digest_1968ce1d8e137ebd8fde16c7b247746a;
extern PyObject *const_str_digest_ef250931ea1c6bfeaa05ef54d6fc891f;
static PyObject *const_str_digest_acf12ffe36d240e16f5e741c8d687d94;
extern PyObject *const_str_plain_coeff;
static PyObject *const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple;
extern PyObject *const_str_plain_vstack;
static PyObject *const_str_digest_c5f3a4a59b9a8289587e659ac3c952ea;
static PyObject *const_str_plain_angular_rates;
static PyObject *const_str_digest_f7cad3e9a6a440d06ec6189bb52f8376;
extern PyObject *const_int_0;
static PyObject *const_float_minus_0_016666666666666666;
extern PyObject *const_tuple_slice_none_none_none_int_0_tuple;
static PyObject *const_str_plain_B_i;
extern PyObject *const_tuple_slice_none_none_none_int_0_int_pos_2_tuple;
extern PyObject *const_str_plain_nm;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_B;
static PyObject *const_tuple_533a9acef3d50184f62341e71fe31065_tuple;
extern PyObject *const_str_plain_ravel;
static PyObject *const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple;
static PyObject *const_tuple_str_plain_Rotation_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_atleast_1d;
static PyObject *const_str_plain_diag_i;
extern PyObject *const_tuple_slice_none_none_none_int_pos_2_int_0_tuple;
extern PyObject *const_float_0_0001;
extern PyObject *const_str_plain_identity;
static PyObject *const_tuple_str_plain_A_str_plain_b_tuple;
static PyObject *const_str_plain_A_inv;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_slice_none_none_none_int_pos_1_int_0_tuple;
extern PyObject *const_tuple_slice_none_none_none_int_pos_2_int_pos_1_tuple;
extern PyObject *const_str_plain_empty_like;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_slice_int_pos_1_none_none_none_tuple;
extern PyObject *const_str_plain_PPoly;
extern PyObject *const_dict_607b85ec57ab5596c680ca014e9c8645;
static PyObject *const_str_plain__angular_rate_to_rotvec_dot_matrix;
extern PyObject *const_str_plain_diff;
static PyObject *const_str_plain_ccp;
static PyObject *const_str_plain_delta_beta;
static PyObject *const_tuple_094d770eaa0d0e83e1a396a519821446_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_float_1eminus_09;
static PyObject *const_str_plain_rotvecs_dot_dot;
extern PyObject *const_slice_none_int_neg_1_none;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_1824570c28b5e2364842ac5d0d2f556b;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_cross;
static PyObject *const_str_plain__matrix_vector_product_of_stacks;
static PyObject *const_tuple_slice_none_none_none_none_none_tuple;
extern PyObject *const_tuple_slice_none_none_none_int_pos_1_tuple;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_TOL;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_692264946308601a13299a13211770d2_tuple;
extern PyObject *const_str_plain_from_rotvec;
static PyObject *const_tuple_str_plain_rotvecs_str_plain_rotvecs_dot_tuple;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_solve_banded;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__create_skew_matrix;
static PyObject *const_str_digest_8a34660b8b29e9f0ea5550f17bc7e382;
static PyObject *const_str_plain__solve_for_angular_rates;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_4d09450bf9b9ad5fd6d5078d04deb611;
static PyObject *const_tuple_ac06566fea7675f24543b929d159ee1d_tuple;
static PyObject *const_str_plain_MAX_ITER;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_digest_6ab6e06a8a8df7dc5225f4d4c010677a;
extern PyObject *const_str_plain_u;
extern PyObject *const_tuple_int_neg_1_int_pos_3_tuple;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_A;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_as_rotvec;
extern PyObject *const_str_digest_c442c97a6581ebe68ef4f0446ad7fe26;
static PyObject *const_int_pos_12604;
extern PyObject *const_str_plain_interpolator;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_plain_dccp;
extern PyObject *const_tuple_str_plain_PPoly_tuple;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple, 0, const_slice_int_pos_1_int_neg_1_none ); Py_INCREF( const_slice_int_pos_1_int_neg_1_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_tuple_int_neg_1_int_pos_3_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_int_neg_1_int_pos_3_tuple_tuple, 0, const_tuple_int_neg_1_int_pos_3_tuple ); Py_INCREF( const_tuple_int_neg_1_int_pos_3_tuple );
    const_tuple_str_plain_RotationSpline_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RotationSpline_tuple_type_object_tuple_tuple, 0, const_str_plain_RotationSpline ); Py_INCREF( const_str_plain_RotationSpline );
    PyTuple_SET_ITEM( const_tuple_str_plain_RotationSpline_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain__compute_angular_acceleration = UNSTREAM_STRING_ASCII( &constant_bin[ 5629234 ], 29, 1 );
    const_tuple_827ee133952af79c20822d997673700a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 0, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 1, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 2, const_str_plain_k1 ); Py_INCREF( const_str_plain_k1 );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 3, const_str_plain_k2 ); Py_INCREF( const_str_plain_k2 );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 4, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 5, const_str_plain_nm ); Py_INCREF( const_str_plain_nm );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 6, const_str_plain_skew ); Py_INCREF( const_str_plain_skew );
    PyTuple_SET_ITEM( const_tuple_827ee133952af79c20822d997673700a_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_slice_none_int_neg_1_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_none_int_neg_1_none_none_tuple, 0, const_slice_none_int_neg_1_none ); Py_INCREF( const_slice_none_int_neg_1_none );
    PyTuple_SET_ITEM( const_tuple_slice_none_int_neg_1_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_219b06272e3f0ee4164fbd3258259c37 = UNSTREAM_STRING_ASCII( &constant_bin[ 5629263 ], 305, 0 );
    const_str_plain_angular_rate_first = UNSTREAM_STRING_ASCII( &constant_bin[ 5629568 ], 18, 1 );
    const_tuple_str_plain_x_str_plain_result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_result_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_result_tuple, 1, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_rotvecs_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 5629433 ], 11, 1 );
    const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 0, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 1, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 2, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 3, const_str_plain_dp ); Py_INCREF( const_str_plain_dp );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 4, const_str_plain_cp ); Py_INCREF( const_str_plain_cp );
    const_str_plain_ccp = UNSTREAM_STRING_ASCII( &constant_bin[ 5629586 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 5, const_str_plain_ccp ); Py_INCREF( const_str_plain_ccp );
    const_str_plain_dccp = UNSTREAM_STRING_ASCII( &constant_bin[ 5629589 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 6, const_str_plain_dccp ); Py_INCREF( const_str_plain_dccp );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 7, const_str_plain_k1 ); Py_INCREF( const_str_plain_k1 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 8, const_str_plain_k2 ); Py_INCREF( const_str_plain_k2 );
    const_str_plain_k3 = UNSTREAM_STRING_ASCII( &constant_bin[ 615060 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 9, const_str_plain_k3 ); Py_INCREF( const_str_plain_k3 );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 10, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 11, const_str_plain_nm ); Py_INCREF( const_str_plain_nm );
    const_str_digest_9aeb22bef1c0fd0deac466850acb062d = UNSTREAM_STRING_ASCII( &constant_bin[ 5629593 ], 39, 0 );
    const_str_digest_646be1ceb9fc2aaeaff4471a079da276 = UNSTREAM_STRING_ASCII( &constant_bin[ 5629632 ], 406, 0 );
    const_str_plain__angular_acceleration_nonlinear_term = UNSTREAM_STRING_ASCII( &constant_bin[ 5630038 ], 36, 1 );
    const_str_plain_angular_rates_new = UNSTREAM_STRING_ASCII( &constant_bin[ 5630074 ], 17, 1 );
    const_str_digest_51ede53d730446f3866302acb9ef9c9f = UNSTREAM_STRING_ASCII( &constant_bin[ 5630091 ], 30, 0 );
    const_str_digest_118b5993109e45495a7729b875aa7457 = UNSTREAM_STRING_ASCII( &constant_bin[ 5630121 ], 43, 0 );
    const_str_digest_eb5d252b6e80642fe4b094c359fcd14d = UNSTREAM_STRING_ASCII( &constant_bin[ 5630164 ], 486, 0 );
    const_str_plain_A_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5630650 ], 3, 1 );
    const_tuple_int_pos_5_int_pos_5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_int_pos_5_tuple, 0, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_int_pos_5_tuple, 1, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    const_str_digest_9cc3e4b407d7ef8c8995b0779f693bec = UNSTREAM_STRING_ASCII( &constant_bin[ 5630653 ], 38, 0 );
    const_str_digest_adce91ef5ea51ad8487231d11dfd08df = UNSTREAM_STRING_ASCII( &constant_bin[ 5630691 ], 23, 0 );
    const_str_digest_98730388cdc302378a66c796f84b9f4b = UNSTREAM_STRING_ASCII( &constant_bin[ 5630714 ], 53, 0 );
    const_str_digest_cee0fa3901db1b22c651b038e69be635 = UNSTREAM_STRING_ASCII( &constant_bin[ 5630767 ], 317, 0 );
    const_str_plain_ind_blocks = UNSTREAM_STRING_ASCII( &constant_bin[ 5631084 ], 10, 1 );
    const_str_plain_singe_time = UNSTREAM_STRING_ASCII( &constant_bin[ 5631094 ], 10, 1 );
    const_str_plain__rotvec_dot_to_angular_rate_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5631104 ], 34, 1 );
    const_str_plain_B_j = UNSTREAM_STRING_ASCII( &constant_bin[ 4270934 ], 3, 1 );
    const_tuple_str_plain_solve_banded_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_solve_banded_tuple, 0, const_str_plain_solve_banded ); Py_INCREF( const_str_plain_solve_banded );
    const_str_plain__create_block_3_diagonal_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5631138 ], 31, 1 );
    const_str_plain_diag_j = UNSTREAM_STRING_ASCII( &constant_bin[ 5631169 ], 6, 1 );
    const_float_0_001388888888888889 = UNSTREAM_FLOAT( &constant_bin[ 5631175 ] );
    const_str_digest_1f59b4f4aad6697354e7dd67ad81f7b9 = UNSTREAM_STRING_ASCII( &constant_bin[ 5631183 ], 26, 0 );
    const_float_0_08333333333333333 = UNSTREAM_FLOAT( &constant_bin[ 5631209 ] );
    const_str_plain__compute_angular_rate = UNSTREAM_STRING_ASCII( &constant_bin[ 5631217 ], 21, 1 );
    const_str_plain_A_j = UNSTREAM_STRING_ASCII( &constant_bin[ 5631238 ], 3, 1 );
    const_str_digest_8d509c7d983de81bf7b41f82f30753bd = UNSTREAM_STRING_ASCII( &constant_bin[ 5631241 ], 317, 0 );
    const_str_digest_1968ce1d8e137ebd8fde16c7b247746a = UNSTREAM_STRING_ASCII( &constant_bin[ 5631558 ], 23, 0 );
    const_str_digest_acf12ffe36d240e16f5e741c8d687d94 = UNSTREAM_STRING_ASCII( &constant_bin[ 5631581 ], 435, 0 );
    const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 0, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 1, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 3, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 4, const_str_plain_nm ); Py_INCREF( const_str_plain_nm );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 5, const_str_plain_skew ); Py_INCREF( const_str_plain_skew );
    PyTuple_SET_ITEM( const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_c5f3a4a59b9a8289587e659ac3c952ea = UNSTREAM_STRING_ASCII( &constant_bin[ 5632016 ], 200, 0 );
    const_str_plain_angular_rates = UNSTREAM_STRING_ASCII( &constant_bin[ 5629619 ], 13, 1 );
    const_str_digest_f7cad3e9a6a440d06ec6189bb52f8376 = UNSTREAM_STRING_ASCII( &constant_bin[ 5632216 ], 2588, 0 );
    const_float_minus_0_016666666666666666 = UNSTREAM_FLOAT( &constant_bin[ 5634804 ] );
    const_str_plain_B_i = UNSTREAM_STRING_ASCII( &constant_bin[ 5634812 ], 3, 1 );
    const_tuple_533a9acef3d50184f62341e71fe31065_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 3, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 4, const_str_plain_ind_blocks ); Py_INCREF( const_str_plain_ind_blocks );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 5, const_str_plain_A_i ); Py_INCREF( const_str_plain_A_i );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 6, const_str_plain_A_j ); Py_INCREF( const_str_plain_A_j );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 7, const_str_plain_B_i ); Py_INCREF( const_str_plain_B_i );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 8, const_str_plain_B_j ); Py_INCREF( const_str_plain_B_j );
    const_str_plain_diag_i = UNSTREAM_STRING_ASCII( &constant_bin[ 3094914 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 9, const_str_plain_diag_i ); Py_INCREF( const_str_plain_diag_i );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 10, const_str_plain_diag_j ); Py_INCREF( const_str_plain_diag_j );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 11, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 12, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 13, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 14, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 15, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 16, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple, 0, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple, 1, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    const_str_plain_rotvecs_dot_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 5629892 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple, 2, const_str_plain_rotvecs_dot_dot ); Py_INCREF( const_str_plain_rotvecs_dot_dot );
    const_tuple_str_plain_Rotation_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Rotation_tuple, 0, const_str_plain_Rotation ); Py_INCREF( const_str_plain_Rotation );
    const_tuple_str_plain_A_str_plain_b_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_b_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_b_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain_A_inv = UNSTREAM_STRING_ASCII( &constant_bin[ 5634815 ], 5, 1 );
    const_tuple_slice_int_pos_1_none_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_none_none_none_tuple, 0, const_slice_int_pos_1_none_none ); Py_INCREF( const_slice_int_pos_1_none_none );
    PyTuple_SET_ITEM( const_tuple_slice_int_pos_1_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain__angular_rate_to_rotvec_dot_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5634820 ], 34, 1 );
    const_str_plain_delta_beta = UNSTREAM_STRING_ASCII( &constant_bin[ 5634854 ], 10, 1 );
    const_tuple_094d770eaa0d0e83e1a396a519821446_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 1, const_str_plain_times ); Py_INCREF( const_str_plain_times );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 2, const_str_plain_rotations ); Py_INCREF( const_str_plain_rotations );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 3, const_str_plain_PPoly ); Py_INCREF( const_str_plain_PPoly );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 4, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 5, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 6, const_str_plain_angular_rates ); Py_INCREF( const_str_plain_angular_rates );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 7, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    PyTuple_SET_ITEM( const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 8, const_str_plain_coeff ); Py_INCREF( const_str_plain_coeff );
    const_str_digest_1824570c28b5e2364842ac5d0d2f556b = UNSTREAM_STRING_ASCII( &constant_bin[ 5634864 ], 49, 0 );
    const_str_plain__matrix_vector_product_of_stacks = UNSTREAM_STRING_ASCII( &constant_bin[ 5634913 ], 32, 1 );
    const_tuple_slice_none_none_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_none_none_tuple, 0, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_slice_none_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_plain_TOL = UNSTREAM_STRING_ASCII( &constant_bin[ 4180777 ], 3, 1 );
    const_tuple_692264946308601a13299a13211770d2_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 1, const_str_plain_times ); Py_INCREF( const_str_plain_times );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 2, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 3, const_str_plain_singe_time ); Py_INCREF( const_str_plain_singe_time );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 4, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 5, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 6, const_str_plain_n_segments ); Py_INCREF( const_str_plain_n_segments );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 8, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    PyTuple_SET_ITEM( const_tuple_692264946308601a13299a13211770d2_tuple, 9, const_str_plain_rotvecs_dot_dot ); Py_INCREF( const_str_plain_rotvecs_dot_dot );
    const_tuple_str_plain_rotvecs_str_plain_rotvecs_dot_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rotvecs_str_plain_rotvecs_dot_tuple, 0, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_str_plain_rotvecs_str_plain_rotvecs_dot_tuple, 1, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    const_str_plain__create_skew_matrix = UNSTREAM_STRING_ASCII( &constant_bin[ 5634945 ], 19, 1 );
    const_str_digest_8a34660b8b29e9f0ea5550f17bc7e382 = UNSTREAM_STRING_ASCII( &constant_bin[ 5634872 ], 40, 0 );
    const_str_plain__solve_for_angular_rates = UNSTREAM_STRING_ASCII( &constant_bin[ 5629608 ], 24, 1 );
    const_str_digest_4d09450bf9b9ad5fd6d5078d04deb611 = UNSTREAM_STRING_ASCII( &constant_bin[ 5634964 ], 606, 0 );
    const_tuple_ac06566fea7675f24543b929d159ee1d_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 1, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 2, const_str_plain_angular_rates ); Py_INCREF( const_str_plain_angular_rates );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 3, const_str_plain_rotvecs ); Py_INCREF( const_str_plain_rotvecs );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 4, const_str_plain_angular_rate_first ); Py_INCREF( const_str_plain_angular_rate_first );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 5, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 6, const_str_plain_A_inv ); Py_INCREF( const_str_plain_A_inv );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 7, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 8, const_str_plain_b0 ); Py_INCREF( const_str_plain_b0 );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 9, const_str_plain_iteration ); Py_INCREF( const_str_plain_iteration );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 10, const_str_plain_rotvecs_dot ); Py_INCREF( const_str_plain_rotvecs_dot );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 11, const_str_plain_delta_beta ); Py_INCREF( const_str_plain_delta_beta );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 12, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 13, const_str_plain_angular_rates_new ); Py_INCREF( const_str_plain_angular_rates_new );
    PyTuple_SET_ITEM( const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 14, const_str_plain_delta ); Py_INCREF( const_str_plain_delta );
    const_str_plain_MAX_ITER = UNSTREAM_STRING_ASCII( &constant_bin[ 5635570 ], 8, 1 );
    const_str_digest_6ab6e06a8a8df7dc5225f4d4c010677a = UNSTREAM_STRING_ASCII( &constant_bin[ 5635578 ], 57, 0 );
    const_int_pos_12604 = PyLong_FromUnsignedLong( 12604ul );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_scipy$spatial$transform$_rotation_spline( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_04f5c4a319254cb0433898931d25572c;
static PyCodeObject *codeobj_0bae8349596c39f761886700b8ca9729;
static PyCodeObject *codeobj_1b8852c8e5b68fcdd5f8f02c0023ad1a;
static PyCodeObject *codeobj_6f5879392c488e3d704b478f78407f9b;
static PyCodeObject *codeobj_f8c121399af51017178222256307c89c;
static PyCodeObject *codeobj_40352b74d27c722408f1f35435a69d8f;
static PyCodeObject *codeobj_51ca0475fed677aac9343068d07f074f;
static PyCodeObject *codeobj_e2cbb498e2621a0dbfb435734906d7c2;
static PyCodeObject *codeobj_d0b827fc82e052592605d05943e28c42;
static PyCodeObject *codeobj_795bf54d5572343e88ca3fb49ab80f87;
static PyCodeObject *codeobj_a9ef74e47bfc88d3a4562bdf7675ce92;
static PyCodeObject *codeobj_2bca2f1a1e3ab4128ab11ea4a9a5e558;
static PyCodeObject *codeobj_24a9e94a0609163a223a64023ea1fbbf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_118b5993109e45495a7729b875aa7457 );
    codeobj_04f5c4a319254cb0433898931d25572c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1824570c28b5e2364842ac5d0d2f556b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0bae8349596c39f761886700b8ca9729 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RotationSpline, 251, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_1b8852c8e5b68fcdd5f8f02c0023ad1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 406, const_tuple_692264946308601a13299a13211770d2_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f5879392c488e3d704b478f78407f9b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 363, const_tuple_094d770eaa0d0e83e1a396a519821446_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f8c121399af51017178222256307c89c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__angular_acceleration_nonlinear_term, 107, const_tuple_a92b389c2f48816f4a59736bd628c45f_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_40352b74d27c722408f1f35435a69d8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__angular_rate_to_rotvec_dot_matrix, 33, const_tuple_3bb4a2b898e2a46e78b9b39e091fae01_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_51ca0475fed677aac9343068d07f074f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_angular_acceleration, 172, const_tuple_22ce8683b9174ed4af31e9127621c5b3_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e2cbb498e2621a0dbfb435734906d7c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_angular_rate, 154, const_tuple_str_plain_rotvecs_str_plain_rotvecs_dot_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0b827fc82e052592605d05943e28c42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__create_block_3_diagonal_matrix, 192, const_tuple_533a9acef3d50184f62341e71fe31065_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_795bf54d5572343e88ca3fb49ab80f87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__create_skew_matrix, 6, const_tuple_str_plain_x_str_plain_result_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a9ef74e47bfc88d3a4562bdf7675ce92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__matrix_vector_product_of_stacks, 28, const_tuple_str_plain_A_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2bca2f1a1e3ab4128ab11ea4a9a5e558 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rotvec_dot_to_angular_rate_matrix, 68, const_tuple_827ee133952af79c20822d997673700a_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24a9e94a0609163a223a64023ea1fbbf = MAKE_CODEOBJ( module_filename_obj, const_str_plain__solve_for_angular_rates, 330, const_tuple_ac06566fea7675f24543b929d159ee1d_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_11___call__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix(  );


static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates(  );


// The module function definitions.
static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_795bf54d5572343e88ca3fb49ab80f87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_795bf54d5572343e88ca3fb49ab80f87 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_795bf54d5572343e88ca3fb49ab80f87, codeobj_795bf54d5572343e88ca3fb49ab80f87, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *) );
    frame_795bf54d5572343e88ca3fb49ab80f87 = cache_frame_795bf54d5572343e88ca3fb49ab80f87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_795bf54d5572343e88ca3fb49ab80f87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_795bf54d5572343e88ca3fb49ab80f87 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_len_arg_1 = par_x;
        tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_795bf54d5572343e88ca3fb49ab80f87->m_frame.f_lineno = 18;
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


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_1 = par_x;
        tmp_subscript_name_1 = const_tuple_slice_none_none_none_int_pos_2_tuple;
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_1 = var_result;
        tmp_ass_subscript_1 = const_tuple_slice_none_none_none_int_0_int_pos_1_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_2 = par_x;
        tmp_subscript_name_2 = const_tuple_slice_none_none_none_int_pos_1_tuple;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_2 = var_result;
        tmp_ass_subscript_2 = const_tuple_slice_none_none_none_int_0_int_pos_2_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_3 = par_x;
        tmp_subscript_name_3 = const_tuple_slice_none_none_none_int_pos_2_tuple;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_3 = var_result;
        tmp_ass_subscript_3 = const_tuple_slice_none_none_none_int_pos_1_int_0_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_4 = par_x;
        tmp_subscript_name_4 = const_tuple_slice_none_none_none_int_0_tuple;
        tmp_operand_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_4 = var_result;
        tmp_ass_subscript_4 = const_tuple_slice_none_none_none_int_pos_1_int_pos_2_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_5 = par_x;
        tmp_subscript_name_5 = const_tuple_slice_none_none_none_int_pos_1_tuple;
        tmp_operand_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_5 = var_result;
        tmp_ass_subscript_5 = const_tuple_slice_none_none_none_int_pos_2_int_0_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT( par_x );
        tmp_subscribed_name_6 = par_x;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_int_0_tuple;
        tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_6 = var_result;
        tmp_ass_subscript_6 = const_tuple_slice_none_none_none_int_pos_2_int_pos_1_tuple;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_795bf54d5572343e88ca3fb49ab80f87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_795bf54d5572343e88ca3fb49ab80f87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_795bf54d5572343e88ca3fb49ab80f87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_795bf54d5572343e88ca3fb49ab80f87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_795bf54d5572343e88ca3fb49ab80f87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_795bf54d5572343e88ca3fb49ab80f87,
        type_description_1,
        par_x,
        var_result
    );


    // Release cached frame.
    if ( frame_795bf54d5572343e88ca3fb49ab80f87 == cache_frame_795bf54d5572343e88ca3fb49ab80f87 )
    {
        Py_DECREF( frame_795bf54d5572343e88ca3fb49ab80f87 );
    }
    cache_frame_795bf54d5572343e88ca3fb49ab80f87 = NULL;

    assertFrameObject( frame_795bf54d5572343e88ca3fb49ab80f87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a9ef74e47bfc88d3a4562bdf7675ce92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a9ef74e47bfc88d3a4562bdf7675ce92 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9ef74e47bfc88d3a4562bdf7675ce92, codeobj_a9ef74e47bfc88d3a4562bdf7675ce92, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *) );
    frame_a9ef74e47bfc88d3a4562bdf7675ce92 = cache_frame_a9ef74e47bfc88d3a4562bdf7675ce92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9ef74e47bfc88d3a4562bdf7675ce92 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_ef250931ea1c6bfeaa05ef54d6fc891f;
        CHECK_OBJECT( par_A );
        tmp_args_element_name_2 = par_A;
        CHECK_OBJECT( par_b );
        tmp_args_element_name_3 = par_b;
        frame_a9ef74e47bfc88d3a4562bdf7675ce92->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_einsum, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9ef74e47bfc88d3a4562bdf7675ce92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9ef74e47bfc88d3a4562bdf7675ce92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9ef74e47bfc88d3a4562bdf7675ce92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9ef74e47bfc88d3a4562bdf7675ce92,
        type_description_1,
        par_A,
        par_b
    );


    // Release cached frame.
    if ( frame_a9ef74e47bfc88d3a4562bdf7675ce92 == cache_frame_a9ef74e47bfc88d3a4562bdf7675ce92 )
    {
        Py_DECREF( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );
    }
    cache_frame_a9ef74e47bfc88d3a4562bdf7675ce92 = NULL;

    assertFrameObject( frame_a9ef74e47bfc88d3a4562bdf7675ce92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rotvecs = python_pars[ 0 ];
    PyObject *var_norm = NULL;
    PyObject *var_k = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_nm = NULL;
    PyObject *var_skew = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    struct Nuitka_FrameObject *frame_40352b74d27c722408f1f35435a69d8f;
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
    static struct Nuitka_FrameObject *cache_frame_40352b74d27c722408f1f35435a69d8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_40352b74d27c722408f1f35435a69d8f, codeobj_40352b74d27c722408f1f35435a69d8f, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_40352b74d27c722408f1f35435a69d8f = cache_frame_40352b74d27c722408f1f35435a69d8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_40352b74d27c722408f1f35435a69d8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_40352b74d27c722408f1f35435a69d8f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_norm );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_tuple_element_1 = par_rotvecs;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 48;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_norm == NULL );
        var_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_1 = var_norm;
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k == NULL );
        var_k = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_norm );
        tmp_compexpr_left_1 = var_norm;
        tmp_compexpr_right_1 = const_float_0_0001;
        tmp_assign_source_3 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_1 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nm == NULL );
        var_nm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_left_name_2 = const_int_pos_1;
        tmp_left_name_4 = const_float_0_5;
        CHECK_OBJECT( var_nm );
        tmp_right_name_2 = var_nm;
        tmp_left_name_3 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tan );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_float_0_5;
        CHECK_OBJECT( var_nm );
        tmp_right_name_4 = var_nm;
        tmp_args_element_name_2 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_6 = var_nm;
        tmp_right_name_6 = const_int_pos_2;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k );
        tmp_ass_subscribed_1 = var_k;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_1 = var_mask;
        tmp_assign_source_5 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_2 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_nm;
            assert( old != NULL );
            var_nm = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_left_name_7 = const_float_0_08333333333333333;
        tmp_left_name_8 = const_float_0_001388888888888889;
        CHECK_OBJECT( var_nm );
        tmp_left_name_9 = var_nm;
        tmp_right_name_9 = const_int_pos_2;
        tmp_right_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k );
        tmp_ass_subscribed_2 = var_k;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__create_skew_matrix );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__create_skew_matrix );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_create_skew_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_3 = par_rotvecs;
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_skew == NULL );
        var_skew = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_len_arg_1 = par_rotvecs;
        tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_2 );
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_8;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_6;
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 61;
        tmp_ass_subvalue_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_identity, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_3 = var_result;
        tmp_ass_subscript_3 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( var_result );
        tmp_assign_source_9 = var_result;
        assert( tmp_inplace_assign_slice_1__target == NULL );
        Py_INCREF( tmp_assign_source_9 );
        tmp_inplace_assign_slice_1__target = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_10;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_slice_1__target;
        tmp_subscript_name_3 = const_slice_none_none_none;
        tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_11 = const_float_0_5;
        CHECK_OBJECT( var_skew );
        tmp_right_name_11 = var_skew;
        tmp_right_name_10 = BINARY_OPERATION_MUL_FLOAT_OBJECT( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
        tmp_ass_subscribed_4 = tmp_inplace_assign_slice_1__target;
        tmp_ass_subscript_4 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( var_result );
        tmp_assign_source_10 = var_result;
        assert( tmp_inplace_assign_slice_2__target == NULL );
        Py_INCREF( tmp_assign_source_10 );
        tmp_inplace_assign_slice_2__target = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_12;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
        tmp_subscribed_name_4 = tmp_inplace_assign_slice_2__target;
        tmp_subscript_name_4 = const_slice_none_none_none;
        tmp_left_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_k );
        tmp_subscribed_name_5 = var_k;
        tmp_subscript_name_5 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_left_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_left_name_12 );
            Py_DECREF( tmp_left_name_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        CHECK_OBJECT( var_skew );
        tmp_args_element_name_5 = var_skew;
        CHECK_OBJECT( var_skew );
        tmp_args_element_name_6 = var_skew;
        frame_40352b74d27c722408f1f35435a69d8f->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_right_name_13 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_matmul, call_args );
        }

        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
        tmp_ass_subscribed_5 = tmp_inplace_assign_slice_2__target;
        tmp_ass_subscript_5 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40352b74d27c722408f1f35435a69d8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_40352b74d27c722408f1f35435a69d8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_40352b74d27c722408f1f35435a69d8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_40352b74d27c722408f1f35435a69d8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_40352b74d27c722408f1f35435a69d8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_40352b74d27c722408f1f35435a69d8f,
        type_description_1,
        par_rotvecs,
        var_norm,
        var_k,
        var_mask,
        var_nm,
        var_skew,
        var_result
    );


    // Release cached frame.
    if ( frame_40352b74d27c722408f1f35435a69d8f == cache_frame_40352b74d27c722408f1f35435a69d8f )
    {
        Py_DECREF( frame_40352b74d27c722408f1f35435a69d8f );
    }
    cache_frame_40352b74d27c722408f1f35435a69d8f = NULL;

    assertFrameObject( frame_40352b74d27c722408f1f35435a69d8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)var_norm );
    Py_DECREF( var_norm );
    var_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_k );
    Py_DECREF( var_k );
    var_k = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_nm );
    Py_DECREF( var_nm );
    var_nm = NULL;

    CHECK_OBJECT( (PyObject *)var_skew );
    Py_DECREF( var_skew );
    var_skew = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_nm );
    var_nm = NULL;

    Py_XDECREF( var_skew );
    var_skew = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rotvecs = python_pars[ 0 ];
    PyObject *var_norm = NULL;
    PyObject *var_k1 = NULL;
    PyObject *var_k2 = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_nm = NULL;
    PyObject *var_skew = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    struct Nuitka_FrameObject *frame_2bca2f1a1e3ab4128ab11ea4a9a5e558;
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
    static struct Nuitka_FrameObject *cache_frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2bca2f1a1e3ab4128ab11ea4a9a5e558, codeobj_2bca2f1a1e3ab4128ab11ea4a9a5e558, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 = cache_frame_2bca2f1a1e3ab4128ab11ea4a9a5e558;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_norm );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_tuple_element_1 = par_rotvecs;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 83;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_norm == NULL );
        var_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_1 = var_norm;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k1 == NULL );
        var_k1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_2 = var_norm;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k2 == NULL );
        var_k2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_norm );
        tmp_compexpr_left_1 = var_norm;
        tmp_compexpr_right_1 = const_float_0_0001;
        tmp_assign_source_4 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_1 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nm == NULL );
        var_nm = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_left_name_2 = const_int_pos_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_3 = var_nm;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_cos, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_3 = var_nm;
        tmp_right_name_3 = const_int_pos_2;
        tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k1 );
        tmp_ass_subscribed_1 = var_k1;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_nm );
        tmp_left_name_5 = var_nm;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_5;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_4 = var_nm;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sin, call_args );
        }

        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_6 = var_nm;
        tmp_right_name_6 = const_int_pos_3;
        tmp_right_name_5 = POWER_OPERATION( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k2 );
        tmp_ass_subscribed_2 = var_k2;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_1 = var_mask;
        tmp_assign_source_6 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_6;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_2 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_nm;
            assert( old != NULL );
            var_nm = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_left_name_7 = const_float_0_5;
        CHECK_OBJECT( var_nm );
        tmp_left_name_9 = var_nm;
        tmp_right_name_8 = const_int_pos_2;
        tmp_left_name_8 = POWER_OPERATION( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = const_int_pos_24;
        tmp_right_name_7 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k1 );
        tmp_ass_subscribed_3 = var_k1;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 94;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_left_name_10 = const_float_0_16666666666666666;
        CHECK_OBJECT( var_nm );
        tmp_left_name_12 = var_nm;
        tmp_right_name_11 = const_int_pos_2;
        tmp_left_name_11 = POWER_OPERATION( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = const_int_pos_120;
        tmp_right_name_10 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k2 );
        tmp_ass_subscribed_4 = var_k2;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__create_skew_matrix );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__create_skew_matrix );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_create_skew_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_5 = par_rotvecs;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_skew == NULL );
        var_skew = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_empty );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_len_arg_1 = par_rotvecs;
        tmp_tuple_element_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 2, tmp_tuple_element_2 );
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_8;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 100;
        tmp_ass_subvalue_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_identity, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_5 = var_result;
        tmp_ass_subscript_5 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( var_result );
        tmp_assign_source_10 = var_result;
        assert( tmp_inplace_assign_slice_1__target == NULL );
        Py_INCREF( tmp_assign_source_10 );
        tmp_inplace_assign_slice_1__target = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_left_name_13;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_14;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_slice_1__target;
        tmp_subscript_name_3 = const_slice_none_none_none;
        tmp_left_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_k1 );
        tmp_subscribed_name_4 = var_k1;
        tmp_subscript_name_4 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_skew );
        tmp_right_name_14 = var_skew;
        tmp_right_name_13 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_6 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_slice_1__target );
        tmp_ass_subscribed_6 = tmp_inplace_assign_slice_1__target;
        tmp_ass_subscript_6 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( var_result );
        tmp_assign_source_11 = var_result;
        assert( tmp_inplace_assign_slice_2__target == NULL );
        Py_INCREF( tmp_assign_source_11 );
        tmp_inplace_assign_slice_2__target = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_left_name_15;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_16;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
        tmp_subscribed_name_5 = tmp_inplace_assign_slice_2__target;
        tmp_subscript_name_5 = const_slice_none_none_none;
        tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_k2 );
        tmp_subscribed_name_6 = var_k2;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_left_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_left_name_16 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_6 = tmp_mvar_value_9;
        CHECK_OBJECT( var_skew );
        tmp_args_element_name_7 = var_skew;
        CHECK_OBJECT( var_skew );
        tmp_args_element_name_8 = var_skew;
        frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_right_name_16 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_matmul, call_args );
        }

        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_ass_subvalue_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_slice_2__target );
        tmp_ass_subscribed_7 = tmp_inplace_assign_slice_2__target;
        tmp_ass_subscript_7 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
        Py_DECREF( tmp_ass_subvalue_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bca2f1a1e3ab4128ab11ea4a9a5e558->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bca2f1a1e3ab4128ab11ea4a9a5e558, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bca2f1a1e3ab4128ab11ea4a9a5e558,
        type_description_1,
        par_rotvecs,
        var_norm,
        var_k1,
        var_k2,
        var_mask,
        var_nm,
        var_skew,
        var_result
    );


    // Release cached frame.
    if ( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 == cache_frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 )
    {
        Py_DECREF( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 );
    }
    cache_frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 = NULL;

    assertFrameObject( frame_2bca2f1a1e3ab4128ab11ea4a9a5e558 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)var_norm );
    Py_DECREF( var_norm );
    var_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_k1 );
    Py_DECREF( var_k1 );
    var_k1 = NULL;

    CHECK_OBJECT( (PyObject *)var_k2 );
    Py_DECREF( var_k2 );
    var_k2 = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_nm );
    Py_DECREF( var_nm );
    var_nm = NULL;

    CHECK_OBJECT( (PyObject *)var_skew );
    Py_DECREF( var_skew );
    var_skew = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_nm );
    var_nm = NULL;

    Py_XDECREF( var_skew );
    var_skew = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rotvecs = python_pars[ 0 ];
    PyObject *par_rotvecs_dot = python_pars[ 1 ];
    PyObject *var_norm = NULL;
    PyObject *var_dp = NULL;
    PyObject *var_cp = NULL;
    PyObject *var_ccp = NULL;
    PyObject *var_dccp = NULL;
    PyObject *var_k1 = NULL;
    PyObject *var_k2 = NULL;
    PyObject *var_k3 = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_nm = NULL;
    struct Nuitka_FrameObject *frame_f8c121399af51017178222256307c89c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f8c121399af51017178222256307c89c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f8c121399af51017178222256307c89c, codeobj_f8c121399af51017178222256307c89c, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f8c121399af51017178222256307c89c = cache_frame_f8c121399af51017178222256307c89c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f8c121399af51017178222256307c89c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f8c121399af51017178222256307c89c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 124;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linalg );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_norm );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_tuple_element_1 = par_rotvecs;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 124;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_norm == NULL );
        var_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 125;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_left_name_1 = par_rotvecs;
        CHECK_OBJECT( par_rotvecs_dot );
        tmp_right_name_1 = par_rotvecs_dot;
        tmp_tuple_element_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 125;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 125;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dp == NULL );
        var_dp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_1 = par_rotvecs;
        CHECK_OBJECT( par_rotvecs_dot );
        tmp_args_element_name_2 = par_rotvecs_dot;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_cross, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cp == NULL );
        var_cp = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 127;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_3 = par_rotvecs;
        CHECK_OBJECT( var_cp );
        tmp_args_element_name_4 = var_cp;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_cross, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ccp == NULL );
        var_ccp = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 128;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_5;
        CHECK_OBJECT( par_rotvecs_dot );
        tmp_args_element_name_5 = par_rotvecs_dot;
        CHECK_OBJECT( var_cp );
        tmp_args_element_name_6 = var_cp;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_cross, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dccp == NULL );
        var_dccp = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_6;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_7 = var_norm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k1 == NULL );
        var_k1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_7;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_8 = var_norm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k2 == NULL );
        var_k2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 132;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_8;
        CHECK_OBJECT( var_norm );
        tmp_args_element_name_9 = var_norm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_empty_like, call_args );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_k3 == NULL );
        var_k3 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_norm );
        tmp_compexpr_left_1 = var_norm;
        tmp_compexpr_right_1 = const_float_0_0001;
        tmp_assign_source_9 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mask == NULL );
        var_mask = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_1 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_1 = var_mask;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nm == NULL );
        var_nm = tmp_assign_source_10;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_nm );
        tmp_operand_name_1 = var_nm;
        tmp_left_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_9;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_10 = var_nm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_10 };
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_sin, call_args );
        }

        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_int_pos_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_10 == NULL )
        {
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_10;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_11 = var_nm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_left_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_cos, call_args );
        }

        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_int_pos_1;
        tmp_right_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_7 = var_nm;
        tmp_right_name_7 = const_int_pos_4;
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_2 );

            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k1 );
        tmp_ass_subscribed_1 = var_k1;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_10;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_left_name_11 = const_int_neg_2;
        CHECK_OBJECT( var_nm );
        tmp_right_name_8 = var_nm;
        tmp_left_name_10 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_11, tmp_right_name_8 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_int_pos_3;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_left_name_10 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_11;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_12 = var_nm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_right_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_sin, call_args );
        }

        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_12, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_13 = var_nm;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_left_name_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_12;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_13 = var_nm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_right_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_cos, call_args );
        }

        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_14 = var_nm;
        tmp_right_name_14 = const_int_pos_5;
        tmp_right_name_13 = POWER_OPERATION( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k2 );
        tmp_ass_subscribed_2 = var_k2;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_2 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_15;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_nm );
        tmp_left_name_16 = var_nm;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_13;
        CHECK_OBJECT( var_nm );
        tmp_args_element_name_14 = var_nm;
        frame_f8c121399af51017178222256307c89c->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_right_name_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_sin, call_args );
        }

        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_nm );
        tmp_left_name_17 = var_nm;
        tmp_right_name_17 = const_int_pos_3;
        tmp_right_name_16 = POWER_OPERATION( tmp_left_name_17, tmp_right_name_17 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k3 );
        tmp_ass_subscribed_3 = var_k3;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_3 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_mask );
        tmp_operand_name_2 = var_mask;
        tmp_assign_source_11 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_mask;
            assert( old != NULL );
            var_mask = tmp_assign_source_11;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_norm );
        tmp_subscribed_name_2 = var_norm;
        CHECK_OBJECT( var_mask );
        tmp_subscript_name_2 = var_mask;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_nm;
            assert( old != NULL );
            var_nm = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_left_name_18 = const_float_0_08333333333333333;
        CHECK_OBJECT( var_nm );
        tmp_left_name_20 = var_nm;
        tmp_right_name_19 = const_int_pos_2;
        tmp_left_name_19 = POWER_OPERATION( tmp_left_name_20, tmp_right_name_19 );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = const_int_pos_180;
        tmp_right_name_18 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_19, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_19 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_ass_subvalue_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k1 );
        tmp_ass_subscribed_4 = var_k1;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_4 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        Py_DECREF( tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_left_name_21 = const_float_minus_0_016666666666666666;
        CHECK_OBJECT( var_nm );
        tmp_left_name_23 = var_nm;
        tmp_right_name_22 = const_int_pos_2;
        tmp_left_name_22 = POWER_OPERATION( tmp_left_name_23, tmp_right_name_22 );
        if ( tmp_left_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_23 = const_int_pos_12604;
        tmp_right_name_21 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_22, tmp_right_name_23 );
        Py_DECREF( tmp_left_name_22 );
        if ( tmp_right_name_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = BINARY_OPERATION_ADD_FLOAT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        Py_DECREF( tmp_right_name_21 );
        if ( tmp_ass_subvalue_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k2 );
        tmp_ass_subscribed_5 = var_k2;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_5 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subvalue_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_left_name_26;
        PyObject *tmp_right_name_25;
        PyObject *tmp_right_name_26;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_left_name_24 = const_float_0_16666666666666666;
        CHECK_OBJECT( var_nm );
        tmp_left_name_26 = var_nm;
        tmp_right_name_25 = const_int_pos_2;
        tmp_left_name_25 = POWER_OPERATION( tmp_left_name_26, tmp_right_name_25 );
        if ( tmp_left_name_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_26 = const_int_pos_120;
        tmp_right_name_24 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG( tmp_left_name_25, tmp_right_name_26 );
        Py_DECREF( tmp_left_name_25 );
        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_6 = BINARY_OPERATION_SUB_FLOAT_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_ass_subvalue_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k3 );
        tmp_ass_subscribed_6 = var_k3;
        CHECK_OBJECT( var_mask );
        tmp_ass_subscript_6 = var_mask;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
        Py_DECREF( tmp_ass_subvalue_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_dp );
        tmp_subscribed_name_3 = var_dp;
        tmp_subscript_name_3 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dp;
            assert( old != NULL );
            var_dp = tmp_assign_source_13;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_k1 );
        tmp_subscribed_name_4 = var_k1;
        tmp_subscript_name_4 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 147;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_k1;
            assert( old != NULL );
            var_k1 = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_k2 );
        tmp_subscribed_name_5 = var_k2;
        tmp_subscript_name_5 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_k2;
            assert( old != NULL );
            var_k2 = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_k3 );
        tmp_subscribed_name_6 = var_k3;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_k3;
            assert( old != NULL );
            var_k3 = tmp_assign_source_16;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_27;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_right_name_28;
        PyObject *tmp_right_name_29;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_right_name_32;
        CHECK_OBJECT( var_dp );
        tmp_left_name_28 = var_dp;
        CHECK_OBJECT( var_k1 );
        tmp_left_name_30 = var_k1;
        CHECK_OBJECT( var_cp );
        tmp_right_name_28 = var_cp;
        tmp_left_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_30, tmp_right_name_28 );
        if ( tmp_left_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k2 );
        tmp_left_name_31 = var_k2;
        CHECK_OBJECT( var_ccp );
        tmp_right_name_30 = var_ccp;
        tmp_right_name_29 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_31, tmp_right_name_30 );
        if ( tmp_right_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_29 );

            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_29, tmp_right_name_29 );
        Py_DECREF( tmp_left_name_29 );
        Py_DECREF( tmp_right_name_29 );
        if ( tmp_right_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_27 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_28, tmp_right_name_27 );
        Py_DECREF( tmp_right_name_27 );
        if ( tmp_left_name_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_k3 );
        tmp_left_name_32 = var_k3;
        CHECK_OBJECT( var_dccp );
        tmp_right_name_32 = var_dccp;
        tmp_right_name_31 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_32, tmp_right_name_32 );
        if ( tmp_right_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_27 );

            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_27, tmp_right_name_31 );
        Py_DECREF( tmp_left_name_27 );
        Py_DECREF( tmp_right_name_31 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8c121399af51017178222256307c89c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8c121399af51017178222256307c89c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f8c121399af51017178222256307c89c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f8c121399af51017178222256307c89c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f8c121399af51017178222256307c89c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f8c121399af51017178222256307c89c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f8c121399af51017178222256307c89c,
        type_description_1,
        par_rotvecs,
        par_rotvecs_dot,
        var_norm,
        var_dp,
        var_cp,
        var_ccp,
        var_dccp,
        var_k1,
        var_k2,
        var_k3,
        var_mask,
        var_nm
    );


    // Release cached frame.
    if ( frame_f8c121399af51017178222256307c89c == cache_frame_f8c121399af51017178222256307c89c )
    {
        Py_DECREF( frame_f8c121399af51017178222256307c89c );
    }
    cache_frame_f8c121399af51017178222256307c89c = NULL;

    assertFrameObject( frame_f8c121399af51017178222256307c89c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

    CHECK_OBJECT( (PyObject *)var_norm );
    Py_DECREF( var_norm );
    var_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_dp );
    Py_DECREF( var_dp );
    var_dp = NULL;

    CHECK_OBJECT( (PyObject *)var_cp );
    Py_DECREF( var_cp );
    var_cp = NULL;

    CHECK_OBJECT( (PyObject *)var_ccp );
    Py_DECREF( var_ccp );
    var_ccp = NULL;

    CHECK_OBJECT( (PyObject *)var_dccp );
    Py_DECREF( var_dccp );
    var_dccp = NULL;

    CHECK_OBJECT( (PyObject *)var_k1 );
    Py_DECREF( var_k1 );
    var_k1 = NULL;

    CHECK_OBJECT( (PyObject *)var_k2 );
    Py_DECREF( var_k2 );
    var_k2 = NULL;

    CHECK_OBJECT( (PyObject *)var_k3 );
    Py_DECREF( var_k3 );
    var_k3 = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_nm );
    Py_DECREF( var_nm );
    var_nm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

    Py_XDECREF( var_norm );
    var_norm = NULL;

    Py_XDECREF( var_dp );
    var_dp = NULL;

    Py_XDECREF( var_cp );
    var_cp = NULL;

    Py_XDECREF( var_ccp );
    var_ccp = NULL;

    Py_XDECREF( var_dccp );
    var_dccp = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_k3 );
    var_k3 = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_nm );
    var_nm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rotvecs = python_pars[ 0 ];
    PyObject *par_rotvecs_dot = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e2cbb498e2621a0dbfb435734906d7c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2cbb498e2621a0dbfb435734906d7c2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e2cbb498e2621a0dbfb435734906d7c2, codeobj_e2cbb498e2621a0dbfb435734906d7c2, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *) );
    frame_e2cbb498e2621a0dbfb435734906d7c2 = cache_frame_e2cbb498e2621a0dbfb435734906d7c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e2cbb498e2621a0dbfb435734906d7c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e2cbb498e2621a0dbfb435734906d7c2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_matrix_vector_product_of_stacks" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__rotvec_dot_to_angular_rate_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rotvec_dot_to_angular_rate_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_rotvec_dot_to_angular_rate_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_2 = par_rotvecs;
        frame_e2cbb498e2621a0dbfb435734906d7c2->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs_dot );
        tmp_args_element_name_3 = par_rotvecs_dot;
        frame_e2cbb498e2621a0dbfb435734906d7c2->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2cbb498e2621a0dbfb435734906d7c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2cbb498e2621a0dbfb435734906d7c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2cbb498e2621a0dbfb435734906d7c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2cbb498e2621a0dbfb435734906d7c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2cbb498e2621a0dbfb435734906d7c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2cbb498e2621a0dbfb435734906d7c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e2cbb498e2621a0dbfb435734906d7c2,
        type_description_1,
        par_rotvecs,
        par_rotvecs_dot
    );


    // Release cached frame.
    if ( frame_e2cbb498e2621a0dbfb435734906d7c2 == cache_frame_e2cbb498e2621a0dbfb435734906d7c2 )
    {
        Py_DECREF( frame_e2cbb498e2621a0dbfb435734906d7c2 );
    }
    cache_frame_e2cbb498e2621a0dbfb435734906d7c2 = NULL;

    assertFrameObject( frame_e2cbb498e2621a0dbfb435734906d7c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rotvecs = python_pars[ 0 ];
    PyObject *par_rotvecs_dot = python_pars[ 1 ];
    PyObject *par_rotvecs_dot_dot = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_51ca0475fed677aac9343068d07f074f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51ca0475fed677aac9343068d07f074f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_51ca0475fed677aac9343068d07f074f, codeobj_51ca0475fed677aac9343068d07f074f, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_51ca0475fed677aac9343068d07f074f = cache_frame_51ca0475fed677aac9343068d07f074f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51ca0475fed677aac9343068d07f074f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51ca0475fed677aac9343068d07f074f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__compute_angular_rate );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_angular_rate );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_angular_rate" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_1 = par_rotvecs;
        CHECK_OBJECT( par_rotvecs_dot_dot );
        tmp_args_element_name_2 = par_rotvecs_dot_dot;
        frame_51ca0475fed677aac9343068d07f074f->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__angular_acceleration_nonlinear_term );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__angular_acceleration_nonlinear_term );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_angular_acceleration_nonlinear_term" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_3 = par_rotvecs;
        CHECK_OBJECT( par_rotvecs_dot );
        tmp_args_element_name_4 = par_rotvecs_dot;
        frame_51ca0475fed677aac9343068d07f074f->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51ca0475fed677aac9343068d07f074f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_51ca0475fed677aac9343068d07f074f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51ca0475fed677aac9343068d07f074f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51ca0475fed677aac9343068d07f074f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51ca0475fed677aac9343068d07f074f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51ca0475fed677aac9343068d07f074f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51ca0475fed677aac9343068d07f074f,
        type_description_1,
        par_rotvecs,
        par_rotvecs_dot,
        par_rotvecs_dot_dot
    );


    // Release cached frame.
    if ( frame_51ca0475fed677aac9343068d07f074f == cache_frame_51ca0475fed677aac9343068d07f074f )
    {
        Py_DECREF( frame_51ca0475fed677aac9343068d07f074f );
    }
    cache_frame_51ca0475fed677aac9343068d07f074f = NULL;

    assertFrameObject( frame_51ca0475fed677aac9343068d07f074f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot_dot );
    Py_DECREF( par_rotvecs_dot_dot );
    par_rotvecs_dot_dot = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot );
    Py_DECREF( par_rotvecs_dot );
    par_rotvecs_dot = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs_dot_dot );
    Py_DECREF( par_rotvecs_dot_dot );
    par_rotvecs_dot_dot = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[ 0 ];
    PyObject *par_B = python_pars[ 1 ];
    PyObject *par_d = python_pars[ 2 ];
    PyObject *var_ind = NULL;
    PyObject *var_ind_blocks = NULL;
    PyObject *var_A_i = NULL;
    PyObject *var_A_j = NULL;
    PyObject *var_B_i = NULL;
    PyObject *var_B_j = NULL;
    PyObject *var_diag_i = NULL;
    PyObject *var_diag_j = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_values = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_d0b827fc82e052592605d05943e28c42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d0b827fc82e052592605d05943e28c42 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0b827fc82e052592605d05943e28c42, codeobj_d0b827fc82e052592605d05943e28c42, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d0b827fc82e052592605d05943e28c42 = cache_frame_d0b827fc82e052592605d05943e28c42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0b827fc82e052592605d05943e28c42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0b827fc82e052592605d05943e28c42 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 220;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_arange, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_ind == NULL );
        var_ind = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_len_arg_1 = par_A;
        tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_ind_blocks == NULL );
        var_ind_blocks = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty_like );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_1 = par_A;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 223;
        tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_A_i == NULL );
        var_A_i = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_1 = var_ind;
        tmp_subscript_name_1 = const_tuple_slice_none_none_none_none_tuple;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_A_i );
        tmp_ass_subscribed_1 = var_A_i;
        tmp_ass_subscript_1 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( var_A_i );
        tmp_left_name_1 = var_A_i;
        tmp_left_name_2 = const_int_pos_3;
        tmp_left_name_3 = const_int_pos_1;
        CHECK_OBJECT( var_ind_blocks );
        tmp_subscribed_name_2 = var_ind_blocks;
        tmp_subscript_name_2 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_1;
        var_A_i = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 227;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_empty_like );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_tuple_element_2 = par_A;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 227;
        tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_A_j == NULL );
        var_A_j = tmp_assign_source_5;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_ind );
        tmp_ass_subvalue_2 = var_ind;
        CHECK_OBJECT( var_A_j );
        tmp_ass_subscribed_2 = var_A_j;
        tmp_ass_subscript_2 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_A_j );
        tmp_left_name_4 = var_A_j;
        tmp_left_name_5 = const_int_pos_3;
        CHECK_OBJECT( var_ind_blocks );
        tmp_subscribed_name_3 = var_ind_blocks;
        tmp_subscript_name_3 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_4;
        var_A_j = tmp_assign_source_6;

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty_like );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_tuple_element_3 = par_B;
        tmp_args_name_3 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
        tmp_kw_name_3 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 231;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_B_i == NULL );
        var_B_i = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_ind );
        tmp_subscribed_name_4 = var_ind;
        tmp_subscript_name_4 = const_tuple_slice_none_none_none_none_tuple;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_B_i );
        tmp_ass_subscribed_3 = var_B_i;
        tmp_ass_subscript_3 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT( var_B_i );
        tmp_left_name_6 = var_B_i;
        tmp_left_name_7 = const_int_pos_3;
        CHECK_OBJECT( var_ind_blocks );
        tmp_subscribed_name_5 = var_ind_blocks;
        tmp_subscript_name_5 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_name_6;
        var_B_i = tmp_assign_source_8;

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty_like );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_B );
        tmp_tuple_element_4 = par_B;
        tmp_args_name_4 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
        tmp_kw_name_4 = PyDict_Copy( const_dict_6ccf1996a79e7bc95b345c0d39aef510 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 235;
        tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_B_j == NULL );
        var_B_j = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT( var_ind );
        tmp_ass_subvalue_4 = var_ind;
        CHECK_OBJECT( var_B_j );
        tmp_ass_subscribed_4 = var_B_j;
        tmp_ass_subscript_4 = const_slice_none_none_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT( var_B_j );
        tmp_left_name_8 = var_B_j;
        tmp_left_name_9 = const_int_pos_3;
        tmp_left_name_10 = const_int_pos_1;
        CHECK_OBJECT( var_ind_blocks );
        tmp_subscribed_name_6 = var_ind_blocks;
        tmp_subscript_name_6 = const_tuple_slice_none_none_none_none_none_tuple;
        tmp_right_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = tmp_left_name_8;
        var_B_j = tmp_assign_source_10;

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_len_arg_2;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_7;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_arange );
        if ( tmp_called_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = const_int_pos_3;
        CHECK_OBJECT( par_d );
        tmp_len_arg_2 = par_d;
        tmp_right_name_11 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_6 );

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        assert( !(tmp_args_element_name_2 == NULL) );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_12 = tmp_assign_unpack_1__assign_source;
        assert( var_diag_i == NULL );
        Py_INCREF( tmp_assign_source_12 );
        var_diag_i = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_13 = tmp_assign_unpack_1__assign_source;
        assert( var_diag_j == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_diag_j = tmp_assign_source_13;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 240;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_8;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hstack );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_A_i );
        tmp_called_instance_2 = var_A_i;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 240;
        tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_ravel );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 240;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_5 );
        CHECK_OBJECT( var_B_i );
        tmp_called_instance_3 = var_B_i;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 240;
        tmp_tuple_element_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 240;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_5 );
        CHECK_OBJECT( var_diag_i );
        tmp_tuple_element_5 = var_diag_i;
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_args_element_name_3, 2, tmp_tuple_element_5 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_i == NULL );
        var_i = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_9;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_hstack );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_A_j );
        tmp_called_instance_4 = var_A_j;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 241;
        tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_ravel );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_B_j );
        tmp_called_instance_5 = var_B_j;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 241;
        tmp_tuple_element_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_ravel );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 241;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_4, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_diag_j );
        tmp_tuple_element_6 = var_diag_j;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_args_element_name_4, 2, tmp_tuple_element_6 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_j == NULL );
        var_j = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_10;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hstack );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_A );
        tmp_called_instance_6 = par_A;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 242;
        tmp_tuple_element_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_ravel );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_7 );
        CHECK_OBJECT( par_B );
        tmp_called_instance_7 = par_B;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 242;
        tmp_tuple_element_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_ravel );
        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_7 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_11;
        CHECK_OBJECT( par_d );
        tmp_args_element_name_6 = par_d;
        tmp_args_element_name_7 = const_int_pos_3;
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_repeat, call_args );
        }

        if ( tmp_tuple_element_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_element_name_5 );

            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_5, 2, tmp_tuple_element_7 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_values == NULL );
        var_values = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_10;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_len_arg_3;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 246;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_10 = tmp_mvar_value_12;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_zeros );
        if ( tmp_called_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = const_int_pos_11;
        tmp_args_element_name_8 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_8 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_8 );
        tmp_left_name_12 = const_int_pos_3;
        CHECK_OBJECT( par_d );
        tmp_len_arg_3 = par_d;
        tmp_right_name_12 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 246;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = BINARY_OPERATION_MUL_LONG_LONG( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        assert( !(tmp_tuple_element_8 == NULL) );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_8 );
        frame_d0b827fc82e052592605d05943e28c42->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_17;
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( var_values );
        tmp_ass_subvalue_5 = var_values;
        CHECK_OBJECT( var_result );
        tmp_ass_subscribed_5 = var_result;
        tmp_left_name_14 = const_int_pos_5;
        CHECK_OBJECT( var_i );
        tmp_right_name_13 = var_i;
        tmp_left_name_13 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_14, tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_j );
        tmp_right_name_14 = var_j;
        tmp_tuple_element_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_13 );
        if ( tmp_tuple_element_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 0, tmp_tuple_element_9 );
        CHECK_OBJECT( var_j );
        tmp_tuple_element_9 = var_j;
        Py_INCREF( tmp_tuple_element_9 );
        PyTuple_SET_ITEM( tmp_ass_subscript_5, 1, tmp_tuple_element_9 );
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscript_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooNNo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b827fc82e052592605d05943e28c42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0b827fc82e052592605d05943e28c42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0b827fc82e052592605d05943e28c42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0b827fc82e052592605d05943e28c42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0b827fc82e052592605d05943e28c42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0b827fc82e052592605d05943e28c42,
        type_description_1,
        par_A,
        par_B,
        par_d,
        var_ind,
        var_ind_blocks,
        var_A_i,
        var_A_j,
        var_B_i,
        var_B_j,
        var_diag_i,
        var_diag_j,
        var_i,
        var_j,
        var_values,
        NULL,
        NULL,
        var_result
    );


    // Release cached frame.
    if ( frame_d0b827fc82e052592605d05943e28c42 == cache_frame_d0b827fc82e052592605d05943e28c42 )
    {
        Py_DECREF( frame_d0b827fc82e052592605d05943e28c42 );
    }
    cache_frame_d0b827fc82e052592605d05943e28c42 = NULL;

    assertFrameObject( frame_d0b827fc82e052592605d05943e28c42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_A );
    Py_DECREF( par_A );
    par_A = NULL;

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    CHECK_OBJECT( (PyObject *)var_ind_blocks );
    Py_DECREF( var_ind_blocks );
    var_ind_blocks = NULL;

    CHECK_OBJECT( (PyObject *)var_A_i );
    Py_DECREF( var_A_i );
    var_A_i = NULL;

    CHECK_OBJECT( (PyObject *)var_A_j );
    Py_DECREF( var_A_j );
    var_A_j = NULL;

    CHECK_OBJECT( (PyObject *)var_B_i );
    Py_DECREF( var_B_i );
    var_B_i = NULL;

    CHECK_OBJECT( (PyObject *)var_B_j );
    Py_DECREF( var_B_j );
    var_B_j = NULL;

    CHECK_OBJECT( (PyObject *)var_diag_i );
    Py_DECREF( var_diag_i );
    var_diag_i = NULL;

    CHECK_OBJECT( (PyObject *)var_diag_j );
    Py_DECREF( var_diag_j );
    var_diag_j = NULL;

    CHECK_OBJECT( (PyObject *)var_i );
    Py_DECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_j );
    Py_DECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)var_values );
    Py_DECREF( var_values );
    var_values = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_B );
    Py_DECREF( par_B );
    par_B = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_ind_blocks );
    var_ind_blocks = NULL;

    Py_XDECREF( var_A_i );
    var_A_i = NULL;

    Py_XDECREF( var_A_j );
    var_A_j = NULL;

    Py_XDECREF( var_B_i );
    var_B_i = NULL;

    Py_XDECREF( var_B_j );
    var_B_j = NULL;

    Py_XDECREF( var_diag_i );
    var_diag_i = NULL;

    Py_XDECREF( var_diag_j );
    var_diag_j = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt = python_pars[ 1 ];
    PyObject *par_angular_rates = python_pars[ 2 ];
    PyObject *par_rotvecs = python_pars[ 3 ];
    PyObject *var_angular_rate_first = NULL;
    PyObject *var_A = NULL;
    PyObject *var_A_inv = NULL;
    PyObject *var_M = NULL;
    PyObject *var_b0 = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_rotvecs_dot = NULL;
    PyObject *var_delta_beta = NULL;
    PyObject *var_b = NULL;
    PyObject *var_angular_rates_new = NULL;
    PyObject *var_delta = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_24a9e94a0609163a223a64023ea1fbbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_24a9e94a0609163a223a64023ea1fbbf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24a9e94a0609163a223a64023ea1fbbf, codeobj_24a9e94a0609163a223a64023ea1fbbf, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24a9e94a0609163a223a64023ea1fbbf = cache_frame_24a9e94a0609163a223a64023ea1fbbf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24a9e94a0609163a223a64023ea1fbbf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24a9e94a0609163a223a64023ea1fbbf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_angular_rates );
        tmp_subscribed_name_1 = par_angular_rates;
        tmp_subscript_name_1 = const_int_0;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 331;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_angular_rate_first == NULL );
        var_angular_rate_first = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__angular_rate_to_rotvec_dot_matrix );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__angular_rate_to_rotvec_dot_matrix );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_angular_rate_to_rotvec_dot_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 333;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_1 = par_rotvecs;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A == NULL );
        var_A = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__rotvec_dot_to_angular_rate_matrix );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rotvec_dot_to_angular_rate_matrix );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_rotvec_dot_to_angular_rate_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 334;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_rotvecs );
        tmp_args_element_name_2 = par_rotvecs;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A_inv == NULL );
        var_A_inv = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_3;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__create_block_3_diagonal_matrix );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__create_block_3_diagonal_matrix );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_create_block_3_diagonal_matrix" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 335;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT( var_A_inv );
        tmp_subscribed_name_2 = var_A_inv;
        tmp_subscript_name_2 = const_slice_int_pos_1_int_neg_1_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_3 = par_dt;
        tmp_subscript_name_3 = const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 336;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = const_int_pos_2;
        CHECK_OBJECT( var_A );
        tmp_subscribed_name_4 = var_A;
        tmp_subscript_name_4 = const_slice_int_pos_1_int_neg_1_none;
        tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_5 = par_dt;
        tmp_subscript_name_5 = const_tuple_slice_int_pos_1_int_neg_1_none_none_none_tuple;
        tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );

            exception_lineno = 337;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = const_int_pos_4;
        tmp_left_name_7 = const_int_pos_1;
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_6 = par_dt;
        tmp_subscript_name_6 = const_slice_none_int_neg_1_none;
        tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_6 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_7, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = const_int_pos_1;
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_7 = par_dt;
        tmp_subscript_name_7 = const_slice_int_pos_1_none_none;
        tmp_right_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_M == NULL );
        var_M = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_12;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_right_name_14;
        tmp_left_name_9 = const_int_pos_6;
        CHECK_OBJECT( par_rotvecs );
        tmp_subscribed_name_8 = par_rotvecs;
        tmp_subscript_name_8 = const_slice_none_int_neg_1_none;
        tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_9 = par_dt;
        tmp_subscript_name_9 = const_tuple_slice_none_int_neg_1_none_none_tuple;
        tmp_left_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_11 = const_int_neg_2;
        tmp_right_name_10 = POWER_OPERATION( tmp_left_name_12, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_10 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_left_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotvecs );
        tmp_subscribed_name_10 = par_rotvecs;
        tmp_subscript_name_10 = const_slice_int_pos_1_none_none;
        tmp_left_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_11 = par_dt;
        tmp_subscript_name_11 = const_tuple_slice_int_pos_1_none_none_none_tuple;
        tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
        if ( tmp_left_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_14 = const_int_neg_2;
        tmp_right_name_13 = POWER_OPERATION( tmp_left_name_14, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_10 );

            exception_lineno = 341;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_10, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_10 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_b0 == NULL );
        var_b0 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( var_b0 );
        tmp_assign_source_6 = var_b0;
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_6 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_15;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_subscribed_name_13;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_right_name_17;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscribed_name_14;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_12 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_name_12 = const_int_0;
        tmp_left_name_15 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_12, tmp_subscript_name_12, 0 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_17 = const_int_pos_2;
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_13 = par_dt;
        tmp_subscript_name_13 = const_int_0;
        tmp_right_name_16 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_13, tmp_subscript_name_13, 0 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_16 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_17, tmp_right_name_16 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_left_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_A_inv );
        tmp_subscribed_name_14 = var_A_inv;
        tmp_subscript_name_14 = const_int_0;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_14, tmp_subscript_name_14, 0 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_angular_rate_first );
        tmp_args_element_name_6 = var_angular_rate_first;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 342;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_right_name_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dot, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_left_name_16 );

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_16, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_16 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_15 );

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( var_b0 );
        tmp_assign_source_7 = var_b0;
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_7 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_18;
        PyObject *tmp_subscribed_name_15;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_19;
        PyObject *tmp_subscribed_name_16;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_right_name_20;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscribed_name_17;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_subscribed_name_18;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_15 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_name_15 = const_int_neg_1;
        tmp_left_name_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_15, tmp_subscript_name_15, -1 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_20 = const_int_pos_2;
        CHECK_OBJECT( par_dt );
        tmp_subscribed_name_16 = par_dt;
        tmp_subscript_name_16 = const_int_neg_1;
        tmp_right_name_19 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_16, tmp_subscript_name_16, -1 );
        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_19 = BINARY_OPERATION_TRUEDIV_LONG_OBJECT( tmp_left_name_20, tmp_right_name_19 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_left_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_A );
        tmp_subscribed_name_17 = var_A;
        tmp_subscript_name_17 = const_int_neg_1;
        tmp_source_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_17, tmp_subscript_name_17, -1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( par_angular_rates );
        tmp_subscribed_name_18 = par_angular_rates;
        tmp_subscript_name_18 = const_int_neg_1;
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_18, tmp_subscript_name_18, -1 );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_left_name_19 );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_right_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_right_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );
            Py_DECREF( tmp_left_name_19 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_18 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_19, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_19 );
        Py_DECREF( tmp_right_name_20 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_18, tmp_right_name_18 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_2 = const_int_neg_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, -1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MAX_ITER );
        if ( tmp_xrange_low_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
        Py_DECREF( tmp_xrange_low_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 345;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_iteration;
            var_iteration = tmp_assign_source_10;
            Py_INCREF( var_iteration );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_matrix_vector_product_of_stacks" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 346;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_5 = tmp_mvar_value_4;
        CHECK_OBJECT( var_A );
        tmp_args_element_name_8 = var_A;
        CHECK_OBJECT( par_angular_rates );
        tmp_args_element_name_9 = par_angular_rates;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 346;
        {
            PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_rotvecs_dot;
            var_rotvecs_dot = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_subscribed_name_19;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_subscribed_name_20;
        PyObject *tmp_subscript_name_20;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__angular_acceleration_nonlinear_term );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__angular_acceleration_nonlinear_term );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_angular_acceleration_nonlinear_term" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 347;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_6 = tmp_mvar_value_5;
        CHECK_OBJECT( par_rotvecs );
        tmp_subscribed_name_19 = par_rotvecs;
        tmp_subscript_name_19 = const_slice_none_int_neg_1_none;
        tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
        if ( tmp_args_element_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_rotvecs_dot );
        tmp_subscribed_name_20 = var_rotvecs_dot;
        tmp_subscript_name_20 = const_slice_none_int_neg_1_none;
        tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
        if ( tmp_args_element_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_10 );

            exception_lineno = 348;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 347;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_delta_beta;
            var_delta_beta = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_21;
        CHECK_OBJECT( var_b0 );
        tmp_left_name_21 = var_b0;
        CHECK_OBJECT( var_delta_beta );
        tmp_right_name_21 = var_delta_beta;
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_21, tmp_right_name_21 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_called_instance_3;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_solve_banded );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_solve_banded );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "solve_banded" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_7 = tmp_mvar_value_6;
        tmp_args_element_name_12 = const_tuple_int_pos_5_int_pos_5_tuple;
        CHECK_OBJECT( var_M );
        tmp_args_element_name_13 = var_M;
        CHECK_OBJECT( var_b );
        tmp_called_instance_3 = var_b;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 350;
        tmp_args_element_name_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_ravel );
        if ( tmp_args_element_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 350;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_args_element_name_14 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_angular_rates_new;
            var_angular_rates_new = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_angular_rates_new );
        tmp_called_instance_4 = var_angular_rates_new;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 351;
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_reshape, &PyTuple_GET_ITEM( const_tuple_tuple_int_neg_1_int_pos_3_tuple_tuple, 0 ) );

        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_angular_rates_new;
            assert( old != NULL );
            var_angular_rates_new = tmp_assign_source_15;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        PyObject *tmp_subscribed_name_21;
        PyObject *tmp_subscript_name_21;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_3 = tmp_mvar_value_7;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_abs );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_angular_rates_new );
        tmp_left_name_22 = var_angular_rates_new;
        CHECK_OBJECT( par_angular_rates );
        tmp_subscribed_name_21 = par_angular_rates;
        tmp_subscript_name_21 = const_slice_none_int_neg_1_none;
        tmp_right_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
        if ( tmp_right_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_15 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_22, tmp_right_name_22 );
        Py_DECREF( tmp_right_name_22 );
        if ( tmp_args_element_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_8 );

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
        }

        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_15 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_delta;
            var_delta = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_angular_rates_new );
        tmp_ass_subvalue_3 = var_angular_rates_new;
        CHECK_OBJECT( par_angular_rates );
        tmp_ass_subscribed_3 = par_angular_rates;
        tmp_ass_subscript_3 = const_slice_none_int_neg_1_none;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 354;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_23;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_24;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_17;
        int tmp_truth_name_1;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_source_name_4 = tmp_mvar_value_8;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_all );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_delta );
        tmp_compexpr_left_1 = var_delta;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_TOL );
        if ( tmp_left_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_left_name_24 = const_int_pos_1;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_left_name_23 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "np" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_5 = tmp_mvar_value_9;
        CHECK_OBJECT( var_angular_rates_new );
        tmp_args_element_name_17 = var_angular_rates_new;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_right_name_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abs, call_args );
        }

        if ( tmp_right_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_23 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_24, tmp_right_name_24 );
        Py_DECREF( tmp_right_name_24 );
        if ( tmp_right_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_left_name_23 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_compexpr_right_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        Py_DECREF( tmp_left_name_23 );
        Py_DECREF( tmp_right_name_23 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_16 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_args_element_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_9 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_args_element_name_16 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
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
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_matrix_vector_product_of_stacks" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 358;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_10;
        CHECK_OBJECT( var_A );
        tmp_args_element_name_18 = var_A;
        CHECK_OBJECT( par_angular_rates );
        tmp_args_element_name_19 = par_angular_rates;
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rotvecs_dot;
            var_rotvecs_dot = tmp_assign_source_17;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_11;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_22;
        PyObject *tmp_subscript_name_22;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_11;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_vstack );
        if ( tmp_called_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_angular_rate_first );
        tmp_tuple_element_1 = var_angular_rate_first;
        tmp_args_element_name_20 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_20, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_angular_rates );
        tmp_subscribed_name_22 = par_angular_rates;
        tmp_subscript_name_22 = const_slice_none_int_neg_1_none;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_args_element_name_20 );

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_20, 1, tmp_tuple_element_1 );
        frame_24a9e94a0609163a223a64023ea1fbbf->m_frame.f_lineno = 359;
        {
            PyObject *call_args[] = { tmp_args_element_name_20 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_element_name_20 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_angular_rates;
            assert( old != NULL );
            par_angular_rates = tmp_assign_source_18;
            Py_DECREF( old );
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24a9e94a0609163a223a64023ea1fbbf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24a9e94a0609163a223a64023ea1fbbf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24a9e94a0609163a223a64023ea1fbbf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24a9e94a0609163a223a64023ea1fbbf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24a9e94a0609163a223a64023ea1fbbf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24a9e94a0609163a223a64023ea1fbbf,
        type_description_1,
        par_self,
        par_dt,
        par_angular_rates,
        par_rotvecs,
        var_angular_rate_first,
        var_A,
        var_A_inv,
        var_M,
        var_b0,
        var_iteration,
        var_rotvecs_dot,
        var_delta_beta,
        var_b,
        var_angular_rates_new,
        var_delta
    );


    // Release cached frame.
    if ( frame_24a9e94a0609163a223a64023ea1fbbf == cache_frame_24a9e94a0609163a223a64023ea1fbbf )
    {
        Py_DECREF( frame_24a9e94a0609163a223a64023ea1fbbf );
    }
    cache_frame_24a9e94a0609163a223a64023ea1fbbf = NULL;

    assertFrameObject( frame_24a9e94a0609163a223a64023ea1fbbf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_angular_rates );
        tmp_tuple_element_2 = par_angular_rates;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_rotvecs_dot );
        tmp_tuple_element_2 = var_rotvecs_dot;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
        goto try_return_handler_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt );
    Py_DECREF( par_dt );
    par_dt = NULL;

    CHECK_OBJECT( (PyObject *)par_angular_rates );
    Py_DECREF( par_angular_rates );
    par_angular_rates = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)var_angular_rate_first );
    Py_DECREF( var_angular_rate_first );
    var_angular_rate_first = NULL;

    CHECK_OBJECT( (PyObject *)var_A );
    Py_DECREF( var_A );
    var_A = NULL;

    CHECK_OBJECT( (PyObject *)var_A_inv );
    Py_DECREF( var_A_inv );
    var_A_inv = NULL;

    CHECK_OBJECT( (PyObject *)var_M );
    Py_DECREF( var_M );
    var_M = NULL;

    CHECK_OBJECT( (PyObject *)var_b0 );
    Py_DECREF( var_b0 );
    var_b0 = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    CHECK_OBJECT( (PyObject *)var_rotvecs_dot );
    Py_DECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    Py_XDECREF( var_delta_beta );
    var_delta_beta = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_angular_rates_new );
    var_angular_rates_new = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt );
    Py_DECREF( par_dt );
    par_dt = NULL;

    CHECK_OBJECT( (PyObject *)par_angular_rates );
    Py_DECREF( par_angular_rates );
    par_angular_rates = NULL;

    CHECK_OBJECT( (PyObject *)par_rotvecs );
    Py_DECREF( par_rotvecs );
    par_rotvecs = NULL;

    Py_XDECREF( var_angular_rate_first );
    var_angular_rate_first = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_A_inv );
    var_A_inv = NULL;

    Py_XDECREF( var_M );
    var_M = NULL;

    Py_XDECREF( var_b0 );
    var_b0 = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    Py_XDECREF( var_delta_beta );
    var_delta_beta = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_angular_rates_new );
    var_angular_rates_new = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_times = python_pars[ 1 ];
    PyObject *par_rotations = python_pars[ 2 ];
    PyObject *var_PPoly = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_rotvecs = NULL;
    PyObject *var_angular_rates = NULL;
    PyObject *var_rotvecs_dot = NULL;
    PyObject *var_coeff = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6f5879392c488e3d704b478f78407f9b;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6f5879392c488e3d704b478f78407f9b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f5879392c488e3d704b478f78407f9b, codeobj_6f5879392c488e3d704b478f78407f9b, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6f5879392c488e3d704b478f78407f9b = cache_frame_6f5879392c488e3d704b478f78407f9b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f5879392c488e3d704b478f78407f9b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f5879392c488e3d704b478f78407f9b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_c442c97a6581ebe68ef4f0446ad7fe26;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_spline;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_PPoly_tuple;
        tmp_level_name_1 = const_int_0;
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 364;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PPoly );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_PPoly == NULL );
        var_PPoly = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_rotations );
        tmp_len_arg_1 = par_rotations;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_f0a7ed9815b21723bea6e03db633f81c;
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 367;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 367;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 369;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_times );
        tmp_tuple_element_1 = par_times;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 369;
        tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 369;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_times;
            assert( old != NULL );
            par_times = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_times );
        tmp_source_name_2 = par_times;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 370;
            type_description_1 = "ooooooooo";
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
            tmp_make_exception_arg_2 = const_str_digest_51ede53d730446f3866302acb9ef9c9f;
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 371;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 371;
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
        PyObject *tmp_len_arg_2;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT( par_times );
        tmp_len_arg_2 = par_times;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotations );
        tmp_len_arg_3 = par_rotations;
        tmp_compexpr_right_3 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 373;
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_len_arg_5;
            tmp_source_name_3 = const_str_digest_52b9a9e657bc059446f244181343d90b;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( par_rotations );
            tmp_len_arg_4 = par_rotations;
            tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 377;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_times );
            tmp_len_arg_5 = par_times;
            tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_5 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 377;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 374;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_make_exception_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 374;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 374;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_3 };
                tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_3 );
            assert( !(tmp_raise_type_3 == NULL) );
            exception_type = tmp_raise_type_3;
            exception_lineno = 374;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_times );
        tmp_args_element_name_3 = par_times;
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_diff, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dt == NULL );
        var_dt = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        int tmp_truth_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_compexpr_left_4 = var_dt;
        tmp_compexpr_right_4 = const_int_0;
        tmp_args_element_name_4 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 380;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_4;
            PyObject *tmp_make_exception_arg_4;
            tmp_make_exception_arg_4 = const_str_digest_6ab6e06a8a8df7dc5225f4d4c010677a;
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 381;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_4 };
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_4 == NULL) );
            exception_type = tmp_raise_type_4;
            exception_lineno = 381;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_rotations );
        tmp_subscribed_name_1 = par_rotations;
        tmp_subscript_name_1 = const_slice_none_int_neg_1_none;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 384;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_inv );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_rotations );
        tmp_subscribed_name_2 = par_rotations;
        tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
        tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 384;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_as_rotvec );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 384;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rotvecs == NULL );
        var_rotvecs = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_rotvecs );
        tmp_left_name_2 = var_rotvecs;
        CHECK_OBJECT( var_dt );
        tmp_subscribed_name_3 = var_dt;
        tmp_subscript_name_3 = const_tuple_slice_none_none_none_none_tuple;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_angular_rates == NULL );
        var_angular_rates = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT( par_rotations );
        tmp_len_arg_6 = par_rotations;
        tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_6 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( var_angular_rates );
            tmp_assign_source_6 = var_angular_rates;
            assert( var_rotvecs_dot == NULL );
            Py_INCREF( tmp_assign_source_6 );
            var_rotvecs_dot = tmp_assign_source_6;
        }
        goto branch_end_5;
        branch_no_5:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( par_self );
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT( var_dt );
            tmp_args_element_name_5 = var_dt;
            CHECK_OBJECT( var_angular_rates );
            tmp_args_element_name_6 = var_angular_rates;
            CHECK_OBJECT( var_rotvecs );
            tmp_args_element_name_7 = var_rotvecs;
            frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 390;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_4, const_str_plain__solve_for_angular_rates, call_args );
            }

            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


                type_description_1 = "ooooooooo";
                exception_lineno = 390;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


                type_description_1 = "ooooooooo";
                exception_lineno = 390;
                goto try_except_handler_3;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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
                        exception_lineno = 390;
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
                exception_lineno = 390;
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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_angular_rates;
                assert( old != NULL );
                var_angular_rates = tmp_assign_source_10;
                Py_INCREF( var_angular_rates );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
            assert( var_rotvecs_dot == NULL );
            Py_INCREF( tmp_assign_source_11 );
            var_rotvecs_dot = tmp_assign_source_11;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT( var_dt );
        tmp_subscribed_name_4 = var_dt;
        tmp_subscript_name_4 = const_tuple_slice_none_none_none_none_tuple;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dt;
            assert( old != NULL );
            var_dt = tmp_assign_source_12;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_len_arg_7;
        PyObject *tmp_right_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_empty );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = const_int_pos_4;
        tmp_args_element_name_8 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_times );
        tmp_len_arg_7 = par_times;
        tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_7 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );

            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        assert( !(tmp_tuple_element_2 == NULL) );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_int_pos_3;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_8, 2, tmp_tuple_element_2 );
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 394;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 394;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_coeff == NULL );
        var_coeff = tmp_assign_source_13;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        tmp_left_name_7 = const_int_neg_2;
        CHECK_OBJECT( var_rotvecs );
        tmp_right_name_4 = var_rotvecs;
        tmp_left_name_6 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_7, tmp_right_name_4 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_left_name_8 = var_dt;
        CHECK_OBJECT( var_angular_rates );
        tmp_right_name_6 = var_angular_rates;
        tmp_right_name_5 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_left_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_left_name_9 = var_dt;
        CHECK_OBJECT( var_rotvecs_dot );
        tmp_right_name_8 = var_rotvecs_dot;
        tmp_right_name_7 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_left_name_10 = var_dt;
        tmp_right_name_10 = const_int_pos_3;
        tmp_right_name_9 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_4 );

            exception_lineno = 396;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_coeff );
        tmp_ass_subscribed_1 = var_coeff;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        tmp_left_name_14 = const_int_pos_3;
        CHECK_OBJECT( var_rotvecs );
        tmp_right_name_11 = var_rotvecs;
        tmp_left_name_13 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_14, tmp_right_name_11 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_16 = const_int_pos_2;
        CHECK_OBJECT( var_dt );
        tmp_right_name_13 = var_dt;
        tmp_left_name_15 = BINARY_OPERATION_MUL_LONG_OBJECT( tmp_left_name_16, tmp_right_name_13 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_angular_rates );
        tmp_right_name_14 = var_angular_rates;
        tmp_right_name_12 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_14 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_13, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_left_name_17 = var_dt;
        CHECK_OBJECT( var_rotvecs_dot );
        tmp_right_name_16 = var_rotvecs_dot;
        tmp_right_name_15 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_17, tmp_right_name_16 );
        if ( tmp_right_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_12 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_12 );
        Py_DECREF( tmp_right_name_15 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_dt );
        tmp_left_name_18 = var_dt;
        tmp_right_name_18 = const_int_pos_2;
        tmp_right_name_17 = POWER_OPERATION( tmp_left_name_18, tmp_right_name_18 );
        if ( tmp_right_name_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 398;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT( tmp_left_name_11, tmp_right_name_17 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_17 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_coeff );
        tmp_ass_subscribed_2 = var_coeff;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( var_angular_rates );
        tmp_ass_subvalue_3 = var_angular_rates;
        CHECK_OBJECT( var_coeff );
        tmp_ass_subscribed_3 = var_coeff;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 399;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        int tmp_ass_subscript_res_4;
        tmp_ass_subvalue_4 = const_int_0;
        CHECK_OBJECT( var_coeff );
        tmp_ass_subscribed_4 = var_coeff;
        tmp_ass_subscript_4 = const_int_pos_3;
        tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_4, tmp_ass_subscript_4, 3, tmp_ass_subvalue_4 );
        if ( tmp_ass_subscript_res_4 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_times );
        tmp_assattr_name_1 = par_times;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_times, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_rotations );
        tmp_assattr_name_2 = par_rotations;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_rotations, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 403;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_PPoly );
        tmp_called_name_5 = var_PPoly;
        CHECK_OBJECT( var_coeff );
        tmp_args_element_name_9 = var_coeff;
        CHECK_OBJECT( par_times );
        tmp_args_element_name_10 = par_times;
        frame_6f5879392c488e3d704b478f78407f9b->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_interpolator, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f5879392c488e3d704b478f78407f9b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f5879392c488e3d704b478f78407f9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f5879392c488e3d704b478f78407f9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f5879392c488e3d704b478f78407f9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f5879392c488e3d704b478f78407f9b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f5879392c488e3d704b478f78407f9b,
        type_description_1,
        par_self,
        par_times,
        par_rotations,
        var_PPoly,
        var_dt,
        var_rotvecs,
        var_angular_rates,
        var_rotvecs_dot,
        var_coeff
    );


    // Release cached frame.
    if ( frame_6f5879392c488e3d704b478f78407f9b == cache_frame_6f5879392c488e3d704b478f78407f9b )
    {
        Py_DECREF( frame_6f5879392c488e3d704b478f78407f9b );
    }
    cache_frame_6f5879392c488e3d704b478f78407f9b = NULL;

    assertFrameObject( frame_6f5879392c488e3d704b478f78407f9b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_times );
    Py_DECREF( par_times );
    par_times = NULL;

    CHECK_OBJECT( (PyObject *)par_rotations );
    Py_DECREF( par_rotations );
    par_rotations = NULL;

    CHECK_OBJECT( (PyObject *)var_PPoly );
    Py_DECREF( var_PPoly );
    var_PPoly = NULL;

    CHECK_OBJECT( (PyObject *)var_dt );
    Py_DECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)var_rotvecs );
    Py_DECREF( var_rotvecs );
    var_rotvecs = NULL;

    CHECK_OBJECT( (PyObject *)var_angular_rates );
    Py_DECREF( var_angular_rates );
    var_angular_rates = NULL;

    CHECK_OBJECT( (PyObject *)var_rotvecs_dot );
    Py_DECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    CHECK_OBJECT( (PyObject *)var_coeff );
    Py_DECREF( var_coeff );
    var_coeff = NULL;

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

    CHECK_OBJECT( (PyObject *)par_times );
    Py_DECREF( par_times );
    par_times = NULL;

    CHECK_OBJECT( (PyObject *)par_rotations );
    Py_DECREF( par_rotations );
    par_rotations = NULL;

    Py_XDECREF( var_PPoly );
    var_PPoly = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_rotvecs );
    var_rotvecs = NULL;

    Py_XDECREF( var_angular_rates );
    var_angular_rates = NULL;

    Py_XDECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    Py_XDECREF( var_coeff );
    var_coeff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_10___init__ );
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


static PyObject *impl_scipy$spatial$transform$_rotation_spline$$$function_11___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_times = python_pars[ 1 ];
    PyObject *par_order = python_pars[ 2 ];
    PyObject *var_singe_time = NULL;
    PyObject *var_rotvecs = NULL;
    PyObject *var_index = NULL;
    PyObject *var_n_segments = NULL;
    PyObject *var_result = NULL;
    PyObject *var_rotvecs_dot = NULL;
    PyObject *var_rotvecs_dot_dot = NULL;
    struct Nuitka_FrameObject *frame_1b8852c8e5b68fcdd5f8f02c0023ad1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b8852c8e5b68fcdd5f8f02c0023ad1a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b8852c8e5b68fcdd5f8f02c0023ad1a, codeobj_1b8852c8e5b68fcdd5f8f02c0023ad1a, module_scipy$spatial$transform$_rotation_spline, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b8852c8e5b68fcdd5f8f02c0023ad1a = cache_frame_1b8852c8e5b68fcdd5f8f02c0023ad1a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_order );
        tmp_compexpr_left_1 = par_order;
        tmp_compexpr_right_1 = LIST_COPY( const_list_int_0_int_pos_1_int_pos_2_list );
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 424;
            type_description_1 = "oooooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_1f59b4f4aad6697354e7dd67ad81f7b9;
            frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 425;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 425;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 427;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_times );
        tmp_tuple_element_1 = par_times;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_ffbaa6f5bc4df14208f68e4ce2ea2202 );
        frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 427;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 427;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_times;
            assert( old != NULL );
            par_times = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_times );
        tmp_source_name_2 = par_times;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooooooooo";
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
            tmp_make_exception_arg_2 = const_str_digest_9cc3e4b407d7ef8c8995b0779f693bec;
            frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 429;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 429;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_times );
        tmp_source_name_3 = par_times;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_int_0;
        tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_singe_time == NULL );
        var_singe_time = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

            exception_lineno = 432;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_times );
        tmp_args_element_name_1 = par_times;
        frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_atleast_1d, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 432;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_times;
            assert( old != NULL );
            par_times = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( par_times );
        tmp_args_element_name_2 = par_times;
        frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_interpolator, call_args );
        }

        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 434;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_rotvecs == NULL );
        var_rotvecs = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_order );
        tmp_compexpr_left_4 = par_order;
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_kw_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np );

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

                exception_lineno = 436;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_searchsorted );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_times );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 436;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_times );
            tmp_tuple_element_2 = par_times;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_607b85ec57ab5596c680ca014e9c8645 );
            frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 436;
            tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 436;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_index == NULL );
            var_index = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_index );
            tmp_left_name_1 = var_index;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 437;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = tmp_left_name_1;
            var_index = tmp_assign_source_6;

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_ass_subvalue_1 = const_int_0;
            CHECK_OBJECT( var_index );
            tmp_ass_subscribed_1 = var_index;
            CHECK_OBJECT( var_index );
            tmp_compexpr_left_5 = var_index;
            tmp_compexpr_right_5 = const_int_0;
            tmp_ass_subscript_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 438;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_times );
            if ( tmp_len_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
            Py_DECREF( tmp_len_arg_1 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_7 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            assert( !(tmp_assign_source_7 == NULL) );
            assert( var_n_segments == NULL );
            var_n_segments = tmp_assign_source_7;
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_n_segments );
            tmp_left_name_3 = var_n_segments;
            tmp_right_name_3 = const_int_pos_1;
            tmp_ass_subvalue_2 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_3, tmp_right_name_3 );
            assert( !(tmp_ass_subvalue_2 == NULL) );
            CHECK_OBJECT( var_index );
            tmp_ass_subscribed_2 = var_index;
            CHECK_OBJECT( var_index );
            tmp_compexpr_left_6 = var_index;
            CHECK_OBJECT( var_n_segments );
            tmp_left_name_4 = var_n_segments;
            tmp_right_name_4 = const_int_pos_1;
            tmp_compexpr_right_6 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_4, tmp_right_name_4 );
            assert( !(tmp_compexpr_right_6 == NULL) );
            tmp_ass_subscript_2 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 440;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 440;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_7;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_rotations );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_index );
            tmp_subscript_name_1 = var_index;
            tmp_left_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_Rotation );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Rotation );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_left_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Rotation" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT( var_rotvecs );
            tmp_args_element_name_3 = var_rotvecs;
            frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 441;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_right_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_from_rotvec, call_args );
            }

            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 441;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_8;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( par_order );
            tmp_compexpr_left_7 = par_order;
            tmp_compexpr_right_7 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 442;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( par_self );
                tmp_called_instance_4 = par_self;
                CHECK_OBJECT( par_times );
                tmp_args_element_name_4 = par_times;
                tmp_args_element_name_5 = const_int_pos_1;
                frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 443;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_interpolator, call_args );
                }

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 443;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_rotvecs_dot == NULL );
                var_rotvecs_dot = tmp_assign_source_9;
            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__compute_angular_rate );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_angular_rate );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_angular_rate" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 444;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( var_rotvecs );
                tmp_args_element_name_6 = var_rotvecs;
                CHECK_OBJECT( var_rotvecs_dot );
                tmp_args_element_name_7 = var_rotvecs_dot;
                frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 444;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 444;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_result == NULL );
                var_result = tmp_assign_source_10;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                CHECK_OBJECT( par_order );
                tmp_compexpr_left_8 = par_order;
                tmp_compexpr_right_8 = const_int_pos_2;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 445;
                    type_description_1 = "oooooooooo";
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
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_instance_5;
                    PyObject *tmp_args_element_name_8;
                    PyObject *tmp_args_element_name_9;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_5 = par_self;
                    CHECK_OBJECT( par_times );
                    tmp_args_element_name_8 = par_times;
                    tmp_args_element_name_9 = const_int_pos_1;
                    frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 446;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_interpolator, call_args );
                    }

                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 446;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_rotvecs_dot == NULL );
                    var_rotvecs_dot = tmp_assign_source_11;
                }
                {
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_args_element_name_11;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_6 = par_self;
                    CHECK_OBJECT( par_times );
                    tmp_args_element_name_10 = par_times;
                    tmp_args_element_name_11 = const_int_pos_2;
                    frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 447;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_interpolator, call_args );
                    }

                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 447;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_rotvecs_dot_dot == NULL );
                    var_rotvecs_dot_dot = tmp_assign_source_12;
                }
                {
                    PyObject *tmp_assign_source_13;
                    PyObject *tmp_called_name_4;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_12;
                    PyObject *tmp_args_element_name_13;
                    PyObject *tmp_args_element_name_14;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__compute_angular_acceleration );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_angular_acceleration );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_compute_angular_acceleration" );
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        CHAIN_EXCEPTION( exception_value );

                        exception_lineno = 448;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_4 = tmp_mvar_value_6;
                    CHECK_OBJECT( var_rotvecs );
                    tmp_args_element_name_12 = var_rotvecs;
                    CHECK_OBJECT( var_rotvecs_dot );
                    tmp_args_element_name_13 = var_rotvecs_dot;
                    CHECK_OBJECT( var_rotvecs_dot_dot );
                    tmp_args_element_name_14 = var_rotvecs_dot_dot;
                    frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame.f_lineno = 448;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
                        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
                    }

                    if ( tmp_assign_source_13 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 448;
                        type_description_1 = "oooooooooo";
                        goto frame_exception_exit_1;
                    }
                    assert( var_result == NULL );
                    var_result = tmp_assign_source_13;
                }
                goto branch_end_5;
                branch_no_5:;
                {
                    PyObject *tmp_raise_type_3;
                    tmp_raise_type_3 = PyExc_AssertionError;
                    exception_type = tmp_raise_type_3;
                    Py_INCREF( tmp_raise_type_3 );
                    exception_lineno = 451;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_end_5:;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_singe_time );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_singe_time );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            if ( var_result == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 454;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_2 = var_result;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_14 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_result;
                var_result = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        branch_no_6:;
    }
    if ( var_result == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b8852c8e5b68fcdd5f8f02c0023ad1a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b8852c8e5b68fcdd5f8f02c0023ad1a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b8852c8e5b68fcdd5f8f02c0023ad1a,
        type_description_1,
        par_self,
        par_times,
        par_order,
        var_singe_time,
        var_rotvecs,
        var_index,
        var_n_segments,
        var_result,
        var_rotvecs_dot,
        var_rotvecs_dot_dot
    );


    // Release cached frame.
    if ( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a == cache_frame_1b8852c8e5b68fcdd5f8f02c0023ad1a )
    {
        Py_DECREF( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );
    }
    cache_frame_1b8852c8e5b68fcdd5f8f02c0023ad1a = NULL;

    assertFrameObject( frame_1b8852c8e5b68fcdd5f8f02c0023ad1a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_11___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_times );
    Py_DECREF( par_times );
    par_times = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)var_singe_time );
    Py_DECREF( var_singe_time );
    var_singe_time = NULL;

    CHECK_OBJECT( (PyObject *)var_rotvecs );
    Py_DECREF( var_rotvecs );
    var_rotvecs = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_n_segments );
    var_n_segments = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    Py_XDECREF( var_rotvecs_dot_dot );
    var_rotvecs_dot_dot = NULL;

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

    CHECK_OBJECT( (PyObject *)par_times );
    Py_DECREF( par_times );
    par_times = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    Py_XDECREF( var_singe_time );
    var_singe_time = NULL;

    Py_XDECREF( var_rotvecs );
    var_rotvecs = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_n_segments );
    var_n_segments = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_rotvecs_dot );
    var_rotvecs_dot = NULL;

    Py_XDECREF( var_rotvecs_dot_dot );
    var_rotvecs_dot_dot = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline$$$function_11___call__ );
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



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_1968ce1d8e137ebd8fde16c7b247746a,
#endif
        codeobj_6f5879392c488e3d704b478f78407f9b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_11___call__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_11___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_adce91ef5ea51ad8487231d11dfd08df,
#endif
        codeobj_1b8852c8e5b68fcdd5f8f02c0023ad1a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_eb5d252b6e80642fe4b094c359fcd14d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix,
        const_str_plain__create_skew_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_795bf54d5572343e88ca3fb49ab80f87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_c5f3a4a59b9a8289587e659ac3c952ea,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks,
        const_str_plain__matrix_vector_product_of_stacks,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9ef74e47bfc88d3a4562bdf7675ce92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_98730388cdc302378a66c796f84b9f4b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix,
        const_str_plain__angular_rate_to_rotvec_dot_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_40352b74d27c722408f1f35435a69d8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_cee0fa3901db1b22c651b038e69be635,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix,
        const_str_plain__rotvec_dot_to_angular_rate_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2bca2f1a1e3ab4128ab11ea4a9a5e558,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_8d509c7d983de81bf7b41f82f30753bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term,
        const_str_plain__angular_acceleration_nonlinear_term,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f8c121399af51017178222256307c89c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_acf12ffe36d240e16f5e741c8d687d94,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate,
        const_str_plain__compute_angular_rate,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e2cbb498e2621a0dbfb435734906d7c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_219b06272e3f0ee4164fbd3258259c37,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration,
        const_str_plain__compute_angular_acceleration,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_51ca0475fed677aac9343068d07f074f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_646be1ceb9fc2aaeaff4471a079da276,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix,
        const_str_plain__create_block_3_diagonal_matrix,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d0b827fc82e052592605d05943e28c42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        const_str_digest_4d09450bf9b9ad5fd6d5078d04deb611,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates,
        const_str_plain__solve_for_angular_rates,
#if PYTHON_VERSION >= 300
        const_str_digest_9aeb22bef1c0fd0deac466850acb062d,
#endif
        codeobj_24a9e94a0609163a223a64023ea1fbbf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_scipy$spatial$transform$_rotation_spline,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$spatial$transform$_rotation_spline =
{
    PyModuleDef_HEAD_INIT,
    "scipy.spatial.transform._rotation_spline",
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

MOD_INIT_DECL( scipy$spatial$transform$_rotation_spline )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$spatial$transform$_rotation_spline );
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
    puts("scipy.spatial.transform._rotation_spline: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.spatial.transform._rotation_spline: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("scipy.spatial.transform._rotation_spline: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initscipy$spatial$transform$_rotation_spline" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$spatial$transform$_rotation_spline = Py_InitModule4(
        "scipy.spatial.transform._rotation_spline",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_scipy$spatial$transform$_rotation_spline = PyModule_Create( &mdef_scipy$spatial$transform$_rotation_spline );
#endif

    moduledict_scipy$spatial$transform$_rotation_spline = MODULE_DICT( module_scipy$spatial$transform$_rotation_spline );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_scipy$spatial$transform$_rotation_spline,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_scipy$spatial$transform$_rotation_spline,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$spatial$transform$_rotation_spline,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_scipy$spatial$transform$_rotation_spline,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_scipy$spatial$transform$_rotation_spline );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_8a34660b8b29e9f0ea5550f17bc7e382, module_scipy$spatial$transform$_rotation_spline );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_04f5c4a319254cb0433898931d25572c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_scipy$spatial$transform$_rotation_spline_251 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0bae8349596c39f761886700b8ca9729_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0bae8349596c39f761886700b8ca9729_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_04f5c4a319254cb0433898931d25572c = MAKE_MODULE_FRAME( codeobj_04f5c4a319254cb0433898931d25572c, module_scipy$spatial$transform$_rotation_spline );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_04f5c4a319254cb0433898931d25572c );
    assert( Py_REFCNT( frame_04f5c4a319254cb0433898931d25572c ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_spline;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_04f5c4a319254cb0433898931d25572c->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_98f0862546911eb9d3076c5e6fd6b825;
        tmp_globals_name_2 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_spline;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_solve_banded_tuple;
        tmp_level_name_2 = const_int_0;
        frame_04f5c4a319254cb0433898931d25572c->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_solve_banded );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_solve_banded, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_rotation;
        tmp_globals_name_3 = (PyObject *)moduledict_scipy$spatial$transform$_rotation_spline;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Rotation_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_04f5c4a319254cb0433898931d25572c->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$spatial$transform$_rotation_spline,
                const_str_plain_Rotation,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Rotation );
        }

        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_Rotation, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_1__create_skew_matrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__create_skew_matrix, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_2__matrix_vector_product_of_stacks(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__matrix_vector_product_of_stacks, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_3__angular_rate_to_rotvec_dot_matrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__angular_rate_to_rotvec_dot_matrix, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_4__rotvec_dot_to_angular_rate_matrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__rotvec_dot_to_angular_rate_matrix, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_5__angular_acceleration_nonlinear_term(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__angular_acceleration_nonlinear_term, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_6__compute_angular_rate(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__compute_angular_rate, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_7__compute_angular_acceleration(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__compute_angular_acceleration, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_8__create_block_3_diagonal_matrix(  );



        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain__create_block_3_diagonal_matrix, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
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


            exception_lineno = 251;

            goto try_except_handler_1;
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


            exception_lineno = 251;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
        assert( tmp_metaclass_name_1 != NULL );
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_1:;
        tmp_bases_name_1 = const_tuple_type_object_tuple;
        tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
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


            exception_lineno = 251;

            goto try_except_handler_1;
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


            exception_lineno = 251;

            goto try_except_handler_1;
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
            PyObject *tmp_assign_source_17;
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


                exception_lineno = 251;

                goto try_except_handler_1;
            }
            tmp_args_name_1 = const_tuple_str_plain_RotationSpline_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_04f5c4a319254cb0433898931d25572c->m_frame.f_lineno = 251;
            tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;

                goto try_except_handler_1;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_17;
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


                exception_lineno = 251;

                goto try_except_handler_1;
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


                    exception_lineno = 251;

                    goto try_except_handler_1;
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

                    exception_lineno = 251;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 251;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 251;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$spatial$transform$_rotation_spline_251 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_8a34660b8b29e9f0ea5550f17bc7e382;
        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_digest_f7cad3e9a6a440d06ec6189bb52f8376;
        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_RotationSpline;
        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_0bae8349596c39f761886700b8ca9729_2, codeobj_0bae8349596c39f761886700b8ca9729, module_scipy$spatial$transform$_rotation_spline, sizeof(void *) );
        frame_0bae8349596c39f761886700b8ca9729_2 = cache_frame_0bae8349596c39f761886700b8ca9729_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0bae8349596c39f761886700b8ca9729_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0bae8349596c39f761886700b8ca9729_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_10;
        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain_MAX_ITER, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_float_1eminus_09;
        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain_TOL, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_9__solve_for_angular_rates(  );



        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain__solve_for_angular_rates, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_10___init__(  );



        tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_int_0_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_scipy$spatial$transform$_rotation_spline$$$function_11___call__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_scipy$spatial$transform$_rotation_spline_251, const_str_plain___call__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 406;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0bae8349596c39f761886700b8ca9729_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0bae8349596c39f761886700b8ca9729_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0bae8349596c39f761886700b8ca9729_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0bae8349596c39f761886700b8ca9729_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0bae8349596c39f761886700b8ca9729_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0bae8349596c39f761886700b8ca9729_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_0bae8349596c39f761886700b8ca9729_2 == cache_frame_0bae8349596c39f761886700b8ca9729_2 )
        {
            Py_DECREF( frame_0bae8349596c39f761886700b8ca9729_2 );
        }
        cache_frame_0bae8349596c39f761886700b8ca9729_2 = NULL;

        assertFrameObject( frame_0bae8349596c39f761886700b8ca9729_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_RotationSpline;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_scipy$spatial$transform$_rotation_spline_251;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_04f5c4a319254cb0433898931d25572c->m_frame.f_lineno = 251;
            tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;

                goto try_except_handler_3;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_19 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_scipy$spatial$transform$_rotation_spline_251 );
        locals_scipy$spatial$transform$_rotation_spline_251 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF( locals_scipy$spatial$transform$_rotation_spline_251 );
        locals_scipy$spatial$transform$_rotation_spline_251 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( scipy$spatial$transform$_rotation_spline );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 251;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain_RotationSpline, tmp_assign_source_19 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04f5c4a319254cb0433898931d25572c );
#endif
    popFrameStack();

    assertFrameObject( frame_04f5c4a319254cb0433898931d25572c );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_04f5c4a319254cb0433898931d25572c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_04f5c4a319254cb0433898931d25572c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_04f5c4a319254cb0433898931d25572c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_04f5c4a319254cb0433898931d25572c, exception_lineno );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_scipy$spatial$transform$_rotation_spline, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_scipy$spatial$transform$_rotation_spline );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
